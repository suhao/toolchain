//
// legacy_stdio_wide_specifiers.cpp
//
//      Copyright (c) Microsoft Corporation. All rights reserved.
//
// Configures the stdio library to use the legacy %s, %c, and %[] specifiers for
// the wide string printf and scanf functions.  The conforming (default) behavior
// is that these format specifiers map to a narrow character buffer; the 'l' length
// modifier must be used when passing a wide character buffer.
//
// The legacy behavior enabled by linking in this object is that these format
// specifiers map to a wide character buffer; the 'h' length modifier must be used
// when passing a narrow character buffer.  This was the default behavior for
// releases of Visual C++ through Visual C++ 2013.
//
#undef  _CRT_STDIO_ARBITRARY_WIDE_SPECIFIERS
#define _CRT_STDIO_LEGACY_WIDE_SPECIFIERS

#include <vcruntime_internal.h>
#include <vcruntime_startup.h>
#include <corecrt_stdio_config.h>

static int __CRTDECL initialize_legacy_wide_specifiers() throw()
{
    _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS |= _CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS;
    _CRT_INTERNAL_LOCAL_SCANF_OPTIONS  |= _CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS;
    return 0;
}

#ifdef _M_CEE_PURE

    extern "C" void __clrcall __scrt_initialize_legacy_stdio_wide_specifier_mode()
    {
        initialize_legacy_wide_specifiers();
    }

#else

    #pragma warning(disable: 4483) // Allow use of __identifier
    extern "C" _CRTALLOC(".CRT$XIC") _PIFV __identifier("__PLEASE_LINK_WITH_legacy_stdio_wide_specifiers.lib") = initialize_legacy_wide_specifiers;

#endif

