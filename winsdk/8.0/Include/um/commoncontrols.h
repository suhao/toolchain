

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

#ifndef __commoncontrols_h__
#define __commoncontrols_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IImageList_FWD_DEFINED__
#define __IImageList_FWD_DEFINED__
typedef interface IImageList IImageList;

#endif 	/* __IImageList_FWD_DEFINED__ */


#ifndef __IImageList2_FWD_DEFINED__
#define __IImageList2_FWD_DEFINED__
typedef interface IImageList2 IImageList2;

#endif 	/* __IImageList2_FWD_DEFINED__ */


#ifndef __ImageList_FWD_DEFINED__
#define __ImageList_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageList ImageList;
#else
typedef struct ImageList ImageList;
#endif /* __cplusplus */

#endif 	/* __ImageList_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_commoncontrols_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#ifndef WINCOMMCTRLAPI
#if !defined(_COMCTL32_) && defined(_WIN32)
#define WINCOMMCTRLAPI DECLSPEC_IMPORT
#else
#define WINCOMMCTRLAPI
#endif
#endif // WINCOMMCTRLAPI
#ifdef MIDL_PASS
typedef DWORD RGBQUAD;

typedef IUnknown *HIMAGELIST;

typedef struct _IMAGELIST* HIMAGELIST;
typedef struct _IMAGELISTDRAWPARAMS
    {
    DWORD cbSize;
    HIMAGELIST himl;
    int i;
    HDC hdcDst;
    int x;
    int y;
    int cx;
    int cy;
    int xBitmap;
    int yBitmap;
    COLORREF rgbBk;
    COLORREF rgbFg;
    UINT fStyle;
    DWORD dwRop;
    DWORD fState;
    DWORD Frame;
    COLORREF crEffect;
    } 	IMAGELISTDRAWPARAMS;

typedef IMAGELISTDRAWPARAMS *LPIMAGELISTDRAWPARAMS;

typedef struct tagIMAGEINFO
    {
    HBITMAP hbmImage;
    HBITMAP hbmMask;
    int Unused1;
    int Unused2;
    RECT rcImage;
    } 	IMAGEINFO;

typedef IMAGEINFO *LPIMAGEINFO;

#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
WINCOMMCTRLAPI HRESULT WINAPI ImageList_CoCreateInstance(
         _In_  REFCLSID rclsid,
     _In_opt_  const IUnknown *punkOuter,
         _In_  REFIID riid,
  _Outptr_ void **ppv);
#endif
#define ILIF_ALPHA               0x00000001
#define ILIF_LOWQUALITY          0x00000002
#define ILDRF_IMAGELOWQUALITY    0x00000001
#define ILDRF_OVERLAYLOWQUALITY  0x00000010


extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0000_v0_0_s_ifspec;

#ifndef __IImageList_INTERFACE_DEFINED__
#define __IImageList_INTERFACE_DEFINED__

/* interface IImageList */
/* [object][local][uuid] */ 


