

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

#ifndef __wkspbkax_h__
#define __wkspbkax_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWorkspaceBrokerAx_FWD_DEFINED__
#define __IWorkspaceBrokerAx_FWD_DEFINED__
typedef interface IWorkspaceBrokerAx IWorkspaceBrokerAx;

#endif 	/* __IWorkspaceBrokerAx_FWD_DEFINED__ */


#ifndef ___IWorkspaceBrokerAxEvents_FWD_DEFINED__
#define ___IWorkspaceBrokerAxEvents_FWD_DEFINED__
typedef interface _IWorkspaceBrokerAxEvents _IWorkspaceBrokerAxEvents;

#endif 	/* ___IWorkspaceBrokerAxEvents_FWD_DEFINED__ */


#ifndef __WorkspaceBrokerAx_FWD_DEFINED__
#define __WorkspaceBrokerAx_FWD_DEFINED__

#ifdef __cplusplus
typedef class WorkspaceBrokerAx WorkspaceBrokerAx;
#else
typedef struct WorkspaceBrokerAx WorkspaceBrokerAx;
#endif /* __cplusplus */

#endif 	/* __WorkspaceBrokerAx_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wkspbkax_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//--------------------------------------------------------------------------
#if (NTDDI_VERSION >= NTDDI_WIN8)


extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0000_v0_0_s_ifspec;

#ifndef __IWorkspaceBrokerAx_INTERFACE_DEFINED__
#define __IWorkspaceBrokerAx_INTERFACE_DEFINED__

