

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

#ifndef __mmdeviceapi_h__
#define __mmdeviceapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMMNotificationClient_FWD_DEFINED__
#define __IMMNotificationClient_FWD_DEFINED__
typedef interface IMMNotificationClient IMMNotificationClient;

#endif 	/* __IMMNotificationClient_FWD_DEFINED__ */


#ifndef __IMMDevice_FWD_DEFINED__
#define __IMMDevice_FWD_DEFINED__
typedef interface IMMDevice IMMDevice;

#endif 	/* __IMMDevice_FWD_DEFINED__ */


#ifndef __IMMDeviceCollection_FWD_DEFINED__
#define __IMMDeviceCollection_FWD_DEFINED__
typedef interface IMMDeviceCollection IMMDeviceCollection;

#endif 	/* __IMMDeviceCollection_FWD_DEFINED__ */


#ifndef __IMMEndpoint_FWD_DEFINED__
#define __IMMEndpoint_FWD_DEFINED__
typedef interface IMMEndpoint IMMEndpoint;

#endif 	/* __IMMEndpoint_FWD_DEFINED__ */


#ifndef __IMMDeviceEnumerator_FWD_DEFINED__
#define __IMMDeviceEnumerator_FWD_DEFINED__
typedef interface IMMDeviceEnumerator IMMDeviceEnumerator;

#endif 	/* __IMMDeviceEnumerator_FWD_DEFINED__ */


#ifndef __IMMDeviceActivator_FWD_DEFINED__
#define __IMMDeviceActivator_FWD_DEFINED__
typedef interface IMMDeviceActivator IMMDeviceActivator;

#endif 	/* __IMMDeviceActivator_FWD_DEFINED__ */


#ifndef __IActivateAudioInterfaceCompletionHandler_FWD_DEFINED__
#define __IActivateAudioInterfaceCompletionHandler_FWD_DEFINED__
typedef interface IActivateAudioInterfaceCompletionHandler IActivateAudioInterfaceCompletionHandler;

#endif 	/* __IActivateAudioInterfaceCompletionHandler_FWD_DEFINED__ */


#ifndef __IActivateAudioInterfaceAsyncOperation_FWD_DEFINED__
#define __IActivateAudioInterfaceAsyncOperation_FWD_DEFINED__
typedef interface IActivateAudioInterfaceAsyncOperation IActivateAudioInterfaceAsyncOperation;

#endif 	/* __IActivateAudioInterfaceAsyncOperation_FWD_DEFINED__ */


#ifndef __MMDeviceEnumerator_FWD_DEFINED__
#define __MMDeviceEnumerator_FWD_DEFINED__

#ifdef __cplusplus
typedef class MMDeviceEnumerator MMDeviceEnumerator;
#else
typedef struct MMDeviceEnumerator MMDeviceEnumerator;
#endif /* __cplusplus */

#endif 	/* __MMDeviceEnumerator_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "propsys.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_mmdeviceapi_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define E_NOTFOUND HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
#define E_UNSUPPORTED_TYPE HRESULT_FROM_WIN32(ERROR_UNSUPPORTED_TYPE)
#define DEVICE_STATE_ACTIVE      0x00000001
#define DEVICE_STATE_DISABLED    0x00000002
#define DEVICE_STATE_NOTPRESENT  0x00000004
#define DEVICE_STATE_UNPLUGGED   0x00000008
#define DEVICE_STATEMASK_ALL     0x0000000f
#ifdef DEFINE_PROPERTYKEY
#undef DEFINE_PROPERTYKEY
#endif
#ifdef INITGUID
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) EXTERN_C const PROPERTYKEY name = { { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }, pid }
#else
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) EXTERN_C const PROPERTYKEY name
#endif // INITGUID
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FormFactor, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 0); 
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_ControlPanelPageProvider, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 1); 
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Association, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 2);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_PhysicalSpeakers, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 3);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_GUID, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 4);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Disable_SysFx, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 5);
#define ENDPOINT_SYSFX_ENABLED          0x00000000  // System Effects are enabled.
#define ENDPOINT_SYSFX_DISABLED         0x00000001  // System Effects are disabled.
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FullRangeSpeakers, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 6);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Supports_EventDriven_Mode, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 7);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_JackSubType, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 8);
DEFINE_PROPERTYKEY(PKEY_AudioEngine_DeviceFormat, 0xf19f064d, 0x82c, 0x4e27, 0xbc, 0x73, 0x68, 0x82, 0xa1, 0xbb, 0x8e, 0x4c, 0); 
DEFINE_PROPERTYKEY(PKEY_AudioEngine_OEMFormat, 0xe4870e26, 0x3cc5, 0x4cd2, 0xba, 0x46, 0xca, 0xa, 0x9a, 0x70, 0xed, 0x4, 3); 
typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS
    {
    DWORD cbDirectXAudioActivationParams;
    GUID guidAudioSession;
    DWORD dwAudioStreamFlags;
    } 	DIRECTX_AUDIO_ACTIVATION_PARAMS;

typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS *PDIRECTX_AUDIO_ACTIVATION_PARAMS;

typedef /* [public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001
    {
        eRender	= 0,
        eCapture	= ( eRender + 1 ) ,
        eAll	= ( eCapture + 1 ) ,
        EDataFlow_enum_count	= ( eAll + 1 ) 
    } 	EDataFlow;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002
    {
        eConsole	= 0,
        eMultimedia	= ( eConsole + 1 ) ,
        eCommunications	= ( eMultimedia + 1 ) ,
        ERole_enum_count	= ( eCommunications + 1 ) 
    } 	ERole;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003
    {
        RemoteNetworkDevice	= 0,
        Speakers	= ( RemoteNetworkDevice + 1 ) ,
        LineLevel	= ( Speakers + 1 ) ,
        Headphones	= ( LineLevel + 1 ) ,
        Microphone	= ( Headphones + 1 ) ,
        Headset	= ( Microphone + 1 ) ,
        Handset	= ( Headset + 1 ) ,
        UnknownDigitalPassthrough	= ( Handset + 1 ) ,
        SPDIF	= ( UnknownDigitalPassthrough + 1 ) ,
        DigitalAudioDisplayDevice	= ( SPDIF + 1 ) ,
        UnknownFormFactor	= ( DigitalAudioDisplayDevice + 1 ) ,
        EndpointFormFactor_enum_count	= ( UnknownFormFactor + 1 ) 
    } 	EndpointFormFactor;

#define HDMI     DigitalAudioDisplayDevice

// ----------------------------------------------------------------------
// Device Interface Classes
// ----------------------------------------------------------------------
// {E6327CAD-DCEC-4949-AE8A-991E976A79D2}
DEFINE_GUID(DEVINTERFACE_AUDIO_RENDER , 0xe6327cad, 0xdcec, 0x4949, 0xae, 0x8a, 0x99, 0x1e, 0x97, 0x6a, 0x79, 0xd2);
// {2EEF81BE-33FA-4800-9670-1CD474972C3F}
DEFINE_GUID(DEVINTERFACE_AUDIO_CAPTURE, 0x2eef81be, 0x33fa, 0x4800, 0x96, 0x70, 0x1c, 0xd4, 0x74, 0x97, 0x2c, 0x3f);


extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0000_v0_0_s_ifspec;

#ifndef __IMMNotificationClient_INTERFACE_DEFINED__
#define __IMMNotificationClient_INTERFACE_DEFINED__

/* interface IMMNotificationClient */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IMMNotificationClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7991EEC9-7E89-4D85-8390-6C703CEC60C0")
    IMMNotificationClient : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDeviceStateChanged( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId,
            /* [annotation][in] */ 
            _In_  DWORD dwNewState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDeviceAdded( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDeviceRemoved( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDefaultDeviceChanged( 
            /* [annotation][in] */ 
            _In_  EDataFlow flow,
            /* [annotation][in] */ 
            _In_  ERole role,
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDefaultDeviceId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPropertyValueChanged( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId,
            /* [annotation][in] */ 
            _In_  const PROPERTYKEY key) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMMNotificationClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMNotificationClient * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMNotificationClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMNotificationClient * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDeviceStateChanged )( 
            IMMNotificationClient * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId,
            /* [annotation][in] */ 
            _In_  DWORD dwNewState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDeviceAdded )( 
            IMMNotificationClient * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDeviceRemoved )( 
            IMMNotificationClient * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDefaultDeviceChanged )( 
            IMMNotificationClient * This,
            /* [annotation][in] */ 
            _In_  EDataFlow flow,
            /* [annotation][in] */ 
            _In_  ERole role,
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDefaultDeviceId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPropertyValueChanged )( 
            IMMNotificationClient * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrDeviceId,
            /* [annotation][in] */ 
            _In_  const PROPERTYKEY key);
        
        END_INTERFACE
    } IMMNotificationClientVtbl;

    interface IMMNotificationClient
    {
        CONST_VTBL struct IMMNotificationClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMNotificationClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMMNotificationClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMMNotificationClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMMNotificationClient_OnDeviceStateChanged(This,pwstrDeviceId,dwNewState)	\
    ( (This)->lpVtbl -> OnDeviceStateChanged(This,pwstrDeviceId,dwNewState) ) 

#define IMMNotificationClient_OnDeviceAdded(This,pwstrDeviceId)	\
    ( (This)->lpVtbl -> OnDeviceAdded(This,pwstrDeviceId) ) 

#define IMMNotificationClient_OnDeviceRemoved(This,pwstrDeviceId)	\
    ( (This)->lpVtbl -> OnDeviceRemoved(This,pwstrDeviceId) ) 

#define IMMNotificationClient_OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId)	\
    ( (This)->lpVtbl -> OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId) ) 

#define IMMNotificationClient_OnPropertyValueChanged(This,pwstrDeviceId,key)	\
    ( (This)->lpVtbl -> OnPropertyValueChanged(This,pwstrDeviceId,key) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMMNotificationClient_INTERFACE_DEFINED__ */


#ifndef __IMMDevice_INTERFACE_DEFINED__
#define __IMMDevice_INTERFACE_DEFINED__

/* interface IMMDevice */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IMMDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D666063F-1587-4E43-81F1-B948E807363F")
    IMMDevice : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( 
            /* [annotation][in] */ 
            _In_  REFIID iid,
            /* [annotation][in] */ 
            _In_  DWORD dwClsCtx,
            /* [annotation][unique][in] */ 
            _In_opt_  PROPVARIANT *pActivationParams,
            /* [annotation][iid_is][out] */ 
            _Out_  void **ppInterface) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPropertyStore( 
            /* [annotation][in] */ 
            _In_  DWORD stgmAccess,
            /* [annotation][out] */ 
            _Out_  IPropertyStore **ppProperties) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetId( 
            /* [annotation][out] */ 
            _Outptr_  LPWSTR *ppstrId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetState( 
            /* [annotation][out] */ 
            _Out_  DWORD *pdwState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMMDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMDevice * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMMDevice * This,
            /* [annotation][in] */ 
            _In_  REFIID iid,
            /* [annotation][in] */ 
            _In_  DWORD dwClsCtx,
            /* [annotation][unique][in] */ 
            _In_opt_  PROPVARIANT *pActivationParams,
            /* [annotation][iid_is][out] */ 
            _Out_  void **ppInterface);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPropertyStore )( 
            IMMDevice * This,
            /* [annotation][in] */ 
            _In_  DWORD stgmAccess,
            /* [annotation][out] */ 
            _Out_  IPropertyStore **ppProperties);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetId )( 
            IMMDevice * This,
            /* [annotation][out] */ 
            _Outptr_  LPWSTR *ppstrId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IMMDevice * This,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwState);
        
        END_INTERFACE
    } IMMDeviceVtbl;

    interface IMMDevice
    {
        CONST_VTBL struct IMMDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMMDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMMDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMMDevice_Activate(This,iid,dwClsCtx,pActivationParams,ppInterface)	\
    ( (This)->lpVtbl -> Activate(This,iid,dwClsCtx,pActivationParams,ppInterface) ) 

#define IMMDevice_OpenPropertyStore(This,stgmAccess,ppProperties)	\
    ( (This)->lpVtbl -> OpenPropertyStore(This,stgmAccess,ppProperties) ) 

#define IMMDevice_GetId(This,ppstrId)	\
    ( (This)->lpVtbl -> GetId(This,ppstrId) ) 

#define IMMDevice_GetState(This,pdwState)	\
    ( (This)->lpVtbl -> GetState(This,pdwState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMMDevice_INTERFACE_DEFINED__ */


#ifndef __IMMDeviceCollection_INTERFACE_DEFINED__
#define __IMMDeviceCollection_INTERFACE_DEFINED__

/* interface IMMDeviceCollection */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IMMDeviceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0BD7A1BE-7A1A-44DB-8397-CC5392387B5E")
    IMMDeviceCollection : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCount( 
            /* [annotation][out] */ 
            _Out_  UINT *pcDevices) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [annotation][in] */ 
            _In_  UINT nDevice,
            /* [annotation][out] */ 
            _Out_  IMMDevice **ppDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMMDeviceCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMDeviceCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMDeviceCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMDeviceCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IMMDeviceCollection * This,
            /* [annotation][out] */ 
            _Out_  UINT *pcDevices);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IMMDeviceCollection * This,
            /* [annotation][in] */ 
            _In_  UINT nDevice,
            /* [annotation][out] */ 
            _Out_  IMMDevice **ppDevice);
        
        END_INTERFACE
    } IMMDeviceCollectionVtbl;

    interface IMMDeviceCollection
    {
        CONST_VTBL struct IMMDeviceCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMDeviceCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMMDeviceCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMMDeviceCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMMDeviceCollection_GetCount(This,pcDevices)	\
    ( (This)->lpVtbl -> GetCount(This,pcDevices) ) 

#define IMMDeviceCollection_Item(This,nDevice,ppDevice)	\
    ( (This)->lpVtbl -> Item(This,nDevice,ppDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMMDeviceCollection_INTERFACE_DEFINED__ */


#ifndef __IMMEndpoint_INTERFACE_DEFINED__
#define __IMMEndpoint_INTERFACE_DEFINED__

/* interface IMMEndpoint */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IMMEndpoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BE09788-6894-4089-8586-9A2A6C265AC5")
    IMMEndpoint : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDataFlow( 
            /* [annotation][out] */ 
            _Out_  EDataFlow *pDataFlow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMMEndpointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMEndpoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMEndpoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMEndpoint * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDataFlow )( 
            IMMEndpoint * This,
            /* [annotation][out] */ 
            _Out_  EDataFlow *pDataFlow);
        
        END_INTERFACE
    } IMMEndpointVtbl;

    interface IMMEndpoint
    {
        CONST_VTBL struct IMMEndpointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMEndpoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMMEndpoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMMEndpoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMMEndpoint_GetDataFlow(This,pDataFlow)	\
    ( (This)->lpVtbl -> GetDataFlow(This,pDataFlow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMMEndpoint_INTERFACE_DEFINED__ */


#ifndef __IMMDeviceEnumerator_INTERFACE_DEFINED__
#define __IMMDeviceEnumerator_INTERFACE_DEFINED__

/* interface IMMDeviceEnumerator */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IMMDeviceEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A95664D2-9614-4F35-A746-DE8DB63617E6")
    IMMDeviceEnumerator : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumAudioEndpoints( 
            /* [annotation][in] */ 
            _In_  EDataFlow dataFlow,
            /* [annotation][in] */ 
            _In_  DWORD dwStateMask,
            /* [annotation][out] */ 
            _Out_  IMMDeviceCollection **ppDevices) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDefaultAudioEndpoint( 
            /* [annotation][in] */ 
            _In_  EDataFlow dataFlow,
            /* [annotation][in] */ 
            _In_  ERole role,
            /* [annotation][out] */ 
            _Out_  IMMDevice **ppEndpoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDevice( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrId,
            /* [annotation][out] */ 
            _Out_  IMMDevice **ppDevice) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterEndpointNotificationCallback( 
            /* [annotation][in] */ 
            _In_  IMMNotificationClient *pClient) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregisterEndpointNotificationCallback( 
            /* [annotation][in] */ 
            _In_  IMMNotificationClient *pClient) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMMDeviceEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMDeviceEnumerator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMDeviceEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMDeviceEnumerator * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumAudioEndpoints )( 
            IMMDeviceEnumerator * This,
            /* [annotation][in] */ 
            _In_  EDataFlow dataFlow,
            /* [annotation][in] */ 
            _In_  DWORD dwStateMask,
            /* [annotation][out] */ 
            _Out_  IMMDeviceCollection **ppDevices);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultAudioEndpoint )( 
            IMMDeviceEnumerator * This,
            /* [annotation][in] */ 
            _In_  EDataFlow dataFlow,
            /* [annotation][in] */ 
            _In_  ERole role,
            /* [annotation][out] */ 
            _Out_  IMMDevice **ppEndpoint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDevice )( 
            IMMDeviceEnumerator * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pwstrId,
            /* [annotation][out] */ 
            _Out_  IMMDevice **ppDevice);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterEndpointNotificationCallback )( 
            IMMDeviceEnumerator * This,
            /* [annotation][in] */ 
            _In_  IMMNotificationClient *pClient);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterEndpointNotificationCallback )( 
            IMMDeviceEnumerator * This,
            /* [annotation][in] */ 
            _In_  IMMNotificationClient *pClient);
        
        END_INTERFACE
    } IMMDeviceEnumeratorVtbl;

    interface IMMDeviceEnumerator
    {
        CONST_VTBL struct IMMDeviceEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMDeviceEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMMDeviceEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMMDeviceEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMMDeviceEnumerator_EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices)	\
    ( (This)->lpVtbl -> EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices) ) 

#define IMMDeviceEnumerator_GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint)	\
    ( (This)->lpVtbl -> GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint) ) 

