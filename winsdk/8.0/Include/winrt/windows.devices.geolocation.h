

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

#ifndef __windows2Edevices2Egeolocation_h__
#define __windows2Edevices2Egeolocation_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;

#endif 	/* ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_FWD_DEFINED__
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs;

#endif 	/* ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_FWD_DEFINED__
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs;

#endif 	/* ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocoordinate;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface ICivicAddress;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoposition;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IPositionChangedEventArgs;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IStatusChangedEventArgs;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeolocator;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
class Geoposition;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
interface IGeoposition;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0211 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0211 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0211_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0211_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7668a704-244e-5e12-8dcb-92a3299eba26"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geoposition*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geoposition*, ABI::Windows::Devices::Geolocation::IGeoposition*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Geolocation.Geoposition>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geoposition*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0212 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0212 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0212_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0212_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ee73ecf0-099d-57e5-8407-5b32e5af1cc4"))
IAsyncOperation<ABI::Windows::Devices::Geolocation::Geoposition*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geoposition*, ABI::Windows::Devices::Geolocation::IGeoposition*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Geolocation.Geoposition>"; }
};
typedef IAsyncOperation<ABI::Windows::Devices::Geolocation::Geoposition*> __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
class Geolocator;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
interface IGeolocator;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
class PositionChangedEventArgs;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
interface IPositionChangedEventArgs;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0002 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0213 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0213 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0213_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0213_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0003 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("df3c6164-4e7b-5e8e-9a7e-13da059dec1e"))
ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::PositionChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geolocator*, ABI::Windows::Devices::Geolocation::IGeolocator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::PositionChangedEventArgs*, ABI::Windows::Devices::Geolocation::IPositionChangedEventArgs*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Geolocation.Geolocator, Windows.Devices.Geolocation.PositionChangedEventArgs>"; }
};
typedef ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::PositionChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_t;
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
class StatusChangedEventArgs;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
interface IStatusChangedEventArgs;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0003 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0214 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0214 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0214_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0214_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0004 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("97fcf582-de6b-5cd3-9690-e2ecbb66da4d"))
ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::StatusChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geolocator*, ABI::Windows::Devices::Geolocation::IGeolocator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::StatusChangedEventArgs*, ABI::Windows::Devices::Geolocation::IStatusChangedEventArgs*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Geolocation.Geolocator, Windows.Devices.Geolocation.StatusChangedEventArgs>"; }
};
typedef ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::StatusChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_t;
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_USE */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0215 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0215 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0215_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0215_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0005 */
/* [local] */ 