EXTERN_C const IID IID_IImageList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46EB5926-582E-4017-9FDF-E8998DAA0950")
    IImageList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask,
            /* [annotation][out] */ 
            _Out_  int *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceIcon( 
            int i,
            /* [annotation][in] */ 
            _In_  HICON hicon,
            /* [annotation][out] */ 
            _Out_  int *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOverlayImage( 
            int iImage,
            int iOverlay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace( 
            int i,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddMasked( 
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            COLORREF crMask,
            /* [annotation][out] */ 
            _Out_  int *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [annotation][in] */ 
            _In_  IMAGELISTDRAWPARAMS *pimldp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            int i) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIcon( 
            int i,
            UINT flags,
            /* [annotation][out] */ 
            _Out_  HICON *picon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageInfo( 
            int i,
            /* [annotation][out] */ 
            _Out_  IMAGEINFO *pImageInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            int iDst,
            /* [annotation][in] */ 
            _In_  IUnknown *punkSrc,
            int iSrc,
            UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Merge( 
            int i1,
            /* [annotation][in] */ 
            _In_  IUnknown *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageRect( 
            int i,
            /* [annotation][out] */ 
            _Out_  RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconSize( 
            /* [annotation][out] */ 
            _Out_  int *cx,
            /* [annotation][out] */ 
            _Out_  int *cy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconSize( 
            int cx,
            int cy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageCount( 
            /* [annotation][out] */ 
            _Out_  int *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetImageCount( 
            UINT uNewCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBkColor( 
            COLORREF clrBk,
            /* [annotation][out] */ 
            _Out_  COLORREF *pclr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBkColor( 
            /* [annotation][out] */ 
            _Out_  COLORREF *pclr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDrag( 
            int iTrack,
            int dxHotspot,
            int dyHotspot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDrag( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragEnter( 
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndLock,
            int x,
            int y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragLeave( 
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndLock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragMove( 
            int x,
            int y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDragCursorImage( 
            /* [annotation][in] */ 
            _In_  IUnknown *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragShowNolock( 
            BOOL fShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDragImage( 
            /* [annotation][out] */ 
            _Out_opt_  POINT *ppt,
            /* [annotation][out] */ 
            _Out_opt_  POINT *pptHotspot,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemFlags( 
            int i,
            /* [annotation][out] */ 
            _Out_  DWORD *dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOverlayImage( 
            int iOverlay,
            /* [annotation][out] */ 
            _Out_  int *piIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IImageListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImageList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImageList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImageList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IImageList * This,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceIcon )( 
            IImageList * This,
            int i,
            /* [annotation][in] */ 
            _In_  HICON hicon,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *SetOverlayImage )( 
            IImageList * This,
            int iImage,
            int iOverlay);
        
        HRESULT ( STDMETHODCALLTYPE *Replace )( 
            IImageList * This,
            int i,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddMasked )( 
            IImageList * This,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            COLORREF crMask,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IImageList * This,
            /* [annotation][in] */ 
            _In_  IMAGELISTDRAWPARAMS *pimldp);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IImageList * This,
            int i);
        
        HRESULT ( STDMETHODCALLTYPE *GetIcon )( 
            IImageList * This,
            int i,
            UINT flags,
            /* [annotation][out] */ 
            _Out_  HICON *picon);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageInfo )( 
            IImageList * This,
            int i,
            /* [annotation][out] */ 
            _Out_  IMAGEINFO *pImageInfo);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IImageList * This,
            int iDst,
            /* [annotation][in] */ 
            _In_  IUnknown *punkSrc,
            int iSrc,
            UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Merge )( 
            IImageList * This,
            int i1,
            /* [annotation][in] */ 
            _In_  IUnknown *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IImageList * This,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageRect )( 
            IImageList * This,
            int i,
            /* [annotation][out] */ 
            _Out_  RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconSize )( 
            IImageList * This,
            /* [annotation][out] */ 
            _Out_  int *cx,
            /* [annotation][out] */ 
            _Out_  int *cy);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconSize )( 
            IImageList * This,
            int cx,
            int cy);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageCount )( 
            IImageList * This,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *SetImageCount )( 
            IImageList * This,
            UINT uNewCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetBkColor )( 
            IImageList * This,
            COLORREF clrBk,
            /* [annotation][out] */ 
            _Out_  COLORREF *pclr);
        
        HRESULT ( STDMETHODCALLTYPE *GetBkColor )( 
            IImageList * This,
            /* [annotation][out] */ 
            _Out_  COLORREF *pclr);
        
        HRESULT ( STDMETHODCALLTYPE *BeginDrag )( 
            IImageList * This,
            int iTrack,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE *EndDrag )( 
            IImageList * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragEnter )( 
            IImageList * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndLock,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE *DragLeave )( 
            IImageList * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndLock);
        
        HRESULT ( STDMETHODCALLTYPE *DragMove )( 
            IImageList * This,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE *SetDragCursorImage )( 
            IImageList * This,
            /* [annotation][in] */ 
            _In_  IUnknown *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE *DragShowNolock )( 
            IImageList * This,
            BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *GetDragImage )( 
            IImageList * This,
            /* [annotation][out] */ 
            _Out_opt_  POINT *ppt,
            /* [annotation][out] */ 
            _Out_opt_  POINT *pptHotspot,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemFlags )( 
            IImageList * This,
            int i,
            /* [annotation][out] */ 
            _Out_  DWORD *dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetOverlayImage )( 
            IImageList * This,
            int iOverlay,
            /* [annotation][out] */ 
            _Out_  int *piIndex);
        
        END_INTERFACE
    } IImageListVtbl;

    interface IImageList
    {
        CONST_VTBL struct IImageListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImageList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImageList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImageList_Add(This,hbmImage,hbmMask,pi)	\
    ( (This)->lpVtbl -> Add(This,hbmImage,hbmMask,pi) ) 

#define IImageList_ReplaceIcon(This,i,hicon,pi)	\
    ( (This)->lpVtbl -> ReplaceIcon(This,i,hicon,pi) ) 

#define IImageList_SetOverlayImage(This,iImage,iOverlay)	\
    ( (This)->lpVtbl -> SetOverlayImage(This,iImage,iOverlay) ) 

#define IImageList_Replace(This,i,hbmImage,hbmMask)	\
    ( (This)->lpVtbl -> Replace(This,i,hbmImage,hbmMask) ) 

#define IImageList_AddMasked(This,hbmImage,crMask,pi)	\
    ( (This)->lpVtbl -> AddMasked(This,hbmImage,crMask,pi) ) 

#define IImageList_Draw(This,pimldp)	\
    ( (This)->lpVtbl -> Draw(This,pimldp) ) 

#define IImageList_Remove(This,i)	\
    ( (This)->lpVtbl -> Remove(This,i) ) 

#define IImageList_GetIcon(This,i,flags,picon)	\
    ( (This)->lpVtbl -> GetIcon(This,i,flags,picon) ) 

#define IImageList_GetImageInfo(This,i,pImageInfo)	\
    ( (This)->lpVtbl -> GetImageInfo(This,i,pImageInfo) ) 

#define IImageList_Copy(This,iDst,punkSrc,iSrc,uFlags)	\
    ( (This)->lpVtbl -> Copy(This,iDst,punkSrc,iSrc,uFlags) ) 

#define IImageList_Merge(This,i1,punk2,i2,dx,dy,riid,ppv)	\
    ( (This)->lpVtbl -> Merge(This,i1,punk2,i2,dx,dy,riid,ppv) ) 

#define IImageList_Clone(This,riid,ppv)	\
    ( (This)->lpVtbl -> Clone(This,riid,ppv) ) 

#define IImageList_GetImageRect(This,i,prc)	\
    ( (This)->lpVtbl -> GetImageRect(This,i,prc) ) 

#define IImageList_GetIconSize(This,cx,cy)	\
    ( (This)->lpVtbl -> GetIconSize(This,cx,cy) ) 

#define IImageList_SetIconSize(This,cx,cy)	\
    ( (This)->lpVtbl -> SetIconSize(This,cx,cy) ) 

#define IImageList_GetImageCount(This,pi)	\
    ( (This)->lpVtbl -> GetImageCount(This,pi) ) 

#define IImageList_SetImageCount(This,uNewCount)	\
    ( (This)->lpVtbl -> SetImageCount(This,uNewCount) ) 

#define IImageList_SetBkColor(This,clrBk,pclr)	\
    ( (This)->lpVtbl -> SetBkColor(This,clrBk,pclr) ) 

#define IImageList_GetBkColor(This,pclr)	\
    ( (This)->lpVtbl -> GetBkColor(This,pclr) ) 

#define IImageList_BeginDrag(This,iTrack,dxHotspot,dyHotspot)	\
    ( (This)->lpVtbl -> BeginDrag(This,iTrack,dxHotspot,dyHotspot) ) 

#define IImageList_EndDrag(This)	\
    ( (This)->lpVtbl -> EndDrag(This) ) 

#define IImageList_DragEnter(This,hwndLock,x,y)	\
    ( (This)->lpVtbl -> DragEnter(This,hwndLock,x,y) ) 

#define IImageList_DragLeave(This,hwndLock)	\
    ( (This)->lpVtbl -> DragLeave(This,hwndLock) ) 

#define IImageList_DragMove(This,x,y)	\
    ( (This)->lpVtbl -> DragMove(This,x,y) ) 

#define IImageList_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)	\
    ( (This)->lpVtbl -> SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) ) 

#define IImageList_DragShowNolock(This,fShow)	\
    ( (This)->lpVtbl -> DragShowNolock(This,fShow) ) 

#define IImageList_GetDragImage(This,ppt,pptHotspot,riid,ppv)	\
    ( (This)->lpVtbl -> GetDragImage(This,ppt,pptHotspot,riid,ppv) ) 

#define IImageList_GetItemFlags(This,i,dwFlags)	\
    ( (This)->lpVtbl -> GetItemFlags(This,i,dwFlags) ) 

#define IImageList_GetOverlayImage(This,iOverlay,piIndex)	\
    ( (This)->lpVtbl -> GetOverlayImage(This,iOverlay,piIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_commoncontrols_0000_0001 */
/* [local] */ 

#define ILR_DEFAULT                  0x0000
#define ILR_HORIZONTAL_LEFT          0x0000
#define ILR_HORIZONTAL_CENTER        0x0001
#define ILR_HORIZONTAL_RIGHT         0x0002
#define ILR_VERTICAL_TOP             0x0000
#define ILR_VERTICAL_CENTER          0x0010
#define ILR_VERTICAL_BOTTOM          0x0020
#define ILR_SCALE_CLIP               0x0000
#define ILR_SCALE_ASPECTRATIO        0x0100


extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0001_v0_0_s_ifspec;

#ifndef __IImageList2_INTERFACE_DEFINED__
#define __IImageList2_INTERFACE_DEFINED__

/* interface IImageList2 */
/* [object][local][uuid] */ 

#define ILGOS_ALWAYS         0x00000000
#define ILGOS_FROMSTANDBY    0x00000001
#define ILFIP_ALWAYS         0x00000000
#define ILFIP_FROMSTANDBY    0x00000001
#define ILDI_PURGE       0x00000001
#define ILDI_STANDBY     0x00000002
#define ILDI_RESETACCESS 0x00000004
#define ILDI_QUERYACCESS 0x00000008
typedef struct tagIMAGELISTSTATS
    {
    DWORD cbSize;
    int cAlloc;
    int cUsed;
    int cStandby;
    } 	IMAGELISTSTATS;


EXTERN_C const IID IID_IImageList2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("192b9d83-50fc-457b-90a0-2b82a8b5dae1")
    IImageList2 : public IImageList
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Resize( 
            int cxNewIconSize,
            int cyNewIconSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOriginalSize( 
            /* [in] */ int iImage,
            /* [in] */ DWORD dwFlags,
            /* [annotation][out] */ 
            _Out_  int *pcx,
            /* [annotation][out] */ 
            _Out_  int *pcy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOriginalSize( 
            /* [in] */ int iImage,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCallback( 
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCallback( 
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ForceImagePresent( 
            /* [in] */ int iImage,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DiscardImages( 
            /* [in] */ int iFirstImage,
            /* [in] */ int iLastImage,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreloadImages( 
            /* [annotation][in] */ 
            _In_  IMAGELISTDRAWPARAMS *pimldp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatistics( 
            /* [annotation][out][in] */ 
            _Inout_  IMAGELISTSTATS *pils) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ UINT flags,
            /* [in] */ int cInitial,
            /* [in] */ int cGrow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace2( 
            /* [in] */ int i,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punk,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceFromImageList( 
            /* [in] */ int i,
            /* [annotation][in] */ 
            _In_  IImageList *pil,
            /* [in] */ int iSrc,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punk,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IImageList2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImageList2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImageList2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImageList2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IImageList2 * This,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceIcon )( 
            IImageList2 * This,
            int i,
            /* [annotation][in] */ 
            _In_  HICON hicon,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *SetOverlayImage )( 
            IImageList2 * This,
            int iImage,
            int iOverlay);
        
        HRESULT ( STDMETHODCALLTYPE *Replace )( 
            IImageList2 * This,
            int i,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddMasked )( 
            IImageList2 * This,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            COLORREF crMask,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IImageList2 * This,
            /* [annotation][in] */ 
            _In_  IMAGELISTDRAWPARAMS *pimldp);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IImageList2 * This,
            int i);
        
        HRESULT ( STDMETHODCALLTYPE *GetIcon )( 
            IImageList2 * This,
            int i,
            UINT flags,
            /* [annotation][out] */ 
            _Out_  HICON *picon);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageInfo )( 
            IImageList2 * This,
            int i,
            /* [annotation][out] */ 
            _Out_  IMAGEINFO *pImageInfo);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IImageList2 * This,
            int iDst,
            /* [annotation][in] */ 
            _In_  IUnknown *punkSrc,
            int iSrc,
            UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Merge )( 
            IImageList2 * This,
            int i1,
            /* [annotation][in] */ 
            _In_  IUnknown *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IImageList2 * This,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageRect )( 
            IImageList2 * This,
            int i,
            /* [annotation][out] */ 
            _Out_  RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconSize )( 
            IImageList2 * This,
            /* [annotation][out] */ 
            _Out_  int *cx,
            /* [annotation][out] */ 
            _Out_  int *cy);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconSize )( 
            IImageList2 * This,
            int cx,
            int cy);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageCount )( 
            IImageList2 * This,
            /* [annotation][out] */ 
            _Out_  int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *SetImageCount )( 
            IImageList2 * This,
            UINT uNewCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetBkColor )( 
            IImageList2 * This,
            COLORREF clrBk,
            /* [annotation][out] */ 
            _Out_  COLORREF *pclr);
        
        HRESULT ( STDMETHODCALLTYPE *GetBkColor )( 
            IImageList2 * This,
            /* [annotation][out] */ 
            _Out_  COLORREF *pclr);
        
        HRESULT ( STDMETHODCALLTYPE *BeginDrag )( 
            IImageList2 * This,
            int iTrack,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE *EndDrag )( 
            IImageList2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragEnter )( 
            IImageList2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndLock,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE *DragLeave )( 
            IImageList2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndLock);
        
        HRESULT ( STDMETHODCALLTYPE *DragMove )( 
            IImageList2 * This,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE *SetDragCursorImage )( 
            IImageList2 * This,
            /* [annotation][in] */ 
            _In_  IUnknown *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE *DragShowNolock )( 
            IImageList2 * This,
            BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *GetDragImage )( 
            IImageList2 * This,
            /* [annotation][out] */ 
            _Out_opt_  POINT *ppt,
            /* [annotation][out] */ 
            _Out_opt_  POINT *pptHotspot,
            REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemFlags )( 
            IImageList2 * This,
            int i,
            /* [annotation][out] */ 
            _Out_  DWORD *dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetOverlayImage )( 
            IImageList2 * This,
            int iOverlay,
            /* [annotation][out] */ 
            _Out_  int *piIndex);
        
        HRESULT ( STDMETHODCALLTYPE *Resize )( 
            IImageList2 * This,
            int cxNewIconSize,
            int cyNewIconSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetOriginalSize )( 
            IImageList2 * This,
            /* [in] */ int iImage,
            /* [in] */ DWORD dwFlags,
            /* [annotation][out] */ 
            _Out_  int *pcx,
            /* [annotation][out] */ 
            _Out_  int *pcy);
        
        HRESULT ( STDMETHODCALLTYPE *SetOriginalSize )( 
            IImageList2 * This,
            /* [in] */ int iImage,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        HRESULT ( STDMETHODCALLTYPE *SetCallback )( 
            IImageList2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punk);
        
        HRESULT ( STDMETHODCALLTYPE *GetCallback )( 
            IImageList2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *ForceImagePresent )( 
            IImageList2 * This,
            /* [in] */ int iImage,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *DiscardImages )( 
            IImageList2 * This,
            /* [in] */ int iFirstImage,
            /* [in] */ int iLastImage,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *PreloadImages )( 
            IImageList2 * This,
            /* [annotation][in] */ 
            _In_  IMAGELISTDRAWPARAMS *pimldp);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )( 
            IImageList2 * This,
            /* [annotation][out][in] */ 
            _Inout_  IMAGELISTSTATS *pils);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IImageList2 * This,
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ UINT flags,
            /* [in] */ int cInitial,
            /* [in] */ int cGrow);
        
        HRESULT ( STDMETHODCALLTYPE *Replace2 )( 
            IImageList2 * This,
            /* [in] */ int i,
            /* [annotation][in] */ 
            _In_  HBITMAP hbmImage,
            /* [annotation][unique][in] */ 
            _In_opt_  HBITMAP hbmMask,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punk,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceFromImageList )( 
            IImageList2 * This,
            /* [in] */ int i,
            /* [annotation][in] */ 
            _In_  IImageList *pil,
            /* [in] */ int iSrc,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punk,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IImageList2Vtbl;

    interface IImageList2
    {
        CONST_VTBL struct IImageList2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageList2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImageList2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImageList2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImageList2_Add(This,hbmImage,hbmMask,pi)	\
    ( (This)->lpVtbl -> Add(This,hbmImage,hbmMask,pi) ) 

#define IImageList2_ReplaceIcon(This,i,hicon,pi)	\
    ( (This)->lpVtbl -> ReplaceIcon(This,i,hicon,pi) ) 

#define IImageList2_SetOverlayImage(This,iImage,iOverlay)	\
    ( (This)->lpVtbl -> SetOverlayImage(This,iImage,iOverlay) ) 

#define IImageList2_Replace(This,i,hbmImage,hbmMask)	\
    ( (This)->lpVtbl -> Replace(This,i,hbmImage,hbmMask) ) 

#define IImageList2_AddMasked(This,hbmImage,crMask,pi)	\
    ( (This)->lpVtbl -> AddMasked(This,hbmImage,crMask,pi) ) 

#define IImageList2_Draw(This,pimldp)	\
    ( (This)->lpVtbl -> Draw(This,pimldp) ) 

#define IImageList2_Remove(This,i)	\
    ( (This)->lpVtbl -> Remove(This,i) ) 

#define IImageList2_GetIcon(This,i,flags,picon)	\
    ( (This)->lpVtbl -> GetIcon(This,i,flags,picon) ) 

#define IImageList2_GetImageInfo(This,i,pImageInfo)	\
    ( (This)->lpVtbl -> GetImageInfo(This,i,pImageInfo) ) 

#define IImageList2_Copy(This,iDst,punkSrc,iSrc,uFlags)	\
    ( (This)->lpVtbl -> Copy(This,iDst,punkSrc,iSrc,uFlags) ) 

#define IImageList2_Merge(This,i1,punk2,i2,dx,dy,riid,ppv)	\
    ( (This)->lpVtbl -> Merge(This,i1,punk2,i2,dx,dy,riid,ppv) ) 

#define IImageList2_Clone(This,riid,ppv)	\
    ( (This)->lpVtbl -> Clone(This,riid,ppv) ) 

#define IImageList2_GetImageRect(This,i,prc)	\
    ( (This)->lpVtbl -> GetImageRect(This,i,prc) ) 

#define IImageList2_GetIconSize(This,cx,cy)	\
    ( (This)->lpVtbl -> GetIconSize(This,cx,cy) ) 

#define IImageList2_SetIconSize(This,cx,cy)	\
    ( (This)->lpVtbl -> SetIconSize(This,cx,cy) ) 

#define IImageList2_GetImageCount(This,pi)	\
    ( (This)->lpVtbl -> GetImageCount(This,pi) ) 

#define IImageList2_SetImageCount(This,uNewCount)	\
    ( (This)->lpVtbl -> SetImageCount(This,uNewCount) ) 

#define IImageList2_SetBkColor(This,clrBk,pclr)	\
    ( (This)->lpVtbl -> SetBkColor(This,clrBk,pclr) ) 

#define IImageList2_GetBkColor(This,pclr)	\
    ( (This)->lpVtbl -> GetBkColor(This,pclr) ) 

#define IImageList2_BeginDrag(This,iTrack,dxHotspot,dyHotspot)	\
    ( (This)->lpVtbl -> BeginDrag(This,iTrack,dxHotspot,dyHotspot) ) 

#define IImageList2_EndDrag(This)	\
    ( (This)->lpVtbl -> EndDrag(This) ) 

#define IImageList2_DragEnter(This,hwndLock,x,y)	\
    ( (This)->lpVtbl -> DragEnter(This,hwndLock,x,y) ) 

#define IImageList2_DragLeave(This,hwndLock)	\
    ( (This)->lpVtbl -> DragLeave(This,hwndLock) ) 

#define IImageList2_DragMove(This,x,y)	\
    ( (This)->lpVtbl -> DragMove(This,x,y) ) 

#define IImageList2_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)	\
    ( (This)->lpVtbl -> SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) ) 

#define IImageList2_DragShowNolock(This,fShow)	\
    ( (This)->lpVtbl -> DragShowNolock(This,fShow) ) 

#define IImageList2_GetDragImage(This,ppt,pptHotspot,riid,ppv)	\
    ( (This)->lpVtbl -> GetDragImage(This,ppt,pptHotspot,riid,ppv) ) 

#define IImageList2_GetItemFlags(This,i,dwFlags)	\
    ( (This)->lpVtbl -> GetItemFlags(This,i,dwFlags) ) 

#define IImageList2_GetOverlayImage(This,iOverlay,piIndex)	\
    ( (This)->lpVtbl -> GetOverlayImage(This,iOverlay,piIndex) ) 


#define IImageList2_Resize(This,cxNewIconSize,cyNewIconSize)	\
    ( (This)->lpVtbl -> Resize(This,cxNewIconSize,cyNewIconSize) ) 

#define IImageList2_GetOriginalSize(This,iImage,dwFlags,pcx,pcy)	\
    ( (This)->lpVtbl -> GetOriginalSize(This,iImage,dwFlags,pcx,pcy) ) 

#define IImageList2_SetOriginalSize(This,iImage,cx,cy)	\
    ( (This)->lpVtbl -> SetOriginalSize(This,iImage,cx,cy) ) 

#define IImageList2_SetCallback(This,punk)	\
    ( (This)->lpVtbl -> SetCallback(This,punk) ) 

#define IImageList2_GetCallback(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetCallback(This,riid,ppv) ) 

#define IImageList2_ForceImagePresent(This,iImage,dwFlags)	\
    ( (This)->lpVtbl -> ForceImagePresent(This,iImage,dwFlags) ) 

#define IImageList2_DiscardImages(This,iFirstImage,iLastImage,dwFlags)	\
    ( (This)->lpVtbl -> DiscardImages(This,iFirstImage,iLastImage,dwFlags) ) 

#define IImageList2_PreloadImages(This,pimldp)	\
    ( (This)->lpVtbl -> PreloadImages(This,pimldp) ) 

#define IImageList2_GetStatistics(This,pils)	\
    ( (This)->lpVtbl -> GetStatistics(This,pils) ) 

#define IImageList2_Initialize(This,cx,cy,flags,cInitial,cGrow)	\
    ( (This)->lpVtbl -> Initialize(This,cx,cy,flags,cInitial,cGrow) ) 

#define IImageList2_Replace2(This,i,hbmImage,hbmMask,punk,dwFlags)	\
    ( (This)->lpVtbl -> Replace2(This,i,hbmImage,hbmMask,punk,dwFlags) ) 

#define IImageList2_ReplaceFromImageList(This,i,pil,iSrc,punk,dwFlags)	\
    ( (This)->lpVtbl -> ReplaceFromImageList(This,i,pil,iSrc,punk,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageList2_INTERFACE_DEFINED__ */



#ifndef __CommonControlObjects_LIBRARY_DEFINED__
#define __CommonControlObjects_LIBRARY_DEFINED__

/* library CommonControlObjects */
/* [uuid] */ 


EXTERN_C const IID LIBID_CommonControlObjects;

EXTERN_C const CLSID CLSID_ImageList;

#ifdef __cplusplus

class DECLSPEC_UUID("7C476BA2-02B1-48f4-8048-B24619DDC058")
ImageList;
#endif
#endif /* __CommonControlObjects_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_commoncontrols_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_commoncontrols_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


