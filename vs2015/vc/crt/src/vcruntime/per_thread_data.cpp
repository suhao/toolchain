//
// per_thread_data.cpp
//
//      Copyright (c) Microsoft Corporation. All rights reserved.
//
// Per-Thread Data (PTD) used by the VCRuntime.
//
#include <vcruntime_internal.h>
#include <stdint.h>



namespace
{
    // Resets the operating system last error (GetLastError) to its original
    // value on scope exit.
    class scoped_get_last_error_reset
    {
    public:

        scoped_get_last_error_reset() throw()
            : _old_last_error(GetLastError())
        {
        }

        ~scoped_get_last_error_reset() throw()
        {
            SetLastError(_old_last_error);
        }

        scoped_get_last_error_reset(scoped_get_last_error_reset const&) = delete;
        scoped_get_last_error_reset& operator=(scoped_get_last_error_reset const&) = delete;

    private:

        DWORD _old_last_error;
    };
}



static unsigned long __vcrt_flsindex = FLS_OUT_OF_INDEXES;

// In order to avoid dynamic allocation during CRT startup, the PTD for the
// startup thread is statically allocated:
static __vcrt_ptd __vcrt_startup_thread_ptd;



static bool __cdecl store_and_initialize_ptd(__vcrt_ptd* const ptd)
{
    if (!__vcrt_FlsSetValue(__vcrt_flsindex, ptd))
        return false;

    // Zero-initialization of the PTD is sufficient.
    return true;
}



extern "C" bool __cdecl __vcrt_initialize_ptd()
{
    __vcrt_flsindex = __vcrt_FlsAlloc(&__vcrt_freefls);
    if (__vcrt_flsindex == FLS_OUT_OF_INDEXES)
    {
        return false;
    }

    if (!store_and_initialize_ptd(&__vcrt_startup_thread_ptd))
    {
        __vcrt_uninitialize_ptd();
        return false;
    }

    return true;
}

extern "C" bool __cdecl __vcrt_uninitialize_ptd()
{
    if (__vcrt_flsindex != FLS_OUT_OF_INDEXES)
    {
        __vcrt_FlsFree(__vcrt_flsindex);
        __vcrt_flsindex = FLS_OUT_OF_INDEXES;
    }

    return true;
}

extern "C" __vcrt_ptd* __cdecl __vcrt_getptd_noexit()
{
    // The EH runtime relies on the PTD.  If we attempt to allocate a PTD and
    // that allocation attempt fails by raising a structured exception, the EH
    // runtime may intercept that structured exception and re-attempt to allocate
    // a PTD.  This may result in infinite recursion that causes a stack overflow.
    //
    // To handle this case more gracefully, we set the PTD pointer to this
    // sentinel value for the duration of the allocation attempt.  This allows us
    // to detect this unwanted reentrancy.
    void* const reentrancy_sentinel = reinterpret_cast<void*>(UINTPTR_MAX);

    // If we haven't allocated per-thread data for this module, return failure:
    if (__vcrt_flsindex == FLS_OUT_OF_INDEXES)
    {
        return nullptr;
    }

    scoped_get_last_error_reset const last_error_reset;

    // First see if we've already created per-thread data for this thread:
    __vcrt_ptd* const existing_ptd = static_cast<__vcrt_ptd*>(__vcrt_FlsGetValue(__vcrt_flsindex));
    if (existing_ptd == reentrancy_sentinel)
    {
        return nullptr;
    }
    else if (existing_ptd != nullptr)
    {
        return existing_ptd;
    }

    if (!__vcrt_FlsSetValue(__vcrt_flsindex, reentrancy_sentinel))
    {
        return nullptr;
    }

    // No per-thread data for this thread yet.  Try to create one:
    __crt_unique_heap_ptr<__vcrt_ptd> new_ptd(_calloc_crt_t(__vcrt_ptd, 1));
    if (!new_ptd)
    {
        __vcrt_FlsSetValue(__vcrt_flsindex, nullptr);
        return nullptr;
    }

    if (!store_and_initialize_ptd(new_ptd.get()))
    {
        __vcrt_FlsSetValue(__vcrt_flsindex, nullptr);
        return nullptr;
    }

    return new_ptd.detach();
}

extern "C" __vcrt_ptd* __cdecl __vcrt_getptd()
{
    __vcrt_ptd* const ptd = __vcrt_getptd_noexit();
    if (ptd == nullptr)
    {
        abort();
    }

    return ptd;
}

extern "C" void __cdecl __vcrt_freeptd(_Inout_opt_ __vcrt_ptd* const ptd)
{
    // Do nothing unless per-thread data has been allocated for this module:
    if (__vcrt_flsindex == FLS_OUT_OF_INDEXES)
        return;

    // If the argument is null, get the pointer for this thread.  Note that we
    // must not call __vcrt_getptd, because it will allocate a new per-thread
    // data if one does not already exist.
    __vcrt_ptd* const block_to_free = ptd == nullptr
        ? static_cast<__vcrt_ptd*>(__vcrt_FlsGetValue(__vcrt_flsindex))
        : ptd;

    __vcrt_FlsSetValue(__vcrt_flsindex, nullptr);
    __vcrt_freefls(block_to_free);
}

// This function is called by the operating system when a thread is being
// destroyed, to allow us the opportunity to clean up.
extern "C" void WINAPI __vcrt_freefls(_Inout_opt_ void* const pfd)
{
    if (pfd == nullptr || pfd == &__vcrt_startup_thread_ptd)
        return;

    _free_crt(pfd);
}
