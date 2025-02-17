

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


#ifndef __appxpackaging_h__
#define __appxpackaging_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAppxPackageWriter_FWD_DEFINED__
#define __IAppxPackageWriter_FWD_DEFINED__
typedef interface IAppxPackageWriter IAppxPackageWriter;

#endif 	/* __IAppxPackageWriter_FWD_DEFINED__ */


#ifndef __IAppxPackageReader_FWD_DEFINED__
#define __IAppxPackageReader_FWD_DEFINED__
typedef interface IAppxPackageReader IAppxPackageReader;

#endif 	/* __IAppxPackageReader_FWD_DEFINED__ */


#ifndef __IAppxFile_FWD_DEFINED__
#define __IAppxFile_FWD_DEFINED__
typedef interface IAppxFile IAppxFile;

#endif 	/* __IAppxFile_FWD_DEFINED__ */


#ifndef __IAppxFilesEnumerator_FWD_DEFINED__
#define __IAppxFilesEnumerator_FWD_DEFINED__
typedef interface IAppxFilesEnumerator IAppxFilesEnumerator;

#endif 	/* __IAppxFilesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxBlockMapReader_FWD_DEFINED__
#define __IAppxBlockMapReader_FWD_DEFINED__
typedef interface IAppxBlockMapReader IAppxBlockMapReader;

#endif 	/* __IAppxBlockMapReader_FWD_DEFINED__ */


#ifndef __IAppxBlockMapFile_FWD_DEFINED__
#define __IAppxBlockMapFile_FWD_DEFINED__
typedef interface IAppxBlockMapFile IAppxBlockMapFile;

#endif 	/* __IAppxBlockMapFile_FWD_DEFINED__ */


#ifndef __IAppxBlockMapFilesEnumerator_FWD_DEFINED__
#define __IAppxBlockMapFilesEnumerator_FWD_DEFINED__
typedef interface IAppxBlockMapFilesEnumerator IAppxBlockMapFilesEnumerator;

#endif 	/* __IAppxBlockMapFilesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxBlockMapBlock_FWD_DEFINED__
#define __IAppxBlockMapBlock_FWD_DEFINED__
typedef interface IAppxBlockMapBlock IAppxBlockMapBlock;

#endif 	/* __IAppxBlockMapBlock_FWD_DEFINED__ */


#ifndef __IAppxBlockMapBlocksEnumerator_FWD_DEFINED__
#define __IAppxBlockMapBlocksEnumerator_FWD_DEFINED__
typedef interface IAppxBlockMapBlocksEnumerator IAppxBlockMapBlocksEnumerator;

#endif 	/* __IAppxBlockMapBlocksEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestReader_FWD_DEFINED__
#define __IAppxManifestReader_FWD_DEFINED__
typedef interface IAppxManifestReader IAppxManifestReader;

#endif 	/* __IAppxManifestReader_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageId_FWD_DEFINED__
#define __IAppxManifestPackageId_FWD_DEFINED__
typedef interface IAppxManifestPackageId IAppxManifestPackageId;

#endif 	/* __IAppxManifestPackageId_FWD_DEFINED__ */


#ifndef __IAppxManifestProperties_FWD_DEFINED__
#define __IAppxManifestProperties_FWD_DEFINED__
typedef interface IAppxManifestProperties IAppxManifestProperties;

#endif 	/* __IAppxManifestProperties_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageDependency_FWD_DEFINED__
#define __IAppxManifestPackageDependency_FWD_DEFINED__
typedef interface IAppxManifestPackageDependency IAppxManifestPackageDependency;

#endif 	/* __IAppxManifestPackageDependency_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageDependenciesEnumerator_FWD_DEFINED__
#define __IAppxManifestPackageDependenciesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestPackageDependenciesEnumerator IAppxManifestPackageDependenciesEnumerator;

#endif 	/* __IAppxManifestPackageDependenciesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestResourcesEnumerator_FWD_DEFINED__
#define __IAppxManifestResourcesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestResourcesEnumerator IAppxManifestResourcesEnumerator;

#endif 	/* __IAppxManifestResourcesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestDeviceCapabilitiesEnumerator_FWD_DEFINED__
#define __IAppxManifestDeviceCapabilitiesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestDeviceCapabilitiesEnumerator IAppxManifestDeviceCapabilitiesEnumerator;

