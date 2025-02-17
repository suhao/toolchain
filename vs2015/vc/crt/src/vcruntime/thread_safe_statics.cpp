//
// thread_safe_statics.cpp
//
//      Copyright (c) Microsoft Corporation. All rights reserved.
//
// Helper functions used by thread-safe static initialization.
//
#ifdef _M_CEE
    #error This file cannot be built as managed
#endif

#include <vcstartup_internal.h>
#include <vcruntime_internal.h>
#include <awint.h>
#include <limits.h>

int const Uninitialized    = 0;
int const BeingInitialized = -1;
int const EpochStart       = INT_MIN;

// Access to these variables is guarded in the below functions.  They may only
// be modified while the lock is held.  _Tss_epoch is readable from user
// code and is read without taking the lock.
extern "C"
{
    int _Init_global_epoch = EpochStart;
    __declspec(thread) int _Init_thread_epoch = EpochStart;
}

static CRITICAL_SECTION   _Tss_mutex;
static CONDITION_VARIABLE _Tss_cv;
static HANDLE             _Tss_event;

static decltype(SleepConditionVariableCS)* encoded_sleep_condition_variable_cs;
static decltype(WakeAllConditionVariable)* encoded_wake_all_condition_variable;



// Terminator for synchronization data structures.
static void __cdecl __scrt_uninitialize_thread_safe_statics() throw()
{
    DeleteCriticalSection(&_Tss_mutex);
    if (_Tss_event != nullptr)
    {
        CloseHandle(_Tss_event);
    }
}



// Initializer for synchronization data structures.
// On Vista or newer, the native CONDITION_VARIABLE type is used.  On XP, we use a simple
// Windows event.  This is not safe to use as a complete condition variable, but for the purposes
// of this feature the event is sufficient but not optimal.  See the code in _Tss_wait
// below.
#if defined _ONECORE || defined _KERNELX || defined _M_ARM || defined _M_ARM64
    static int __cdecl __scrt_initialize_thread_safe_statics() throw()
    {
        InitializeCriticalSectionEx(&_Tss_mutex, 4000, 0);

        _Tss_event = nullptr;
        InitializeConditionVariable(&_Tss_cv);

        encoded_sleep_condition_variable_cs = __crt_fast_encode_pointer(&SleepConditionVariableCS);
        encoded_wake_all_condition_variable = __crt_fast_encode_pointer(&WakeAllConditionVariable);

        atexit(__scrt_uninitialize_thread_safe_statics);

        return 0;
    }
#else // ^^^ Modern Platforms ^^^ // vvv Ancient Platforms vvv //
    static int __cdecl __scrt_initialize_thread_safe_statics() throw()
    {
        __vcrt_InitializeCriticalSectionEx(&_Tss_mutex, 4000, 0);
        
        HMODULE const kernel32 = GetModuleHandleW(L"kernel32.dll");
        if (kernel32 == nullptr)
        {
            __scrt_fastfail(FAST_FAIL_FATAL_APP_EXIT);
        }

        #define GET_PROC_ADDRESS(m, f) reinterpret_cast<decltype(f)*>(GetProcAddress(m, _CRT_STRINGIZE(f)))

        auto const initialize_condition_variable = GET_PROC_ADDRESS(kernel32, InitializeConditionVariable);
        auto const sleep_condition_variable_cs   = GET_PROC_ADDRESS(kernel32, SleepConditionVariableCS);
        auto const wake_all_condition_variable   = GET_PROC_ADDRESS(kernel32, WakeAllConditionVariable);

        #undef GET_PROC_ADDRESS

        if (initialize_condition_variable && sleep_condition_variable_cs && wake_all_condition_variable)
        {
            _Tss_event = nullptr;
            initialize_condition_variable(&_Tss_cv);

            encoded_sleep_condition_variable_cs = __crt_fast_encode_pointer(sleep_condition_variable_cs);
            encoded_wake_all_condition_variable = __crt_fast_encode_pointer(wake_all_condition_variable);
        }
        else
        {
            _Tss_event = CreateEventW(NULL, TRUE, FALSE, NULL);
            if (_Tss_event == nullptr)
            {
                __scrt_fastfail(FAST_FAIL_FATAL_APP_EXIT);
            }
        }

        atexit(__scrt_uninitialize_thread_safe_statics);

        return 0;
    }
