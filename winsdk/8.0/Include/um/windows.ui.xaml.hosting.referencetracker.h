

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

#ifndef __windows2Eui2Examl2Ehosting2Ereferencetracker_h__
#define __windows2Eui2Examl2Ehosting2Ereferencetracker_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IReferenceTrackerTarget_FWD_DEFINED__
#define __IReferenceTrackerTarget_FWD_DEFINED__
typedef interface IReferenceTrackerTarget IReferenceTrackerTarget;

#endif 	/* __IReferenceTrackerTarget_FWD_DEFINED__ */


#ifndef __IReferenceTracker_FWD_DEFINED__
#define __IReferenceTracker_FWD_DEFINED__
typedef interface IReferenceTracker IReferenceTracker;

#endif 	/* __IReferenceTracker_FWD_DEFINED__ */


#ifndef __IReferenceTrackerManager_FWD_DEFINED__
#define __IReferenceTrackerManager_FWD_DEFINED__
typedef interface IReferenceTrackerManager IReferenceTrackerManager;

#endif 	/* __IReferenceTrackerManager_FWD_DEFINED__ */


#ifndef __IFindReferenceTargetsCallback_FWD_DEFINED__
#define __IFindReferenceTargetsCallback_FWD_DEFINED__
typedef interface IFindReferenceTargetsCallback IFindReferenceTargetsCallback;

#endif 	/* __IFindReferenceTargetsCallback_FWD_DEFINED__ */


#ifndef __IReferenceTrackerHost_FWD_DEFINED__
#define __IReferenceTrackerHost_FWD_DEFINED__
typedef interface IReferenceTrackerHost IReferenceTrackerHost;

#endif 	/* __IReferenceTrackerHost_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0000 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WIN8)





extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0000_v0_0_s_ifspec;

#ifndef __IReferenceTrackerTarget_INTERFACE_DEFINED__
#define __IReferenceTrackerTarget_INTERFACE_DEFINED__

