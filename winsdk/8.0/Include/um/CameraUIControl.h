

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

#ifndef __camerauicontrol_h__
#define __camerauicontrol_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICameraUIControlEventCallback_FWD_DEFINED__
#define __ICameraUIControlEventCallback_FWD_DEFINED__
typedef interface ICameraUIControlEventCallback ICameraUIControlEventCallback;

#endif 	/* __ICameraUIControlEventCallback_FWD_DEFINED__ */


#ifndef __ICameraUIControl_FWD_DEFINED__
#define __ICameraUIControl_FWD_DEFINED__
typedef interface ICameraUIControl ICameraUIControl;

#endif 	/* __ICameraUIControl_FWD_DEFINED__ */


#ifndef __CameraUIControl_FWD_DEFINED__
#define __CameraUIControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class CameraUIControl CameraUIControl;
#else
typedef struct CameraUIControl CameraUIControl;
#endif /* __cplusplus */

#endif 	/* __CameraUIControl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_camerauicontrol_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//--------------------------------------------------------------------------
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef /* [v1_enum] */ 
enum CameraUIControlMode
    {
        Browse	= 0,
        Linear	= ( Browse + 1 ) 
    } 	CameraUIControlMode;

typedef /* [v1_enum] */ 
enum CameraUIControlLinearSelectionMode
    {
        Single	= 0,
        Multiple	= ( Single + 1 ) 
    } 	CameraUIControlLinearSelectionMode;

typedef /* [v1_enum] */ 
enum CameraUIControlCaptureMode
    {
        PhotoOrVideo	= 0,
        Photo	= ( PhotoOrVideo + 1 ) ,
        Video	= ( Photo + 1 ) 
    } 	CameraUIControlCaptureMode;

typedef /* [v1_enum] */ 
enum CameraUIControlPhotoFormat
    {
        Jpeg	= 0,
        Png	= ( Jpeg + 1 ) ,
        JpegXR	= ( Png + 1 ) 
    } 	CameraUIControlPhotoFormat;

typedef /* [v1_enum] */ 
enum CameraUIControlVideoFormat
    {
        Mp4	= 0,
        Wmv	= ( Mp4 + 1 ) 
    } 	CameraUIControlVideoFormat;

typedef /* [v1_enum] */ 
enum CameraUIControlViewType
    {
        SingleItem	= 0,
        ItemList	= ( SingleItem + 1 ) 
    } 	CameraUIControlViewType;



extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0000_v0_0_s_ifspec;

#ifndef __ICameraUIControlEventCallback_INTERFACE_DEFINED__
#define __ICameraUIControlEventCallback_INTERFACE_DEFINED__

