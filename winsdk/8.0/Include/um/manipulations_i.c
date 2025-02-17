

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ManipulationsLib,0x935610b3,0x6f81,0x450f,0x85,0xd5,0x42,0xd3,0xd2,0x6c,0x5c,0x11);


MIDL_DEFINE_GUID(IID, IID__IManipulationEvents,0x4f62c8da,0x9c53,0x4b22,0x93,0xdf,0x92,0x7a,0x86,0x2b,0xbb,0x03);


MIDL_DEFINE_GUID(IID, IID_IInertiaProcessor,0x18b00c6d,0xc5ee,0x41b1,0x90,0xa9,0x9d,0x4a,0x92,0x90,0x95,0xad);


MIDL_DEFINE_GUID(IID, IID_IManipulationProcessor,0xA22AC519,0x8300,0x48a0,0xBE,0xF4,0xF1,0xBE,0x87,0x37,0xDB,0xA4);


MIDL_DEFINE_GUID(CLSID, CLSID_InertiaProcessor,0xabb27087,0x4ce0,0x4e58,0xa0,0xcb,0xe2,0x4d,0xf9,0x68,0x14,0xbe);


MIDL_DEFINE_GUID(CLSID, CLSID_ManipulationProcessor,0x597D4FB0,0x47FD,0x4aff,0x89,0xB9,0xC6,0xCF,0xAE,0x8C,0xF0,0x8E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