/* interface IReferenceTrackerTarget */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IReferenceTrackerTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64bd43f8-bfee-4ec4-b7eb-2935158dae21")
    IReferenceTrackerTarget : public IUnknown
    {
    public:
        virtual ULONG STDMETHODCALLTYPE AddRefFromReferenceTracker( void) = 0;
        
        virtual ULONG STDMETHODCALLTYPE ReleaseFromReferenceTracker( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Peg( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unpeg( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReferenceTrackerTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReferenceTrackerTarget * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReferenceTrackerTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReferenceTrackerTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *AddRefFromReferenceTracker )( 
            IReferenceTrackerTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *ReleaseFromReferenceTracker )( 
            IReferenceTrackerTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *Peg )( 
            IReferenceTrackerTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *Unpeg )( 
            IReferenceTrackerTarget * This);
        
        END_INTERFACE
    } IReferenceTrackerTargetVtbl;

    interface IReferenceTrackerTarget
    {
        CONST_VTBL struct IReferenceTrackerTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferenceTrackerTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReferenceTrackerTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReferenceTrackerTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReferenceTrackerTarget_AddRefFromReferenceTracker(This)	\
    ( (This)->lpVtbl -> AddRefFromReferenceTracker(This) ) 

#define IReferenceTrackerTarget_ReleaseFromReferenceTracker(This)	\
    ( (This)->lpVtbl -> ReleaseFromReferenceTracker(This) ) 

#define IReferenceTrackerTarget_Peg(This)	\
    ( (This)->lpVtbl -> Peg(This) ) 

#define IReferenceTrackerTarget_Unpeg(This)	\
    ( (This)->lpVtbl -> Unpeg(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReferenceTrackerTarget_INTERFACE_DEFINED__ */


#ifndef __IReferenceTracker_INTERFACE_DEFINED__
#define __IReferenceTracker_INTERFACE_DEFINED__

/* interface IReferenceTracker */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IReferenceTracker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11d3b13a-180e-4789-a8be-7712882893e6")
    IReferenceTracker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectFromTrackerSource( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisconnectFromTrackerSource( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindTrackerTargets( 
            /* [annotation][in] */ 
            _In_  IFindReferenceTargetsCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReferenceTrackerManager( 
            /* [annotation][out] */ 
            _Out_  IReferenceTrackerManager **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRefFromTrackerSource( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseFromTrackerSource( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PegFromTrackerSource( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReferenceTrackerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReferenceTracker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReferenceTracker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReferenceTracker * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectFromTrackerSource )( 
            IReferenceTracker * This);
        
        HRESULT ( STDMETHODCALLTYPE *DisconnectFromTrackerSource )( 
            IReferenceTracker * This);
        
        HRESULT ( STDMETHODCALLTYPE *FindTrackerTargets )( 
            IReferenceTracker * This,
            /* [annotation][in] */ 
            _In_  IFindReferenceTargetsCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *GetReferenceTrackerManager )( 
            IReferenceTracker * This,
            /* [annotation][out] */ 
            _Out_  IReferenceTrackerManager **value);
        
        HRESULT ( STDMETHODCALLTYPE *AddRefFromTrackerSource )( 
            IReferenceTracker * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseFromTrackerSource )( 
            IReferenceTracker * This);
        
        HRESULT ( STDMETHODCALLTYPE *PegFromTrackerSource )( 
            IReferenceTracker * This);
        
        END_INTERFACE
    } IReferenceTrackerVtbl;

    interface IReferenceTracker
    {
        CONST_VTBL struct IReferenceTrackerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferenceTracker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReferenceTracker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReferenceTracker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReferenceTracker_ConnectFromTrackerSource(This)	\
    ( (This)->lpVtbl -> ConnectFromTrackerSource(This) ) 

#define IReferenceTracker_DisconnectFromTrackerSource(This)	\
    ( (This)->lpVtbl -> DisconnectFromTrackerSource(This) ) 

#define IReferenceTracker_FindTrackerTargets(This,callback)	\
    ( (This)->lpVtbl -> FindTrackerTargets(This,callback) ) 

#define IReferenceTracker_GetReferenceTrackerManager(This,value)	\
    ( (This)->lpVtbl -> GetReferenceTrackerManager(This,value) ) 

#define IReferenceTracker_AddRefFromTrackerSource(This)	\
    ( (This)->lpVtbl -> AddRefFromTrackerSource(This) ) 

#define IReferenceTracker_ReleaseFromTrackerSource(This)	\
    ( (This)->lpVtbl -> ReleaseFromTrackerSource(This) ) 

#define IReferenceTracker_PegFromTrackerSource(This)	\
    ( (This)->lpVtbl -> PegFromTrackerSource(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReferenceTracker_INTERFACE_DEFINED__ */


#ifndef __IReferenceTrackerManager_INTERFACE_DEFINED__
#define __IReferenceTrackerManager_INTERFACE_DEFINED__

/* interface IReferenceTrackerManager */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IReferenceTrackerManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3cf184b4-7ccb-4dda-8455-7e6ce99a3298")
    IReferenceTrackerManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReferenceTrackingStarted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindTrackerTargetsCompleted( 
            /* [annotation][in] */ 
            _In_  boolean findFailed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReferenceTrackingCompleted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReferenceTrackerHost( 
            /* [annotation][in] */ 
            _In_  IReferenceTrackerHost *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReferenceTrackerManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReferenceTrackerManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReferenceTrackerManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReferenceTrackerManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReferenceTrackingStarted )( 
            IReferenceTrackerManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *FindTrackerTargetsCompleted )( 
            IReferenceTrackerManager * This,
            /* [annotation][in] */ 
            _In_  boolean findFailed);
        
        HRESULT ( STDMETHODCALLTYPE *ReferenceTrackingCompleted )( 
            IReferenceTrackerManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferenceTrackerHost )( 
            IReferenceTrackerManager * This,
            /* [annotation][in] */ 
            _In_  IReferenceTrackerHost *value);
        
        END_INTERFACE
    } IReferenceTrackerManagerVtbl;

    interface IReferenceTrackerManager
    {
        CONST_VTBL struct IReferenceTrackerManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferenceTrackerManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReferenceTrackerManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReferenceTrackerManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReferenceTrackerManager_ReferenceTrackingStarted(This)	\
    ( (This)->lpVtbl -> ReferenceTrackingStarted(This) ) 

#define IReferenceTrackerManager_FindTrackerTargetsCompleted(This,findFailed)	\
    ( (This)->lpVtbl -> FindTrackerTargetsCompleted(This,findFailed) ) 

#define IReferenceTrackerManager_ReferenceTrackingCompleted(This)	\
    ( (This)->lpVtbl -> ReferenceTrackingCompleted(This) ) 

#define IReferenceTrackerManager_SetReferenceTrackerHost(This,value)	\
    ( (This)->lpVtbl -> SetReferenceTrackerHost(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReferenceTrackerManager_INTERFACE_DEFINED__ */


#ifndef __IFindReferenceTargetsCallback_INTERFACE_DEFINED__
#define __IFindReferenceTargetsCallback_INTERFACE_DEFINED__

/* interface IFindReferenceTargetsCallback */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IFindReferenceTargetsCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04b3486c-4687-4229-8d14-505ab584dd88")
    IFindReferenceTargetsCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FoundTrackerTarget( 
            /* [annotation][in] */ 
            _In_  IReferenceTrackerTarget *target) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFindReferenceTargetsCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFindReferenceTargetsCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFindReferenceTargetsCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFindReferenceTargetsCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *FoundTrackerTarget )( 
            IFindReferenceTargetsCallback * This,
            /* [annotation][in] */ 
            _In_  IReferenceTrackerTarget *target);
        
        END_INTERFACE
    } IFindReferenceTargetsCallbackVtbl;

    interface IFindReferenceTargetsCallback
    {
        CONST_VTBL struct IFindReferenceTargetsCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFindReferenceTargetsCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFindReferenceTargetsCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFindReferenceTargetsCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFindReferenceTargetsCallback_FoundTrackerTarget(This,target)	\
    ( (This)->lpVtbl -> FoundTrackerTarget(This,target) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFindReferenceTargetsCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0004 */
/* [local] */ 

typedef /* [public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0004_0001
    {
        XAML_REFERENCETRACKER_DISCONNECT_DEFAULT	= 0,
        XAML_REFERENCETRACKER_DISCONNECT_SUSPEND	= 1
    } 	XAML_REFERENCETRACKER_DISCONNECT;



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0004_v0_0_s_ifspec;

#ifndef __IReferenceTrackerHost_INTERFACE_DEFINED__
#define __IReferenceTrackerHost_INTERFACE_DEFINED__

/* interface IReferenceTrackerHost */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IReferenceTrackerHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("29a71c6a-3c42-4416-a39d-e2825a07a773")
    IReferenceTrackerHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DisconnectUnusedReferenceSources( 
            /* [in] */ XAML_REFERENCETRACKER_DISCONNECT options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseDisconnectedReferenceSources( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyEndOfReferenceTrackingOnThread( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTrackerTarget( 
            IUnknown *unknown,
            IReferenceTrackerTarget **newReference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddMemoryPressure( 
            UINT64 bytesAllocated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveMemoryPressure( 
            UINT64 bytesAllocated) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReferenceTrackerHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReferenceTrackerHost * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReferenceTrackerHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReferenceTrackerHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *DisconnectUnusedReferenceSources )( 
            IReferenceTrackerHost * This,
            /* [in] */ XAML_REFERENCETRACKER_DISCONNECT options);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseDisconnectedReferenceSources )( 
            IReferenceTrackerHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyEndOfReferenceTrackingOnThread )( 
            IReferenceTrackerHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrackerTarget )( 
            IReferenceTrackerHost * This,
            IUnknown *unknown,
            IReferenceTrackerTarget **newReference);
        
        HRESULT ( STDMETHODCALLTYPE *AddMemoryPressure )( 
            IReferenceTrackerHost * This,
            UINT64 bytesAllocated);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveMemoryPressure )( 
            IReferenceTrackerHost * This,
            UINT64 bytesAllocated);
        
        END_INTERFACE
    } IReferenceTrackerHostVtbl;

    interface IReferenceTrackerHost
    {
        CONST_VTBL struct IReferenceTrackerHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferenceTrackerHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReferenceTrackerHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReferenceTrackerHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReferenceTrackerHost_DisconnectUnusedReferenceSources(This,options)	\
    ( (This)->lpVtbl -> DisconnectUnusedReferenceSources(This,options) ) 

#define IReferenceTrackerHost_ReleaseDisconnectedReferenceSources(This)	\
    ( (This)->lpVtbl -> ReleaseDisconnectedReferenceSources(This) ) 

#define IReferenceTrackerHost_NotifyEndOfReferenceTrackingOnThread(This)	\
    ( (This)->lpVtbl -> NotifyEndOfReferenceTrackingOnThread(This) ) 

#define IReferenceTrackerHost_GetTrackerTarget(This,unknown,newReference)	\
    ( (This)->lpVtbl -> GetTrackerTarget(This,unknown,newReference) ) 

#define IReferenceTrackerHost_AddMemoryPressure(This,bytesAllocated)	\
    ( (This)->lpVtbl -> AddMemoryPressure(This,bytesAllocated) ) 

#define IReferenceTrackerHost_RemoveMemoryPressure(This,bytesAllocated)	\
    ( (This)->lpVtbl -> RemoveMemoryPressure(This,bytesAllocated) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReferenceTrackerHost_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0005 */
/* [local] */ 

#endif // NTDDI_VERSION >= NTDDI_WIN8


extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0005_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