#ifndef DEF___FIReference_1_double_USE
#define DEF___FIReference_1_double_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2"))
IReference<double> : IReference_impl<double> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IReference`1<Double>"; }
};
typedef IReference<double> __FIReference_1_double_t;
#define ____FIReference_1_double_FWD_DEFINED__
#define __FIReference_1_double ABI::Windows::Foundation::__FIReference_1_double_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIReference_1_double_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus;


#endif /* end if !defined(__cplusplus) */


#endif


#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
class Geocoordinate;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Geolocation {
class CivicAddress;
} /*Geolocation*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0005 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
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
            
            typedef struct TimeSpan TimeSpan;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum PositionAccuracy PositionAccuracy;
                
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
        namespace Devices {
            namespace Geolocation {
                
                typedef enum PositionStatus PositionStatus;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0216 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0216 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0216_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0216_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0006 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0006_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7668a704-244e-5e12-8dcb-92a3299eba26")
    __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0007 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0217 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0217 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0217_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0217_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0008 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition
#define DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0008_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ee73ecf0-099d-57e5-8407-5b32e5af1cc4")
    __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoposition **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

    interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0009 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0218 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0218 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0218_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0218_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0010 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0010_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("df3c6164-4e7b-5e8e-9a7e-13da059dec1e")
    __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Geolocation::IGeolocator *sender,
            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Geolocation::IPositionChangedEventArgs *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator *sender,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs *e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl;

    interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs
    {
        CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0011 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0219 */




/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0219 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0219_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0219_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0012 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0012 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0012_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97fcf582-de6b-5cd3-9690-e2ecbb66da4d")
    __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Geolocation::IGeolocator *sender,
            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Geolocation::IStatusChangedEventArgs *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator *sender,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs *e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl;

    interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs
    {
        CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0013 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy
    {
        PositionAccuracy_Default	= 0,
        PositionAccuracy_High	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus
    {
        PositionStatus_Ready	= 0,
        PositionStatus_Initializing	= 1,
        PositionStatus_NoData	= 2,
        PositionStatus_Disabled	= 3,
        PositionStatus_NotInitialized	= 4,
        PositionStatus_NotAvailable	= 5
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinate[] = L"Windows.Devices.Geolocation.IGeocoordinate";
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0013 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                /* [v1_enum] */ 
                enum PositionAccuracy
                    {
                        PositionAccuracy_Default	= 0,
                        PositionAccuracy_High	= 1
                    } ;
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
        namespace Devices {
            namespace Geolocation {
                
                /* [v1_enum] */ 
                enum PositionStatus
                    {
                        PositionStatus_Ready	= 0,
                        PositionStatus_Initializing	= 1,
                        PositionStatus_NoData	= 2,
                        PositionStatus_Disabled	= 3,
                        PositionStatus_NotInitialized	= 4,
                        PositionStatus_NotAvailable	= 5
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0013_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Geolocation::IGeocoordinate */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Geolocation {
                    
                    MIDL_INTERFACE("EE21A3AA-976A-4C70-803D-083EA55BCBC4")
                    IGeocoordinate : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Latitude( 
                            /* [out][retval] */ __RPC__out DOUBLE *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Longitude( 
                            /* [out][retval] */ __RPC__out DOUBLE *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Altitude( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Accuracy( 
                            /* [out][retval] */ __RPC__out DOUBLE *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AltitudeAccuracy( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Heading( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Speed( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Timestamp( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::DateTime *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGeocoordinate = __uuidof(IGeocoordinate);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Latitude )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__out DOUBLE *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Longitude )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__out DOUBLE *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Altitude )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Accuracy )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__out DOUBLE *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AltitudeAccuracy )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Heading )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Speed )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_double **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timestamp )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CDateTime *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl;

    interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Latitude(This,value)	\
    ( (This)->lpVtbl -> get_Latitude(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Longitude(This,value)	\
    ( (This)->lpVtbl -> get_Longitude(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Altitude(This,value)	\
    ( (This)->lpVtbl -> get_Altitude(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Accuracy(This,value)	\
    ( (This)->lpVtbl -> get_Accuracy(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_AltitudeAccuracy(This,value)	\
    ( (This)->lpVtbl -> get_AltitudeAccuracy(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Heading(This,value)	\
    ( (This)->lpVtbl -> get_Heading(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Speed(This,value)	\
    ( (This)->lpVtbl -> get_Speed(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Timestamp(This,value)	\
    ( (This)->lpVtbl -> get_Timestamp(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0014 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Devices_Geolocation_ICivicAddress[] = L"Windows.Devices.Geolocation.ICivicAddress";
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0014_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Geolocation::ICivicAddress */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Geolocation {
                    
                    MIDL_INTERFACE("A8567A1A-64F4-4D48-BCEA-F6B008ECA34C")
                    ICivicAddress : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Country( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_State( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_City( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PostalCode( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Timestamp( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::DateTime *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICivicAddress = __uuidof(ICivicAddress);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Country )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_City )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PostalCode )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timestamp )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CDateTime *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl;

    interface __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_Country(This,value)	\
    ( (This)->lpVtbl -> get_Country(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_State(This,value)	\
    ( (This)->lpVtbl -> get_State(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_City(This,value)	\
    ( (This)->lpVtbl -> get_City(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_PostalCode(This,value)	\
    ( (This)->lpVtbl -> get_PostalCode(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_Timestamp(This,value)	\
    ( (This)->lpVtbl -> get_Timestamp(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0015 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoposition[] = L"Windows.Devices.Geolocation.IGeoposition";
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0015 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0015_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Geolocation::IGeoposition */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Geolocation {
                    
                    MIDL_INTERFACE("C18D0454-7D41-4FF7-A957-9DFFB4EF7F5B")
                    IGeoposition : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Coordinate( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeocoordinate **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CivicAddress( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Geolocation::ICivicAddress **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGeoposition = __uuidof(IGeoposition);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coordinate )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CivicAddress )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl;

    interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_get_Coordinate(This,value)	\
    ( (This)->lpVtbl -> get_Coordinate(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_get_CivicAddress(This,value)	\
    ( (This)->lpVtbl -> get_CivicAddress(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0016 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Devices_Geolocation_IPositionChangedEventArgs[] = L"Windows.Devices.Geolocation.IPositionChangedEventArgs";
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0016 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0016_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Geolocation::IPositionChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Geolocation {
                    
                    MIDL_INTERFACE("37859CE5-9D1E-46C5-BF3B-6AD8CAC1A093")
                    IPositionChangedEventArgs : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoposition **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPositionChangedEventArgs = __uuidof(IPositionChangedEventArgs);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl;

    interface __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_get_Position(This,value)	\
    ( (This)->lpVtbl -> get_Position(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0017 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Devices_Geolocation_IStatusChangedEventArgs[] = L"Windows.Devices.Geolocation.IStatusChangedEventArgs";
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0017 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0017_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Geolocation::IStatusChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Geolocation {
                    
                    MIDL_INTERFACE("3453D2DA-8C93-4111-A205-9AECFC9BE5C0")
                    IStatusChangedEventArgs : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Devices::Geolocation::PositionStatus *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IStatusChangedEventArgs = __uuidof(IStatusChangedEventArgs);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl;

    interface __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_get_Status(This,value)	\
    ( (This)->lpVtbl -> get_Status(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0018 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocator[] = L"Windows.Devices.Geolocation.IGeolocator";
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0018 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0018_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Geolocation::IGeolocator */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Geolocation {
                    
                    MIDL_INTERFACE("A9C3BF62-4524-4989-8AA9-DE019D2E551F")
                    IGeolocator : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DesiredAccuracy( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Devices::Geolocation::PositionAccuracy *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DesiredAccuracy( 
                            /* [in] */ ABI::Windows::Devices::Geolocation::PositionAccuracy value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MovementThreshold( 
                            /* [out][retval] */ __RPC__out DOUBLE *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MovementThreshold( 
                            /* [in] */ DOUBLE value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReportInterval( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReportInterval( 
                            /* [in] */ UINT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LocationStatus( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Devices::Geolocation::PositionStatus *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetGeopositionAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetGeopositionAsyncWithAgeAndTimeout( 
                            /* [in] */ ABI::Windows::Foundation::TimeSpan maximumAge,
                            /* [in] */ ABI::Windows::Foundation::TimeSpan timeout,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_PositionChanged( 
                            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_PositionChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_StatusChanged( 
                            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_StatusChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGeolocator = __uuidof(IGeolocator);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracy )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracy )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MovementThreshold )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out][retval] */ __RPC__out DOUBLE *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MovementThreshold )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ DOUBLE value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ UINT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocationStatus )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetGeopositionAsync )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetGeopositionAsyncWithAgeAndTimeout )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CTimeSpan maximumAge,
            /* [in] */ __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition **value);
        
        HRESULT ( STDMETHODCALLTYPE *add_PositionChanged )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PositionChanged )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )( 
            __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl;

    interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_DesiredAccuracy(This,value)	\
    ( (This)->lpVtbl -> get_DesiredAccuracy(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_put_DesiredAccuracy(This,value)	\
    ( (This)->lpVtbl -> put_DesiredAccuracy(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_MovementThreshold(This,value)	\
    ( (This)->lpVtbl -> get_MovementThreshold(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_put_MovementThreshold(This,value)	\
    ( (This)->lpVtbl -> put_MovementThreshold(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_ReportInterval(This,value)	\
    ( (This)->lpVtbl -> get_ReportInterval(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_put_ReportInterval(This,value)	\
    ( (This)->lpVtbl -> put_ReportInterval(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_LocationStatus(This,value)	\
    ( (This)->lpVtbl -> get_LocationStatus(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetGeopositionAsync(This,value)	\
    ( (This)->lpVtbl -> GetGeopositionAsync(This,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetGeopositionAsyncWithAgeAndTimeout(This,maximumAge,timeout,value)	\
    ( (This)->lpVtbl -> GetGeopositionAsyncWithAgeAndTimeout(This,maximumAge,timeout,value) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_add_PositionChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_PositionChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_remove_PositionChanged(This,token)	\
    ( (This)->lpVtbl -> remove_PositionChanged(This,token) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_add_StatusChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_StatusChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_remove_StatusChanged(This,token)	\
    ( (This)->lpVtbl -> remove_StatusChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0019 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geocoordinate_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geocoordinate_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Devices_Geolocation_Geocoordinate[] = L"Windows.Devices.Geolocation.Geocoordinate";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_CivicAddress_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_CivicAddress_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Devices_Geolocation_CivicAddress[] = L"Windows.Devices.Geolocation.CivicAddress";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geoposition_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geoposition_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Devices_Geolocation_Geoposition[] = L"Windows.Devices.Geolocation.Geoposition";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_PositionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_PositionChangedEventArgs_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Devices_Geolocation_PositionChangedEventArgs[] = L"Windows.Devices.Geolocation.PositionChangedEventArgs";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_StatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_StatusChangedEventArgs_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Devices_Geolocation_StatusChangedEventArgs[] = L"Windows.Devices.Geolocation.StatusChangedEventArgs";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geolocator_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geolocator_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Devices_Geolocation_Geolocator[] = L"Windows.Devices.Geolocation.Geolocator";
#endif


/* interface __MIDL_itf_windows2Edevices2Egeolocation_0000_0019 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Egeolocation_0000_0019_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