#define IMMDeviceEnumerator_GetDevice(This,pwstrId,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,pwstrId,ppDevice) ) 

#define IMMDeviceEnumerator_RegisterEndpointNotificationCallback(This,pClient)	\
    ( (This)->lpVtbl -> RegisterEndpointNotificationCallback(This,pClient) ) 

#define IMMDeviceEnumerator_UnregisterEndpointNotificationCallback(This,pClient)	\
    ( (This)->lpVtbl -> UnregisterEndpointNotificationCallback(This,pClient) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMMDeviceEnumerator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mmdeviceapi_0000_0005 */
/* [local] */ 

/* IMMDeviceActivator is reserved for system use */


extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0005_v0_0_s_ifspec;

#ifndef __IMMDeviceActivator_INTERFACE_DEFINED__
#define __IMMDeviceActivator_INTERFACE_DEFINED__

/* interface IMMDeviceActivator */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IMMDeviceActivator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B0D0EA4-D0A9-4B0E-935B-09516746FAC0")
    IMMDeviceActivator : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( 
            /* [annotation][in] */ 
            _In_  REFIID iid,
            /* [annotation][in] */ 
            _In_  IMMDevice *pDevice,
            /* [annotation][in] */ 
            _In_opt_  PROPVARIANT *pActivationParams,
            /* [annotation][iid_is][out] */ 
            _Out_  void **ppInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMMDeviceActivatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMDeviceActivator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMDeviceActivator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMDeviceActivator * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMMDeviceActivator * This,
            /* [annotation][in] */ 
            _In_  REFIID iid,
            /* [annotation][in] */ 
            _In_  IMMDevice *pDevice,
            /* [annotation][in] */ 
            _In_opt_  PROPVARIANT *pActivationParams,
            /* [annotation][iid_is][out] */ 
            _Out_  void **ppInterface);
        
        END_INTERFACE
    } IMMDeviceActivatorVtbl;

    interface IMMDeviceActivator
    {
        CONST_VTBL struct IMMDeviceActivatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMDeviceActivator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMMDeviceActivator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMMDeviceActivator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMMDeviceActivator_Activate(This,iid,pDevice,pActivationParams,ppInterface)	\
    ( (This)->lpVtbl -> Activate(This,iid,pDevice,pActivationParams,ppInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMMDeviceActivator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mmdeviceapi_0000_0006 */
/* [local] */ 

/* IMMDeviceActivator is reserved for system use */
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)



extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0006_v0_0_s_ifspec;

#ifndef __IActivateAudioInterfaceCompletionHandler_INTERFACE_DEFINED__
#define __IActivateAudioInterfaceCompletionHandler_INTERFACE_DEFINED__

/* interface IActivateAudioInterfaceCompletionHandler */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IActivateAudioInterfaceCompletionHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41D949AB-9862-444A-80F6-C261334DA5EB")
    IActivateAudioInterfaceCompletionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ActivateCompleted( 
            /* [annotation][in] */ 
            _In_  IActivateAudioInterfaceAsyncOperation *activateOperation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActivateAudioInterfaceCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActivateAudioInterfaceCompletionHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActivateAudioInterfaceCompletionHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActivateAudioInterfaceCompletionHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateCompleted )( 
            IActivateAudioInterfaceCompletionHandler * This,
            /* [annotation][in] */ 
            _In_  IActivateAudioInterfaceAsyncOperation *activateOperation);
        
        END_INTERFACE
    } IActivateAudioInterfaceCompletionHandlerVtbl;

    interface IActivateAudioInterfaceCompletionHandler
    {
        CONST_VTBL struct IActivateAudioInterfaceCompletionHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActivateAudioInterfaceCompletionHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActivateAudioInterfaceCompletionHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActivateAudioInterfaceCompletionHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActivateAudioInterfaceCompletionHandler_ActivateCompleted(This,activateOperation)	\
    ( (This)->lpVtbl -> ActivateCompleted(This,activateOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActivateAudioInterfaceCompletionHandler_INTERFACE_DEFINED__ */


#ifndef __IActivateAudioInterfaceAsyncOperation_INTERFACE_DEFINED__
#define __IActivateAudioInterfaceAsyncOperation_INTERFACE_DEFINED__

/* interface IActivateAudioInterfaceAsyncOperation */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IActivateAudioInterfaceAsyncOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72A22D78-CDE4-431D-B8CC-843A71199B6D")
    IActivateAudioInterfaceAsyncOperation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetActivateResult( 
            /* [annotation][out] */ 
            _Out_  HRESULT *activateResult,
            /* [annotation][out] */ 
            _Outptr_result_maybenull_  IUnknown **activatedInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActivateAudioInterfaceAsyncOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActivateAudioInterfaceAsyncOperation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActivateAudioInterfaceAsyncOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActivateAudioInterfaceAsyncOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetActivateResult )( 
            IActivateAudioInterfaceAsyncOperation * This,
            /* [annotation][out] */ 
            _Out_  HRESULT *activateResult,
            /* [annotation][out] */ 
            _Outptr_result_maybenull_  IUnknown **activatedInterface);
        
        END_INTERFACE
    } IActivateAudioInterfaceAsyncOperationVtbl;

    interface IActivateAudioInterfaceAsyncOperation
    {
        CONST_VTBL struct IActivateAudioInterfaceAsyncOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActivateAudioInterfaceAsyncOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActivateAudioInterfaceAsyncOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActivateAudioInterfaceAsyncOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActivateAudioInterfaceAsyncOperation_GetActivateResult(This,activateResult,activatedInterface)	\
    ( (This)->lpVtbl -> GetActivateResult(This,activateResult,activatedInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActivateAudioInterfaceAsyncOperation_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mmdeviceapi_0000_0008 */
/* [local] */ 

// ----------------------------------------------------------------------
// Function: ActivateAudioInterfaceAsync
// This function takes a device interface instance id representing a software
// audio device interface and asynchronously returns a pointer to the
// specified interface
// ----------------------------------------------------------------------
STDAPI ActivateAudioInterfaceAsync(
    _In_ LPCWSTR deviceInterfacePath,
    _In_ REFIID riid,
    _In_opt_ PROPVARIANT *activationParams,
    _In_ IActivateAudioInterfaceCompletionHandler *completionHandler,
    _COM_Outptr_ IActivateAudioInterfaceAsyncOperation **activationOperation
    );
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef /* [public] */ struct __MIDL___MIDL_itf_mmdeviceapi_0000_0008_0001
    {
    LPARAM AddPageParam;
    IMMDevice *pEndpoint;
    IMMDevice *pPnpInterface;
    IMMDevice *pPnpDevnode;
    } 	AudioExtensionParams;



extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0008_v0_0_s_ifspec;


#ifndef __MMDeviceAPILib_LIBRARY_DEFINED__
#define __MMDeviceAPILib_LIBRARY_DEFINED__

/* library MMDeviceAPILib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MMDeviceAPILib;

EXTERN_C const CLSID CLSID_MMDeviceEnumerator;

#ifdef __cplusplus

class DECLSPEC_UUID("BCDE0395-E52F-467C-8E3D-C4579291692E")
MMDeviceEnumerator;
#endif
#endif /* __MMDeviceAPILib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_mmdeviceapi_0000_0009 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0009_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