/* interface IWorkspaceBrokerAx */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWorkspaceBrokerAx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F93474C-2ED7-4A68-AFD1-D3C9781F341E")
    IWorkspaceBrokerAx : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetupWorkspace( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitializeWorkspaceConfiguration( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspacesCount( 
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceName( 
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVl) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceId( 
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceFoldersCount( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceFolderName( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceFolderContentsCount( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceFolderImageData( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceFolderItemName( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceFolderItemFileExtension( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsWorkspaceFolderItemRemoteDesktop( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchWorkspaceItem( 
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ __RPC__in BSTR WkspItemName,
            /* [in] */ __RPC__in BSTR ActivationContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWorkspaceBrokerAxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWorkspaceBrokerAx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWorkspaceBrokerAx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWorkspaceBrokerAx * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetupWorkspace )( 
            __RPC__in IWorkspaceBrokerAx * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitializeWorkspaceConfiguration )( 
            __RPC__in IWorkspaceBrokerAx * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspacesCount )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceName )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVl);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceId )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFoldersCount )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderName )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderContentsCount )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderImageData )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderItemName )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderItemFileExtension )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWorkspaceFolderItemRemoteDesktop )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ LONG itr,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LaunchWorkspaceItem )( 
            __RPC__in IWorkspaceBrokerAx * This,
            /* [in] */ __RPC__in BSTR WkspId,
            /* [in] */ __RPC__in BSTR WkspFolder,
            /* [in] */ __RPC__in BSTR WkspItemName,
            /* [in] */ __RPC__in BSTR ActivationContext);
        
        END_INTERFACE
    } IWorkspaceBrokerAxVtbl;

    interface IWorkspaceBrokerAx
    {
        CONST_VTBL struct IWorkspaceBrokerAxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWorkspaceBrokerAx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorkspaceBrokerAx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWorkspaceBrokerAx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWorkspaceBrokerAx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWorkspaceBrokerAx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWorkspaceBrokerAx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWorkspaceBrokerAx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWorkspaceBrokerAx_SetupWorkspace(This)	\
    ( (This)->lpVtbl -> SetupWorkspace(This) ) 

#define IWorkspaceBrokerAx_InitializeWorkspaceConfiguration(This)	\
    ( (This)->lpVtbl -> InitializeWorkspaceConfiguration(This) ) 

#define IWorkspaceBrokerAx_get_WorkspacesCount(This,pVal)	\
    ( (This)->lpVtbl -> get_WorkspacesCount(This,pVal) ) 

#define IWorkspaceBrokerAx_get_WorkspaceName(This,itr,pVl)	\
    ( (This)->lpVtbl -> get_WorkspaceName(This,itr,pVl) ) 

#define IWorkspaceBrokerAx_get_WorkspaceId(This,itr,pVal)	\
    ( (This)->lpVtbl -> get_WorkspaceId(This,itr,pVal) ) 

#define IWorkspaceBrokerAx_get_WorkspaceFoldersCount(This,WkspId,pVal)	\
    ( (This)->lpVtbl -> get_WorkspaceFoldersCount(This,WkspId,pVal) ) 

#define IWorkspaceBrokerAx_get_WorkspaceFolderName(This,WkspId,itr,pVal)	\
    ( (This)->lpVtbl -> get_WorkspaceFolderName(This,WkspId,itr,pVal) ) 

#define IWorkspaceBrokerAx_get_WorkspaceFolderContentsCount(This,WkspId,WkspFolder,pVal)	\
    ( (This)->lpVtbl -> get_WorkspaceFolderContentsCount(This,WkspId,WkspFolder,pVal) ) 

#define IWorkspaceBrokerAx_get_WorkspaceFolderImageData(This,WkspId,WkspFolder,itr,pVal)	\
    ( (This)->lpVtbl -> get_WorkspaceFolderImageData(This,WkspId,WkspFolder,itr,pVal) ) 

#define IWorkspaceBrokerAx_get_WorkspaceFolderItemName(This,WkspId,WkspFolder,itr,pVal)	\
    ( (This)->lpVtbl -> get_WorkspaceFolderItemName(This,WkspId,WkspFolder,itr,pVal) ) 

#define IWorkspaceBrokerAx_get_WorkspaceFolderItemFileExtension(This,WkspId,WkspFolder,itr,pVal)	\
    ( (This)->lpVtbl -> get_WorkspaceFolderItemFileExtension(This,WkspId,WkspFolder,itr,pVal) ) 

#define IWorkspaceBrokerAx_get_IsWorkspaceFolderItemRemoteDesktop(This,WkspId,WkspFolder,itr,pVal)	\
    ( (This)->lpVtbl -> get_IsWorkspaceFolderItemRemoteDesktop(This,WkspId,WkspFolder,itr,pVal) ) 

#define IWorkspaceBrokerAx_LaunchWorkspaceItem(This,WkspId,WkspFolder,WkspItemName,ActivationContext)	\
    ( (This)->lpVtbl -> LaunchWorkspaceItem(This,WkspId,WkspFolder,WkspItemName,ActivationContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWorkspaceBrokerAx_INTERFACE_DEFINED__ */



#ifndef __wkspbkaxLib_LIBRARY_DEFINED__
#define __wkspbkaxLib_LIBRARY_DEFINED__

/* library wkspbkaxLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_wkspbkaxLib;

#ifndef ___IWorkspaceBrokerAxEvents_DISPINTERFACE_DEFINED__
#define ___IWorkspaceBrokerAxEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IWorkspaceBrokerAxEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IWorkspaceBrokerAxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7A3D0ADC-0CC4-473D-B327-D37886308F28")
    _IWorkspaceBrokerAxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IWorkspaceBrokerAxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in _IWorkspaceBrokerAxEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in _IWorkspaceBrokerAxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in _IWorkspaceBrokerAxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in _IWorkspaceBrokerAxEvents * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in _IWorkspaceBrokerAxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in _IWorkspaceBrokerAxEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IWorkspaceBrokerAxEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IWorkspaceBrokerAxEventsVtbl;

    interface _IWorkspaceBrokerAxEvents
    {
        CONST_VTBL struct _IWorkspaceBrokerAxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IWorkspaceBrokerAxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IWorkspaceBrokerAxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IWorkspaceBrokerAxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IWorkspaceBrokerAxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IWorkspaceBrokerAxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IWorkspaceBrokerAxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IWorkspaceBrokerAxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IWorkspaceBrokerAxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_WorkspaceBrokerAx;

#ifdef __cplusplus

class DECLSPEC_UUID("CD70A734-B6DB-4588-9813-FF2E37A4661F")
WorkspaceBrokerAx;
#endif
#endif /* __wkspbkaxLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_wkspbkax_0000_0002 */
/* [local] */ 

#endif //(NTDDI_VERSION >= NTDDI_WIN8)


extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