/* interface ICameraUIControlEventCallback */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ICameraUIControlEventCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BFA0C2C-FBCD-4776-BDA4-88BF974E74F4")
    ICameraUIControlEventCallback : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnStartupComplete( void) = 0;
        
        virtual void STDMETHODCALLTYPE OnSuspendComplete( void) = 0;
        
        virtual void STDMETHODCALLTYPE OnItemCaptured( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pszPath) = 0;
        
        virtual void STDMETHODCALLTYPE OnItemDeleted( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pszPath) = 0;
        
        virtual void STDMETHODCALLTYPE OnClosed( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICameraUIControlEventCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICameraUIControlEventCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICameraUIControlEventCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICameraUIControlEventCallback * This);
        
        void ( STDMETHODCALLTYPE *OnStartupComplete )( 
            ICameraUIControlEventCallback * This);
        
        void ( STDMETHODCALLTYPE *OnSuspendComplete )( 
            ICameraUIControlEventCallback * This);
        
        void ( STDMETHODCALLTYPE *OnItemCaptured )( 
            ICameraUIControlEventCallback * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszPath);
        
        void ( STDMETHODCALLTYPE *OnItemDeleted )( 
            ICameraUIControlEventCallback * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszPath);
        
        void ( STDMETHODCALLTYPE *OnClosed )( 
            ICameraUIControlEventCallback * This);
        
        END_INTERFACE
    } ICameraUIControlEventCallbackVtbl;

    interface ICameraUIControlEventCallback
    {
        CONST_VTBL struct ICameraUIControlEventCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICameraUIControlEventCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICameraUIControlEventCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICameraUIControlEventCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICameraUIControlEventCallback_OnStartupComplete(This)	\
    ( (This)->lpVtbl -> OnStartupComplete(This) ) 

#define ICameraUIControlEventCallback_OnSuspendComplete(This)	\
    ( (This)->lpVtbl -> OnSuspendComplete(This) ) 

#define ICameraUIControlEventCallback_OnItemCaptured(This,pszPath)	\
    ( (This)->lpVtbl -> OnItemCaptured(This,pszPath) ) 

#define ICameraUIControlEventCallback_OnItemDeleted(This,pszPath)	\
    ( (This)->lpVtbl -> OnItemDeleted(This,pszPath) ) 

#define ICameraUIControlEventCallback_OnClosed(This)	\
    ( (This)->lpVtbl -> OnClosed(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICameraUIControlEventCallback_INTERFACE_DEFINED__ */


#ifndef __ICameraUIControl_INTERFACE_DEFINED__
#define __ICameraUIControl_INTERFACE_DEFINED__

/* interface ICameraUIControl */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ICameraUIControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8733ADF-3D68-4b8f-BB08-E28A0BED0376")
    ICameraUIControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [annotation][in] */ 
            _In_  IUnknown *pWindow,
            /* [annotation][in] */ 
            _In_  CameraUIControlMode mode,
            /* [annotation][in] */ 
            _In_  CameraUIControlLinearSelectionMode selectionMode,
            /* [annotation][in] */ 
            _In_  CameraUIControlCaptureMode captureMode,
            /* [annotation][in] */ 
            _In_  CameraUIControlPhotoFormat photoFormat,
            /* [annotation][in] */ 
            _In_  CameraUIControlVideoFormat videoFormat,
            /* [annotation][in] */ 
            _In_  BOOL bHasCloseButton,
            /* [annotation][in] */ 
            _In_opt_  ICameraUIControlEventCallback *pEventCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Suspend( 
            /* [annotation][out] */ 
            _Out_  BOOL *pbDeferralRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentViewType( 
            /* [annotation][out] */ 
            _Out_  CameraUIControlViewType *pViewType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActiveItem( 
            /* [annotation][out] */ 
            _Outptr_opt_  BSTR *pbstrActiveItemPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItems( 
            /* [annotation][out] */ 
            _Outptr_  SAFEARRAY **ppSelectedItemPaths) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCapturedItem( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pszPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICameraUIControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICameraUIControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICameraUIControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICameraUIControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ICameraUIControl * This,
            /* [annotation][in] */ 
            _In_  IUnknown *pWindow,
            /* [annotation][in] */ 
            _In_  CameraUIControlMode mode,
            /* [annotation][in] */ 
            _In_  CameraUIControlLinearSelectionMode selectionMode,
            /* [annotation][in] */ 
            _In_  CameraUIControlCaptureMode captureMode,
            /* [annotation][in] */ 
            _In_  CameraUIControlPhotoFormat photoFormat,
            /* [annotation][in] */ 
            _In_  CameraUIControlVideoFormat videoFormat,
            /* [annotation][in] */ 
            _In_  BOOL bHasCloseButton,
            /* [annotation][in] */ 
            _In_opt_  ICameraUIControlEventCallback *pEventCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            ICameraUIControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            ICameraUIControl * This,
            /* [annotation][out] */ 
            _Out_  BOOL *pbDeferralRequired);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            ICameraUIControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentViewType )( 
            ICameraUIControl * This,
            /* [annotation][out] */ 
            _Out_  CameraUIControlViewType *pViewType);
        
        HRESULT ( STDMETHODCALLTYPE *GetActiveItem )( 
            ICameraUIControl * This,
            /* [annotation][out] */ 
            _Outptr_opt_  BSTR *pbstrActiveItemPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItems )( 
            ICameraUIControl * This,
            /* [annotation][out] */ 
            _Outptr_  SAFEARRAY **ppSelectedItemPaths);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCapturedItem )( 
            ICameraUIControl * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszPath);
        
        END_INTERFACE
    } ICameraUIControlVtbl;

    interface ICameraUIControl
    {
        CONST_VTBL struct ICameraUIControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICameraUIControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICameraUIControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICameraUIControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICameraUIControl_Show(This,pWindow,mode,selectionMode,captureMode,photoFormat,videoFormat,bHasCloseButton,pEventCallback)	\
    ( (This)->lpVtbl -> Show(This,pWindow,mode,selectionMode,captureMode,photoFormat,videoFormat,bHasCloseButton,pEventCallback) ) 

#define ICameraUIControl_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define ICameraUIControl_Suspend(This,pbDeferralRequired)	\
    ( (This)->lpVtbl -> Suspend(This,pbDeferralRequired) ) 

#define ICameraUIControl_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define ICameraUIControl_GetCurrentViewType(This,pViewType)	\
    ( (This)->lpVtbl -> GetCurrentViewType(This,pViewType) ) 

#define ICameraUIControl_GetActiveItem(This,pbstrActiveItemPath)	\
    ( (This)->lpVtbl -> GetActiveItem(This,pbstrActiveItemPath) ) 

#define ICameraUIControl_GetSelectedItems(This,ppSelectedItemPaths)	\
    ( (This)->lpVtbl -> GetSelectedItems(This,ppSelectedItemPaths) ) 

#define ICameraUIControl_RemoveCapturedItem(This,pszPath)	\
    ( (This)->lpVtbl -> RemoveCapturedItem(This,pszPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICameraUIControl_INTERFACE_DEFINED__ */



#ifndef __CameraUIControlTypesLib_LIBRARY_DEFINED__
#define __CameraUIControlTypesLib_LIBRARY_DEFINED__

/* library CameraUIControlTypesLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CameraUIControlTypesLib;

EXTERN_C const CLSID CLSID_CameraUIControl;

#ifdef __cplusplus

class DECLSPEC_UUID("16D5A2BE-B1C5-47b3-8EAE-CCBCF452C7E8")
CameraUIControl;
#endif
#endif /* __CameraUIControlTypesLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_camerauicontrol_0000_0003 */
/* [local] */ 

#endif //(NTDDI_VERSION >= NTDDI_WIN8)


extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_camerauicontrol_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