#endif 	/* __IAppxManifestDeviceCapabilitiesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestApplicationsEnumerator_FWD_DEFINED__
#define __IAppxManifestApplicationsEnumerator_FWD_DEFINED__
typedef interface IAppxManifestApplicationsEnumerator IAppxManifestApplicationsEnumerator;

#endif 	/* __IAppxManifestApplicationsEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestApplication_FWD_DEFINED__
#define __IAppxManifestApplication_FWD_DEFINED__
typedef interface IAppxManifestApplication IAppxManifestApplication;

#endif 	/* __IAppxManifestApplication_FWD_DEFINED__ */


#ifndef __IAppxFactory_FWD_DEFINED__
#define __IAppxFactory_FWD_DEFINED__
typedef interface IAppxFactory IAppxFactory;

#endif 	/* __IAppxFactory_FWD_DEFINED__ */


#ifndef __AppxFactory_FWD_DEFINED__
#define __AppxFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppxFactory AppxFactory;
#else
typedef struct AppxFactory AppxFactory;
#endif /* __cplusplus */

#endif 	/* __AppxFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_appxpackaging_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if (NTDDI_VERSION >= NTDDI_WIN7)


extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0000_v0_0_s_ifspec;


#ifndef __APPXPACKAGING_LIBRARY_DEFINED__
#define __APPXPACKAGING_LIBRARY_DEFINED__

/* library APPXPACKAGING */
/* [lcid][version][uuid] */ 

typedef struct APPX_PACKAGE_SETTINGS
    {
    BOOL forceZip32;
    IUri *hashMethod;
    } 	APPX_PACKAGE_SETTINGS;

typedef /* [v1_enum] */ 
enum APPX_COMPRESSION_OPTION
    {
        APPX_COMPRESSION_OPTION_NONE	= 0,
        APPX_COMPRESSION_OPTION_NORMAL	= 1,
        APPX_COMPRESSION_OPTION_MAXIMUM	= 2,
        APPX_COMPRESSION_OPTION_FAST	= 3,
        APPX_COMPRESSION_OPTION_SUPERFAST	= 4
    } 	APPX_COMPRESSION_OPTION;

typedef /* [v1_enum] */ 
enum APPX_FOOTPRINT_FILE_TYPE
    {
        APPX_FOOTPRINT_FILE_TYPE_MANIFEST	= 0,
        APPX_FOOTPRINT_FILE_TYPE_BLOCKMAP	= 1,
        APPX_FOOTPRINT_FILE_TYPE_SIGNATURE	= 2,
        APPX_FOOTPRINT_FILE_TYPE_CODEINTEGRITY	= 3
    } 	APPX_FOOTPRINT_FILE_TYPE;

typedef /* [v1_enum] */ 
enum APPX_PACKAGE_ARCHITECTURE
    {
        APPX_PACKAGE_ARCHITECTURE_X86	= 0,
        APPX_PACKAGE_ARCHITECTURE_ARM	= 5,
        APPX_PACKAGE_ARCHITECTURE_X64	= 9,
        APPX_PACKAGE_ARCHITECTURE_NEUTRAL	= 11
    } 	APPX_PACKAGE_ARCHITECTURE;

typedef /* [v1_enum] */ 
enum APPX_CAPABILITIES
    {
        APPX_CAPABILITY_INTERNET_CLIENT	= 0x1,
        APPX_CAPABILITY_INTERNET_CLIENT_SERVER	= 0x2,
        APPX_CAPABILITY_PRIVATE_NETWORK_CLIENT_SERVER	= 0x4,
        APPX_CAPABILITY_DOCUMENTS_LIBRARY	= 0x8,
        APPX_CAPABILITY_PICTURES_LIBRARY	= 0x10,
        APPX_CAPABILITY_VIDEOS_LIBRARY	= 0x20,
        APPX_CAPABILITY_MUSIC_LIBRARY	= 0x40,
        APPX_CAPABILITY_ENTERPRISE_AUTHENTICATION	= 0x80,
        APPX_CAPABILITY_SHARED_USER_CERTIFICATES	= 0x100,
        APPX_CAPABILITY_REMOVABLE_STORAGE	= 0x200
    } 	APPX_CAPABILITIES;

