//
// vcruntime_internal.h
//
//      Copyright (c) Microsoft Corporation. All rights reserved.
//
// Declarations and definitions of things used internally by the VCRuntime.
//
#pragma once

#if !defined _VCRT_BUILD && !defined _VCRT_ALLOW_INTERNALS
    // This is an internal C Runtime header file.  It is used when building the
    // C Runtime only.  It is not to be used as a public header file.
    #error ERROR: Use of C Runtime library internal header file.
#endif

#define _WIN32_FUSION 0x0100

#include <vcruntime.h>
#include <vcruntime_startup.h>
#include <vcruntime_string.h>
#include <crtdbg.h>
#include <eh.h>
#include <internal_shared.h>
#include <isa_availability.h>
#include <malloc.h>
#include <stdbool.h>
#include <windows.h>
#include <evntprov.h>

_CRT_BEGIN_C_HEADER



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Optimization macros
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
// Note:  These macros must match their definitions in the Windows build.
#ifndef BEGIN_PRAGMA_OPTIMIZE_DISABLE
    #define BEGIN_PRAGMA_OPTIMIZE_DISABLE(flags, bug, reason) \
        __pragma(optimize(flags, off))

    #define BEGIN_PRAGMA_OPTIMIZE_ENABLE(flags, bug, reason) \
        __pragma(optimize(flags, on))

    #define END_PRAGMA_OPTIMIZE() \
        __pragma(optimize("", on))
#endif



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Internal types
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
typedef int (__cdecl* _PIFV)(void);



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Initialization
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
bool __cdecl __vcrt_initialize_ptd(void);
bool __cdecl __vcrt_uninitialize_ptd(void);

bool __cdecl __vcrt_initialize_locks(void);
bool __cdecl __vcrt_uninitialize_locks(void);



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// ISA Availability
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
extern int __isa_available;

#if defined _M_IX86 || defined _M_X64
    extern int __isa_enabled;
    extern int __favor;
#endif



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Guard
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#if !defined _M_CEE
    typedef void (__fastcall *GUARDCF_CHECK_ROUTINE)(uintptr_t);
    extern void* __guard_check_icall_fptr;

    #define _GUARD_CHECK_ICALL(FPTR) \
        (((GUARDCF_CHECK_ROUTINE)(__guard_check_icall_fptr))((uintptr_t)(FPTR)))
#else
    #define _GUARD_CHECK_ICALL(FPTR)
#endif

// This is defined in the Windows 10 SDK but not in the Windows 8.1 SDK.
#if !defined DECLSPEC_GUARD_SUPPRESS
    #define DECLSPEC_GUARD_SUPPRESS __declspec(guard(suppress))
#endif



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Multi-threading
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
typedef enum __vcrt_lock_id
{
    __vcrt_undname_lock,
    __vcrt_lock_count
} __vcrt_lock_id;

#define _VCRT_SPINCOUNT 4000

void __cdecl __vcrt_lock(_In_ __vcrt_lock_id _Lock);
void __cdecl __vcrt_unlock(_In_ __vcrt_lock_id _Lock);

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Telemetry
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
// Telemetry: Invoked when the exe/dll are invoked. There are two different
// implementations in telemetry.cpp and telemetrydefault.cpp. Because GetModuleFileName
// is not available for Store apps, we return an empty string in telemetrydefault.cpp
// when invoked by store apps. For the desktop in telemetry.cpp, it returns the name
// of the module which invokes main/dll. This method is also responsible for firing the
// events associated with Tracelogging. This will help with runtime telemetry for analysis.
void __cdecl __telemetry_main_invoke_trigger(const HINSTANCE instance);

// Telemetry: Invoked when the exe/dll are shutdown. There are two different
// implementations in telemetry.cpp and telemetrydefault.cpp. This method is
// responsible for firing the events associated with Tracelogging. This will
// help with runtime telemetry for analysis.
void __cdecl __telemetry_main_return_trigger(const HINSTANCE instance);

void __cdecl __vcrt_initialize_telemetry_provider(void);

