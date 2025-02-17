

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Efoundation2Ediagnostics_h__
#define __windows2Efoundation2Ediagnostics_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface IErrorReportingSettings;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions;


#endif /* end if !defined(__cplusplus) */


#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
namespace Diagnostics {
class RuntimeBrokerErrorSettings;
} /*Diagnostics*/
} /*Foundation*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions
    {
        ErrorOptions_None	= 0,
        ErrorOptions_SuppressExceptions	= 0x1,
        ErrorOptions_ForceExceptions	= 0x2,
        ErrorOptions_UseSetErrorInfo	= 0x4,
        ErrorOptions_SuppressSetErrorInfo	= 0x8
    } ;
#endif /* end if !defined(__cplusplus) */

#else
namespace ABI {
namespace Windows {
namespace Foundation {
namespace Diagnostics {
enum ErrorOptions;
DEFINE_ENUM_FLAG_OPERATORS(ErrorOptions)
} /*Diagnostics*/
} /*Foundation*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorReportingSettings[] = L"Windows.Foundation.Diagnostics.IErrorReportingSettings";
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum ErrorOptions ErrorOptions;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif


#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                /* [v1_enum] */ 
                enum ErrorOptions
                    {
                        ErrorOptions_None	= 0,
                        ErrorOptions_SuppressExceptions	= 0x1,
                        ErrorOptions_ForceExceptions	= 0x2,
                        ErrorOptions_UseSetErrorInfo	= 0x4,
                        ErrorOptions_SuppressSetErrorInfo	= 0x8
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings */
/* [uuid][object] */ 



/* interface ABI::Windows::Foundation::Diagnostics::IErrorReportingSettings */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Foundation {
                namespace Diagnostics {
                    
                    MIDL_INTERFACE("16369792-B03E-4BA1-8BB8-D28F4AB4D2C0")
                    IErrorReportingSettings : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetErrorOptions( 
                            /* [in] */ ABI::Windows::Foundation::Diagnostics::ErrorOptions value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetErrorOptions( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Diagnostics::ErrorOptions *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IErrorReportingSettings = __uuidof(IErrorReportingSettings);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *SetErrorOptions )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions value);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorOptions )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl;

    interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_SetErrorOptions(This,value)	\
    ( (This)->lpVtbl -> SetErrorOptions(This,value) ) 

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetErrorOptions(This,value)	\
    ( (This)->lpVtbl -> GetErrorOptions(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings[] = L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings";
#endif


/* interface __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Ediagnostics_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


