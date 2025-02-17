

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

MIDL_DEFINE_GUID(IID, LIBID_PenInputPanelLib,0xd7ca032c,0xb7d0,0x429e,0x9f,0xd7,0x82,0x24,0x1c,0x35,0x6b,0x4a);


MIDL_DEFINE_GUID(IID, IID_IPenInputPanel,0xfa7a4083,0x5747,0x4040,0xa1,0x82,0x0b,0x0e,0x9f,0xd4,0xfa,0xc7);


MIDL_DEFINE_GUID(IID, DIID__IPenInputPanelEvents,0xb7e489da,0x3719,0x439f,0x84,0x8f,0xe7,0xac,0xbd,0x82,0x0f,0x17);


MIDL_DEFINE_GUID(IID, IID_IHandwrittenTextInsertion,0x56FDEA97,0xECD6,0x43e7,0xAA,0x3A,0x81,0x6B,0xE7,0x78,0x58,0x60);


MIDL_DEFINE_GUID(CLSID, CLSID_HandwrittenTextInsertion,0x9F074EE2,0xE6E9,0x4d8a,0xA0,0x47,0xEB,0x5B,0x5C,0x3C,0x55,0xDA);


MIDL_DEFINE_GUID(CLSID, CLSID_PenInputPanel,0xf744e496,0x1b5a,0x489e,0x81,0xdc,0xfb,0xd7,0xac,0x62,0x98,0xa8);


MIDL_DEFINE_GUID(IID, IID_ITextInputPanelEventSink,0x27560408,0x8e64,0x4fe1,0x80,0x4e,0x42,0x12,0x01,0x58,0x4b,0x31);


MIDL_DEFINE_GUID(IID, IID_ITextInputPanel,0x6b6a65a5,0x6af3,0x46c2,0xb6,0xea,0x56,0xcd,0x1f,0x80,0xdf,0x71);


MIDL_DEFINE_GUID(IID, IID_IInputPanelWindowHandle,0x4AF81847,0xFDC4,0x4fc3,0xAD,0x0B,0x42,0x24,0x79,0xC1,0xB9,0x35);


MIDL_DEFINE_GUID(IID, IID_ITextInputPanelRunInfo,0x9F424568,0x1920,0x48cc,0x98,0x11,0xA9,0x93,0xCB,0xF5,0xAD,0xBA);


MIDL_DEFINE_GUID(CLSID, CLSID_TextInputPanel,0xf9b189d7,0x228b,0x4f2b,0x86,0x50,0xb9,0x7f,0x59,0xe0,0x2c,0x8c);


MIDL_DEFINE_GUID(CLSID, CLSID_PenInputPanel_Internal,0x802B1FB9,0x056B,0x4720,0xB0,0xCC,0x80,0xD2,0x3B,0x71,0x17,0x1E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