void __cdecl __vcrt_uninitialize_telemetry_provider(void);
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// CoreCRT SEH Encapsulation
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#ifdef __cplusplus
extern "C++"
{
    template <typename Action>
    auto __vcrt_lock_and_call(__vcrt_lock_id const lock_id, Action&& action) throw()
        -> decltype(action())
    {
        return __crt_seh_guarded_call<decltype(action())>()(
            [lock_id]() { __vcrt_lock(lock_id); },
            action,
            [lock_id]() { __vcrt_unlock(lock_id); });
    }
}
#endif // __cplusplus



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Per-thread data
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
typedef struct __vcrt_ptd
{
    // C++ Exception Handling (EH) state
    unsigned long      _NLG_dwCode;      // Required by NLG routines
    unexpected_handler _unexpected;      // unexpected() routine
    void*              _translator;      // S.E. translator
    void*              _purecall;        // called when pure virtual happens
    void*              _curexception;    // current exception
    void*              _curcontext;      // current exception context
    int                _ProcessingThrow; // for uncaught_exception
    void*              _curexcspec;      // for handling exceptions thrown from std::unexpected
    int                _cxxReThrow;      // true if it's a rethrown C++ exception

    #if defined _M_X64 || defined _M_ARM || defined _M_ARM64
    void*              _pExitContext;
    void*              _pUnwindContext;
    void*              _pFrameInfoChain;
    uintptr_t          _ImageBase;
    uintptr_t          _ThrowImageBase;
    void*              _pForeignException;
    #elif defined _M_IX86
    void*              _pFrameInfoChain;
    #endif

} __vcrt_ptd;

__vcrt_ptd* __cdecl __vcrt_getptd(void);
__vcrt_ptd* __cdecl __vcrt_getptd_noexit(void);
void __cdecl __vcrt_freeptd(_Inout_opt_ __vcrt_ptd* _Ptd);
void WINAPI __vcrt_freefls(_Inout_opt_ void* _Pfd);



//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Windows API wrappers
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#if !defined _VCRT_WINDOWS_BUILD && (defined _ONECORE || _VCRT_WIN32_WINNT >= _WIN32_WINNT_VISTA)

    // When building for OneCore, we can directly call these APIs.

    __inline ULONG __vcrt_EventRegister(
        _In_      LPCGUID         const provider_id,
        _In_opt_  PENABLECALLBACK const enable_callback,
        _In_opt_  PVOID           const callback_context,
        _Out_     PREGHANDLE      const reg_handle
        )
    {
        return EventRegister(provider_id, enable_callback, callback_context, reg_handle);
    }

    __inline ULONG __vcrt_EventSetInformation(
        _In_  REGHANDLE        const reg_handle,
        _In_  EVENT_INFO_CLASS const information_class ,
        _In_  PVOID            const event_information,
        _In_  ULONG            const information_length
        )
    {
        return EventSetInformation(reg_handle, information_class, event_information, information_length);
    }

    __inline ULONG __vcrt_EventUnregister(
        _In_  REGHANDLE const reg_handle
        )
    {
        return EventUnregister(reg_handle);
    }

    __inline ULONG __vcrt_EventWriteTransfer(
        _In_      REGHANDLE              const reg_handle,
        _In_      PCEVENT_DESCRIPTOR     const event_descriptor,
        _In_opt_  LPCGUID                const activity_id,
        _In_      LPCGUID                const related_activity_id,
        _In_      ULONG                  const user_data_count,
        _In_opt_  PEVENT_DATA_DESCRIPTOR const user_data
        )
    {
        return EventWriteTransfer(reg_handle, event_descriptor, activity_id, related_activity_id, user_data_count, user_data);
    }

    __inline DWORD __vcrt_FlsAlloc(PFLS_CALLBACK_FUNCTION const callback)
    {
        return FlsAlloc(callback);
    }

    __inline BOOL __vcrt_FlsFree(DWORD const fls_index)
    {
        return FlsFree(fls_index);
    }

    __inline PVOID __vcrt_FlsGetValue(DWORD const fls_index)
    {
        return FlsGetValue(fls_index);
    }

    __inline BOOL __vcrt_FlsSetValue(DWORD const fls_index, PVOID const fls_data)
    {

        return FlsSetValue(fls_index, fls_data);
    }

    __inline BOOL __vcrt_InitializeCriticalSectionEx(
        LPCRITICAL_SECTION const critical_section,
        DWORD              const spin_count,
        DWORD              const flags
        )
    {
        return InitializeCriticalSectionEx(critical_section, spin_count, flags);
    }