DEFINE_ENUM_FLAG_OPERATORS(APPX_CAPABILITIES);



















EXTERN_C const IID LIBID_APPXPACKAGING;

#ifndef __IAppxPackageWriter_INTERFACE_DEFINED__
#define __IAppxPackageWriter_INTERFACE_DEFINED__

/* interface IAppxPackageWriter */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxPackageWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9099e33b-246f-41e4-881a-008eb613f858")
    IAppxPackageWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPayloadFile( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [string][in] */ __RPC__in_string LPCWSTR contentType,
            /* [in] */ APPX_COMPRESSION_OPTION compressionOption,
            /* [in] */ __RPC__in_opt IStream *inputStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ __RPC__in_opt IStream *manifest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxPackageWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxPackageWriter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxPackageWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxPackageWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFile )( 
            __RPC__in IAppxPackageWriter * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [string][in] */ __RPC__in_string LPCWSTR contentType,
            /* [in] */ APPX_COMPRESSION_OPTION compressionOption,
            /* [in] */ __RPC__in_opt IStream *inputStream);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxPackageWriter * This,
            /* [in] */ __RPC__in_opt IStream *manifest);
        
        END_INTERFACE
    } IAppxPackageWriterVtbl;

    interface IAppxPackageWriter
    {
        CONST_VTBL struct IAppxPackageWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxPackageWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxPackageWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxPackageWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxPackageWriter_AddPayloadFile(This,fileName,contentType,compressionOption,inputStream)	\
    ( (This)->lpVtbl -> AddPayloadFile(This,fileName,contentType,compressionOption,inputStream) ) 

#define IAppxPackageWriter_Close(This,manifest)	\
    ( (This)->lpVtbl -> Close(This,manifest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxPackageWriter_INTERFACE_DEFINED__ */


#ifndef __IAppxPackageReader_INTERFACE_DEFINED__
#define __IAppxPackageReader_INTERFACE_DEFINED__

/* interface IAppxPackageReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxPackageReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b5c49650-99bc-481c-9a34-3d53a4106708")
    IAppxPackageReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBlockMap( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFootprintFile( 
            /* [in] */ APPX_FOOTPRINT_FILE_TYPE type,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPayloadFile( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPayloadFiles( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxFilesEnumerator **filesEnumerator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManifest( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxPackageReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxPackageReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxPackageReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxPackageReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBlockMap )( 
            __RPC__in IAppxPackageReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetFootprintFile )( 
            __RPC__in IAppxPackageReader * This,
            /* [in] */ APPX_FOOTPRINT_FILE_TYPE type,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFile )( 
            __RPC__in IAppxPackageReader * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFiles )( 
            __RPC__in IAppxPackageReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFilesEnumerator **filesEnumerator);
        
        HRESULT ( STDMETHODCALLTYPE *GetManifest )( 
            __RPC__in IAppxPackageReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader);
        
        END_INTERFACE
    } IAppxPackageReaderVtbl;

    interface IAppxPackageReader
    {
        CONST_VTBL struct IAppxPackageReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxPackageReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxPackageReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxPackageReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxPackageReader_GetBlockMap(This,blockMapReader)	\
    ( (This)->lpVtbl -> GetBlockMap(This,blockMapReader) ) 

#define IAppxPackageReader_GetFootprintFile(This,type,file)	\
    ( (This)->lpVtbl -> GetFootprintFile(This,type,file) ) 

#define IAppxPackageReader_GetPayloadFile(This,fileName,file)	\
    ( (This)->lpVtbl -> GetPayloadFile(This,fileName,file) ) 

#define IAppxPackageReader_GetPayloadFiles(This,filesEnumerator)	\
    ( (This)->lpVtbl -> GetPayloadFiles(This,filesEnumerator) ) 

#define IAppxPackageReader_GetManifest(This,manifestReader)	\
    ( (This)->lpVtbl -> GetManifest(This,manifestReader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxPackageReader_INTERFACE_DEFINED__ */


#ifndef __IAppxFile_INTERFACE_DEFINED__
#define __IAppxFile_INTERFACE_DEFINED__

/* interface IAppxFile */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91df827b-94fd-468f-827b-57f41b2f6f2e")
    IAppxFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCompressionOption( 
            /* [retval][out] */ __RPC__out APPX_COMPRESSION_OPTION *compressionOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContentType( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *contentType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [retval][out] */ __RPC__out UINT64 *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ __RPC__deref_out_opt IStream **stream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxFile * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompressionOption )( 
            __RPC__in IAppxFile * This,
            /* [retval][out] */ __RPC__out APPX_COMPRESSION_OPTION *compressionOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            __RPC__in IAppxFile * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *contentType);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxFile * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            __RPC__in IAppxFile * This,
            /* [retval][out] */ __RPC__out UINT64 *size);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxFile * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **stream);
        
        END_INTERFACE
    } IAppxFileVtbl;

    interface IAppxFile
    {
        CONST_VTBL struct IAppxFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxFile_GetCompressionOption(This,compressionOption)	\
    ( (This)->lpVtbl -> GetCompressionOption(This,compressionOption) ) 

#define IAppxFile_GetContentType(This,contentType)	\
    ( (This)->lpVtbl -> GetContentType(This,contentType) ) 

#define IAppxFile_GetName(This,fileName)	\
    ( (This)->lpVtbl -> GetName(This,fileName) ) 

#define IAppxFile_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IAppxFile_GetStream(This,stream)	\
    ( (This)->lpVtbl -> GetStream(This,stream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxFile_INTERFACE_DEFINED__ */


#ifndef __IAppxFilesEnumerator_INTERFACE_DEFINED__
#define __IAppxFilesEnumerator_INTERFACE_DEFINED__

/* interface IAppxFilesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxFilesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f007eeaf-9831-411c-9847-917cdc62d1fe")
    IAppxFilesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxFilesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxFilesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxFilesEnumeratorVtbl;

    interface IAppxFilesEnumerator
    {
        CONST_VTBL struct IAppxFilesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxFilesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxFilesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxFilesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxFilesEnumerator_GetCurrent(This,file)	\
    ( (This)->lpVtbl -> GetCurrent(This,file) ) 

#define IAppxFilesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxFilesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxFilesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapReader_INTERFACE_DEFINED__
#define __IAppxBlockMapReader_INTERFACE_DEFINED__

/* interface IAppxBlockMapReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5efec991-bca3-42d1-9ec2-e92d609ec22a")
    IAppxBlockMapReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFile( 
            /* [string][in] */ __RPC__in_string LPCWSTR filename,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFiles( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFilesEnumerator **enumerator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHashMethod( 
            /* [retval][out] */ __RPC__deref_out_opt IUri **hashMethod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ __RPC__deref_out_opt IStream **blockMapStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [string][in] */ __RPC__in_string LPCWSTR filename,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetFiles )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFilesEnumerator **enumerator);
        
        HRESULT ( STDMETHODCALLTYPE *GetHashMethod )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IUri **hashMethod);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **blockMapStream);
        
        END_INTERFACE
    } IAppxBlockMapReaderVtbl;

    interface IAppxBlockMapReader
    {
        CONST_VTBL struct IAppxBlockMapReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapReader_GetFile(This,filename,file)	\
    ( (This)->lpVtbl -> GetFile(This,filename,file) ) 

#define IAppxBlockMapReader_GetFiles(This,enumerator)	\
    ( (This)->lpVtbl -> GetFiles(This,enumerator) ) 

#define IAppxBlockMapReader_GetHashMethod(This,hashMethod)	\
    ( (This)->lpVtbl -> GetHashMethod(This,hashMethod) ) 

#define IAppxBlockMapReader_GetStream(This,blockMapStream)	\
    ( (This)->lpVtbl -> GetStream(This,blockMapStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapReader_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapFile_INTERFACE_DEFINED__
#define __IAppxBlockMapFile_INTERFACE_DEFINED__

/* interface IAppxBlockMapFile */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("277672ac-4f63-42c1-8abc-beae3600eb59")
    IAppxBlockMapFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBlocks( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlocksEnumerator **blocks) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLocalFileHeaderSize( 
            /* [retval][out] */ __RPC__out UINT32 *lfhSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUncompressedSize( 
            /* [retval][out] */ __RPC__out UINT64 *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateFileHash( 
            /* [in] */ __RPC__in_opt IStream *fileStream,
            /* [retval][out] */ __RPC__out BOOL *isValid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBlocks )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlocksEnumerator **blocks);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocalFileHeaderSize )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][out] */ __RPC__out UINT32 *lfhSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetUncompressedSize )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][out] */ __RPC__out UINT64 *size);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateFileHash )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [in] */ __RPC__in_opt IStream *fileStream,
            /* [retval][out] */ __RPC__out BOOL *isValid);
        
        END_INTERFACE
    } IAppxBlockMapFileVtbl;

    interface IAppxBlockMapFile
    {
        CONST_VTBL struct IAppxBlockMapFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapFile_GetBlocks(This,blocks)	\
    ( (This)->lpVtbl -> GetBlocks(This,blocks) ) 

#define IAppxBlockMapFile_GetLocalFileHeaderSize(This,lfhSize)	\
    ( (This)->lpVtbl -> GetLocalFileHeaderSize(This,lfhSize) ) 

#define IAppxBlockMapFile_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxBlockMapFile_GetUncompressedSize(This,size)	\
    ( (This)->lpVtbl -> GetUncompressedSize(This,size) ) 

#define IAppxBlockMapFile_ValidateFileHash(This,fileStream,isValid)	\
    ( (This)->lpVtbl -> ValidateFileHash(This,fileStream,isValid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapFile_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapFilesEnumerator_INTERFACE_DEFINED__
#define __IAppxBlockMapFilesEnumerator_INTERFACE_DEFINED__

/* interface IAppxBlockMapFilesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapFilesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02b856a2-4262-4070-bacb-1a8cbbc42305")
    IAppxBlockMapFilesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        END_INTERFACE
    } IAppxBlockMapFilesEnumeratorVtbl;

    interface IAppxBlockMapFilesEnumerator
    {
        CONST_VTBL struct IAppxBlockMapFilesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapFilesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapFilesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapFilesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapFilesEnumerator_GetCurrent(This,file)	\
    ( (This)->lpVtbl -> GetCurrent(This,file) ) 

#define IAppxBlockMapFilesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxBlockMapFilesEnumerator_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapFilesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapBlock_INTERFACE_DEFINED__
#define __IAppxBlockMapBlock_INTERFACE_DEFINED__

/* interface IAppxBlockMapBlock */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapBlock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75cf3930-3244-4fe0-a8c8-e0bcb270b889")
    IAppxBlockMapBlock : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [out] */ __RPC__out UINT32 *bufferSize,
            /* [retval][size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*bufferSize) BYTE **buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompressedSize( 
            /* [retval][out] */ __RPC__out UINT32 *size) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapBlockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapBlock * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapBlock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            __RPC__in IAppxBlockMapBlock * This,
            /* [out] */ __RPC__out UINT32 *bufferSize,
            /* [retval][size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*bufferSize) BYTE **buffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompressedSize )( 
            __RPC__in IAppxBlockMapBlock * This,
            /* [retval][out] */ __RPC__out UINT32 *size);
        
        END_INTERFACE
    } IAppxBlockMapBlockVtbl;

    interface IAppxBlockMapBlock
    {
        CONST_VTBL struct IAppxBlockMapBlockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapBlock_GetHash(This,bufferSize,buffer)	\
    ( (This)->lpVtbl -> GetHash(This,bufferSize,buffer) ) 

#define IAppxBlockMapBlock_GetCompressedSize(This,size)	\
    ( (This)->lpVtbl -> GetCompressedSize(This,size) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapBlock_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapBlocksEnumerator_INTERFACE_DEFINED__
#define __IAppxBlockMapBlocksEnumerator_INTERFACE_DEFINED__

/* interface IAppxBlockMapBlocksEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapBlocksEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6b429b5b-36ef-479e-b9eb-0c1482b49e16")
    IAppxBlockMapBlocksEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlock **block) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapBlocksEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlock **block);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxBlockMapBlocksEnumeratorVtbl;

    interface IAppxBlockMapBlocksEnumerator
    {
        CONST_VTBL struct IAppxBlockMapBlocksEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapBlocksEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapBlocksEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapBlocksEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapBlocksEnumerator_GetCurrent(This,block)	\
    ( (This)->lpVtbl -> GetCurrent(This,block) ) 

#define IAppxBlockMapBlocksEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxBlockMapBlocksEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapBlocksEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestReader_INTERFACE_DEFINED__
#define __IAppxManifestReader_INTERFACE_DEFINED__

/* interface IAppxManifestReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4e1bd148-55a0-4480-a3d1-15544710637c")
    IAppxManifestReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPackageId( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestProperties **packageProperties) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageDependencies( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [retval][out] */ __RPC__out APPX_CAPABILITIES *capabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResources( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceCapabilities( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrerequisite( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out UINT64 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplications( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__out APPX_CAPABILITIES *capabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )( 
            __RPC__in IAppxManifestReader * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out UINT64 *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplications )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream);
        
        END_INTERFACE
    } IAppxManifestReaderVtbl;

    interface IAppxManifestReader
    {
        CONST_VTBL struct IAppxManifestReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestReader_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxManifestReader_GetProperties(This,packageProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) ) 

#define IAppxManifestReader_GetPackageDependencies(This,dependencies)	\
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) ) 

#define IAppxManifestReader_GetCapabilities(This,capabilities)	\
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) ) 