#endif // Ancient Platforms

_CRTALLOC(".CRT$XIC") static _PIFV __scrt_initialize_tss_var = __scrt_initialize_thread_safe_statics;

// Helper functions for accessing the mutex and condition variable.  Can be replaced with
// more suitable data structures provided by the CRT, preferably ones that use the most
// efficient synchronization primitives available on the platform.
extern "C" void __cdecl _Init_thread_lock()
{
    EnterCriticalSection(&_Tss_mutex);
}

extern "C" void __cdecl _Init_thread_unlock()
{
    LeaveCriticalSection(&_Tss_mutex);
}

// Wait on the condition variable.  In the XP implementation using only a Windows event
// we can't guarantee that we'll ever actually receive the notification signal, so we
// must use a non-infinite timeout.  This is not optimal: we may wake up early if the 
// initializer is long-running, or we may miss the signal and not wake up until the
// timeout expires.  The signal may be missed because the sleeping threads may be
// stolen by the kernel to service an APC, or due to the race condition between the
// unlock call and the WaitForSingleObject call.
extern "C" bool __cdecl _Init_thread_wait(DWORD const timeout)
{
    if (_Tss_event == nullptr)
    {
        return __crt_fast_decode_pointer(encoded_sleep_condition_variable_cs)(&_Tss_cv, &_Tss_mutex, timeout) != FALSE;
    }
    else
    {
        _ASSERT(timeout != INFINITE);
        _Init_thread_unlock();
        HRESULT res = WaitForSingleObjectEx(_Tss_event, timeout, FALSE);
        _Init_thread_lock();
        return (res == WAIT_OBJECT_0);
    }
}

extern "C" void __cdecl _Init_thread_notify()
{
    if (_Tss_event == nullptr)
    {
        __crt_fast_decode_pointer(encoded_wake_all_condition_variable)(&_Tss_cv);
    }
    else
    {
        SetEvent(_Tss_event);
        ResetEvent(_Tss_event);
    }
}

DWORD const XpTimeout = 100; // ms



// Control access to the initialization expression.  Only one thread may leave
// this function before the variable has completed initialization, this thread
// will perform initialization.  All other threads are blocked until the
// initialization completes or fails due to an exception.
extern "C" void __cdecl _Init_thread_header(int* const pOnce)
{
    _Init_thread_lock();

    if (*pOnce == Uninitialized)
    {
        *pOnce = BeingInitialized;
    }
    else
    {
        while (*pOnce == BeingInitialized)
        {
            // Timeout can be replaced with an infinite wait when XP support is
            // removed or the XP-based condition variable is sophisticated enough
            // to guarantee all waiting threads will be woken when the variable is
            // signalled.
            _Init_thread_wait(XpTimeout);

            if (*pOnce == Uninitialized)
            {
                *pOnce = BeingInitialized;
                _Init_thread_unlock();
                return;
            } 
        }
        _Init_thread_epoch = _Init_global_epoch;
    }

    _Init_thread_unlock();
}

// Abort processing of the initializer due to an exception.  Reset the state
// to uninitialized and release waiting threads (one of which will take over
// initialization, any remaining will again sleep).
extern "C" void __cdecl _Init_thread_abort(int* const pOnce)
{
    _Init_thread_lock();
    *pOnce = Uninitialized;
    _Init_thread_unlock();
    _Init_thread_notify();
}

// Called by the thread that completes initialization of a variable.
// Increment the global and per thread counters, mark the variable as
// initialized, and release waiting threads.
extern "C" void __cdecl _Init_thread_footer(int* const pOnce)
{
    _Init_thread_lock();
    ++_Init_global_epoch;
    *pOnce = _Init_global_epoch;
    _Init_thread_epoch = _Init_global_epoch;
    _Init_thread_unlock();
    _Init_thread_notify();
}