#else // ^^^ Uplevel ^^^ // vvv Downlevel vvv //

ULONG __cdecl __vcrt_EventRegister(
    _In_      LPCGUID         const provider_id,
    _In_opt_  PENABLECALLBACK const enable_callback,
    _In_opt_  PVOID           const callback_context,
    _Out_     PREGHANDLE      const reg_handle
    );

ULONG __cdecl __vcrt_EventSetInformation(
    _In_  REGHANDLE        const reg_handle,
    _In_  EVENT_INFO_CLASS const information_class,
    _In_  PVOID            const event_information,
    _In_  ULONG            const information_length
    );

ULONG __cdecl __vcrt_EventUnregister(
    _In_  REGHANDLE const reg_handle
    );

ULONG __cdecl __vcrt_EventWriteTransfer(
    _In_      REGHANDLE              const reg_handle,
    _In_      PCEVENT_DESCRIPTOR     const event_descriptor,
    _In_opt_  LPCGUID                const activity_id,
    _In_      LPCGUID                const related_activity_id,
    _In_      ULONG                  const user_data_count,
    _In_opt_  PEVENT_DATA_DESCRIPTOR const user_data
    );

    DWORD __cdecl __vcrt_FlsAlloc(
        _In_opt_ PFLS_CALLBACK_FUNCTION callback
        );

    BOOL __cdecl __vcrt_FlsFree(
        _In_ DWORD fls_index
        );

    PVOID __cdecl __vcrt_FlsGetValue(
        _In_ DWORD fls_index
        );

    BOOL __cdecl __vcrt_FlsSetValue(
        _In_     DWORD fls_index,
        _In_opt_ PVOID fls_data
        );

    BOOL __cdecl __vcrt_InitializeCriticalSectionEx(
        _Out_ LPCRITICAL_SECTION critical_section,
        _In_  DWORD              spin_count,
        _In_  DWORD              flags
        );

#endif // Downlevel

// These APIs are available on all supported operating systems, but they are not
// defined in WindowsApp.lib.  We rely on these APIs in the statically-linked
// RTC code, which we build into the CRT for Windows Store apps.  To avoid link
// errors in user code, we encapsulate their usage within the VCRuntime DLL.
// When we are MSDK-constrained, these functions simply return failure.
_Success_(return != 0) _Ret_range_(1, buffer_count)
DWORD __cdecl __vcrt_GetModuleFileNameW(
    _In_opt_                                                                               HMODULE module_handle,
    _Out_writes_to_(buffer_count, ((return < buffer_count) ? (return + 1) : buffer_count)) LPWSTR  buffer,
    _In_                                                                                   DWORD   buffer_count
    );

_When_(file_name == NULL, _Ret_notnull_)
_When_(file_name != NULL, _Ret_maybenull_)
HMODULE __cdecl __vcrt_GetModuleHandleW(
    _In_opt_ LPCWSTR file_name
    );

_Ret_maybenull_
HMODULE __cdecl __vcrt_LoadLibraryExW(
    _In_       LPCWSTR file_name,
    _Reserved_ HANDLE  file_handle,
    _In_       DWORD   flags
    );



void __cdecl __vcrt_initialize_winapi_thunks(void);
void __cdecl __vcrt_uninitialize_winapi_thunks(bool terminating);
void __cdecl __vcrt_initialize_pure_virtual_call_handler(void);



BOOL __cdecl _ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase, DWORD_PTR rva);
BOOL __cdecl _IsNonwritableInCurrentImage(void const* pTarget);



// Type info stuff
#ifdef __cplusplus
    struct __type_info_node
    {
        _SLIST_HEADER _Header;
    };

    void __cdecl __std_type_info_destroy_list(__type_info_node* _RootNode);
#endif


// Imports from AppCRT and DesktopCRT that need to be forwarded to the OS-mode global state counterparts when this dll is built as vcruntime_win
#if defined _VCRT_WINDOWS_BUILD && defined _CRT_GLOBAL_STATE_ISOLATION
    _ACRTIMP int __cdecl _o__callnewh(
    _In_ size_t _Size
    );

    #define _callnewh _o__callnewh
#endif

_CRT_END_C_HEADER