#define IAppxManifestReader_GetResources(This,resources)	\
    ( (This)->lpVtbl -> GetResources(This,resources) ) 

#define IAppxManifestReader_GetDeviceCapabilities(This,deviceCapabilities)	\
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) ) 

#define IAppxManifestReader_GetPrerequisite(This,name,value)	\
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) ) 

#define IAppxManifestReader_GetApplications(This,applications)	\
    ( (This)->lpVtbl -> GetApplications(This,applications) ) 

#define IAppxManifestReader_GetStream(This,manifestStream)	\
    ( (This)->lpVtbl -> GetStream(This,manifestStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestReader_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageId_INTERFACE_DEFINED__
#define __IAppxManifestPackageId_INTERFACE_DEFINED__

/* interface IAppxManifestPackageId */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("283ce2d7-7153-4a91-9649-7a0f7240945f")
    IAppxManifestPackageId : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArchitecture( 
            /* [retval][out] */ __RPC__out APPX_PACKAGE_ARCHITECTURE *architecture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublisher( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [retval][out] */ __RPC__out UINT64 *packageVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResourceId( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resourceId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComparePublisher( 
            /* [string][in] */ __RPC__in_string LPCWSTR other,
            /* [retval][out] */ __RPC__out BOOL *isSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageFullName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageFamilyName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFamilyName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageId * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetArchitecture )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][out] */ __RPC__out APPX_PACKAGE_ARCHITECTURE *architecture);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][out] */ __RPC__out UINT64 *packageVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetResourceId )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resourceId);
        
        HRESULT ( STDMETHODCALLTYPE *ComparePublisher )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [string][in] */ __RPC__in_string LPCWSTR other,
            /* [retval][out] */ __RPC__out BOOL *isSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageFullName )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageFamilyName )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFamilyName);
        
        END_INTERFACE
    } IAppxManifestPackageIdVtbl;

    interface IAppxManifestPackageId
    {
        CONST_VTBL struct IAppxManifestPackageIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageId_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestPackageId_GetArchitecture(This,architecture)	\
    ( (This)->lpVtbl -> GetArchitecture(This,architecture) ) 

#define IAppxManifestPackageId_GetPublisher(This,publisher)	\
    ( (This)->lpVtbl -> GetPublisher(This,publisher) ) 

#define IAppxManifestPackageId_GetVersion(This,packageVersion)	\
    ( (This)->lpVtbl -> GetVersion(This,packageVersion) ) 

#define IAppxManifestPackageId_GetResourceId(This,resourceId)	\
    ( (This)->lpVtbl -> GetResourceId(This,resourceId) ) 

#define IAppxManifestPackageId_ComparePublisher(This,other,isSame)	\
    ( (This)->lpVtbl -> ComparePublisher(This,other,isSame) ) 

#define IAppxManifestPackageId_GetPackageFullName(This,packageFullName)	\
    ( (This)->lpVtbl -> GetPackageFullName(This,packageFullName) ) 

#define IAppxManifestPackageId_GetPackageFamilyName(This,packageFamilyName)	\
    ( (This)->lpVtbl -> GetPackageFamilyName(This,packageFamilyName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageId_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestProperties_INTERFACE_DEFINED__
#define __IAppxManifestProperties_INTERFACE_DEFINED__

/* interface IAppxManifestProperties */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03faf64d-f26f-4b2c-aaf7-8fe7789b8bca")
    IAppxManifestProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBoolValue( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStringValue( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoolValue )( 
            __RPC__in IAppxManifestProperties * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            __RPC__in IAppxManifestProperties * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value);
        
        END_INTERFACE
    } IAppxManifestPropertiesVtbl;

    interface IAppxManifestProperties
    {
        CONST_VTBL struct IAppxManifestPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestProperties_GetBoolValue(This,name,value)	\
    ( (This)->lpVtbl -> GetBoolValue(This,name,value) ) 

#define IAppxManifestProperties_GetStringValue(This,name,value)	\
    ( (This)->lpVtbl -> GetStringValue(This,name,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestProperties_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageDependency_INTERFACE_DEFINED__
#define __IAppxManifestPackageDependency_INTERFACE_DEFINED__

/* interface IAppxManifestPackageDependency */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageDependency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e4946b59-733e-43f0-a724-3bde4c1285a0")
    IAppxManifestPackageDependency : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublisher( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMinVersion( 
            /* [retval][out] */ __RPC__out UINT64 *minVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageDependencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageDependency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageDependency * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher);
        
        HRESULT ( STDMETHODCALLTYPE *GetMinVersion )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [retval][out] */ __RPC__out UINT64 *minVersion);
        
        END_INTERFACE
    } IAppxManifestPackageDependencyVtbl;

    interface IAppxManifestPackageDependency
    {
        CONST_VTBL struct IAppxManifestPackageDependencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageDependency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageDependency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageDependency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageDependency_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestPackageDependency_GetPublisher(This,publisher)	\
    ( (This)->lpVtbl -> GetPublisher(This,publisher) ) 

#define IAppxManifestPackageDependency_GetMinVersion(This,minVersion)	\
    ( (This)->lpVtbl -> GetMinVersion(This,minVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageDependency_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageDependenciesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestPackageDependenciesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestPackageDependenciesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageDependenciesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b43bbcf9-65a6-42dd-bac0-8c6741e7f5a4")
    IAppxManifestPackageDependenciesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependency **dependency) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageDependenciesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependency **dependency);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestPackageDependenciesEnumeratorVtbl;

    interface IAppxManifestPackageDependenciesEnumerator
    {
        CONST_VTBL struct IAppxManifestPackageDependenciesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageDependenciesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageDependenciesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageDependenciesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageDependenciesEnumerator_GetCurrent(This,dependency)	\
    ( (This)->lpVtbl -> GetCurrent(This,dependency) ) 

#define IAppxManifestPackageDependenciesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestPackageDependenciesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageDependenciesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestResourcesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestResourcesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestResourcesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestResourcesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("de4dfbbd-881a-48bb-858c-d6f2baeae6ed")
    IAppxManifestResourcesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestResourcesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestResourcesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestResourcesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resource);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestResourcesEnumeratorVtbl;

    interface IAppxManifestResourcesEnumerator
    {
        CONST_VTBL struct IAppxManifestResourcesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestResourcesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestResourcesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestResourcesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestResourcesEnumerator_GetCurrent(This,resource)	\
    ( (This)->lpVtbl -> GetCurrent(This,resource) ) 

#define IAppxManifestResourcesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestResourcesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestResourcesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestDeviceCapabilitiesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestDeviceCapabilitiesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestDeviceCapabilitiesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestDeviceCapabilitiesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30204541-427b-4a1c-bacf-655bf463a540")
    IAppxManifestDeviceCapabilitiesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *deviceCapability) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestDeviceCapabilitiesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *deviceCapability);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestDeviceCapabilitiesEnumeratorVtbl;

    interface IAppxManifestDeviceCapabilitiesEnumerator
    {
        CONST_VTBL struct IAppxManifestDeviceCapabilitiesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestDeviceCapabilitiesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestDeviceCapabilitiesEnumerator_GetCurrent(This,deviceCapability)	\
    ( (This)->lpVtbl -> GetCurrent(This,deviceCapability) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestDeviceCapabilitiesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestApplicationsEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestApplicationsEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestApplicationsEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestApplicationsEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9eb8a55a-f04b-4d0d-808d-686185d4847a")
    IAppxManifestApplicationsEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplication **application) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestApplicationsEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplication **application);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestApplicationsEnumeratorVtbl;

    interface IAppxManifestApplicationsEnumerator
    {
        CONST_VTBL struct IAppxManifestApplicationsEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestApplicationsEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestApplicationsEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestApplicationsEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestApplicationsEnumerator_GetCurrent(This,application)	\
    ( (This)->lpVtbl -> GetCurrent(This,application) ) 

#define IAppxManifestApplicationsEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestApplicationsEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestApplicationsEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestApplication_INTERFACE_DEFINED__
#define __IAppxManifestApplication_INTERFACE_DEFINED__

/* interface IAppxManifestApplication */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5da89bf4-3773-46be-b650-7e744863b7e8")
    IAppxManifestApplication : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStringValue( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppUserModelId( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *appUserModelId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestApplication * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            __RPC__in IAppxManifestApplication * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppUserModelId )( 
            __RPC__in IAppxManifestApplication * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *appUserModelId);
        
        END_INTERFACE
    } IAppxManifestApplicationVtbl;

    interface IAppxManifestApplication
    {
        CONST_VTBL struct IAppxManifestApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestApplication_GetStringValue(This,name,value)	\
    ( (This)->lpVtbl -> GetStringValue(This,name,value) ) 

#define IAppxManifestApplication_GetAppUserModelId(This,appUserModelId)	\
    ( (This)->lpVtbl -> GetAppUserModelId(This,appUserModelId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestApplication_INTERFACE_DEFINED__ */


#ifndef __IAppxFactory_INTERFACE_DEFINED__
#define __IAppxFactory_INTERFACE_DEFINED__

/* interface IAppxFactory */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("beb94909-e451-438b-b5a7-d79e767b75d8")
    IAppxFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreatePackageWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in APPX_PACKAGE_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageWriter **packageWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePackageReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageReader **packageReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateManifestReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBlockMapReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateValidatedBlockMapReader( 
            /* [in] */ __RPC__in_opt IStream *blockMapStream,
            /* [in] */ __RPC__in LPCWSTR signatureFileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriter )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in APPX_PACKAGE_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageWriter **packageWriter);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePackageReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageReader **packageReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateManifestReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBlockMapReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateValidatedBlockMapReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *blockMapStream,
            /* [in] */ __RPC__in LPCWSTR signatureFileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        END_INTERFACE
    } IAppxFactoryVtbl;

    interface IAppxFactory
    {
        CONST_VTBL struct IAppxFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxFactory_CreatePackageWriter(This,outputStream,settings,packageWriter)	\
    ( (This)->lpVtbl -> CreatePackageWriter(This,outputStream,settings,packageWriter) ) 

#define IAppxFactory_CreatePackageReader(This,inputStream,packageReader)	\
    ( (This)->lpVtbl -> CreatePackageReader(This,inputStream,packageReader) ) 

#define IAppxFactory_CreateManifestReader(This,inputStream,manifestReader)	\
    ( (This)->lpVtbl -> CreateManifestReader(This,inputStream,manifestReader) ) 

#define IAppxFactory_CreateBlockMapReader(This,inputStream,blockMapReader)	\
    ( (This)->lpVtbl -> CreateBlockMapReader(This,inputStream,blockMapReader) ) 

#define IAppxFactory_CreateValidatedBlockMapReader(This,blockMapStream,signatureFileName,blockMapReader)	\
    ( (This)->lpVtbl -> CreateValidatedBlockMapReader(This,blockMapStream,signatureFileName,blockMapReader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxFactory_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AppxFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("5842a140-ff9f-4166-8f5c-62f5b7b0c781")
AppxFactory;
#endif
#endif /* __APPXPACKAGING_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_appxpackaging_0000_0001 */
/* [local] */ 

#endif // (NTDDI >= NTDDI_WIN7)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


