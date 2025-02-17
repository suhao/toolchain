/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ks.h

Abstract:

    Windows Driver Model/Connection and Streaming Architecture (WDM-CSA)
    core definitions.

--*/

#if !defined(_KS_)
#define _KS_

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field types other than int

#if defined(__TCS__)
#define _KS_NO_ANONYMOUS_STRUCTURES_ 1
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if !defined(_NTRTL_)
    #ifndef DEFINE_GUIDEX
        #define DEFINE_GUIDEX(name) EXTERN_C const CDECL GUID name
    #endif // !defined(DEFINE_GUIDEX)

    #ifndef STATICGUIDOF
        #define STATICGUIDOF(guid) STATIC_##guid
    #endif // !defined(STATICGUIDOF)
#endif // !defined(_NTRTL_)

#ifndef SIZEOF_ARRAY
    #define SIZEOF_ARRAY(ar)        (sizeof(ar)/sizeof((ar)[0]))
#endif // !defined(SIZEOF_ARRAY)

#if defined(__cplusplus) && _MSC_VER >= 1100
#define DEFINE_GUIDSTRUCT(g, n) struct __declspec(uuid(g)) n
#define DEFINE_GUIDNAMED(n) __uuidof(struct n)
#else // !defined(__cplusplus)
#define DEFINE_GUIDSTRUCT(g, n) DEFINE_GUIDEX(n)
#define DEFINE_GUIDNAMED(n) n
#endif // !defined(__cplusplus)

//===========================================================================

#define STATIC_GUID_NULL \
    0x00000000L, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#pragma prefast(suppress: 6244, "duplicate definition is harmless in this case")
DEFINE_GUIDSTRUCT("00000000-0000-0000-0000-000000000000", GUID_NULL);
#define GUID_NULL DEFINE_GUIDNAMED(GUID_NULL)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

//===========================================================================

#define IOCTL_KS_PROPERTY              CTL_CODE(FILE_DEVICE_KS, 0x000, METHOD_NEITHER, FILE_ANY_ACCESS)
#define IOCTL_KS_ENABLE_EVENT          CTL_CODE(FILE_DEVICE_KS, 0x001, METHOD_NEITHER, FILE_ANY_ACCESS)
#define IOCTL_KS_DISABLE_EVENT         CTL_CODE(FILE_DEVICE_KS, 0x002, METHOD_NEITHER, FILE_ANY_ACCESS)
#define IOCTL_KS_METHOD                CTL_CODE(FILE_DEVICE_KS, 0x003, METHOD_NEITHER, FILE_ANY_ACCESS)
#define IOCTL_KS_WRITE_STREAM          CTL_CODE(FILE_DEVICE_KS, 0x004, METHOD_NEITHER, FILE_WRITE_ACCESS)
#define IOCTL_KS_READ_STREAM           CTL_CODE(FILE_DEVICE_KS, 0x005, METHOD_NEITHER, FILE_READ_ACCESS)
#define IOCTL_KS_RESET_STATE           CTL_CODE(FILE_DEVICE_KS, 0x006, METHOD_NEITHER, FILE_ANY_ACCESS)

//===========================================================================

typedef enum {
    KSRESET_BEGIN,
    KSRESET_END
} KSRESET;

typedef enum {
    KSSTATE_STOP,
    KSSTATE_ACQUIRE,
    KSSTATE_PAUSE,
    KSSTATE_RUN
} KSSTATE, *PKSSTATE;

#define KSPRIORITY_LOW        0x00000001
#define KSPRIORITY_NORMAL     0x40000000
#define KSPRIORITY_HIGH       0x80000000
#define KSPRIORITY_EXCLUSIVE  0xFFFFFFFF

typedef struct {
    ULONG   PriorityClass;
    ULONG   PrioritySubClass;
} KSPRIORITY, *PKSPRIORITY;

typedef struct {
    union {
#if defined( _KS_NO_ANONYMOUS_STRUCTURES_ )
        struct _IDENTIFIER {
#else        
        struct {
#endif        
            GUID    Set;
            ULONG   Id;
            ULONG   Flags;
        };
        LONGLONG    Alignment;
    };
} KSIDENTIFIER, *PKSIDENTIFIER;

typedef KSIDENTIFIER KSPROPERTY, *PKSPROPERTY, KSMETHOD, *PKSMETHOD, KSEVENT, *PKSEVENT;

#define KSMETHOD_TYPE_NONE                  0x00000000
#define KSMETHOD_TYPE_READ                  0x00000001
#define KSMETHOD_TYPE_WRITE                 0x00000002
#define KSMETHOD_TYPE_MODIFY                0x00000003
#define KSMETHOD_TYPE_SOURCE                0x00000004

#define KSMETHOD_TYPE_SEND                  0x00000001
#define KSMETHOD_TYPE_SETSUPPORT            0x00000100
#define KSMETHOD_TYPE_BASICSUPPORT          0x00000200

#define KSMETHOD_TYPE_TOPOLOGY 0x10000000

#define KSPROPERTY_TYPE_GET                 0x00000001
#define KSPROPERTY_TYPE_SET                 0x00000002
#define KSPROPERTY_TYPE_SETSUPPORT          0x00000100
#define KSPROPERTY_TYPE_BASICSUPPORT        0x00000200
#define KSPROPERTY_TYPE_RELATIONS           0x00000400
#define KSPROPERTY_TYPE_SERIALIZESET        0x00000800
#define KSPROPERTY_TYPE_UNSERIALIZESET      0x00001000
#define KSPROPERTY_TYPE_SERIALIZERAW        0x00002000
#define KSPROPERTY_TYPE_UNSERIALIZERAW      0x00004000
#define KSPROPERTY_TYPE_SERIALIZESIZE       0x00008000
#define KSPROPERTY_TYPE_DEFAULTVALUES       0x00010000

#define KSPROPERTY_TYPE_TOPOLOGY 0x10000000
#define KSPROPERTY_TYPE_HIGHPRIORITY 0x08000000

typedef struct {
    KSPROPERTY      Property;
    ULONG           NodeId;
    ULONG           Reserved;
} KSP_NODE, *PKSP_NODE;

typedef struct {
    KSMETHOD        Method;
    ULONG           NodeId;
    ULONG           Reserved;
} KSM_NODE, *PKSM_NODE;

typedef struct {
    KSEVENT         Event;
    ULONG           NodeId;
    ULONG           Reserved;
} KSE_NODE, *PKSE_NODE;

#define STATIC_KSPROPTYPESETID_General \
    0x97E99BA0L, 0xBDEA, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("97E99BA0-BDEA-11CF-A5D6-28DB04C10000", KSPROPTYPESETID_General);
#define KSPROPTYPESETID_General DEFINE_GUIDNAMED(KSPROPTYPESETID_General)

#if defined(_NTDDK_) && !defined(__wtypes_h__)
enum VARENUM {
    VT_EMPTY = 0,
    VT_NULL = 1,
    VT_I2 = 2,
    VT_I4 = 3,
    VT_R4 = 4,
    VT_R8 = 5,
    VT_CY = 6,
    VT_DATE = 7,
    VT_BSTR = 8,
    VT_DISPATCH = 9,
    VT_ERROR = 10,
    VT_BOOL = 11,
    VT_VARIANT = 12,
    VT_UNKNOWN = 13,
    VT_DECIMAL = 14,
    VT_I1 = 16,
    VT_UI1 = 17,
    VT_UI2 = 18,
    VT_UI4 = 19,
    VT_I8 = 20,
    VT_UI8 = 21,
    VT_INT = 22,
    VT_UINT = 23,
    VT_VOID = 24,
    VT_HRESULT  = 25,
    VT_PTR = 26,
    VT_SAFEARRAY = 27,
    VT_CARRAY = 28,
    VT_USERDEFINED = 29,
    VT_LPSTR = 30,
    VT_LPWSTR = 31,
    VT_FILETIME = 64,
    VT_BLOB = 65,
    VT_STREAM = 66,
    VT_STORAGE = 67,
    VT_STREAMED_OBJECT = 68,
    VT_STORED_OBJECT = 69,
    VT_BLOB_OBJECT = 70,
    VT_CF = 71,
    VT_CLSID = 72,
    VT_VECTOR = 0x1000,
    VT_ARRAY = 0x2000,
    VT_BYREF = 0x4000,
    VT_RESERVED = 0x8000,
    VT_ILLEGAL = 0xffff,
    VT_ILLEGALMASKED = 0xfff,
    VT_TYPEMASK = 0xfff
};
#endif // _NTDDK_ && !__wtypes_h__

typedef struct {
    ULONG    Size;
    ULONG    Count;
} KSMULTIPLE_ITEM, *PKSMULTIPLE_ITEM;

typedef struct {
    ULONG           AccessFlags;
    ULONG           DescriptionSize;
    KSIDENTIFIER    PropTypeSet;
    ULONG           MembersListCount;
    ULONG           Reserved;
} KSPROPERTY_DESCRIPTION, *PKSPROPERTY_DESCRIPTION;

#define KSPROPERTY_MEMBER_RANGES            0x00000001
#define KSPROPERTY_MEMBER_STEPPEDRANGES     0x00000002
#define KSPROPERTY_MEMBER_VALUES            0x00000003

#define KSPROPERTY_MEMBER_FLAG_DEFAULT                      0x00000001
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define KSPROPERTY_MEMBER_FLAG_BASICSUPPORT_MULTICHANNEL    0x00000002
#define KSPROPERTY_MEMBER_FLAG_BASICSUPPORT_UNIFORM         0x00000004
#endif // (NTDDI_VERSION >= NTDDI_WINXP)

typedef struct {
    ULONG   MembersFlags;
    ULONG   MembersSize;
    ULONG   MembersCount;
    ULONG   Flags;
} KSPROPERTY_MEMBERSHEADER, *PKSPROPERTY_MEMBERSHEADER;

typedef union {
#if defined( _KS_NO_ANONYMOUS_STRUCTURES_ )
    struct _SIGNED {
#else
    struct {
#endif    
        LONG    SignedMinimum;
        LONG    SignedMaximum;
    };
#if defined( _KS_NO_ANONYMOUS_STRUCTURES_ )
    struct _UNSIGNED {
#else
    struct {
#endif    
        ULONG   UnsignedMinimum;
        ULONG   UnsignedMaximum;
    };
} KSPROPERTY_BOUNDS_LONG, *PKSPROPERTY_BOUNDS_LONG;

typedef union {
#if defined( _KS_NO_ANONYMOUS_STRUCTURES_ )
    struct _SIGNED64 {
#else
    struct {
#endif    
        LONGLONG    SignedMinimum;
        LONGLONG    SignedMaximum;
    };
#if defined( _KS_NO_ANONYMOUS_STRUCTURES_ )
    struct _UNSIGNED64 {
#else
    struct {
#endif    
#if defined(_NTDDK_)
        ULONGLONG   UnsignedMinimum;
        ULONGLONG   UnsignedMaximum;
#else // !_NTDDK_
        DWORDLONG   UnsignedMinimum;
        DWORDLONG   UnsignedMaximum;
#endif // !_NTDDK_
    };
} KSPROPERTY_BOUNDS_LONGLONG, *PKSPROPERTY_BOUNDS_LONGLONG;

typedef struct {
    ULONG                       SteppingDelta;
    ULONG                       Reserved;
    KSPROPERTY_BOUNDS_LONG      Bounds;
} KSPROPERTY_STEPPING_LONG, *PKSPROPERTY_STEPPING_LONG;

typedef struct {
#if defined(_NTDDK_)
    ULONGLONG                   SteppingDelta;
#else // !_NTDDK_
    DWORDLONG                   SteppingDelta;
#endif // !_NTDDK_
    KSPROPERTY_BOUNDS_LONGLONG  Bounds;
} KSPROPERTY_STEPPING_LONGLONG, *PKSPROPERTY_STEPPING_LONGLONG;

//===========================================================================
#if (NTDDI_VERSION >= NTDDI_WINXP)

#if defined(_NTDDK_)
//
// Structure forward declarations.
//
typedef struct _KSDEVICE_DESCRIPTOR
KSDEVICE_DESCRIPTOR, *PKSDEVICE_DESCRIPTOR;
typedef struct _KSDEVICE_DISPATCH
KSDEVICE_DISPATCH, *PKSDEVICE_DISPATCH;
typedef struct _KSDEVICE 
KSDEVICE, *PKSDEVICE;
typedef struct _KSFILTERFACTORY 
KSFILTERFACTORY, *PKSFILTERFACTORY;
typedef struct _KSFILTER_DESCRIPTOR
KSFILTER_DESCRIPTOR, *PKSFILTER_DESCRIPTOR;
typedef struct _KSFILTER_DISPATCH
KSFILTER_DISPATCH, *PKSFILTER_DISPATCH;
typedef struct _KSFILTER 
KSFILTER, *PKSFILTER;
typedef struct _KSPIN_DESCRIPTOR_EX
KSPIN_DESCRIPTOR_EX, *PKSPIN_DESCRIPTOR_EX;
typedef struct _KSPIN_DISPATCH
KSPIN_DISPATCH, *PKSPIN_DISPATCH;
typedef struct _KSCLOCK_DISPATCH
KSCLOCK_DISPATCH, *PKSCLOCK_DISPATCH;
typedef struct _KSALLOCATOR_DISPATCH
KSALLOCATOR_DISPATCH, *PKSALLOCATOR_DISPATCH;
typedef struct _KSPIN 
KSPIN, *PKSPIN;
typedef struct _KSNODE_DESCRIPTOR
KSNODE_DESCRIPTOR, *PKSNODE_DESCRIPTOR;
typedef struct _KSSTREAM_POINTER_OFFSET
KSSTREAM_POINTER_OFFSET, *PKSSTREAM_POINTER_OFFSET;
typedef struct _KSSTREAM_POINTER
KSSTREAM_POINTER, *PKSSTREAM_POINTER;
typedef struct _KSMAPPING
KSMAPPING, *PKSMAPPING;
typedef struct _KSPROCESSPIN
KSPROCESSPIN, *PKSPROCESSPIN;
typedef struct _KSPROCESSPIN_INDEXENTRY
KSPROCESSPIN_INDEXENTRY, *PKSPROCESSPIN_INDEXENTRY;
#endif // _NTDDK_

#endif // (NTDDI_VERSION >= NTDDI_WINXP)

typedef PVOID PKSWORKER;

typedef struct {
    ULONG       NotificationType;
    union {
        struct {
            HANDLE              Event;
            ULONG_PTR           Reserved[2];
        } EventHandle;
        struct {
            HANDLE              Semaphore;
            ULONG               Reserved;
            LONG                Adjustment;
        } SemaphoreHandle;
#if defined(_NTDDK_)
        struct {
            PVOID               Event;
            KPRIORITY           Increment;
            ULONG_PTR           Reserved;
        } EventObject;
        struct {
            PVOID               Semaphore;
            KPRIORITY           Increment;
            LONG                Adjustment;
        } SemaphoreObject;
        struct {
            PKDPC               Dpc;
            ULONG               ReferenceCount;
            ULONG_PTR           Reserved;
        } Dpc;
        struct {
            PWORK_QUEUE_ITEM    WorkQueueItem;
            WORK_QUEUE_TYPE     WorkQueueType;
            ULONG_PTR           Reserved;
        } WorkItem;
        struct {
            PWORK_QUEUE_ITEM    WorkQueueItem;
            PKSWORKER           KsWorkerObject;
            ULONG_PTR           Reserved;
        } KsWorkItem;
#endif // defined(_NTDDK_)
        struct {
            PVOID               Unused;
            LONG_PTR            Alignment[2];
        } Alignment;
    };
} KSEVENTDATA, *PKSEVENTDATA;

#define KSEVENTF_EVENT_HANDLE       0x00000001
#define KSEVENTF_SEMAPHORE_HANDLE   0x00000002
#if defined(_NTDDK_)
#define KSEVENTF_EVENT_OBJECT       0x00000004
#define KSEVENTF_SEMAPHORE_OBJECT   0x00000008
#define KSEVENTF_DPC                0x00000010
#define KSEVENTF_WORKITEM           0x00000020
#define KSEVENTF_KSWORKITEM         0x00000080
#endif // defined(_NTDDK_)

#define KSEVENT_TYPE_ENABLE         0x00000001
#define KSEVENT_TYPE_ONESHOT        0x00000002
#define KSEVENT_TYPE_ENABLEBUFFERED 0x00000004
#define KSEVENT_TYPE_SETSUPPORT     0x00000100
#define KSEVENT_TYPE_BASICSUPPORT   0x00000200
#define KSEVENT_TYPE_QUERYBUFFER    0x00000400

#define KSEVENT_TYPE_TOPOLOGY 0x10000000

typedef struct {
    KSEVENT         Event;
    PKSEVENTDATA    EventData;
    PVOID           Reserved;
} KSQUERYBUFFER, *PKSQUERYBUFFER;

typedef struct {
    ULONG Size;
    ULONG Flags;
    union {
        HANDLE ObjectHandle;
        PVOID ObjectPointer;
    };
    PVOID Reserved;
    KSEVENT Event;
    KSEVENTDATA EventData;
} KSRELATIVEEVENT;

#define KSRELATIVEEVENT_FLAG_HANDLE 0x00000001
#define KSRELATIVEEVENT_FLAG_POINTER 0x00000002

//===========================================================================

typedef struct {
    KSEVENTDATA     EventData;
    LONGLONG        MarkTime;
} KSEVENT_TIME_MARK, *PKSEVENT_TIME_MARK;

typedef struct {
    KSEVENTDATA     EventData;
    LONGLONG        TimeBase;
    LONGLONG        Interval;
} KSEVENT_TIME_INTERVAL, *PKSEVENT_TIME_INTERVAL;

typedef struct {
    LONGLONG        TimeBase;
    LONGLONG        Interval;
} KSINTERVAL, *PKSINTERVAL;

//===========================================================================

#define STATIC_KSPROPSETID_General\
    0x1464EDA5L, 0x6A8F, 0x11D1, 0x9A, 0xA7, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("1464EDA5-6A8F-11D1-9AA7-00A0C9223196", KSPROPSETID_General);
#define KSPROPSETID_General DEFINE_GUIDNAMED(KSPROPSETID_General)

typedef enum {
    KSPROPERTY_GENERAL_COMPONENTID
} KSPROPERTY_GENERAL;

typedef struct {
    GUID    Manufacturer;
    GUID    Product;
    GUID    Component;
    GUID    Name;
    ULONG   Version;
    ULONG   Revision;
} KSCOMPONENTID, *PKSCOMPONENTID;

#define DEFINE_KSPROPERTY_ITEM_GENERAL_COMPONENTID(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_GENERAL_COMPONENTID,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSCOMPONENTID),\
        NULL, NULL, 0, NULL, NULL, 0)

#define STATIC_KSMETHODSETID_StreamIo\
    0x65D003CAL, 0x1523, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65D003CA-1523-11D2-B27A-00A0C9223196", KSMETHODSETID_StreamIo);
#define KSMETHODSETID_StreamIo DEFINE_GUIDNAMED(KSMETHODSETID_StreamIo)

typedef enum {
    KSMETHOD_STREAMIO_READ,
    KSMETHOD_STREAMIO_WRITE
} KSMETHOD_STREAMIO;

#define DEFINE_KSMETHOD_ITEM_STREAMIO_READ(Handler)\
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMIO_READ,\
        KSMETHOD_TYPE_WRITE,\
        (Handler),\
        sizeof(KSMETHOD),\
        0,\
        NULL)

#define DEFINE_KSMETHOD_ITEM_STREAMIO_WRITE(Handler)\
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMIO_WRITE,\
        KSMETHOD_TYPE_READ,\
        (Handler),\
        sizeof(KSMETHOD),\
        0,\
        NULL)

#define STATIC_KSPROPSETID_MediaSeeking\
    0xEE904F0CL, 0xD09B, 0x11D0, 0xAB, 0xE9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("EE904F0C-D09B-11D0-ABE9-00A0C9223196", KSPROPSETID_MediaSeeking);
#define KSPROPSETID_MediaSeeking DEFINE_GUIDNAMED(KSPROPSETID_MediaSeeking)

typedef enum {
    KSPROPERTY_MEDIASEEKING_CAPABILITIES,
    KSPROPERTY_MEDIASEEKING_FORMATS,
    KSPROPERTY_MEDIASEEKING_TIMEFORMAT,
    KSPROPERTY_MEDIASEEKING_POSITION,
    KSPROPERTY_MEDIASEEKING_STOPPOSITION,
    KSPROPERTY_MEDIASEEKING_POSITIONS,
    KSPROPERTY_MEDIASEEKING_DURATION,
    KSPROPERTY_MEDIASEEKING_AVAILABLE,
    KSPROPERTY_MEDIASEEKING_PREROLL,
    KSPROPERTY_MEDIASEEKING_CONVERTTIMEFORMAT
} KSPROPERTY_MEDIASEEKING;

typedef enum {
    KS_SEEKING_NoPositioning,
    KS_SEEKING_AbsolutePositioning,
    KS_SEEKING_RelativePositioning,
    KS_SEEKING_IncrementalPositioning,
    KS_SEEKING_PositioningBitsMask = 0x3,
    KS_SEEKING_SeekToKeyFrame,
    KS_SEEKING_ReturnTime = 0x8
} KS_SEEKING_FLAGS;

typedef enum {
    KS_SEEKING_CanSeekAbsolute = 0x1,
    KS_SEEKING_CanSeekForwards = 0x2,
    KS_SEEKING_CanSeekBackwards = 0x4,
    KS_SEEKING_CanGetCurrentPos = 0x8,
    KS_SEEKING_CanGetStopPos = 0x10,
    KS_SEEKING_CanGetDuration = 0x20,
    KS_SEEKING_CanPlayBackwards = 0x40
} KS_SEEKING_CAPABILITIES;

typedef struct {
    LONGLONG            Current;
    LONGLONG            Stop;
    KS_SEEKING_FLAGS    CurrentFlags;
    KS_SEEKING_FLAGS    StopFlags;
} KSPROPERTY_POSITIONS, *PKSPROPERTY_POSITIONS;

typedef struct {
    LONGLONG    Earliest;
    LONGLONG    Latest;
} KSPROPERTY_MEDIAAVAILABLE, *PKSPROPERTY_MEDIAAVAILABLE;

typedef struct {
    KSPROPERTY  Property;
    GUID        SourceFormat;
    GUID        TargetFormat;
    LONGLONG    Time;
} KSP_TIMEFORMAT, *PKSP_TIMEFORMAT;

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_CAPABILITIES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_CAPABILITIES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KS_SEEKING_CAPABILITIES),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_FORMATS(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_FORMATS,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_TIMEFORMAT(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_TIMEFORMAT,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(GUID),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_POSITION(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_POSITION,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_STOPPOSITION(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_STOPPOSITION,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_POSITIONS(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_POSITIONS,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(KSPROPERTY_POSITIONS),\
        (Handler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_DURATION(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_DURATION,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_AVAILABLE(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_AVAILABLE,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSPROPERTY_MEDIAAVAILABLE),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_PREROLL(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_PREROLL,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_MEDIASEEKING_CONVERTTIMEFORMAT(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEDIASEEKING_CONVERTTIMEFORMAT,\
        (Handler),\
        sizeof(KSP_TIMEFORMAT),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

//===========================================================================

#define STATIC_KSPROPSETID_Topology\
    0x720D4AC0L, 0x7533, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("720D4AC0-7533-11D0-A5D6-28DB04C10000", KSPROPSETID_Topology);
#define KSPROPSETID_Topology DEFINE_GUIDNAMED(KSPROPSETID_Topology)

typedef enum {
    KSPROPERTY_TOPOLOGY_CATEGORIES,
    KSPROPERTY_TOPOLOGY_NODES,
    KSPROPERTY_TOPOLOGY_CONNECTIONS,
    KSPROPERTY_TOPOLOGY_NAME
} KSPROPERTY_TOPOLOGY;

#define DEFINE_KSPROPERTY_ITEM_TOPOLOGY_CATEGORIES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_CATEGORIES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_TOPOLOGY_NODES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_NODES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_TOPOLOGY_CONNECTIONS(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_CONNECTIONS,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_TOPOLOGY_NAME(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_TOPOLOGY_NAME,\
        (Handler),\
        sizeof(KSP_NODE),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_TOPOLOGYSET(TopologySet, Handler)\
DEFINE_KSPROPERTY_TABLE(TopologySet) {\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_CATEGORIES(Handler),\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_NODES(Handler),\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_CONNECTIONS(Handler),\
    DEFINE_KSPROPERTY_ITEM_TOPOLOGY_NAME(Handler)\
}

//=============================================================================

//
// properties used by graph manager to talk to particular filters
//
#if defined(_NTDDK_)

#define STATIC_KSPROPSETID_GM \
    0xAF627536L, 0xE719, 0x11D2, 0x8A, 0x1D, 0x00, 0x60, 0x97, 0xD2, 0xDF, 0x5D    
DEFINE_GUIDSTRUCT("AF627536-E719-11D2-8A1D-006097D2DF5D", KSPROPSETID_GM);
#define KSPROPSETID_GM DEFINE_GUIDNAMED(KSPROPSETID_GM)

typedef VOID (*PFNKSGRAPHMANAGER_NOTIFY)(_In_ PFILE_OBJECT GraphManager,
                                         _In_ ULONG EventId,
                                         _In_ PVOID Filter,
                                         _In_ PVOID Pin,
                                         _In_ PVOID Frame,
                                         _In_ ULONG Duration);

typedef struct KSGRAPHMANAGER_FUNCTIONTABLE {
    PFNKSGRAPHMANAGER_NOTIFY NotifyEvent;
} KSGRAPHMANAGER_FUNCTIONTABLE, PKSGRAPHMANAGER_FUNCTIONTABLE;

typedef struct _KSPROPERTY_GRAPHMANAGER_INTERFACE {
    PFILE_OBJECT                 GraphManager;
    KSGRAPHMANAGER_FUNCTIONTABLE FunctionTable;
} KSPROPERTY_GRAPHMANAGER_INTERFACE, *PKSPROPERTY_GRAPHMANAGER_INTERFACE;


//
// Commands
//
typedef enum {
    KSPROPERTY_GM_GRAPHMANAGER,    
    KSPROPERTY_GM_TIMESTAMP_CLOCK, 
    KSPROPERTY_GM_RATEMATCH,       
    KSPROPERTY_GM_RENDER_CLOCK,    
} KSPROPERTY_GM;

#endif

//===========================================================================


#define STATIC_KSCATEGORY_BRIDGE \
    0x085AFF00L, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("085AFF00-62CE-11CF-A5D6-28DB04C10000", KSCATEGORY_BRIDGE);
#define KSCATEGORY_BRIDGE DEFINE_GUIDNAMED(KSCATEGORY_BRIDGE)

#define STATIC_KSCATEGORY_CAPTURE \
    0x65E8773DL, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65E8773D-8F56-11D0-A3B9-00A0C9223196", KSCATEGORY_CAPTURE);
#define KSCATEGORY_CAPTURE DEFINE_GUIDNAMED(KSCATEGORY_CAPTURE)

#define STATIC_KSCATEGORY_VIDEO_CAMERA \
    0xe5323777, 0xf976, 0x4f5b, 0x9b, 0x55, 0xb9, 0x46, 0x99, 0xc4, 0x6e, 0x44
DEFINE_GUIDSTRUCT("E5323777-F976-4f5b-9B55-B94699C46E44", KSCATEGORY_VIDEO_CAMERA);
#define KSCATEGORY_VIDEO_CAMERA DEFINE_GUIDNAMED(KSCATEGORY_VIDEO_CAMERA)

#define STATIC_KSCATEGORY_RENDER \
    0x65E8773EL, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65E8773E-8F56-11D0-A3B9-00A0C9223196", KSCATEGORY_RENDER);
#define KSCATEGORY_RENDER DEFINE_GUIDNAMED(KSCATEGORY_RENDER)

#define STATIC_KSCATEGORY_MIXER \
    0xAD809C00L, 0x7B88, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("AD809C00-7B88-11D0-A5D6-28DB04C10000", KSCATEGORY_MIXER);
#define KSCATEGORY_MIXER DEFINE_GUIDNAMED(KSCATEGORY_MIXER)

#define STATIC_KSCATEGORY_SPLITTER \
    0x0A4252A0L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("0A4252A0-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_SPLITTER);
#define KSCATEGORY_SPLITTER DEFINE_GUIDNAMED(KSCATEGORY_SPLITTER)

#define STATIC_KSCATEGORY_DATACOMPRESSOR \
    0x1E84C900L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("1E84C900-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_DATACOMPRESSOR);
#define KSCATEGORY_DATACOMPRESSOR DEFINE_GUIDNAMED(KSCATEGORY_DATACOMPRESSOR)

#define STATIC_KSCATEGORY_DATADECOMPRESSOR \
    0x2721AE20L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("2721AE20-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_DATADECOMPRESSOR);
#define KSCATEGORY_DATADECOMPRESSOR DEFINE_GUIDNAMED(KSCATEGORY_DATADECOMPRESSOR)

#define STATIC_KSCATEGORY_DATATRANSFORM \
    0x2EB07EA0L, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("2EB07EA0-7E70-11D0-A5D6-28DB04C10000", KSCATEGORY_DATATRANSFORM);
#define KSCATEGORY_DATATRANSFORM DEFINE_GUIDNAMED(KSCATEGORY_DATATRANSFORM)

//
// KSMFT_CATEGORY_XXX are MF Transform category guids redefined in ks.h 
// to facilitate KS Mini drivers to register KS Filters under MF Transform categories. 
//
#define STATIC_KSMFT_CATEGORY_VIDEO_DECODER \
	0xd6c02d4b, 0x6833, 0x45b4, 0x97, 0x1a, 0x05, 0xa4, 0xb0, 0x4b, 0xab, 0x91
DEFINE_GUIDSTRUCT("d6c02d4b-6833-45b4-971a-05a4b04bab91", KSMFT_CATEGORY_VIDEO_DECODER);
#define KSMFT_CATEGORY_VIDEO_DECODER DEFINE_GUIDNAMED(KSMFT_CATEGORY_VIDEO_DECODER)

#define STATIC_KSMFT_CATEGORY_VIDEO_ENCODER \
	0xf79eac7d, 0xe545, 0x4387, 0xbd, 0xee, 0xd6, 0x47, 0xd7, 0xbd, 0xe4, 0x2a
DEFINE_GUIDSTRUCT("f79eac7d-e545-4387-bdee-d647d7bde42a", KSMFT_CATEGORY_VIDEO_ENCODER);
#define KSMFT_CATEGORY_VIDEO_ENCODER DEFINE_GUIDNAMED(KSMFT_CATEGORY_VIDEO_ENCODER)

#define STATIC_KSMFT_CATEGORY_VIDEO_EFFECT \
	0x12e17c21, 0x532c, 0x4a6e, 0x8a, 0x1c, 0x40, 0x82, 0x5a, 0x73, 0x63, 0x97
DEFINE_GUIDSTRUCT("12e17c21-532c-4a6e-8a1c-40825a736397", KSMFT_CATEGORY_VIDEO_EFFECT);
#define KSMFT_CATEGORY_VIDEO_EFFECT DEFINE_GUIDNAMED(KSMFT_CATEGORY_VIDEO_EFFECT)

#define STATIC_KSMFT_CATEGORY_MULTIPLEXER \
	0x059c561e, 0x05ae, 0x4b61, 0xb6, 0x9d, 0x55, 0xb6, 0x1e, 0xe5, 0x4a, 0x7b
DEFINE_GUIDSTRUCT("059c561e-05ae-4b61-b69d-55b61ee54a7b", KSMFT_CATEGORY_MULTIPLEXER);
#define KSMFT_CATEGORY_MULTIPLEXER DEFINE_GUIDNAMED(KSMFT_CATEGORY_MULTIPLEXER)

#define STATIC_KSMFT_CATEGORY_DEMULTIPLEXER \
	0xa8700a7a, 0x939b, 0x44c5, 0x99, 0xd7, 0x76, 0x22, 0x6b, 0x23, 0xb3, 0xf1
DEFINE_GUIDSTRUCT("a8700a7a-939b-44c5-99d7-76226b23b3f1", KSMFT_CATEGORY_DEMULTIPLEXER);
#define KSMFT_CATEGORY_DEMULTIPLEXER DEFINE_GUIDNAMED(KSMFT_CATEGORY_DEMULTIPLEXER)

#define STATIC_KSMFT_CATEGORY_AUDIO_DECODER \
	0x9ea73fb4, 0xef7a, 0x4559, 0x8d, 0x5d, 0x71, 0x9d, 0x8f, 0x04, 0x26, 0xc7
DEFINE_GUIDSTRUCT("9ea73fb4-ef7a-4559-8d5d-719d8f0426c7", KSMFT_CATEGORY_AUDIO_DECODER);
#define KSMFT_CATEGORY_AUDIO_DECODER DEFINE_GUIDNAMED(KSMFT_CATEGORY_AUDIO_DECODER)

#define STATIC_KSMFT_CATEGORY_AUDIO_ENCODER \
	0x91c64bd0, 0xf91e, 0x4d8c, 0x92, 0x76, 0xdb, 0x24, 0x82, 0x79, 0xd9, 0x75
DEFINE_GUIDSTRUCT("91c64bd0-f91e-4d8c-9276-db248279d975", KSMFT_CATEGORY_AUDIO_ENCODER);
#define KSMFT_CATEGORY_AUDIO_ENCODER DEFINE_GUIDNAMED(KSMFT_CATEGORY_AUDIO_ENCODER)

#define STATIC_KSMFT_CATEGORY_AUDIO_EFFECT \
	0x11064c48, 0x3648, 0x4ed0, 0x93, 0x2e, 0x05, 0xce, 0x8a, 0xc8, 0x11, 0xb7
DEFINE_GUIDSTRUCT("11064c48-3648-4ed0-932e-05ce8ac811b7", KSMFT_CATEGORY_AUDIO_EFFECT);
#define KSMFT_CATEGORY_AUDIO_EFFECT DEFINE_GUIDNAMED(KSMFT_CATEGORY_AUDIO_EFFECT)

#define STATIC_KSMFT_CATEGORY_VIDEO_PROCESSOR \
	0x302ea3fc, 0xaa5f, 0x47f9, 0x9f, 0x7a, 0xc2, 0x18, 0x8b, 0xb1, 0x63, 0x2
DEFINE_GUIDSTRUCT("302ea3fc-aa5f-47f9-9f7a-c2188bb16302", KSMFT_CATEGORY_VIDEO_PROCESSOR);
#define KSMFT_CATEGORY_VIDEO_PROCESSOR DEFINE_GUIDNAMED(KSMFT_CATEGORY_VIDEO_PROCESSOR)

#define STATIC_KSMFT_CATEGORY_OTHER \
	0x90175d57, 0xb7ea, 0x4901, 0xae, 0xb3, 0x93, 0x3a, 0x87, 0x47, 0x75, 0x6f
DEFINE_GUIDSTRUCT("90175d57-b7ea-4901-aeb3-933a8747756f", KSMFT_CATEGORY_OTHER);
#define KSMFT_CATEGORY_OTHER DEFINE_GUIDNAMED(KSMFT_CATEGORY_OTHER)

#define STATIC_KSCATEGORY_COMMUNICATIONSTRANSFORM \
    0xCF1DDA2CL, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("CF1DDA2C-9743-11D0-A3EE-00A0C9223196", KSCATEGORY_COMMUNICATIONSTRANSFORM);
#define KSCATEGORY_COMMUNICATIONSTRANSFORM DEFINE_GUIDNAMED(KSCATEGORY_COMMUNICATIONSTRANSFORM)

#define STATIC_KSCATEGORY_INTERFACETRANSFORM \
    0xCF1DDA2DL, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("CF1DDA2D-9743-11D0-A3EE-00A0C9223196", KSCATEGORY_INTERFACETRANSFORM);
#define KSCATEGORY_INTERFACETRANSFORM DEFINE_GUIDNAMED(KSCATEGORY_INTERFACETRANSFORM)

#define STATIC_KSCATEGORY_MEDIUMTRANSFORM \
    0xCF1DDA2EL, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("CF1DDA2E-9743-11D0-A3EE-00A0C9223196", KSCATEGORY_MEDIUMTRANSFORM);
#define KSCATEGORY_MEDIUMTRANSFORM DEFINE_GUIDNAMED(KSCATEGORY_MEDIUMTRANSFORM)

#define STATIC_KSCATEGORY_FILESYSTEM \
    0x760FED5EL, 0x9357, 0x11D0, 0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("760FED5E-9357-11D0-A3CC-00A0C9223196", KSCATEGORY_FILESYSTEM);
#define KSCATEGORY_FILESYSTEM DEFINE_GUIDNAMED(KSCATEGORY_FILESYSTEM)

// KSNAME_Clock
#define STATIC_KSCATEGORY_CLOCK \
    0x53172480L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("53172480-4791-11D0-A5D6-28DB04C10000", KSCATEGORY_CLOCK);
#define KSCATEGORY_CLOCK DEFINE_GUIDNAMED(KSCATEGORY_CLOCK)

#define STATIC_KSCATEGORY_PROXY \
    0x97EBAACAL, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("97EBAACA-95BD-11D0-A3EA-00A0C9223196", KSCATEGORY_PROXY);
#define KSCATEGORY_PROXY DEFINE_GUIDNAMED(KSCATEGORY_PROXY)

#define STATIC_KSCATEGORY_QUALITY \
    0x97EBAACBL, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("97EBAACB-95BD-11D0-A3EA-00A0C9223196", KSCATEGORY_QUALITY);
#define KSCATEGORY_QUALITY DEFINE_GUIDNAMED(KSCATEGORY_QUALITY)

typedef struct {
    ULONG   FromNode;
    ULONG   FromNodePin;
    ULONG   ToNode;
    ULONG   ToNodePin;
} KSTOPOLOGY_CONNECTION, *PKSTOPOLOGY_CONNECTION;

typedef struct {
    ULONG                           CategoriesCount;
    _Field_size_(CategoriesCount)
    const GUID*                     Categories;
    ULONG                           TopologyNodesCount;
    _Field_size_(TopologyNodesCount)
    const GUID*                     TopologyNodes;
    ULONG                           TopologyConnectionsCount;
    _Field_size_(TopologyConnectionsCount)
    const KSTOPOLOGY_CONNECTION*    TopologyConnections;
    _Field_size_(TopologyNodesCount)
    const GUID*                     TopologyNodesNames;
    ULONG                           Reserved;
} KSTOPOLOGY, *PKSTOPOLOGY;

#define KSFILTER_NODE   ((ULONG)-1)
#define KSALL_NODES     ((ULONG)-1)

typedef struct {
    ULONG       CreateFlags;
    ULONG       Node;
} KSNODE_CREATE, *PKSNODE_CREATE;

//===========================================================================

// TIME_FORMAT_NONE
#define STATIC_KSTIME_FORMAT_NONE       STATIC_GUID_NULL
#define KSTIME_FORMAT_NONE              GUID_NULL

// TIME_FORMAT_FRAME
#define STATIC_KSTIME_FORMAT_FRAME\
    0x7b785570L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785570-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_FRAME);
#define KSTIME_FORMAT_FRAME DEFINE_GUIDNAMED(KSTIME_FORMAT_FRAME)

// TIME_FORMAT_BYTE             
#define STATIC_KSTIME_FORMAT_BYTE\
    0x7b785571L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785571-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_BYTE);
#define KSTIME_FORMAT_BYTE DEFINE_GUIDNAMED(KSTIME_FORMAT_BYTE)

// TIME_FORMAT_SAMPLE
#define STATIC_KSTIME_FORMAT_SAMPLE\
    0x7b785572L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785572-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_SAMPLE);
#define KSTIME_FORMAT_SAMPLE DEFINE_GUIDNAMED(KSTIME_FORMAT_SAMPLE)

// TIME_FORMAT_FIELD
#define STATIC_KSTIME_FORMAT_FIELD\
    0x7b785573L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785573-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_FIELD);
#define KSTIME_FORMAT_FIELD DEFINE_GUIDNAMED(KSTIME_FORMAT_FIELD)

// TIME_FORMAT_MEDIA_TIME
#define STATIC_KSTIME_FORMAT_MEDIA_TIME\
    0x7b785574L, 0x8c82, 0x11cf, 0xbc, 0x0c, 0x00, 0xaa, 0x00, 0xac, 0x74, 0xf6
DEFINE_GUIDSTRUCT("7b785574-8c82-11cf-bc0c-00aa00ac74f6", KSTIME_FORMAT_MEDIA_TIME);
#define KSTIME_FORMAT_MEDIA_TIME DEFINE_GUIDNAMED(KSTIME_FORMAT_MEDIA_TIME)

//===========================================================================

typedef KSIDENTIFIER KSPIN_INTERFACE, *PKSPIN_INTERFACE;

#define STATIC_KSINTERFACESETID_Standard \
    0x1A8766A0L, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("1A8766A0-62CE-11CF-A5D6-28DB04C10000", KSINTERFACESETID_Standard);
#define KSINTERFACESETID_Standard DEFINE_GUIDNAMED(KSINTERFACESETID_Standard)

typedef enum {
    KSINTERFACE_STANDARD_STREAMING,
    KSINTERFACE_STANDARD_LOOPED_STREAMING,
    KSINTERFACE_STANDARD_CONTROL		//Reserved for system use
} KSINTERFACE_STANDARD;

#define STATIC_KSINTERFACESETID_FileIo \
    0x8C6F932CL, 0xE771, 0x11D0, 0xB8, 0xFF, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("8C6F932C-E771-11D0-B8FF-00A0C9223196", KSINTERFACESETID_FileIo);
#define KSINTERFACESETID_FileIo DEFINE_GUIDNAMED(KSINTERFACESETID_FileIo)

typedef enum {
    KSINTERFACE_FILEIO_STREAMING
} KSINTERFACE_FILEIO;

//===========================================================================

#define KSMEDIUM_TYPE_ANYINSTANCE       0

#define STATIC_KSMEDIUMSETID_Standard \
    0x4747B320L, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("4747B320-62CE-11CF-A5D6-28DB04C10000", KSMEDIUMSETID_Standard);
#define KSMEDIUMSETID_Standard DEFINE_GUIDNAMED(KSMEDIUMSETID_Standard)

//For compatibility only
#define KSMEDIUM_STANDARD_DEVIO     KSMEDIUM_TYPE_ANYINSTANCE

//===========================================================================

#define STATIC_KSPROPSETID_Pin\
    0x8C134960L, 0x51AD, 0x11CF, 0x87, 0x8A, 0x94, 0xF8, 0x01, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("8C134960-51AD-11CF-878A-94F801C10000", KSPROPSETID_Pin);
#define KSPROPSETID_Pin DEFINE_GUIDNAMED(KSPROPSETID_Pin)

typedef enum {
    KSPROPERTY_PIN_CINSTANCES,
    KSPROPERTY_PIN_CTYPES,
    KSPROPERTY_PIN_DATAFLOW,
    KSPROPERTY_PIN_DATARANGES,
    KSPROPERTY_PIN_DATAINTERSECTION,
    KSPROPERTY_PIN_INTERFACES,
    KSPROPERTY_PIN_MEDIUMS,
    KSPROPERTY_PIN_COMMUNICATION,
    KSPROPERTY_PIN_GLOBALCINSTANCES,
    KSPROPERTY_PIN_NECESSARYINSTANCES,
    KSPROPERTY_PIN_PHYSICALCONNECTION,
    KSPROPERTY_PIN_CATEGORY,
    KSPROPERTY_PIN_NAME,
    KSPROPERTY_PIN_CONSTRAINEDDATARANGES,
    KSPROPERTY_PIN_PROPOSEDATAFORMAT
} KSPROPERTY_PIN;

typedef struct {
    KSPROPERTY      Property;
    ULONG           PinId;
    ULONG           Reserved;
} KSP_PIN, *PKSP_PIN;

typedef struct {
    KSEVENT         Event;
    ULONG           PinId;
    ULONG           Reserved;
} KSE_PIN, *PKSE_PIN;

#define KSINSTANCE_INDETERMINATE    ((ULONG)-1)

typedef struct {
    ULONG  PossibleCount;
    ULONG  CurrentCount;
} KSPIN_CINSTANCES, *PKSPIN_CINSTANCES;

typedef enum {
    KSPIN_DATAFLOW_IN = 1,
    KSPIN_DATAFLOW_OUT
} KSPIN_DATAFLOW, *PKSPIN_DATAFLOW;

#define KSDATAFORMAT_BIT_TEMPORAL_COMPRESSION   0
#define KSDATAFORMAT_TEMPORAL_COMPRESSION       (1 << KSDATAFORMAT_BIT_TEMPORAL_COMPRESSION)
#define KSDATAFORMAT_BIT_ATTRIBUTES 1
#define KSDATAFORMAT_ATTRIBUTES (1 << KSDATAFORMAT_BIT_ATTRIBUTES)

#define KSDATARANGE_BIT_ATTRIBUTES 1
#define KSDATARANGE_ATTRIBUTES (1 << KSDATARANGE_BIT_ATTRIBUTES)
#define KSDATARANGE_BIT_REQUIRED_ATTRIBUTES 2
#define KSDATARANGE_REQUIRED_ATTRIBUTES (1 << KSDATARANGE_BIT_REQUIRED_ATTRIBUTES)

#if !defined( _MSC_VER ) 
typedef struct {
    ULONG   FormatSize;
    ULONG   Flags;
    ULONG   SampleSize;
    ULONG   Reserved;
    GUID    MajorFormat;
    GUID    SubFormat;
    GUID    Specifier;
} KSDATAFORMAT, *PKSDATAFORMAT, KSDATARANGE, *PKSDATARANGE;
#else
typedef union {
    struct {
        ULONG   FormatSize;
        ULONG   Flags;
        ULONG   SampleSize;
        ULONG   Reserved;
        GUID    MajorFormat;
        GUID    SubFormat;
        GUID    Specifier;
    };
    LONGLONG    Alignment;
} KSDATAFORMAT, *PKSDATAFORMAT, KSDATARANGE, *PKSDATARANGE;
#endif

#define KSATTRIBUTE_REQUIRED 0x00000001

typedef struct {
    ULONG Size;
    ULONG Flags;
    GUID Attribute;
} KSATTRIBUTE, *PKSATTRIBUTE;

#if defined(_NTDDK_)
typedef struct {
    ULONG Count;
    _Field_size_(Count) PKSATTRIBUTE* Attributes;
} KSATTRIBUTE_LIST, *PKSATTRIBUTE_LIST;
#endif // _NTDDK_

typedef enum {
    KSPIN_COMMUNICATION_NONE,
    KSPIN_COMMUNICATION_SINK,
    KSPIN_COMMUNICATION_SOURCE,
    KSPIN_COMMUNICATION_BOTH,
    KSPIN_COMMUNICATION_BRIDGE
} KSPIN_COMMUNICATION, *PKSPIN_COMMUNICATION;

typedef KSIDENTIFIER KSPIN_MEDIUM, *PKSPIN_MEDIUM;

typedef struct {
    KSPIN_INTERFACE Interface;
    KSPIN_MEDIUM    Medium;
    ULONG           PinId;
    HANDLE          PinToHandle;
    KSPRIORITY      Priority;
} KSPIN_CONNECT, *PKSPIN_CONNECT;

typedef struct {
    ULONG   Size;
    ULONG   Pin;
    WCHAR   SymbolicLinkName[1];
} KSPIN_PHYSICALCONNECTION, *PKSPIN_PHYSICALCONNECTION;

#if defined(_NTDDK_)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSINTERSECTHANDLER)(
    _In_ PIRP Irp,
    _In_ PKSP_PIN Pin,
    _In_ PKSDATARANGE DataRange,
    _Out_opt_ PVOID Data
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSINTERSECTHANDLEREX)(
    _In_ PVOID Context,
    _In_ PIRP Irp,
    _In_ PKSP_PIN Pin,
    _In_ PKSDATARANGE DataRange,
    _In_ PKSDATARANGE MatchingDataRange,
    _In_ ULONG DataBufferSize,
    _Out_writes_bytes_to_opt_(DataBufferSize, *DataSize) PVOID Data,
    _Out_ PULONG DataSize
    );
#endif // _NTDDK_

#define DEFINE_KSPIN_INTERFACE_TABLE(tablename)\
    const KSPIN_INTERFACE tablename[] =

#define DEFINE_KSPIN_INTERFACE_ITEM(guid, interface)\
    {\
        STATICGUIDOF(guid),\
        (interface),\
        0\
    }

#define DEFINE_KSPIN_MEDIUM_TABLE( tablename )\
    const KSPIN_MEDIUM tablename[] =

#define DEFINE_KSPIN_MEDIUM_ITEM(guid, medium)\
    DEFINE_KSPIN_INTERFACE_ITEM(guid, medium)

#define DEFINE_KSPROPERTY_ITEM_PIN_CINSTANCES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CINSTANCES,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_CINSTANCES),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_CTYPES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CTYPES,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(ULONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_DATAFLOW(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_DATAFLOW,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_DATAFLOW),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_DATARANGES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_DATARANGES,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_DATAINTERSECTION(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_DATAINTERSECTION,\
        (Handler),\
        sizeof(KSP_PIN) + sizeof(KSMULTIPLE_ITEM),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_INTERFACES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_INTERFACES,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_MEDIUMS(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_MEDIUMS,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_COMMUNICATION(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_COMMUNICATION,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_COMMUNICATION),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_GLOBALCINSTANCES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_GLOBALCINSTANCES,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(KSPIN_CINSTANCES),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_NECESSARYINSTANCES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_NECESSARYINSTANCES,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(ULONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_PHYSICALCONNECTION(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_PHYSICALCONNECTION,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_CATEGORY(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CATEGORY,\
        (Handler),\
        sizeof(KSP_PIN),\
        sizeof(GUID),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_NAME(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_NAME,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_CONSTRAINEDDATARANGES(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_CONSTRAINEDDATARANGES,\
        (Handler),\
        sizeof(KSP_PIN),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_PIN_PROPOSEDATAFORMAT(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_PIN_PROPOSEDATAFORMAT,\
        NULL,\
        sizeof(KSP_PIN),\
        sizeof(KSDATAFORMAT),\
        (Handler), NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_PINSET(PinSet,\
    PropGeneral, PropInstances, PropIntersection)\
DEFINE_KSPROPERTY_TABLE(PinSet) {\
    DEFINE_KSPROPERTY_ITEM_PIN_CINSTANCES(PropInstances),\
    DEFINE_KSPROPERTY_ITEM_PIN_CTYPES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAFLOW(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATARANGES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAINTERSECTION(PropIntersection),\
    DEFINE_KSPROPERTY_ITEM_PIN_INTERFACES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_MEDIUMS(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_COMMUNICATION(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_CATEGORY(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_NAME(PropGeneral)\
}

#define DEFINE_KSPROPERTY_PINSETCONSTRAINED(PinSet,\
    PropGeneral, PropInstances, PropIntersection)\
DEFINE_KSPROPERTY_TABLE(PinSet) {\
    DEFINE_KSPROPERTY_ITEM_PIN_CINSTANCES(PropInstances),\
    DEFINE_KSPROPERTY_ITEM_PIN_CTYPES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAFLOW(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATARANGES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_DATAINTERSECTION(PropIntersection),\
    DEFINE_KSPROPERTY_ITEM_PIN_INTERFACES(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_MEDIUMS(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_COMMUNICATION(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_CATEGORY(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_NAME(PropGeneral),\
    DEFINE_KSPROPERTY_ITEM_PIN_CONSTRAINEDDATARANGES(PropGeneral)\
}

#define STATIC_KSEVENTSETID_PinCapsChange \
    0xDD4F192E, 0x3B78, 0x49AD, 0xA5, 0x34, 0x2C, 0x31, 0x5b, 0x82, 0x20, 0x00
DEFINE_GUIDSTRUCT("DD4F192E-3B78-49AD-A534-2C315B822000", KSEVENTSETID_PinCapsChange);
#define KSEVENTSETID_PinCapsChange DEFINE_GUIDNAMED(KSEVENTSETID_PinCapsChange)

typedef enum {
    KSEVENT_PINCAPS_FORMATCHANGE,
    KSEVENT_PINCAPS_JACKINFOCHANGE
} KSEVENT_PINCAPS_CHANGENOTIFICATIONS;

#define STATIC_KSNAME_Filter\
    0x9b365890L, 0x165f, 0x11d0, 0xa1, 0x95, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("9b365890-165f-11d0-a195-0020afd156e4", KSNAME_Filter);
#define KSNAME_Filter DEFINE_GUIDNAMED(KSNAME_Filter)

#define KSSTRING_Filter L"{9B365890-165F-11D0-A195-0020AFD156E4}"

#define STATIC_KSNAME_Pin\
    0x146F1A80L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("146F1A80-4791-11D0-A5D6-28DB04C10000", KSNAME_Pin);
#define KSNAME_Pin DEFINE_GUIDNAMED(KSNAME_Pin)

#define KSSTRING_Pin L"{146F1A80-4791-11D0-A5D6-28DB04C10000}"

#define STATIC_KSNAME_Clock\
    0x53172480L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("53172480-4791-11D0-A5D6-28DB04C10000", KSNAME_Clock);
#define KSNAME_Clock DEFINE_GUIDNAMED(KSNAME_Clock)

#define KSSTRING_Clock L"{53172480-4791-11D0-A5D6-28DB04C10000}"

#define STATIC_KSNAME_Allocator\
    0x642F5D00L, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("642F5D00-4791-11D0-A5D6-28DB04C10000", KSNAME_Allocator);
#define KSNAME_Allocator DEFINE_GUIDNAMED(KSNAME_Allocator)

#define KSSTRING_Allocator L"{642F5D00-4791-11D0-A5D6-28DB04C10000}"

#define KSSTRING_AllocatorEx L"{091BB63B-603F-11D1-B067-00A0C9062802}"

#define STATIC_KSNAME_TopologyNode\
    0x0621061AL, 0xEE75, 0x11D0, 0xB9, 0x15, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("0621061A-EE75-11D0-B915-00A0C9223196", KSNAME_TopologyNode);
#define KSNAME_TopologyNode DEFINE_GUIDNAMED(KSNAME_TopologyNode)

#define KSSTRING_TopologyNode L"{0621061A-EE75-11D0-B915-00A0C9223196}"

#if defined(_NTDDK_)

typedef struct {
    ULONG                   InterfacesCount;
    _Field_size_(InterfacesCount)
    const KSPIN_INTERFACE*  Interfaces;
    ULONG                   MediumsCount;
    _Field_size_(MediumsCount)
    const KSPIN_MEDIUM*     Mediums;
    ULONG                   DataRangesCount;
    _Field_size_(DataRangesCount)
    const PKSDATARANGE*     DataRanges;
    KSPIN_DATAFLOW          DataFlow;
    KSPIN_COMMUNICATION     Communication;
    const GUID*             Category;
    const GUID*             Name;
    union {
        LONGLONG            Reserved;
        struct {
            ULONG           ConstrainedDataRangesCount;
            _Field_size_(ConstrainedDataRangesCount)
            PKSDATARANGE*   ConstrainedDataRanges;
        };
    };
} KSPIN_DESCRIPTOR, *PKSPIN_DESCRIPTOR;
typedef const KSPIN_DESCRIPTOR *PCKSPIN_DESCRIPTOR;

#define DEFINE_KSPIN_DESCRIPTOR_TABLE(tablename)\
    const KSPIN_DESCRIPTOR tablename[] =

#define DEFINE_KSPIN_DESCRIPTOR_ITEM(\
    InterfacesCount, Interfaces,\
    MediumsCount, Mediums,\
    DataRangesCount, DataRanges,\
    DataFlow, Communication)\
{\
    InterfacesCount, Interfaces, MediumsCount, Mediums,\
    DataRangesCount, DataRanges, DataFlow, Communication,\
    NULL, NULL, 0\
}
#define DEFINE_KSPIN_DESCRIPTOR_ITEMEX(\
    InterfacesCount, Interfaces,\
    MediumsCount, Mediums,\
    DataRangesCount, DataRanges,\
    DataFlow, Communication,\
    Category, Name)\
{\
    InterfacesCount, Interfaces, MediumsCount, Mediums,\
    DataRangesCount, DataRanges, DataFlow, Communication,\
    Category, Name, 0\
}

#endif // defined(_NTDDK_)

//===========================================================================

// MEDIATYPE_NULL
#define STATIC_KSDATAFORMAT_TYPE_WILDCARD       STATIC_GUID_NULL
#define KSDATAFORMAT_TYPE_WILDCARD              GUID_NULL

// MEDIASUBTYPE_NULL
#define STATIC_KSDATAFORMAT_SUBTYPE_WILDCARD    STATIC_GUID_NULL
#define KSDATAFORMAT_SUBTYPE_WILDCARD           GUID_NULL

// MEDIATYPE_Stream
#define STATIC_KSDATAFORMAT_TYPE_STREAM\
    0xE436EB83L, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70
DEFINE_GUIDSTRUCT("E436EB83-524F-11CE-9F53-0020AF0BA770", KSDATAFORMAT_TYPE_STREAM);
#define KSDATAFORMAT_TYPE_STREAM DEFINE_GUIDNAMED(KSDATAFORMAT_TYPE_STREAM)

// MEDIASUBTYPE_None
#define STATIC_KSDATAFORMAT_SUBTYPE_NONE\
    0xE436EB8EL, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70
DEFINE_GUIDSTRUCT("E436EB8E-524F-11CE-9F53-0020AF0BA770", KSDATAFORMAT_SUBTYPE_NONE);
#define KSDATAFORMAT_SUBTYPE_NONE DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_NONE)

#define STATIC_KSDATAFORMAT_SPECIFIER_WILDCARD  STATIC_GUID_NULL
#define KSDATAFORMAT_SPECIFIER_WILDCARD         GUID_NULL

#define STATIC_KSDATAFORMAT_SPECIFIER_FILENAME\
    0xAA797B40L, 0xE974, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("AA797B40-E974-11CF-A5D6-28DB04C10000", KSDATAFORMAT_SPECIFIER_FILENAME);
#define KSDATAFORMAT_SPECIFIER_FILENAME DEFINE_GUIDNAMED(KSDATAFORMAT_SPECIFIER_FILENAME)

#define STATIC_KSDATAFORMAT_SPECIFIER_FILEHANDLE\
    0x65E8773CL, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("65E8773C-8F56-11D0-A3B9-00A0C9223196", KSDATAFORMAT_SPECIFIER_FILEHANDLE);
#define KSDATAFORMAT_SPECIFIER_FILEHANDLE DEFINE_GUIDNAMED(KSDATAFORMAT_SPECIFIER_FILEHANDLE)

// FORMAT_None
#define STATIC_KSDATAFORMAT_SPECIFIER_NONE\
    0x0F6417D6L, 0xC318, 0x11D0, 0xA4, 0x3F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("0F6417D6-C318-11D0-A43F-00A0C9223196", KSDATAFORMAT_SPECIFIER_NONE);
#define KSDATAFORMAT_SPECIFIER_NONE DEFINE_GUIDNAMED(KSDATAFORMAT_SPECIFIER_NONE)

//===========================================================================

#define STATIC_KSPROPSETID_Quality \
    0xD16AD380L, 0xAC1A, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("D16AD380-AC1A-11CF-A5D6-28DB04C10000", KSPROPSETID_Quality);
#define KSPROPSETID_Quality DEFINE_GUIDNAMED(KSPROPSETID_Quality)

typedef enum {
    KSPROPERTY_QUALITY_REPORT,
    KSPROPERTY_QUALITY_ERROR
} KSPROPERTY_QUALITY;

#define DEFINE_KSPROPERTY_ITEM_QUALITY_REPORT(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_QUALITY_REPORT,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSQUALITY),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_QUALITY_ERROR(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_QUALITY_ERROR,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSERROR),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

//===========================================================================

#define STATIC_KSPROPSETID_Connection \
    0x1D58C920L, 0xAC9B, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("1D58C920-AC9B-11CF-A5D6-28DB04C10000", KSPROPSETID_Connection);
#define KSPROPSETID_Connection DEFINE_GUIDNAMED(KSPROPSETID_Connection)

typedef enum {
    KSPROPERTY_CONNECTION_STATE,
    KSPROPERTY_CONNECTION_PRIORITY,
    KSPROPERTY_CONNECTION_DATAFORMAT,
    KSPROPERTY_CONNECTION_ALLOCATORFRAMING,
    KSPROPERTY_CONNECTION_PROPOSEDATAFORMAT,
    KSPROPERTY_CONNECTION_ACQUIREORDERING,
    KSPROPERTY_CONNECTION_ALLOCATORFRAMING_EX,
    KSPROPERTY_CONNECTION_STARTAT
} KSPROPERTY_CONNECTION;

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_STATE(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_STATE,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSSTATE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_PRIORITY(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_PRIORITY,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSPRIORITY),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_DATAFORMAT(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_DATAFORMAT,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        0,\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_ALLOCATORFRAMING(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_ALLOCATORFRAMING,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSALLOCATOR_FRAMING),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_ALLOCATORFRAMING_EX(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_ALLOCATORFRAMING_EX,\
        (Handler),\
        sizeof(KSPROPERTY),\
        0,\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_PROPOSEDATAFORMAT(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_PROPOSEDATAFORMAT,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(KSDATAFORMAT),\
        (Handler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_ACQUIREORDERING(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_ACQUIREORDERING,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(int),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CONNECTION_STARTAT(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CONNECTION_STARTAT,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(KSRELATIVEEVENT),\
        (Handler),\
        NULL, 0, NULL, NULL, 0)

//===========================================================================
//VRAM transport related propset
//===========================================================================

#define STATIC_KSPROPSETID_MemoryTransport \
    0xa3d1c5d, 0x5243, 0x4819, 0x9e, 0xd0, 0xae, 0xe8, 0x4, 0x4c, 0xee, 0x2b
DEFINE_GUIDSTRUCT("0A3D1C5D-5243-4819-9ED0-AEE8044CEE2B", KSPROPSETID_MemoryTransport);
#define KSPROPSETID_MemoryTransport DEFINE_GUIDNAMED(KSPROPSETID_MemoryTransport)
enum {
    // a value of zero is ignored
    KSPROPERTY_MEMORY_TRANSPORT = 1 //Sets pin's memory transport mechanism e.g. VRAM or SYSMEM
};

#define DEFINE_KSPROPERTY_ITEM_MEMORY_TRANSPORT(SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_MEMORY_TRANSPORT,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(BOOL),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

//===========================================================================
//
// pins flags
//
#define KSALLOCATOR_REQUIREMENTF_INPLACE_MODIFIER   0x00000001
#define KSALLOCATOR_REQUIREMENTF_SYSTEM_MEMORY      0x00000002
#define KSALLOCATOR_REQUIREMENTF_FRAME_INTEGRITY    0x00000004
#define KSALLOCATOR_REQUIREMENTF_MUST_ALLOCATE      0x00000008
#define KSALLOCATOR_REQUIREMENTF_PREFERENCES_ONLY   0x80000000

#define KSALLOCATOR_OPTIONF_COMPATIBLE              0x00000001
#define KSALLOCATOR_OPTIONF_SYSTEM_MEMORY           0x00000002
#define KSALLOCATOR_OPTIONF_VALID                   0x00000003
// 
// pins extended framing flags
//
#define KSALLOCATOR_FLAG_PARTIAL_READ_SUPPORT       0x00000010
#define KSALLOCATOR_FLAG_DEVICE_SPECIFIC            0x00000020
#define KSALLOCATOR_FLAG_CAN_ALLOCATE               0x00000040
#define KSALLOCATOR_FLAG_INSIST_ON_FRAMESIZE_RATIO  0x00000080
//
// allocator pipes flags
//
// there is at least one data modification in a pipe
#define KSALLOCATOR_FLAG_NO_FRAME_INTEGRITY         0x00000100
#define KSALLOCATOR_FLAG_MULTIPLE_OUTPUT            0x00000200
#define KSALLOCATOR_FLAG_CYCLE                      0x00000400
#define KSALLOCATOR_FLAG_ALLOCATOR_EXISTS           0x00000800
// there is no framing dependency between neighbouring pipes.
#define KSALLOCATOR_FLAG_INDEPENDENT_RANGES         0x00001000
#define KSALLOCATOR_FLAG_ATTENTION_STEPPING         0x00002000


//
// old Framing structure
//
typedef struct {
    union {
        ULONG       OptionsFlags;       // allocator options (create)
        ULONG       RequirementsFlags;  // allocation requirements (query)
    };
#if defined(_NTDDK_)
    POOL_TYPE   PoolType;
#else // !_NTDDK_
    ULONG       PoolType;
#endif // !_NTDDK_
    ULONG       Frames;     // total number of allowable outstanding frames
    ULONG       FrameSize;  // total size of frame
    ULONG       FileAlignment;
    ULONG       Reserved;
} KSALLOCATOR_FRAMING, *PKSALLOCATOR_FRAMING;

#if defined(_NTDDK_)
typedef
PVOID
(*PFNKSDEFAULTALLOCATE)(
    _In_ PVOID Context
    );

typedef
VOID
(*PFNKSDEFAULTFREE)(
    _In_ PVOID Context,
    _In_ PVOID Buffer
    );

typedef
NTSTATUS
(*PFNKSINITIALIZEALLOCATOR)(
    _In_ PVOID InitialContext,
    _In_ PKSALLOCATOR_FRAMING AllocatorFraming,
    _Outptr_ PVOID* Context
    );

typedef
VOID
(*PFNKSDELETEALLOCATOR)(
    _In_ PVOID Context
    );
#endif // !_NTDDK_

//
// new Framing structure, eventually will replace KSALLOCATOR_FRAMING.
// 
typedef struct {
    ULONG   MinFrameSize;
    ULONG   MaxFrameSize;
    ULONG   Stepping;
} KS_FRAMING_RANGE, *PKS_FRAMING_RANGE;


typedef struct {
    KS_FRAMING_RANGE  Range;
    ULONG             InPlaceWeight;
    ULONG             NotInPlaceWeight;
} KS_FRAMING_RANGE_WEIGHTED, *PKS_FRAMING_RANGE_WEIGHTED;


typedef struct {
    ULONG   RatioNumerator;      // compression/expansion ratio
    ULONG   RatioDenominator; 
    ULONG   RatioConstantMargin;
} KS_COMPRESSION, *PKS_COMPRESSION;


//
// Memory Types and Buses are repeated in each entry.
// Easiest to use but takes a little more memory than the varsize layout Pin\Memories\Buses\Ranges.
//
typedef struct {
    GUID                        MemoryType;
    GUID                        BusType;
    ULONG                       MemoryFlags;
    ULONG                       BusFlags;   
    ULONG                       Flags;   
    ULONG                       Frames;              // total number of allowable outstanding frames
    ULONG                       FileAlignment;
    ULONG                       MemoryTypeWeight;    // this memory type Weight pin-wide
    KS_FRAMING_RANGE            PhysicalRange;
    KS_FRAMING_RANGE_WEIGHTED   FramingRange; 
} KS_FRAMING_ITEM, *PKS_FRAMING_ITEM;


typedef struct {
    ULONG               CountItems;         // count of FramingItem-s below.
    ULONG               PinFlags;
    KS_COMPRESSION      OutputCompression;
    ULONG               PinWeight;          // this pin framing's Weight graph-wide
    KS_FRAMING_ITEM     FramingItem[1]; 
} KSALLOCATOR_FRAMING_EX, *PKSALLOCATOR_FRAMING_EX;



//
// define memory type GUIDs
//
#define KSMEMORY_TYPE_WILDCARD          GUID_NULL
#define STATIC_KSMEMORY_TYPE_WILDCARD   STATIC_GUID_NULL

#define KSMEMORY_TYPE_DONT_CARE         GUID_NULL
#define STATIC_KSMEMORY_TYPE_DONT_CARE  STATIC_GUID_NULL

#define KS_TYPE_DONT_CARE           GUID_NULL
#define STATIC_KS_TYPE_DONT_CARE    STATIC_GUID_NULL
     
#define STATIC_KSMEMORY_TYPE_SYSTEM \
    0x091bb638L, 0x603f, 0x11d1, 0xb0, 0x67, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("091bb638-603f-11d1-b067-00a0c9062802", KSMEMORY_TYPE_SYSTEM);
#define KSMEMORY_TYPE_SYSTEM  DEFINE_GUIDNAMED(KSMEMORY_TYPE_SYSTEM)

#define STATIC_KSMEMORY_TYPE_USER \
    0x8cb0fc28L, 0x7893, 0x11d1, 0xb0, 0x69, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("8cb0fc28-7893-11d1-b069-00a0c9062802", KSMEMORY_TYPE_USER);
#define KSMEMORY_TYPE_USER  DEFINE_GUIDNAMED(KSMEMORY_TYPE_USER)

#define STATIC_KSMEMORY_TYPE_KERNEL_PAGED \
    0xd833f8f8L, 0x7894, 0x11d1, 0xb0, 0x69, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("d833f8f8-7894-11d1-b069-00a0c9062802", KSMEMORY_TYPE_KERNEL_PAGED);
#define KSMEMORY_TYPE_KERNEL_PAGED  DEFINE_GUIDNAMED(KSMEMORY_TYPE_KERNEL_PAGED)

#define STATIC_KSMEMORY_TYPE_KERNEL_NONPAGED \
    0x4a6d5fc4L, 0x7895, 0x11d1, 0xb0, 0x69, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("4a6d5fc4-7895-11d1-b069-00a0c9062802", KSMEMORY_TYPE_KERNEL_NONPAGED);
#define KSMEMORY_TYPE_KERNEL_NONPAGED  DEFINE_GUIDNAMED(KSMEMORY_TYPE_KERNEL_NONPAGED)

// old KS clients did not specify the device memory type
#define STATIC_KSMEMORY_TYPE_DEVICE_UNKNOWN \
    0x091bb639L, 0x603f, 0x11d1, 0xb0, 0x67, 0x00, 0xa0, 0xc9, 0x06, 0x28, 0x02
DEFINE_GUIDSTRUCT("091bb639-603f-11d1-b067-00a0c9062802", KSMEMORY_TYPE_DEVICE_UNKNOWN);
#define KSMEMORY_TYPE_DEVICE_UNKNOWN DEFINE_GUIDNAMED(KSMEMORY_TYPE_DEVICE_UNKNOWN)

//
// Helper framing macros.
//
#define DECLARE_SIMPLE_FRAMING_EX(FramingExName, MemoryType, Flags, Frames, Alignment, MinFrameSize, MaxFrameSize) \
    const KSALLOCATOR_FRAMING_EX FramingExName = \
    {\
        1, \
        0, \
        {\
            1, \
            1, \
            0 \
        }, \
        0, \
        {\
            {\
                MemoryType, \
                STATIC_KS_TYPE_DONT_CARE, \
                0, \
                0, \
                Flags, \
                Frames, \
                Alignment, \
                0, \
                {\
                    0, \
                    (ULONG)-1, \
                    1 \
                }, \
                {\
                    {\
                        MinFrameSize, \
                        MaxFrameSize, \
                        1 \
                    }, \
                    0, \
                    0  \
                }\
            }\
        }\
    }

#define SetDefaultKsCompression(KsCompressionPointer) \
{\
    KsCompressionPointer->RatioNumerator = 1;\
    KsCompressionPointer->RatioDenominator = 1;\
    KsCompressionPointer->RatioConstantMargin = 0;\
}

#define SetDontCareKsFramingRange(KsFramingRangePointer) \
{\
    KsFramingRangePointer->MinFrameSize = 0;\
    KsFramingRangePointer->MaxFrameSize = (ULONG) -1;\
    KsFramingRangePointer->Stepping = 1;\
}

#define SetKsFramingRange(KsFramingRangePointer, P_MinFrameSize, P_MaxFrameSize) \
{\
    KsFramingRangePointer->MinFrameSize = P_MinFrameSize;\
    KsFramingRangePointer->MaxFrameSize = P_MaxFrameSize;\
    KsFramingRangePointer->Stepping = 1;\
}

#define SetKsFramingRangeWeighted(KsFramingRangeWeightedPointer, P_MinFrameSize, P_MaxFrameSize) \
{\
    KS_FRAMING_RANGE *KsFramingRange = &KsFramingRangeWeightedPointer->Range;\
    SetKsFramingRange(KsFramingRange, P_MinFrameSize, P_MaxFrameSize);\
    KsFramingRangeWeightedPointer->InPlaceWeight = 0;\
    KsFramingRangeWeightedPointer->NotInPlaceWeight = 0;\
}

#define INITIALIZE_SIMPLE_FRAMING_EX(FramingExPointer, P_MemoryType, P_Flags, P_Frames, P_Alignment, P_MinFrameSize, P_MaxFrameSize) \
{\
    KS_COMPRESSION *KsCompression = &FramingExPointer->OutputCompression;\
    KS_FRAMING_RANGE *KsFramingRange = &FramingExPointer->FramingItem[0].PhysicalRange;\
    KS_FRAMING_RANGE_WEIGHTED *KsFramingRangeWeighted = &FramingExPointer->FramingItem[0].FramingRange;\
    FramingExPointer->CountItems = 1;\
    FramingExPointer->PinFlags = 0;\
    SetDefaultKsCompression(KsCompression);\
    FramingExPointer->PinWeight = 0;\
    FramingExPointer->FramingItem[0].MemoryType = P_MemoryType;\
    FramingExPointer->FramingItem[0].BusType = KS_TYPE_DONT_CARE;\
    FramingExPointer->FramingItem[0].MemoryFlags = 0;\
    FramingExPointer->FramingItem[0].BusFlags = 0;\
    FramingExPointer->FramingItem[0].Flags = P_Flags;\
    FramingExPointer->FramingItem[0].Frames = P_Frames;\
    FramingExPointer->FramingItem[0].FileAlignment = P_Alignment;\
    FramingExPointer->FramingItem[0].MemoryTypeWeight = 0;\
    SetDontCareKsFramingRange(KsFramingRange);\
    SetKsFramingRangeWeighted(KsFramingRangeWeighted, P_MinFrameSize, P_MaxFrameSize);\
}



// KSEVENTSETID_StreamAllocator: {75D95571-073C-11d0-A161-0020AFD156E4}

#define STATIC_KSEVENTSETID_StreamAllocator\
    0x75d95571L, 0x073c, 0x11d0, 0xa1, 0x61, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("75d95571-073c-11d0-a161-0020afd156e4", KSEVENTSETID_StreamAllocator);
#define KSEVENTSETID_StreamAllocator DEFINE_GUIDNAMED(KSEVENTSETID_StreamAllocator)

typedef enum {
    KSEVENT_STREAMALLOCATOR_INTERNAL_FREEFRAME,
    KSEVENT_STREAMALLOCATOR_FREEFRAME
} KSEVENT_STREAMALLOCATOR;

#define STATIC_KSMETHODSETID_StreamAllocator\
    0xcf6e4341L, 0xec87, 0x11cf, 0xa1, 0x30, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("cf6e4341-ec87-11cf-a130-0020afd156e4", KSMETHODSETID_StreamAllocator);
#define KSMETHODSETID_StreamAllocator DEFINE_GUIDNAMED(KSMETHODSETID_StreamAllocator)

typedef enum {
    KSMETHOD_STREAMALLOCATOR_ALLOC,
    KSMETHOD_STREAMALLOCATOR_FREE
} KSMETHOD_STREAMALLOCATOR;

#define DEFINE_KSMETHOD_ITEM_STREAMALLOCATOR_ALLOC(Handler)\
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMALLOCATOR_ALLOC,\
        KSMETHOD_TYPE_WRITE,\
        (Handler),\
        sizeof(KSMETHOD),\
        sizeof(PVOID),\
        NULL)

#define DEFINE_KSMETHOD_ITEM_STREAMALLOCATOR_FREE(Handler)\
    DEFINE_KSMETHOD_ITEM(\
        KSMETHOD_STREAMALLOCATOR_FREE,\
        KSMETHOD_TYPE_READ,\
        (Handler),\
        sizeof(KSMETHOD),\
        sizeof(PVOID),\
        NULL)

#define DEFINE_KSMETHOD_ALLOCATORSET(AllocatorSet, MethodAlloc, MethodFree)\
DEFINE_KSMETHOD_TABLE(AllocatorSet) {\
    DEFINE_KSMETHOD_ITEM_STREAMALLOCATOR_ALLOC(MethodAlloc),\
    DEFINE_KSMETHOD_ITEM_STREAMALLOCATOR_FREE(MethodFree)\
}

#define STATIC_KSPROPSETID_StreamAllocator\
    0xcf6e4342L, 0xec87, 0x11cf, 0xa1, 0x30, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("cf6e4342-ec87-11cf-a130-0020afd156e4", KSPROPSETID_StreamAllocator);
#define KSPROPSETID_StreamAllocator DEFINE_GUIDNAMED(KSPROPSETID_StreamAllocator)

#if defined(_NTDDK_)
typedef enum {
    KSPROPERTY_STREAMALLOCATOR_FUNCTIONTABLE,
    KSPROPERTY_STREAMALLOCATOR_STATUS
} KSPROPERTY_STREAMALLOCATOR;

#define DEFINE_KSPROPERTY_ITEM_STREAMALLOCATOR_FUNCTIONTABLE(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAMALLOCATOR_FUNCTIONTABLE,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSSTREAMALLOCATOR_FUNCTIONTABLE),\
        NULL, NULL, 0, NULL, NULL, 0)
        
#define DEFINE_KSPROPERTY_ITEM_STREAMALLOCATOR_STATUS(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAMALLOCATOR_STATUS,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSSTREAMALLOCATOR_STATUS),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ALLOCATORSET(AllocatorSet, PropFunctionTable, PropStatus)\
DEFINE_KSPROPERTY_TABLE(AllocatorSet) {\
    DEFINE_KSPROPERTY_ITEM_STREAMALLOCATOR_STATUS(PropStatus),\
    DEFINE_KSPROPERTY_ITEM_STREAMALLOCATOR_FUNCTIONTABLE(PropFunctionTable)\
}

typedef
NTSTATUS
(*PFNALLOCATOR_ALLOCATEFRAME)(
    _In_ PFILE_OBJECT FileObject,
    _Outptr_ PVOID *Frame
    );

typedef
VOID
(*PFNALLOCATOR_FREEFRAME)(
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID Frame
    );

typedef struct {
    PFNALLOCATOR_ALLOCATEFRAME  AllocateFrame;
    PFNALLOCATOR_FREEFRAME      FreeFrame;
} KSSTREAMALLOCATOR_FUNCTIONTABLE, *PKSSTREAMALLOCATOR_FUNCTIONTABLE;
#endif // defined(_NTDDK_)

typedef struct {
    KSALLOCATOR_FRAMING Framing;
    ULONG               AllocatedFrames;
    ULONG               Reserved;
} KSSTREAMALLOCATOR_STATUS, *PKSSTREAMALLOCATOR_STATUS;

typedef struct {
    KSALLOCATOR_FRAMING_EX Framing;
    ULONG                  AllocatedFrames;
    ULONG                  Reserved;
} KSSTREAMALLOCATOR_STATUS_EX, *PKSSTREAMALLOCATOR_STATUS_EX;


#define KSSTREAM_HEADER_OPTIONSF_SPLICEPOINT        0x00000001
#define KSSTREAM_HEADER_OPTIONSF_PREROLL            0x00000002
#define KSSTREAM_HEADER_OPTIONSF_DATADISCONTINUITY  0x00000004
#define KSSTREAM_HEADER_OPTIONSF_TYPECHANGED        0x00000008
#define KSSTREAM_HEADER_OPTIONSF_TIMEVALID          0x00000010
#define KSSTREAM_HEADER_OPTIONSF_TIMEDISCONTINUITY  0x00000040
#define KSSTREAM_HEADER_OPTIONSF_FLUSHONPAUSE       0x00000080
#define KSSTREAM_HEADER_OPTIONSF_DURATIONVALID      0x00000100
#define KSSTREAM_HEADER_OPTIONSF_ENDOFSTREAM        0x00000200
#define KSSTREAM_HEADER_OPTIONSF_BUFFEREDTRANSFER   0x00000400
#define KSSTREAM_HEADER_OPTIONSF_VRAM_DATA_TRANSFER 0x00000800
#define KSSTREAM_HEADER_OPTIONSF_LOOPEDDATA         0x80000000

typedef struct {
    LONGLONG    Time;
    ULONG       Numerator;
    ULONG       Denominator;
} KSTIME, *PKSTIME;

typedef struct {
    ULONG       Size;
    ULONG       TypeSpecificFlags;
    KSTIME      PresentationTime;
    LONGLONG    Duration;
    ULONG       FrameExtent;
    ULONG       DataUsed;
    _Field_size_bytes_(FrameExtent)
    PVOID       Data;
    ULONG       OptionsFlags;
#if _WIN64
    ULONG       Reserved;
#endif
} KSSTREAM_HEADER, *PKSSTREAM_HEADER;

#define STATIC_KSPROPSETID_StreamInterface\
    0x1fdd8ee1L, 0x9cd3, 0x11d0, 0x82, 0xaa, 0x00, 0x00, 0xf8, 0x22, 0xfe, 0x8a
DEFINE_GUIDSTRUCT("1fdd8ee1-9cd3-11d0-82aa-0000f822fe8a", KSPROPSETID_StreamInterface);
#define KSPROPSETID_StreamInterface DEFINE_GUIDNAMED(KSPROPSETID_StreamInterface)

typedef enum {
    KSPROPERTY_STREAMINTERFACE_HEADERSIZE
} KSPROPERTY_STREAMINTERFACE;

#define DEFINE_KSPROPERTY_ITEM_STREAMINTERFACE_HEADERSIZE( GetHandler )\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAMINTERFACE_HEADERSIZE,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(ULONG),\
        NULL, NULL, 0, NULL, NULL, 0)
        
#define DEFINE_KSPROPERTY_STREAMINTERFACESET(StreamInterfaceSet,\
    HeaderSizeHandler)\
DEFINE_KSPROPERTY_TABLE(StreamInterfaceSet) {\
    DEFINE_KSPROPERTY_ITEM_STREAMINTERFACE_HEADERSIZE( HeaderSizeHandler )\
}

#define STATIC_KSPROPSETID_Stream\
    0x65aaba60L, 0x98ae, 0x11cf, 0xa1, 0x0d, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("65aaba60-98ae-11cf-a10d-0020afd156e4", KSPROPSETID_Stream);
#define KSPROPSETID_Stream DEFINE_GUIDNAMED(KSPROPSETID_Stream)

typedef enum {
    KSPROPERTY_STREAM_ALLOCATOR,
    KSPROPERTY_STREAM_QUALITY,
    KSPROPERTY_STREAM_DEGRADATION,
    KSPROPERTY_STREAM_MASTERCLOCK,
    KSPROPERTY_STREAM_TIMEFORMAT,
    KSPROPERTY_STREAM_PRESENTATIONTIME,
    KSPROPERTY_STREAM_PRESENTATIONEXTENT,
    KSPROPERTY_STREAM_FRAMETIME,
    KSPROPERTY_STREAM_RATECAPABILITY,
    KSPROPERTY_STREAM_RATE,
    KSPROPERTY_STREAM_PIPE_ID
} KSPROPERTY_STREAM;

#define DEFINE_KSPROPERTY_ITEM_STREAM_ALLOCATOR(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_ALLOCATOR,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(HANDLE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_QUALITY(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_QUALITY,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSQUALITY_MANAGER),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_DEGRADATION(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_DEGRADATION,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        0,\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_MASTERCLOCK(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_MASTERCLOCK,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(HANDLE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_TIMEFORMAT(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_TIMEFORMAT,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(GUID),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_PRESENTATIONTIME(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_PRESENTATIONTIME,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSTIME),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_PRESENTATIONEXTENT(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_PRESENTATIONEXTENT,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_FRAMETIME(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_FRAMETIME,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSFRAMETIME),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_RATECAPABILITY(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_RATECAPABILITY,\
        (Handler),\
        sizeof(KSRATE_CAPABILITY),\
        sizeof(KSRATE),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_RATE(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_RATE,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(KSRATE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_STREAM_PIPE_ID(GetHandler, SetHandler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_STREAM_PIPE_ID,\
        (GetHandler),\
        sizeof(KSPROPERTY),\
        sizeof(HANDLE),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)

typedef struct {
    HANDLE      QualityManager;
    PVOID       Context;
} KSQUALITY_MANAGER, *PKSQUALITY_MANAGER;

typedef struct {
    LONGLONG    Duration;
    ULONG       FrameFlags;
    ULONG       Reserved;
} KSFRAMETIME, *PKSFRAMETIME;

#define KSFRAMETIME_VARIABLESIZE    0x00000001

typedef struct {
    LONGLONG        PresentationStart;
    LONGLONG        Duration;
    KSPIN_INTERFACE Interface;
    LONG            Rate;
    ULONG           Flags;
} KSRATE, *PKSRATE;

#define KSRATE_NOPRESENTATIONSTART      0x00000001
#define KSRATE_NOPRESENTATIONDURATION   0x00000002

typedef struct {
    KSPROPERTY      Property;
    KSRATE          Rate;
} KSRATE_CAPABILITY, *PKSRATE_CAPABILITY;

#define STATIC_KSPROPSETID_Clock \
    0xDF12A4C0L, 0xAC17, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("DF12A4C0-AC17-11CF-A5D6-28DB04C10000", KSPROPSETID_Clock);
#define KSPROPSETID_Clock DEFINE_GUIDNAMED(KSPROPSETID_Clock)

//
// Performs a x*y/z operation on 64 bit quantities by splitting the operation. The equation
// is simplified with respect to adding in the remainder for the upper 32 bits.
//
// (xh * 10000000 / Frequency) * 2^32 + ((((xh * 10000000) % Frequency) * 2^32 + (xl * 10000000)) / Frequency)
//
#define NANOSECONDS 10000000
#define KSCONVERT_PERFORMANCE_TIME(Frequency, PerformanceTime) \
    ((((ULONGLONG)(ULONG)(PerformanceTime).HighPart * NANOSECONDS / (Frequency)) << 32) + \
    ((((((ULONGLONG)(ULONG)(PerformanceTime).HighPart * NANOSECONDS) % (Frequency)) << 32) + \
    ((ULONGLONG)(PerformanceTime).LowPart * NANOSECONDS)) / (Frequency)))

typedef struct {
    ULONG       CreateFlags;
} KSCLOCK_CREATE, *PKSCLOCK_CREATE;

typedef struct {
    LONGLONG    Time;
    LONGLONG    SystemTime;
} KSCORRELATED_TIME, *PKSCORRELATED_TIME;

typedef struct {
    LONGLONG    Granularity;
    LONGLONG    Error;
} KSRESOLUTION, *PKSRESOLUTION;

typedef enum {
    KSPROPERTY_CLOCK_TIME,
    KSPROPERTY_CLOCK_PHYSICALTIME,
    KSPROPERTY_CLOCK_CORRELATEDTIME,
    KSPROPERTY_CLOCK_CORRELATEDPHYSICALTIME,
    KSPROPERTY_CLOCK_RESOLUTION,
    KSPROPERTY_CLOCK_STATE,
#if defined(_NTDDK_)
    KSPROPERTY_CLOCK_FUNCTIONTABLE
#endif // defined(_NTDDK_)
} KSPROPERTY_CLOCK;

#if defined(_NTDDK_)

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
LONGLONG
(FASTCALL *PFNKSCLOCK_GETTIME)(
    _In_ PFILE_OBJECT FileObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
LONGLONG
(FASTCALL *PFNKSCLOCK_CORRELATEDTIME)(
    _In_ PFILE_OBJECT FileObject,
    _Out_ PLONGLONG SystemTime);

typedef struct {
    PFNKSCLOCK_GETTIME GetTime;
    PFNKSCLOCK_GETTIME GetPhysicalTime;
    PFNKSCLOCK_CORRELATEDTIME GetCorrelatedTime;
    PFNKSCLOCK_CORRELATEDTIME GetCorrelatedPhysicalTime;
} KSCLOCK_FUNCTIONTABLE, *PKSCLOCK_FUNCTIONTABLE;

#if (NTDDI_VERSION >= NTDDI_WINXP)

_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
BOOLEAN
(*PFNKSSETTIMER)(
    _In_ PVOID Context,
    _In_ PKTIMER Timer,
    _In_ LARGE_INTEGER DueTime,
    _In_ PKDPC Dpc
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
BOOLEAN
(*PFNKSCANCELTIMER)(
    _In_ PVOID Context,
    _In_ PKTIMER Timer
    );

typedef
LONGLONG
(FASTCALL *PFNKSCORRELATEDTIME)(
    _In_ PVOID Context,
    _Out_  PLONGLONG SystemTime);

#endif // (NTDDI_VERSION >= NTDDI_WINXP)

typedef PVOID   PKSDEFAULTCLOCK;

#define DEFINE_KSPROPERTY_ITEM_CLOCK_TIME(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CLOCK_TIME,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CLOCK_PHYSICALTIME(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CLOCK_PHYSICALTIME,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(LONGLONG),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CLOCK_CORRELATEDTIME(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CLOCK_CORRELATEDTIME,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSCORRELATED_TIME),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CLOCK_CORRELATEDPHYSICALTIME(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CLOCK_CORRELATEDPHYSICALTIME,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSCORRELATED_TIME),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CLOCK_RESOLUTION(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CLOCK_RESOLUTION,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSRESOLUTION),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CLOCK_STATE(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CLOCK_STATE,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSSTATE),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_ITEM_CLOCK_FUNCTIONTABLE(Handler)\
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_CLOCK_FUNCTIONTABLE,\
        (Handler),\
        sizeof(KSPROPERTY),\
        sizeof(KSCLOCK_FUNCTIONTABLE),\
        NULL, NULL, 0, NULL, NULL, 0)

#define DEFINE_KSPROPERTY_CLOCKSET(ClockSet,\
    PropTime, PropPhysicalTime,\
    PropCorrelatedTime, PropCorrelatedPhysicalTime,\
    PropResolution, PropState, PropFunctionTable)\
DEFINE_KSPROPERTY_TABLE(ClockSet) {\
    DEFINE_KSPROPERTY_ITEM_CLOCK_TIME(PropTime),\
    DEFINE_KSPROPERTY_ITEM_CLOCK_PHYSICALTIME(PropPhysicalTime),\
    DEFINE_KSPROPERTY_ITEM_CLOCK_CORRELATEDTIME(PropCorrelatedTime),\
    DEFINE_KSPROPERTY_ITEM_CLOCK_CORRELATEDPHYSICALTIME(PropCorrelatedPhysicalTime),\
    DEFINE_KSPROPERTY_ITEM_CLOCK_RESOLUTION(PropResolution),\
    DEFINE_KSPROPERTY_ITEM_CLOCK_STATE(PropState),\
    DEFINE_KSPROPERTY_ITEM_CLOCK_FUNCTIONTABLE(PropFunctionTable)\
}

#endif // defined(_NTDDK_)

#define STATIC_KSEVENTSETID_Clock \
    0x364D8E20L, 0x62C7, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("364D8E20-62C7-11CF-A5D6-28DB04C10000", KSEVENTSETID_Clock);
#define KSEVENTSETID_Clock DEFINE_GUIDNAMED(KSEVENTSETID_Clock)

typedef enum {
    KSEVENT_CLOCK_INTERVAL_MARK,
    KSEVENT_CLOCK_POSITION_MARK
} KSEVENT_CLOCK_POSITION;

#define STATIC_KSEVENTSETID_Connection\
    0x7f4bcbe0L, 0x9ea5, 0x11cf, 0xa5, 0xd6, 0x28, 0xdb, 0x04, 0xc1, 0x00, 0x00
DEFINE_GUIDSTRUCT("7f4bcbe0-9ea5-11cf-a5d6-28db04c10000", KSEVENTSETID_Connection);
#define KSEVENTSETID_Connection DEFINE_GUIDNAMED(KSEVENTSETID_Connection)

typedef enum {
    KSEVENT_CONNECTION_POSITIONUPDATE,
    KSEVENT_CONNECTION_DATADISCONTINUITY,
    KSEVENT_CONNECTION_TIMEDISCONTINUITY,
    KSEVENT_CONNECTION_PRIORITY,
    KSEVENT_CONNECTION_ENDOFSTREAM
} KSEVENT_CONNECTION;

typedef struct {
    PVOID       Context;
    ULONG       Proportion;
    LONGLONG    DeltaTime;
} KSQUALITY, *PKSQUALITY;

typedef struct {
    PVOID       Context;
    ULONG       Status;
} KSERROR, *PKSERROR;

#define STATIC_KSEVENTSETID_Device\
    0x288296ec, 0x9f94, 0x41b4, 0xa1, 0x53, 0xaa, 0x31, 0xae, 0xec, 0xb3, 0x3f
DEFINE_GUIDSTRUCT("288296EC-9F94-41b4-A153-AA31AEECB33F", KSEVENTSETID_Device);
#define KSEVENTSETID_Device DEFINE_GUIDNAMED(KSEVENTSETID_Device)

typedef enum {
    KSEVENT_DEVICE_LOST,
    KSEVENT_DEVICE_PREEMPTED
} KSEVENT_DEVICE;

typedef KSIDENTIFIER KSDEGRADE, *PKSDEGRADE;

#define STATIC_KSDEGRADESETID_Standard\
    0x9F564180L, 0x704C, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00
DEFINE_GUIDSTRUCT("9F564180-704C-11D0-A5D6-28DB04C10000", KSDEGRADESETID_Standard);
#define KSDEGRADESETID_Standard DEFINE_GUIDNAMED(KSDEGRADESETID_Standard)

typedef enum {
    KSDEGRADE_STANDARD_SAMPLE,
    KSDEGRADE_STANDARD_QUALITY,
    KSDEGRADE_STANDARD_COMPUTATION,
    KSDEGRADE_STANDARD_SKIP
} KSDEGRADE_STANDARD;

#if defined(_NTDDK_)

#define KSPROBE_STREAMREAD      0x00000000
#define KSPROBE_STREAMWRITE     0x00000001
#define KSPROBE_ALLOCATEMDL     0x00000010
#define KSPROBE_PROBEANDLOCK    0x00000020
#define KSPROBE_SYSTEMADDRESS   0x00000040
#define KSPROBE_MODIFY          0x00000200
#define KSPROBE_STREAMWRITEMODIFY (KSPROBE_MODIFY | KSPROBE_STREAMWRITE)
#define KSPROBE_ALLOWFORMATCHANGE   0x00000080

#define KSSTREAM_READ           KSPROBE_STREAMREAD
#define KSSTREAM_WRITE          KSPROBE_STREAMWRITE
#define KSSTREAM_PAGED_DATA     0x00000000
#define KSSTREAM_NONPAGED_DATA  0x00000100
#define KSSTREAM_SYNCHRONOUS    0x00001000
#define KSSTREAM_FAILUREEXCEPTION 0x00002000

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSCONTEXT_DISPATCH)(
    _In_ PVOID Context,
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSHANDLER)(
    _In_ PIRP Irp,
    _In_ PKSIDENTIFIER Request,
    _Inout_ PVOID Data
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
BOOLEAN
(*PFNKSFASTHANDLER)(
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(RequestLength) PKSIDENTIFIER Request,
    _In_ ULONG RequestLength,
    _Inout_updates_bytes_(DataLength) PVOID Data,
    _In_ ULONG DataLength,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSALLOCATOR)(
    _In_ PIRP Irp,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN InputOperation
    );

typedef struct {
    KSPROPERTY_MEMBERSHEADER    MembersHeader;
    const VOID*                 Members;
} KSPROPERTY_MEMBERSLIST, *PKSPROPERTY_MEMBERSLIST;

typedef struct {
    KSIDENTIFIER                    PropTypeSet;
    ULONG                           MembersListCount;
    _Field_size_(MembersListCount)
    const KSPROPERTY_MEMBERSLIST*   MembersList;
} KSPROPERTY_VALUES, *PKSPROPERTY_VALUES;

#define DEFINE_KSPROPERTY_TABLE(tablename)\
    const KSPROPERTY_ITEM tablename[] =

#define DEFINE_KSPROPERTY_ITEM(PropertyId, GetHandler,\
                               MinProperty,\
                               MinData,\
                               SetHandler,\
                               Values, RelationsCount, Relations, SupportHandler,\
                               SerializedSize)\
{\
    PropertyId, (PFNKSHANDLER)GetHandler, MinProperty, MinData,\
    (PFNKSHANDLER)SetHandler,\
    (PKSPROPERTY_VALUES)Values, RelationsCount, (PKSPROPERTY)Relations,\
    (PFNKSHANDLER)SupportHandler, (ULONG)SerializedSize\
}

typedef struct {
    ULONG                   PropertyId;
    union {
        PFNKSHANDLER            GetPropertyHandler;
        BOOLEAN                 GetSupported;
    };
    ULONG                   MinProperty;
    ULONG                   MinData;
    union {
        PFNKSHANDLER            SetPropertyHandler;
        BOOLEAN                 SetSupported;
    };
    const KSPROPERTY_VALUES*Values;
    ULONG                   RelationsCount;
    _Field_size_(RelationsCount)
    const KSPROPERTY*       Relations;
    PFNKSHANDLER            SupportHandler;
    ULONG                   SerializedSize;
} KSPROPERTY_ITEM, *PKSPROPERTY_ITEM;

#define DEFINE_KSFASTPROPERTY_ITEM(PropertyId, GetHandler, SetHandler)\
{\
    PropertyId, (PFNKSFASTHANDLER)GetHandler, (PFNKSFASTHANDLER)SetHandler, 0\
}

typedef struct {
    ULONG                       PropertyId;
    union {
        PFNKSFASTHANDLER            GetPropertyHandler;
        BOOLEAN                     GetSupported;
    };
    union {
        PFNKSFASTHANDLER            SetPropertyHandler;
        BOOLEAN                     SetSupported;
    };
    ULONG                       Reserved;
} KSFASTPROPERTY_ITEM, *PKSFASTPROPERTY_ITEM;

#define DEFINE_KSPROPERTY_SET(Set,\
                              PropertiesCount,\
                              PropertyItem,\
                              FastIoCount,\
                              FastIoTable)\
{\
    Set,\
    PropertiesCount,\
    PropertyItem,\
    FastIoCount,\
    FastIoTable\
}

#define DEFINE_KSPROPERTY_SET_TABLE(tablename)\
    const KSPROPERTY_SET tablename[] =

typedef struct {
    const GUID*                 Set;
    ULONG                       PropertiesCount;
    _Field_size_(PropertiesCount)
    const KSPROPERTY_ITEM*      PropertyItem;
    ULONG                       FastIoCount;
    const KSFASTPROPERTY_ITEM*  FastIoTable;
} KSPROPERTY_SET, *PKSPROPERTY_SET;

#define DEFINE_KSMETHOD_TABLE(tablename)\
    const KSMETHOD_ITEM tablename[] =

#define DEFINE_KSMETHOD_ITEM(MethodId, Flags,\
                             MethodHandler,\
                             MinMethod, MinData, SupportHandler)\
{\
    MethodId, (PFNKSHANDLER)MethodHandler, MinMethod, MinData,\
    SupportHandler, Flags\
}

typedef struct {
    ULONG                   MethodId;
    union {
        PFNKSHANDLER            MethodHandler;
        BOOLEAN                 MethodSupported;
    };
    ULONG                   MinMethod;
    ULONG                   MinData;
    PFNKSHANDLER            SupportHandler;
    ULONG                   Flags;
} KSMETHOD_ITEM, *PKSMETHOD_ITEM;

#define DEFINE_KSFASTMETHOD_ITEM(MethodId, MethodHandler)\
{\
    MethodId, (PFNKSFASTHANDLER)MethodHandler\
}

typedef struct {
    ULONG                   MethodId;
    union {
        PFNKSFASTHANDLER        MethodHandler;
        BOOLEAN                 MethodSupported;
    };
} KSFASTMETHOD_ITEM, *PKSFASTMETHOD_ITEM;

#define DEFINE_KSMETHOD_SET(Set,\
                            MethodsCount,\
                            MethodItem,\
                            FastIoCount,\
                            FastIoTable)\
{\
    Set,\
    MethodsCount,\
    MethodItem,\
    FastIoCount,\
    FastIoTable\
}

#define DEFINE_KSMETHOD_SET_TABLE(tablename)\
    const KSMETHOD_SET tablename[] =

typedef struct {
    const GUID*             Set;
    ULONG                   MethodsCount;
    _Field_size_(MethodsCount)
    const KSMETHOD_ITEM*    MethodItem;
    ULONG                   FastIoCount;
    _Field_size_(FastIoCount) const KSFASTMETHOD_ITEM*FastIoTable;
} KSMETHOD_SET, *PKSMETHOD_SET;

typedef struct _KSEVENT_ENTRY
KSEVENT_ENTRY, *PKSEVENT_ENTRY;

typedef
NTSTATUS
(*PFNKSADDEVENT)(
    _In_ PIRP Irp,
    _In_ PKSEVENTDATA EventData,
    _In_ struct _KSEVENT_ENTRY* EventEntry
    );

typedef
VOID
(*PFNKSREMOVEEVENT)(
    _In_ PFILE_OBJECT FileObject,
    _In_ struct _KSEVENT_ENTRY* EventEntry
    );
    
#define DEFINE_KSEVENT_TABLE(tablename)\
    const KSEVENT_ITEM tablename[] =

#define DEFINE_KSEVENT_ITEM(EventId, DataInput, ExtraEntryData,\
                            AddHandler, RemoveHandler, SupportHandler)\
{\
    EventId,\
    DataInput,\
    ExtraEntryData,\
    AddHandler,\
    RemoveHandler,\
    SupportHandler\
}

typedef struct {
    ULONG               EventId;
    ULONG               DataInput;
    ULONG               ExtraEntryData;
    PFNKSADDEVENT       AddHandler;
    PFNKSREMOVEEVENT    RemoveHandler;
    PFNKSHANDLER        SupportHandler;
} KSEVENT_ITEM, *PKSEVENT_ITEM;

#define DEFINE_KSEVENT_SET(Set,\
                           EventsCount,\
                           EventItem)\
{\
    Set, EventsCount, EventItem\
}

#define DEFINE_KSEVENT_SET_TABLE(tablename)\
    const KSEVENT_SET tablename[] =

typedef struct {
    const GUID*         Set;
    ULONG               EventsCount;
    _Field_size_(EventsCount) const KSEVENT_ITEM* EventItem;
} KSEVENT_SET, *PKSEVENT_SET;

typedef struct {
    KDPC            Dpc;
    ULONG           ReferenceCount;
    KSPIN_LOCK      AccessLock;
} KSDPC_ITEM, *PKSDPC_ITEM;

typedef struct {
    KSDPC_ITEM          DpcItem;
    LIST_ENTRY          BufferList;
} KSBUFFER_ITEM, *PKSBUFFER_ITEM;

#define KSEVENT_ENTRY_DELETED   1
#define KSEVENT_ENTRY_ONESHOT   2
#define KSEVENT_ENTRY_BUFFERED  4

struct _KSEVENT_ENTRY {
    LIST_ENTRY      ListEntry;
    PVOID           Object;
    union {
        PKSDPC_ITEM         DpcItem;
        PKSBUFFER_ITEM      BufferItem;
    };
    PKSEVENTDATA        EventData;
    ULONG               NotificationType;
    const KSEVENT_SET*  EventSet;
    const KSEVENT_ITEM* EventItem;
    PFILE_OBJECT        FileObject;
    ULONG               SemaphoreAdjustment;
    ULONG               Reserved;
    ULONG               Flags;
};

typedef enum {
    KSEVENTS_NONE,
    KSEVENTS_SPINLOCK,
    KSEVENTS_MUTEX,
    KSEVENTS_FMUTEX,
    KSEVENTS_FMUTEXUNSAFE,
    KSEVENTS_INTERRUPT,
    KSEVENTS_ERESOURCE
} KSEVENTS_LOCKTYPE;

#define KSDISPATCH_FASTIO       0x80000000

typedef struct {
    PDRIVER_DISPATCH        Create;
    PVOID                   Context;
    UNICODE_STRING          ObjectClass;
    PSECURITY_DESCRIPTOR    SecurityDescriptor;
    ULONG                   Flags;
} KSOBJECT_CREATE_ITEM, *PKSOBJECT_CREATE_ITEM;

typedef
VOID
(*PFNKSITEMFREECALLBACK)(
    _In_ PKSOBJECT_CREATE_ITEM CreateItem
    );

#define KSCREATE_ITEM_SECURITYCHANGED       0x00000001
#define KSCREATE_ITEM_WILDCARD              0x00000002
#define KSCREATE_ITEM_NOPARAMETERS          0x00000004
#define KSCREATE_ITEM_FREEONSTOP            0x00000008

#define DEFINE_KSCREATE_DISPATCH_TABLE( tablename )\
    KSOBJECT_CREATE_ITEM tablename[] =

#define DEFINE_KSCREATE_ITEM(DispatchCreate, TypeName, Context)\
{\
    (DispatchCreate),\
    (PVOID)(Context),\
    {\
        sizeof(TypeName) - sizeof(UNICODE_NULL),\
        sizeof(TypeName),\
        (PWCHAR)(TypeName)\
    },\
    NULL, 0\
}

#define DEFINE_KSCREATE_ITEMEX(DispatchCreate, TypeName, Context, Flags)\
{\
    (DispatchCreate),\
    (PVOID)(Context),\
    {\
        sizeof(TypeName) - sizeof(UNICODE_NULL),\
        sizeof(TypeName),\
        (PWCHAR)(TypeName)\
    },\
    NULL, (Flags)\
}

#define DEFINE_KSCREATE_ITEMNULL( DispatchCreate, Context )\
{\
    DispatchCreate,\
    Context,\
    {\
        0,\
        0,\
        NULL,\
    },\
    NULL, 0\
}

typedef struct {
    ULONG                    CreateItemsCount;
    _Field_size_(CreateItemsCount) PKSOBJECT_CREATE_ITEM    CreateItemsList;
} KSOBJECT_CREATE, *PKSOBJECT_CREATE;

typedef struct {
    PDRIVER_DISPATCH        DeviceIoControl;
    PDRIVER_DISPATCH        Read;
    PDRIVER_DISPATCH        Write;
    PDRIVER_DISPATCH        Flush;
    PDRIVER_DISPATCH        Close;
    PDRIVER_DISPATCH        QuerySecurity;
    PDRIVER_DISPATCH        SetSecurity;
    PFAST_IO_DEVICE_CONTROL FastDeviceIoControl;
    PFAST_IO_READ           FastRead;
    PFAST_IO_WRITE          FastWrite;
} KSDISPATCH_TABLE, *PKSDISPATCH_TABLE;

#define DEFINE_KSDISPATCH_TABLE( tablename, DeviceIoControl, Read, Write,\
                                 Flush, Close, QuerySecurity, SetSecurity,\
                                 FastDeviceIoControl, FastRead, FastWrite  )\
    const KSDISPATCH_TABLE tablename = \
    {\
        DeviceIoControl,        \
        Read,                   \
        Write,                  \
        Flush,                  \
        Close,                  \
        QuerySecurity,          \
        SetSecurity,            \
        FastDeviceIoControl,    \
        FastRead,               \
        FastWrite,              \
    }

#define KSCREATE_ITEM_IRP_STORAGE(Irp)      (*(PKSOBJECT_CREATE_ITEM*)&(Irp)->Tail.Overlay.DriverContext[0])
#define KSEVENT_SET_IRP_STORAGE(Irp)        (*(const KSEVENT_SET**)&(Irp)->Tail.Overlay.DriverContext[0])
#define KSEVENT_ITEM_IRP_STORAGE(Irp)       (*(const KSEVENT_ITEM**)&(Irp)->Tail.Overlay.DriverContext[3])
#define KSEVENT_ENTRY_IRP_STORAGE(Irp)      (*(PKSEVENT_ENTRY*)&(Irp)->Tail.Overlay.DriverContext[0])
#define KSMETHOD_SET_IRP_STORAGE(Irp)       (*(const KSMETHOD_SET**)&(Irp)->Tail.Overlay.DriverContext[0])
#define KSMETHOD_ITEM_IRP_STORAGE(Irp)      (*(const KSMETHOD_ITEM**)&(Irp)->Tail.Overlay.DriverContext[3])
#define KSMETHOD_TYPE_IRP_STORAGE(Irp)      (*(ULONG_PTR*)(&(Irp)->Tail.Overlay.DriverContext[2]))
#define KSQUEUE_SPINLOCK_IRP_STORAGE(Irp)   (*(PKSPIN_LOCK*)&(Irp)->Tail.Overlay.DriverContext[1])
#define KSPROPERTY_SET_IRP_STORAGE(Irp)     (*(const KSPROPERTY_SET**)&(Irp)->Tail.Overlay.DriverContext[0])
#define KSPROPERTY_ITEM_IRP_STORAGE(Irp)    (*(const KSPROPERTY_ITEM**)&(Irp)->Tail.Overlay.DriverContext[3])
#define KSPROPERTY_ATTRIBUTES_IRP_STORAGE(Irp) (*(PKSATTRIBUTE_LIST*)&(Irp)->Tail.Overlay.DriverContext[2])

typedef PVOID   KSDEVICE_HEADER, KSOBJECT_HEADER;

typedef enum {
    KsInvokeOnSuccess = 1,
    KsInvokeOnError = 2,
    KsInvokeOnCancel = 4
} KSCOMPLETION_INVOCATION;

typedef enum {
    KsListEntryTail,
    KsListEntryHead
} KSLIST_ENTRY_LOCATION;

typedef enum {
    KsAcquireOnly,
    KsAcquireAndRemove,
    KsAcquireOnlySingleItem,
    KsAcquireAndRemoveOnlySingleItem
} KSIRP_REMOVAL_OPERATION;

typedef enum {
    KsStackCopyToNewLocation,
    KsStackReuseCurrentLocation,
    KsStackUseNewLocation
} KSSTACK_USE;

typedef enum {
    KSTARGET_STATE_DISABLED,
    KSTARGET_STATE_ENABLED
} KSTARGET_STATE;

_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
(*PFNKSIRPLISTCALLBACK)(
    _In_ PIRP Irp,
    _In_ PVOID Context
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef 
VOID 
(*PFNREFERENCEDEVICEOBJECT)( 
    _In_ PVOID Context
    );
    
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef 
VOID 
(*PFNDEREFERENCEDEVICEOBJECT)( 
    _In_ PVOID Context
    );
    
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNQUERYREFERENCESTRING)( 
    _In_ PVOID Context,
    _Inout_ PWCHAR *String
    );

#define BUS_INTERFACE_REFERENCE_VERSION    0x100
    
typedef struct {
    //
    // Standard interface header
    //
    
    INTERFACE                   Interface;
    
    //
    // Standard bus interfaces
    //
    
    PFNREFERENCEDEVICEOBJECT    ReferenceDeviceObject;
    PFNDEREFERENCEDEVICEOBJECT  DereferenceDeviceObject;
    PFNQUERYREFERENCESTRING     QueryReferenceString;
    
} BUS_INTERFACE_REFERENCE, *PBUS_INTERFACE_REFERENCE;

#define STATIC_REFERENCE_BUS_INTERFACE STATIC_KSMEDIUMSETID_Standard
#define REFERENCE_BUS_INTERFACE KSMEDIUMSETID_Standard

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNQUERYMEDIUMSLIST)( 
    _In_ PVOID Context,
    _Out_ ULONG* MediumsCount,
    _Out_writes_(MediumsCount) PKSPIN_MEDIUM* MediumList
    );

typedef struct {
    //
    // Standard interface header
    //
    
    INTERFACE                   Interface;
    
    //
    // Interface definition
    //
    
    PFNQUERYMEDIUMSLIST         QueryMediumsList;
    
} BUS_INTERFACE_MEDIUMS, *PBUS_INTERFACE_MEDIUMS;

#define STATIC_GUID_BUS_INTERFACE_MEDIUMS \
    0x4EC35C3EL, 0x201B, 0x11D2, 0x87, 0x45, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("4EC35C3E-201B-11D2-8745-00A0C9223196", GUID_BUS_INTERFACE_MEDIUMS);
#define GUID_BUS_INTERFACE_MEDIUMS DEFINE_GUIDNAMED(GUID_BUS_INTERFACE_MEDIUMS)

#endif // defined(_NTDDK_)

#if !defined( PACK_PRAGMAS_NOT_SUPPORTED )
#include <pshpack1.h>
#endif

typedef struct {
    GUID            PropertySet;
    ULONG           Count;
} KSPROPERTY_SERIALHDR, *PKSPROPERTY_SERIALHDR;

#if !defined( PACK_PRAGMAS_NOT_SUPPORTED )
#include <poppack.h>
#endif

typedef struct {
    KSIDENTIFIER    PropTypeSet;
    ULONG           Id;
    ULONG           PropertyLength;
} KSPROPERTY_SERIAL, *PKSPROPERTY_SERIAL;

#if (NTDDI_VERSION >= NTDDI_WINXP)

#if defined(_NTDDK_)

#define IOCTL_KS_HANDSHAKE             CTL_CODE(FILE_DEVICE_KS, 0x007, METHOD_NEITHER, FILE_ANY_ACCESS)

typedef struct {
    GUID ProtocolId;
    PVOID Argument1;
    PVOID Argument2;
} KSHANDSHAKE, *PKSHANDSHAKE;

typedef struct _KSGATE
KSGATE, *PKSGATE;

struct _KSGATE {
    LONG Count;
    PKSGATE NextGate;
};

#ifndef _NTOS_

_IRQL_requires_max_(HIGH_LEVEL)
void __inline
KsGateTurnInputOn(
    _In_opt_ PKSGATE Gate
    )
{
    while (Gate && (InterlockedIncrement(&Gate->Count) == 1)) {
        Gate = Gate->NextGate;
    }
}

_IRQL_requires_max_(HIGH_LEVEL)
void __inline
KsGateTurnInputOff(
    _In_opt_ PKSGATE Gate
    )
{
    while (Gate && (InterlockedDecrement(&Gate->Count) == 0)) {
        Gate = Gate->NextGate;
    }
}

_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN __inline
KsGateGetStateUnsafe(
    _In_ PKSGATE Gate
    )
{
    ASSERT(Gate);
    return((BOOLEAN)(Gate->Count > 0));
}

_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN __inline
KsGateCaptureThreshold(
    _In_ PKSGATE Gate
    )
{
    BOOLEAN captured;

    ASSERT(Gate);

    captured = (BOOLEAN)(InterlockedCompareExchange(&Gate->Count,0,1) == 1);
    
    //
    // If we made a transition, it must be propagated.
    //
    if (captured) {
        KsGateTurnInputOff(Gate->NextGate);
    }

    //
    // We return whatever the state was prior to the compare/exchange.  If
    // the state was on, the state is now off.
    //
    return captured;
}

_IRQL_requires_max_(HIGH_LEVEL)
void __inline
KsGateInitialize(
    _In_ PKSGATE Gate,
    _In_ LONG InitialCount,
    _In_opt_ PKSGATE NextGate,
    _In_ BOOLEAN StateToPropagate // _In_ BOOLEAN NextGateIsAnOrGate
    )
{
    ASSERT(Gate);
    Gate->Count = InitialCount;
    Gate->NextGate = NextGate;

    if (NextGate) {
        if (InitialCount > 0) {
            if (StateToPropagate) {
                KsGateTurnInputOn(NextGate);
            }
        } else {
            if (! StateToPropagate) {
                KsGateTurnInputOff(NextGate);
            }
        }
    }
}

_IRQL_requires_max_(HIGH_LEVEL)
void __inline
KsGateInitializeAnd(
    _In_ PKSGATE AndGate,
    _In_opt_ PKSGATE NextOrGate
    )
{
    KsGateInitialize(AndGate,1,NextOrGate,TRUE);
}

_IRQL_requires_max_(HIGH_LEVEL)
void __inline
KsGateInitializeOr(
    _In_ PKSGATE OrGate,
    _In_opt_ PKSGATE NextAndGate
    )
{
    KsGateInitialize(OrGate,0,NextAndGate,FALSE);
}

_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateAddOnInputToAnd(_In_ PKSGATE AndGate) { UNREFERENCED_PARAMETER (AndGate); }
_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateAddOffInputToAnd(_In_ PKSGATE AndGate) { KsGateTurnInputOff(AndGate); }
_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateRemoveOnInputFromAnd(_In_ PKSGATE AndGate) { UNREFERENCED_PARAMETER (AndGate); }
_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateRemoveOffInputFromAnd(_In_ PKSGATE AndGate) { KsGateTurnInputOn(AndGate); }

_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateAddOnInputToOr(_In_ PKSGATE OrGate) { KsGateTurnInputOn(OrGate); }
_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateAddOffInputToOr(_In_ PKSGATE OrGate) { UNREFERENCED_PARAMETER (OrGate); }
_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateRemoveOnInputFromOr(_In_ PKSGATE OrGate) { KsGateTurnInputOff(OrGate); }
_IRQL_requires_max_(HIGH_LEVEL) void __inline KsGateRemoveOffInputFromOr(_In_ PKSGATE OrGate) { UNREFERENCED_PARAMETER (OrGate); }

_IRQL_requires_max_(HIGH_LEVEL)
void __inline
KsGateTerminateAnd(
    _In_ PKSGATE AndGate
    )
{
    ASSERT(AndGate);
    if (KsGateGetStateUnsafe(AndGate)) {
        KsGateRemoveOnInputFromOr(AndGate->NextGate);
    } else {
        KsGateRemoveOffInputFromOr(AndGate->NextGate);
    }
}

_IRQL_requires_max_(HIGH_LEVEL)
void __inline
KsGateTerminateOr(
    _In_ PKSGATE OrGate
    )
{
    ASSERT(OrGate);
    if (KsGateGetStateUnsafe(OrGate)) {
        KsGateRemoveOnInputFromAnd(OrGate->NextGate);
    } else {
        KsGateRemoveOffInputFromAnd(OrGate->NextGate);
    }
}

#endif // !_NTOS_

typedef PVOID KSOBJECT_BAG;

_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
BOOLEAN
(*PFNKSGENERATEEVENTCALLBACK)(
    _In_ PVOID Context,
    _In_ PKSEVENT_ENTRY EventEntry
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSDEVICECREATE)(
    _In_ PKSDEVICE Device
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSDEVICEPNPSTART)(
    _In_ PKSDEVICE Device,
    _In_ PIRP Irp,
    _In_opt_ PCM_RESOURCE_LIST TranslatedResourceList,
    _In_opt_ PCM_RESOURCE_LIST UntranslatedResourceList
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSDEVICE)(
    _In_ PKSDEVICE Device
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSDEVICEIRP)(
    _In_ PKSDEVICE Device,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
void
(*PFNKSDEVICEIRPVOID)(
    _In_ PKSDEVICE Device,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSDEVICEQUERYCAPABILITIES)(
    _In_ PKSDEVICE Device,
    _In_ PIRP Irp,
    _Inout_ PDEVICE_CAPABILITIES Capabilities
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSDEVICEQUERYPOWER)(
    _In_ PKSDEVICE Device,
    _In_ PIRP Irp,
    _In_ DEVICE_POWER_STATE DeviceTo,
    _In_ DEVICE_POWER_STATE DeviceFrom,
    _In_ SYSTEM_POWER_STATE SystemTo,
    _In_ SYSTEM_POWER_STATE SystemFrom,
    _In_ POWER_ACTION Action
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
void
(*PFNKSDEVICESETPOWER)(
    _In_ PKSDEVICE Device,
    _In_ PIRP Irp,
    _In_ DEVICE_POWER_STATE To,
    _In_ DEVICE_POWER_STATE From
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSFILTERFACTORYVOID)(
    _In_ PKSFILTERFACTORY FilterFactory
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
void
(*PFNKSFILTERFACTORYPOWER)(
    _In_ PKSFILTERFACTORY FilterFactory,
    _In_ DEVICE_POWER_STATE State
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSFILTERIRP)(
    _In_ PKSFILTER Filter,
    _In_ PIRP Irp
    );
typedef
NTSTATUS
(*PFNKSFILTERPROCESS)(
    _In_ PKSFILTER Filter,
    _In_ PKSPROCESSPIN_INDEXENTRY Index
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSFILTERVOID)(
    _In_ PKSFILTER Filter
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
void
(*PFNKSFILTERPOWER)(
    _In_ PKSFILTER Filter,
    _In_ DEVICE_POWER_STATE State
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSPINIRP)(
    _In_ PKSPIN Pin,
    _In_ PIRP Irp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSPINSETDEVICESTATE)(
    _In_ PKSPIN Pin,
    _In_ KSSTATE ToState,
    _In_ KSSTATE FromState
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSPINSETDATAFORMAT)(
    _In_ PKSPIN Pin,
    _In_opt_ PKSDATAFORMAT OldFormat,
    _In_opt_ PKSMULTIPLE_ITEM OldAttributeList,
    _In_ const KSDATARANGE* DataRange,
    _In_opt_ const KSATTRIBUTE_LIST* AttributeRange
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSPINHANDSHAKE)(
    _In_ PKSPIN Pin,
    _In_ PKSHANDSHAKE In,
    _In_ PKSHANDSHAKE Out
    );
typedef
NTSTATUS
(*PFNKSPIN)(
    _In_ PKSPIN Pin
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
void
(*PFNKSPINVOID)(
    _In_ PKSPIN Pin
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
void
(*PFNKSPINPOWER)(
    _In_ PKSPIN Pin,
    _In_ DEVICE_POWER_STATE State
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
BOOLEAN
(*PFNKSPINSETTIMER)(
    _In_ PKSPIN Pin,
    _In_ PKTIMER Timer,
    _In_ LARGE_INTEGER DueTime,
    _In_ PKDPC Dpc
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
BOOLEAN
(*PFNKSPINCANCELTIMER)(
    _In_ PKSPIN Pin,
    _In_ PKTIMER Timer
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
LONGLONG
(FASTCALL *PFNKSPINCORRELATEDTIME)(
    _In_ PKSPIN Pin,
    _Out_ PLONGLONG SystemTime
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
void
(*PFNKSPINRESOLUTION)(
    _In_ PKSPIN Pin,
    _Out_ PKSRESOLUTION Resolution
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
typedef
NTSTATUS
(*PFNKSPININITIALIZEALLOCATOR)(
    _In_ PKSPIN Pin,
    _In_ PKSALLOCATOR_FRAMING AllocatorFraming,
    _Out_ PVOID* Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
void
(*PFNKSSTREAMPOINTER)(
    _In_ PKSSTREAM_POINTER StreamPointer
    );

typedef struct KSAUTOMATION_TABLE_ 
KSAUTOMATION_TABLE, *PKSAUTOMATION_TABLE;
struct KSAUTOMATION_TABLE_ {
    ULONG PropertySetsCount;
    ULONG PropertyItemSize;
    _Field_size_bytes_(PropertySetsCount * PropertyItemSize) const KSPROPERTY_SET* PropertySets;
    ULONG MethodSetsCount;
    ULONG MethodItemSize;
    _Field_size_bytes_(MethodSetsCount * MethodItemSize) const KSMETHOD_SET* MethodSets;
    ULONG EventSetsCount;
    ULONG EventItemSize;
    _Field_size_bytes_(EventSetsCount * EventItemSize) const KSEVENT_SET* EventSets;
#if !defined(_WIN64)
    PVOID Alignment;
#endif // !defined(_WIN64)
};

#define DEFINE_KSAUTOMATION_TABLE(table)\
    const KSAUTOMATION_TABLE table =

#define DEFINE_KSAUTOMATION_PROPERTIES(table)\
    SIZEOF_ARRAY(table),\
    sizeof(KSPROPERTY_ITEM),\
    table

#define DEFINE_KSAUTOMATION_METHODS(table)\
    SIZEOF_ARRAY(table),\
    sizeof(KSMETHOD_ITEM),\
    table

#define DEFINE_KSAUTOMATION_EVENTS(table)\
    SIZEOF_ARRAY(table),\
    sizeof(KSEVENT_ITEM),\
    table

#define DEFINE_KSAUTOMATION_PROPERTIES_NULL\
    0,\
    sizeof(KSPROPERTY_ITEM),\
    NULL

#define DEFINE_KSAUTOMATION_METHODS_NULL\
    0,\
    sizeof(KSMETHOD_ITEM),\
    NULL

#define DEFINE_KSAUTOMATION_EVENTS_NULL\
    0,\
    sizeof(KSEVENT_ITEM),\
    NULL

#define MIN_DEV_VER_FOR_QI (0x100)

struct _KSDEVICE_DISPATCH {
    PFNKSDEVICECREATE Add;
    PFNKSDEVICEPNPSTART Start;
    PFNKSDEVICE PostStart;
    PFNKSDEVICEIRP QueryStop;
    PFNKSDEVICEIRPVOID CancelStop;
    PFNKSDEVICEIRPVOID Stop;
    PFNKSDEVICEIRP QueryRemove;
    PFNKSDEVICEIRPVOID CancelRemove;
    PFNKSDEVICEIRPVOID Remove;
    PFNKSDEVICEQUERYCAPABILITIES QueryCapabilities;
    PFNKSDEVICEIRPVOID SurpriseRemoval;
    PFNKSDEVICEQUERYPOWER QueryPower;
    PFNKSDEVICESETPOWER SetPower;
    PFNKSDEVICEIRP QueryInterface;  // added in version 0x100
};

struct _KSFILTER_DISPATCH {
    PFNKSFILTERIRP Create;
    PFNKSFILTERIRP Close;
    PFNKSFILTERPROCESS Process;
    PFNKSFILTERVOID Reset;
};

struct _KSPIN_DISPATCH {
    PFNKSPINIRP Create;
    PFNKSPINIRP Close;
    PFNKSPIN Process;
    PFNKSPINVOID Reset;
    PFNKSPINSETDATAFORMAT SetDataFormat;
    PFNKSPINSETDEVICESTATE SetDeviceState;
    PFNKSPIN Connect;
    PFNKSPINVOID Disconnect;
    const KSCLOCK_DISPATCH* Clock;
    const KSALLOCATOR_DISPATCH* Allocator;
};

struct _KSCLOCK_DISPATCH {
    PFNKSPINSETTIMER SetTimer;
    PFNKSPINCANCELTIMER CancelTimer;
    PFNKSPINCORRELATEDTIME CorrelatedTime;
    PFNKSPINRESOLUTION Resolution;
};

struct _KSALLOCATOR_DISPATCH {
    PFNKSPININITIALIZEALLOCATOR InitializeAllocator;
    PFNKSDELETEALLOCATOR DeleteAllocator;
    PFNKSDEFAULTALLOCATE Allocate;
    PFNKSDEFAULTFREE Free;
};

//
// VERSION indicates support of the following:
//
//     - QueryInterface dispatch of KSDEVICE_DISPATCH
//
#define KSDEVICE_DESCRIPTOR_VERSION (0x100)

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
// VERSION_2 indicates support of the following:
//
//     - Flags field of KSDEVICE_DESCRIPTOR
//           - Loading a VERSION_2 descriptor on earlier versions of AVStream
//             will work; however, all flags will be considered to be zero.
//           - Using an earlier version descriptor on later versions of
//             AVStream causes no flags to be specificed.
//
#define KSDEVICE_DESCRIPTOR_VERSION_2 (0x110)

#define MIN_DEV_VER_FOR_FLAGS (0x110)

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

struct _KSDEVICE_DESCRIPTOR {
    const KSDEVICE_DISPATCH* Dispatch;
    ULONG FilterDescriptorsCount;
    _Field_size_(FilterDescriptorsCount) const KSFILTER_DESCRIPTOR*const* FilterDescriptors;
    ULONG Version; // this is 0 for pre-version 100 driver

#if (NTDDI_VERSION >= NTDDI_VISTA)

    ULONG Flags; 
#define KSDEVICE_FLAG_ENABLE_REMOTE_WAKEUP	0x00000001
#define KSDEVICE_FLAG_LOWPOWER_PASSTHROUGH 	0x00000002

#if !defined(_WIN64)
    PVOID Alignment;
#endif //!defined(_WIN64)

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

};

struct _KSFILTER_DESCRIPTOR {
    const KSFILTER_DISPATCH* Dispatch;
    const KSAUTOMATION_TABLE* AutomationTable;
    ULONG Version;
#define KSFILTER_DESCRIPTOR_VERSION ((ULONG)-1)
    ULONG Flags;
#define KSFILTER_FLAG_DISPATCH_LEVEL_PROCESSING 0x00000001
#define KSFILTER_FLAG_CRITICAL_PROCESSING 0x00000002
#define KSFILTER_FLAG_HYPERCRITICAL_PROCESSING 0x00000004
#define KSFILTER_FLAG_RECEIVE_ZERO_LENGTH_SAMPLES 0x00000008
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
#define KSFILTER_FLAG_DENY_USERMODE_ACCESS 0x80000000
#endif // (NTDDI_VERSION >= NTDDI_WINXPSP2)
    const GUID* ReferenceGuid;
    ULONG PinDescriptorsCount;
    ULONG PinDescriptorSize;
    _Field_size_bytes_(PinDescriptorsCount * PinDescriptorSize) const KSPIN_DESCRIPTOR_EX* PinDescriptors;
    ULONG CategoriesCount;
    _Field_size_(CategoriesCount)
    const GUID* Categories;
    ULONG NodeDescriptorsCount;
    ULONG NodeDescriptorSize;
    _Field_size_bytes_(NodeDescriptorsCount * NodeDescriptorSize) const KSNODE_DESCRIPTOR* NodeDescriptors;
    ULONG ConnectionsCount;
    _Field_size_(ConnectionsCount) const KSTOPOLOGY_CONNECTION* Connections;
    const KSCOMPONENTID* ComponentId;
};

#define DEFINE_KSFILTER_DESCRIPTOR(descriptor)\
    const KSFILTER_DESCRIPTOR descriptor =

#define DEFINE_KSFILTER_PIN_DESCRIPTORS(table)\
    SIZEOF_ARRAY(table),\
    sizeof(table[0]),\
    table

#define DEFINE_KSFILTER_CATEGORIES(table)\
    SIZEOF_ARRAY(table),\
    table

#define DEFINE_KSFILTER_CATEGORY(category)\
    1,\
    &(category)

#define DEFINE_KSFILTER_CATEGORIES_NULL\
    0,\
    NULL

#define DEFINE_KSFILTER_NODE_DESCRIPTORS(table)\
    SIZEOF_ARRAY(table),\
    sizeof(table[0]),\
    table

#define DEFINE_KSFILTER_NODE_DESCRIPTORS_NULL\
    0,\
    sizeof(KSNODE_DESCRIPTOR),\
    NULL

#define DEFINE_KSFILTER_CONNECTIONS(table)\
    SIZEOF_ARRAY(table),\
    table

#define DEFINE_KSFILTER_DEFAULT_CONNECTIONS\
    0,\
    NULL

#define DEFINE_KSFILTER_DESCRIPTOR_TABLE(table)\
    const KSFILTER_DESCRIPTOR*const table[] =

struct _KSPIN_DESCRIPTOR_EX {
    const KSPIN_DISPATCH* Dispatch;
    const KSAUTOMATION_TABLE* AutomationTable;
    KSPIN_DESCRIPTOR PinDescriptor;
    ULONG Flags;
#define KSPIN_FLAG_DISPATCH_LEVEL_PROCESSING KSFILTER_FLAG_DISPATCH_LEVEL_PROCESSING
#define KSPIN_FLAG_CRITICAL_PROCESSING KSFILTER_FLAG_CRITICAL_PROCESSING
#define KSPIN_FLAG_HYPERCRITICAL_PROCESSING KSFILTER_FLAG_HYPERCRITICAL_PROCESSING
#define KSPIN_FLAG_ASYNCHRONOUS_PROCESSING 0x00000008
#define KSPIN_FLAG_DO_NOT_INITIATE_PROCESSING 0x00000010
#define KSPIN_FLAG_INITIATE_PROCESSING_ON_EVERY_ARRIVAL 0x00000020
#define KSPIN_FLAG_FRAMES_NOT_REQUIRED_FOR_PROCESSING 0x00000040
#define KSPIN_FLAG_ENFORCE_FIFO 0x00000080

#define KSPIN_FLAG_GENERATE_MAPPINGS 0x00000100
#define KSPIN_FLAG_DISTINCT_TRAILING_EDGE 0x00000200

#define KSPIN_FLAG_PROCESS_IN_RUN_STATE_ONLY 0x00010000
#define KSPIN_FLAG_SPLITTER 0x00020000
#define KSPIN_FLAG_USE_STANDARD_TRANSPORT 0x00040000
#define KSPIN_FLAG_DO_NOT_USE_STANDARD_TRANSPORT 0x00080000
#define KSPIN_FLAG_FIXED_FORMAT 0x00100000
#define KSPIN_FLAG_GENERATE_EOS_EVENTS 0x00200000
#define KSPIN_FLAG_RENDERER (KSPIN_FLAG_PROCESS_IN_RUN_STATE_ONLY|KSPIN_FLAG_GENERATE_EOS_EVENTS)
#define KSPIN_FLAG_IMPLEMENT_CLOCK 0x00400000
#define KSPIN_FLAG_SOME_FRAMES_REQUIRED_FOR_PROCESSING 0x00800000
#define KSPIN_FLAG_PROCESS_IF_ANY_IN_RUN_STATE 0x01000000
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
#define KSPIN_FLAG_DENY_USERMODE_ACCESS 0x80000000
#endif // (NTDDI_VERSION >= NTDDI_WINXPSP2)
    ULONG InstancesPossible;
    ULONG InstancesNecessary;
    const KSALLOCATOR_FRAMING_EX* AllocatorFraming;
    PFNKSINTERSECTHANDLEREX IntersectHandler;
};

#define DEFINE_KSPIN_DEFAULT_INTERFACES\
    0,\
    NULL

#define DEFINE_KSPIN_DEFAULT_MEDIUMS\
    0,\
    NULL

struct _KSNODE_DESCRIPTOR {
    const KSAUTOMATION_TABLE* AutomationTable;
    const GUID* Type;
    const GUID* Name;
#if !defined(_WIN64)
    PVOID Alignment;
#endif // !defined(_WIN64)
};

#if !defined(_WIN64)
#define DEFINE_NODE_DESCRIPTOR(automation,type,name) \
    { (automation), (type), (name), NULL }
#else // !defined(_WIN64)
#define DEFINE_NODE_DESCRIPTOR(automation,type,name) \
    { (automation), (type), (name) }
#endif // !defined(_WIN64)

struct _KSDEVICE {
    const KSDEVICE_DESCRIPTOR* Descriptor;
    KSOBJECT_BAG Bag;
    PVOID Context;
    PDEVICE_OBJECT FunctionalDeviceObject;
    PDEVICE_OBJECT PhysicalDeviceObject;
    PDEVICE_OBJECT NextDeviceObject;
    BOOLEAN Started;
    SYSTEM_POWER_STATE SystemPowerState;
    DEVICE_POWER_STATE DevicePowerState;
};

struct _KSFILTERFACTORY {
    const KSFILTER_DESCRIPTOR* FilterDescriptor;
    KSOBJECT_BAG Bag;
    PVOID Context;
};

struct _KSFILTER {
    const KSFILTER_DESCRIPTOR* Descriptor;
    KSOBJECT_BAG Bag;
    PVOID Context;
};

struct _KSPIN {
    const KSPIN_DESCRIPTOR_EX* Descriptor;
    KSOBJECT_BAG Bag;
    PVOID Context;
    ULONG Id;
    KSPIN_COMMUNICATION Communication;
    BOOLEAN ConnectionIsExternal;
    KSPIN_INTERFACE ConnectionInterface;
    KSPIN_MEDIUM ConnectionMedium;
    KSPRIORITY ConnectionPriority;
    PKSDATAFORMAT ConnectionFormat;
    PKSMULTIPLE_ITEM AttributeList;
    ULONG StreamHeaderSize;
    KSPIN_DATAFLOW DataFlow;
    KSSTATE DeviceState;
    KSRESET ResetState;
    KSSTATE ClientState;
};

struct _KSMAPPING {
    PHYSICAL_ADDRESS PhysicalAddress;
    ULONG ByteCount;
    ULONG Alignment;
};

struct _KSSTREAM_POINTER_OFFSET
{
#if defined(_NTDDK_)
    union {
        PUCHAR Data;
        PKSMAPPING Mappings;
    };
#else // !defined(_NTDDK_)
    PUCHAR Data;
#endif // !defined(_NTDDK_)
#if !defined(_WIN64)
    PVOID Alignment;
#endif // !defined(_WIN64)
    ULONG Count;
    ULONG Remaining;
};

struct _KSSTREAM_POINTER
{
    PVOID Context;
    PKSPIN Pin;
    PKSSTREAM_HEADER StreamHeader;
    PKSSTREAM_POINTER_OFFSET Offset;
    KSSTREAM_POINTER_OFFSET OffsetIn;
    KSSTREAM_POINTER_OFFSET OffsetOut;
};

struct _KSPROCESSPIN {
    PKSPIN Pin;
    PKSSTREAM_POINTER StreamPointer;
    PKSPROCESSPIN InPlaceCounterpart;
    PKSPROCESSPIN DelegateBranch;
    PKSPROCESSPIN CopySource;
    _Field_size_bytes_(BytesAvailable) PVOID Data;
    ULONG BytesAvailable;
    ULONG BytesUsed;
    ULONG Flags;
    BOOLEAN Terminate;
};

struct _KSPROCESSPIN_INDEXENTRY {
    _Field_size_(Count) PKSPROCESSPIN *Pins;
    ULONG Count;
};

typedef enum {
    KsObjectTypeDevice,
    KsObjectTypeFilterFactory,
    KsObjectTypeFilter,
    KsObjectTypePin
} KSOBJECTTYPE;

typedef
void
(*PFNKSFREE)(
    _In_ PVOID Data
    );

typedef
void
(*PFNKSPINFRAMERETURN)(
    _In_ PKSPIN Pin,
    _In_reads_bytes_opt_(Size) PVOID Data,
    _In_ ULONG Size OPTIONAL,
    _In_opt_ PMDL Mdl,
    _In_opt_ PVOID Context,
    _In_ NTSTATUS Status
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
void
(*PFNKSPINIRPCOMPLETION)(
    _In_ PKSPIN Pin,
    _In_ PIRP Irp
    );

#if defined(_UNKNOWN_H_) || defined(__IUnknown_INTERFACE_DEFINED__)
#if !defined(_IKsControl_)
#define _IKsControl_

typedef interface IKsControl* PIKSCONTROL;

#if !defined(DEFINE_ABSTRACT_UNKNOWN)

#define DEFINE_ABSTRACT_UNKNOWN()                               \
    STDMETHOD_(NTSTATUS, QueryInterface)(THIS_                  \
        _In_         REFIID InterfaceId,                        \
        _COM_Outptr_ PVOID* Interface                           \
        ) PURE;                                                 \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;                        \
    STDMETHOD_(ULONG,Release)(THIS) PURE;

#endif //!defined(DEFINE_ABSTRACT_UNKNOWN)

#undef INTERFACE
#define INTERFACE IKsControl
DECLARE_INTERFACE_(IKsControl,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN() // For C

    STDMETHOD_(NTSTATUS, KsProperty)(THIS_
        _In_reads_bytes_(PropertyLength) PKSPROPERTY Property,
        _In_ ULONG PropertyLength,
        _Inout_updates_bytes_(DataLength) PVOID PropertyData,
        _In_ ULONG DataLength,
        _Out_ ULONG* BytesReturned
        ) PURE;
    STDMETHOD_(NTSTATUS, KsMethod)(THIS_
        _In_reads_bytes_(MethodLength) PKSMETHOD Method,
        _In_ ULONG MethodLength,
        _Inout_updates_bytes_(DataLength) PVOID MethodData,
        _In_ ULONG DataLength,
        _Out_ ULONG* BytesReturned
        ) PURE;
    STDMETHOD_(NTSTATUS, KsEvent)(THIS_
        _In_reads_bytes_opt_(EventLength) PKSEVENT Event,
        _In_ ULONG EventLength,
        _Inout_updates_bytes_(DataLength) PVOID EventData,
        _In_ ULONG DataLength,
        _Out_ ULONG* BytesReturned
        ) PURE;
};

typedef interface IKsReferenceClock* PIKSREFERENCECLOCK;

#undef INTERFACE
#define INTERFACE IKsReferenceClock
DECLARE_INTERFACE_(IKsReferenceClock,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN() // For C

    STDMETHOD_(LONGLONG,GetTime)(THIS
        ) PURE;
    STDMETHOD_(LONGLONG,GetPhysicalTime)(THIS
        ) PURE;
    STDMETHOD_(LONGLONG,GetCorrelatedTime)(THIS_
        _Out_ PLONGLONG SystemTime
        ) PURE;
    STDMETHOD_(LONGLONG,GetCorrelatedPhysicalTime)(THIS_
        _Out_ PLONGLONG SystemTime
        ) PURE;
    STDMETHOD_(NTSTATUS, GetResolution)(THIS_
        _Out_ PKSRESOLUTION Resolution
        ) PURE;
    STDMETHOD_(NTSTATUS, GetState)(THIS_
        _Out_ PKSSTATE State
        ) PURE;
};
#undef INTERFACE

#if (NTDDI_VERSION >= NTDDI_WS03SP1)

#define INTERFACE IKsDeviceFunctions
DECLARE_INTERFACE_(IKsDeviceFunctions, IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN() // For C
    
    STDMETHOD_(NTSTATUS, RegisterAdapterObjectEx)(THIS_
        _In_ PADAPTER_OBJECT AdapterObject,
        _In_ PDEVICE_DESCRIPTION DeviceDescription,
        _In_ ULONG NumberOfMapRegisters,
        _In_ ULONG MaxMappingsByteCount,
        _In_ ULONG MappingTableStride
        ) PURE;
};

#undef INTERFACE

#endif // (NTDDI_VERSION >= NTDDI_WS03SP1)

#define STATIC_IID_IKsControl \
0x28F54685L, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUID(IID_IKsControl,
0x28F54685L, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
#if defined(__cplusplus) && _MSC_VER >= 1100
struct __declspec(uuid("28F54685-06FD-11D2-B27A-00A0C9223196")) IKsControl;
#endif

#define STATIC_IID_IKsFastClock \
0xc9902485, 0xc180, 0x11d2, 0x84, 0x73, 0xd4, 0x23, 0x94, 0x45, 0x9e, 0x5e
DEFINE_GUID(IID_IKsFastClock,
0xc9902485, 0xc180, 0x11d2, 0x84, 0x73, 0xd4, 0x23, 0x94, 0x45, 0x9e, 0x5e);
#if defined(__cplusplus) && _MSC_VER >= 1100
struct __declspec(uuid("C9902485-C180-11d2-8473-D42394459E5E")) IKsFastClock;
#endif

#if (NTDDI_VERSION >= NTDDI_WS03SP1)

#define STATIC_IID_IKsDeviceFunctions \
0xe234f2e2, 0xbd69, 0x4f8c, 0xb3, 0xf2, 0x7c, 0xd7, 0x9e, 0xd4, 0x66, 0xbd
DEFINE_GUID(IID_IKsDeviceFunctions,
0xe234f2e2, 0xbd69, 0x4f8c, 0xb3, 0xf2, 0x7c, 0xd7, 0x9e, 0xd4, 0x66, 0xbd);
#if defined(__cplusplus) && _MSC_VER >= 1100
struct __declspec(uuid("E234F2E2-BD69-4F8C-B3F2-7CD79ED466BD")) IKsDeviceFunctions;
#endif

#endif // (NTDDI_VERSION >= NTDDI_WS03SP1)

#endif // !defined(_IKsControl_)
#endif // defined(_UNKNOWN_H_) || defined(__IUnknown_INTERFACE_DEFINED__)

#endif // defined(_NTDDK_)

#endif // (NTDDI_VERSION >= NTDDI_WINXP)

//===========================================================================

#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

//
// exported prototypes
//

#ifdef _KSDDK_
#define KSDDKAPI
#else // !_KSDDK_
#define KSDDKAPI DECLSPEC_IMPORT
#endif // _KSDDK_

#if defined(_NTDDK_)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsEnableEvent(
    _In_ PIRP Irp,
    _In_ ULONG EventSetsCount,
    _In_reads_(EventSetsCount) const KSEVENT_SET* EventSet,
    _Inout_opt_ PLIST_ENTRY EventsList,
    _In_opt_ KSEVENTS_LOCKTYPE EventsFlags,
    _In_opt_ PVOID EventsLock
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsEnableEventWithAllocator(
    _In_ PIRP Irp,
    _In_ ULONG EventSetsCount,
    _In_reads_(EventSetsCount) const KSEVENT_SET* EventSet,
    _Inout_opt_ PLIST_ENTRY EventsList,
    _In_ KSEVENTS_LOCKTYPE EventsFlags OPTIONAL,
    _In_opt_ PVOID EventsLock,
    _In_opt_ PFNKSALLOCATOR Allocator,
    _In_opt_ ULONG EventItemSize
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDisableEvent(
    _In_ PIRP Irp,
    _Inout_ PLIST_ENTRY EventsList,
    _In_ KSEVENTS_LOCKTYPE EventsFlags,
    _In_ PVOID EventsLock
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsDiscardEvent(
    _In_ PKSEVENT_ENTRY EventEntry
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsFreeEventList(
    _In_ PFILE_OBJECT FileObject,
    _Inout_ PLIST_ENTRY EventsList,
    _In_ KSEVENTS_LOCKTYPE EventsFlags,
    _In_ PVOID EventsLock
    );

KSDDKAPI
NTSTATUS
NTAPI
KsGenerateEvent(
    _In_ PKSEVENT_ENTRY EventEntry
    );

KSDDKAPI
NTSTATUS
NTAPI
KsGenerateDataEvent(
    _In_ PKSEVENT_ENTRY EventEntry,
    _In_ ULONG DataSize,
    _In_reads_bytes_(DataSize) PVOID Data
    );

KSDDKAPI
VOID
NTAPI
KsGenerateEventList(
    _In_opt_ GUID* Set,
    _In_ ULONG EventId,
    _In_ PLIST_ENTRY EventsList,
    _In_ KSEVENTS_LOCKTYPE EventsFlags,
    _In_ PVOID EventsLock
    );

// property.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPropertyHandler(
    _In_ PIRP Irp,
    _In_ ULONG PropertySetsCount,
    _In_reads_(PropertySetsCount) const KSPROPERTY_SET* PropertySet
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPropertyHandlerWithAllocator(
    _In_ PIRP Irp,
    _In_ ULONG PropertySetsCount,
    _In_reads_(PropertySetsCount) const KSPROPERTY_SET* PropertySet,
    _In_opt_ PFNKSALLOCATOR Allocator,
    _In_ ULONG PropertyItemSize OPTIONAL
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
BOOLEAN
NTAPI
KsFastPropertyHandler(
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(PropertyLength) PKSPROPERTY Property,
    _In_ ULONG PropertyLength,
    _In_reads_bytes_(DataLength)PVOID Data,
    _In_ ULONG DataLength,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ ULONG PropertySetsCount,
    _In_reads_(PropertySetsCount) const KSPROPERTY_SET* PropertySet
    );

// method.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsMethodHandler(
    _In_ PIRP Irp,
    _In_ ULONG MethodSetsCount,
    _In_reads_(MethodSetsCount) const KSMETHOD_SET* MethodSet
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsMethodHandlerWithAllocator(
    _In_ PIRP Irp,
    _In_ ULONG MethodSetsCount,
    _In_reads_(MethodSetsCount) const KSMETHOD_SET* MethodSet,
    _In_opt_ PFNKSALLOCATOR Allocator,
    _In_ ULONG MethodItemSize OPTIONAL
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
BOOLEAN
NTAPI
KsFastMethodHandler(
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(MethodLength) PKSMETHOD Method,
    _In_ ULONG MethodLength,
    _Inout_updates_bytes_(DataLength) PVOID Data,
    _In_ ULONG DataLength,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ ULONG MethodSetsCount,
    _In_reads_(MethodSetsCount) const KSMETHOD_SET* MethodSet
    );

// alloc.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateDefaultAllocator(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateDefaultAllocatorEx(
    _In_ PIRP Irp,
    _In_opt_ PVOID InitializeContext,
    _In_opt_ PFNKSDEFAULTALLOCATE DefaultAllocate,
    _In_opt_ PFNKSDEFAULTFREE DefaultFree,
    _In_opt_ PFNKSINITIALIZEALLOCATOR InitializeAllocator,
    _In_opt_ PFNKSDELETEALLOCATOR DeleteAllocator
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateAllocator(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSALLOCATOR_FRAMING AllocatorFraming,
    _Out_ PHANDLE AllocatorHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsValidateAllocatorCreateRequest(
    _In_ PIRP Irp,
    _Out_ PKSALLOCATOR_FRAMING* AllocatorFraming
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsValidateAllocatorFramingEx(
    _In_ PKSALLOCATOR_FRAMING_EX Framing,
    _In_ ULONG BufferSize,
    _In_ const KSALLOCATOR_FRAMING_EX *PinFraming
    );

// clock.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAllocateDefaultClock(
    _Out_ PKSDEFAULTCLOCK* DefaultClock
    );

#if (NTDDI_VERSION >= NTDDI_WINXP)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAllocateDefaultClockEx(
    _Out_ PKSDEFAULTCLOCK* DefaultClock,
    _In_opt_ PVOID Context,
    _In_opt_ PFNKSSETTIMER SetTimer,
    _In_opt_ PFNKSCANCELTIMER CancelTimer,
    _In_opt_ PFNKSCORRELATEDTIME CorrelatedTime,
    _In_opt_ const KSRESOLUTION* Resolution,
    _In_ ULONG Flags
    );

#endif // (NTDDI_VERSION >= NTDDI_WINXP)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsFreeDefaultClock(
    _In_ PKSDEFAULTCLOCK DefaultClock
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateDefaultClock(
    _In_ PIRP Irp,
    _In_ PKSDEFAULTCLOCK DefaultClock
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateClock(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSCLOCK_CREATE ClockCreate,
    _Out_ PHANDLE ClockHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsValidateClockCreateRequest(
    _In_ PIRP Irp,
    _Outptr_ PKSCLOCK_CREATE* ClockCreate
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
KSSTATE
NTAPI
KsGetDefaultClockState(
    _In_ PKSDEFAULTCLOCK DefaultClock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
VOID
NTAPI
KsSetDefaultClockState(
    _In_ PKSDEFAULTCLOCK DefaultClock,
    _In_ KSSTATE State
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
LONGLONG
NTAPI
KsGetDefaultClockTime(
    _In_ PKSDEFAULTCLOCK DefaultClock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
VOID
NTAPI
KsSetDefaultClockTime(
    _In_ PKSDEFAULTCLOCK DefaultClock,
    _In_ LONGLONG Time
    );

// connect.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreatePin(
    _In_ HANDLE FilterHandle,
    _In_ PKSPIN_CONNECT Connect,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE ConnectionHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsValidateConnectRequest(
    _In_ PIRP Irp,
    _In_ ULONG DescriptorsCount,
    _In_reads_(DescriptorsCount) const KSPIN_DESCRIPTOR* Descriptor,
    _Out_ PKSPIN_CONNECT* Connect
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinPropertyHandler(
    _In_ PIRP Irp,
    _In_ PKSPROPERTY Property,
    _Inout_ PVOID Data,
    _In_ ULONG DescriptorsCount,
    _In_reads_(DescriptorsCount) const KSPIN_DESCRIPTOR* Descriptor
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinDataIntersection(
    _In_ PIRP Irp,
    _In_ PKSP_PIN Pin,
    _Out_opt_ PVOID Data,
    _In_ ULONG DescriptorsCount,
    _In_reads_(DescriptorsCount) const KSPIN_DESCRIPTOR* Descriptor,
    _In_ PFNKSINTERSECTHANDLER IntersectHandler
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinDataIntersectionEx(
    _In_ PIRP Irp,
    _In_ PKSP_PIN Pin,
    _Out_ PVOID Data,
    _In_ ULONG DescriptorsCount,
    _In_reads_bytes_(DescriptorsCount * DescriptorSize) const KSPIN_DESCRIPTOR* Descriptor,
    _In_ ULONG DescriptorSize,
    _In_opt_ PFNKSINTERSECTHANDLEREX IntersectHandler,
    _In_opt_ PVOID HandlerContext
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsHandleSizedListQuery(
    _In_ PIRP Irp,
    _In_ ULONG DataItemsCount,
    _In_ ULONG DataItemSize,
    _In_reads_bytes_(DataItemsCount * DataItemSize) const VOID* DataItems
    );

// image.c:

#if (!defined( MAKEINTRESOURCE )) 
#define MAKEINTRESOURCE( res ) ((ULONG_PTR) (USHORT) res)
#endif

#if (!defined( RT_STRING ))
#define RT_STRING           MAKEINTRESOURCE( 6 )
#define RT_RCDATA           MAKEINTRESOURCE( 10 ) 
#endif

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsLoadResource(
    _In_ PVOID ImageBase,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG_PTR ResourceName,
    _In_ ULONG ResourceType,
    _Outptr_result_bytebuffer_(ResourceSize) PVOID *Resource,
    _Out_opt_ PULONG ResourceSize            
    );
    
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsGetImageNameAndResourceId(
    _In_ HANDLE RegKey,
    _Out_ PUNICODE_STRING ImageName,                
    _Out_ PULONG_PTR ResourceId,
    _Out_ PULONG ValueType
);

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsMapModuleName(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PUNICODE_STRING ModuleName,
    _Out_ PUNICODE_STRING ImageName,                
    _Out_ PULONG_PTR ResourceId,
    _Out_ PULONG ValueType
    );
    
// irp.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsReferenceBusObject(
    _In_ KSDEVICE_HEADER  Header
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsDereferenceBusObject(
    _In_ KSDEVICE_HEADER  Header
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDispatchQuerySecurity(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDispatchSetSecurity(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDispatchSpecificProperty(
    _In_ PIRP Irp,
    _In_ PFNKSHANDLER Handler
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDispatchSpecificMethod(
    _In_ PIRP Irp,
    _In_ PFNKSHANDLER Handler
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsReadFile(
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PKEVENT Event,
    _In_opt_ PVOID PortContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ ULONG Key OPTIONAL,
    _In_ KPROCESSOR_MODE RequestorMode
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsWriteFile(
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PKEVENT Event,
    _In_opt_ PVOID PortContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ ULONG Key OPTIONAL,
    _In_ KPROCESSOR_MODE RequestorMode
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsQueryInformationFile(
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsSetInformationFile(
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsStreamIo(
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PKEVENT Event,
    _In_opt_ PVOID PortContext,
    _In_opt_ PIO_COMPLETION_ROUTINE CompletionRoutine,
    _In_opt_ PVOID CompletionContext,
    _In_ KSCOMPLETION_INVOCATION CompletionInvocationFlags OPTIONAL,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Inout_updates_bytes_(Length) PVOID StreamHeaders,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _In_ KPROCESSOR_MODE RequestorMode
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsProbeStreamIrp(
    _Inout_ PIRP Irp,
    _In_ ULONG ProbeFlags,
    _In_ ULONG HeaderSize OPTIONAL
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAllocateExtraData(
    _Inout_ PIRP Irp,
    _In_ ULONG ExtraSize,
    _Out_ PVOID* ExtraBuffer
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsNullDriverUnload(
    _In_ PDRIVER_OBJECT DriverObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsSetMajorFunctionHandler(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ ULONG MajorFunction
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDispatchInvalidDeviceRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDefaultDeviceIoCompletion(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsDispatchIrp(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
BOOLEAN
NTAPI
KsDispatchFastIoDeviceControlFailure(
    _In_ PFILE_OBJECT FileObject,
    _In_ BOOLEAN Wait,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _In_ ULONG IoControlCode,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
BOOLEAN
NTAPI
KsDispatchFastReadFailure(
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _Out_ PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );

#define KsDispatchFastWriteFailure KsDispatchFastReadFailure

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
DRIVER_CANCEL KsCancelRoutine;

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
VOID
NTAPI
KsCancelIo(   
    _Inout_ PLIST_ENTRY  QueueHead,
    _In_ PKSPIN_LOCK SpinLock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
VOID
NTAPI
KsReleaseIrpOnCancelableQueue(
    _In_ PIRP Irp,
    _In_opt_ PDRIVER_CANCEL DriverCancel
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PIRP
NTAPI
KsRemoveIrpFromCancelableQueue(
    _Inout_ PLIST_ENTRY QueueHead,
    _In_ PKSPIN_LOCK SpinLock,
    _In_ KSLIST_ENTRY_LOCATION ListLocation,
    _In_ KSIRP_REMOVAL_OPERATION RemovalOperation
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsMoveIrpsOnCancelableQueue(
    _Inout_ PLIST_ENTRY SourceList,
    _In_ PKSPIN_LOCK SourceLock,
    _Inout_ PLIST_ENTRY DestinationList,
    _In_opt_ PKSPIN_LOCK DestinationLock,
    _In_ KSLIST_ENTRY_LOCATION ListLocation,
    _In_ PFNKSIRPLISTCALLBACK ListCallback,
    _In_ PVOID Context
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
VOID
NTAPI
KsRemoveSpecificIrpFromCancelableQueue(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
VOID
NTAPI
KsAddIrpToCancelableQueue(
    _Inout_ PLIST_ENTRY QueueHead,
    _In_ PKSPIN_LOCK SpinLock,
    _In_ PIRP Irp,
    _In_ KSLIST_ENTRY_LOCATION ListLocation,
    _In_opt_ PDRIVER_CANCEL DriverCancel
    );

// api.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAcquireResetValue(
    _In_ PIRP Irp,
    _Out_ KSRESET* ResetValue
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsTopologyPropertyHandler(
    _In_ PIRP Irp,
    _In_ PKSPROPERTY Property,
    _Inout_ PVOID Data,
    _In_ const KSTOPOLOGY* Topology
    );

_IRQL_requires_max_(APC_LEVEL)
KSDDKAPI
VOID
NTAPI
KsAcquireDeviceSecurityLock(
    _In_ KSDEVICE_HEADER Header,
    _In_ BOOLEAN Exclusive
    );

_IRQL_requires_max_(APC_LEVEL)
KSDDKAPI
VOID
NTAPI
KsReleaseDeviceSecurityLock(
    _In_ KSDEVICE_HEADER Header
    );
    
KSDDKAPI
_Dispatch_type_(IRP_MJ_PNP) DRIVER_DISPATCH KsDefaultDispatchPnp;

KSDDKAPI
_Dispatch_type_(IRP_MJ_POWER) DRIVER_DISPATCH KsDefaultDispatchPower;
    
KSDDKAPI
_Dispatch_type_(IRP_MJ_SYSTEM_CONTROL) 
_Dispatch_type_(IRP_MJ_DEVICE_CONTROL)
DRIVER_DISPATCH KsDefaultForwardIrp;

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsSetDevicePnpAndBaseObject(
    _In_ KSDEVICE_HEADER Header,
    _In_ PDEVICE_OBJECT PnpDeviceObject,
    _In_ PDEVICE_OBJECT BaseObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PDEVICE_OBJECT
NTAPI
KsQueryDevicePnpObject(
    _In_ KSDEVICE_HEADER Header
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
ACCESS_MASK
NTAPI
KsQueryObjectAccessMask(
    _In_ KSOBJECT_HEADER Header
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsRecalculateStackDepth(
    _In_ KSDEVICE_HEADER Header,
    _In_ BOOLEAN ReuseStackLocation
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsSetTargetState(
    _In_ KSOBJECT_HEADER Header,
    _In_ KSTARGET_STATE TargetState
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsSetTargetDeviceObject(
    _In_ KSOBJECT_HEADER Header,
    _In_opt_ PDEVICE_OBJECT TargetDevice
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsSetPowerDispatch(
    _In_ KSOBJECT_HEADER Header,
    _In_opt_ PFNKSCONTEXT_DISPATCH PowerDispatch,
    _In_opt_ PVOID PowerContext
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PKSOBJECT_CREATE_ITEM
NTAPI
KsQueryObjectCreateItem(
    _In_ KSOBJECT_HEADER Header
    );

_IRQL_requires_max_(APC_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAllocateDeviceHeader(
    _Out_ KSDEVICE_HEADER* Header,
    _In_ ULONG ItemsCount,
    _In_reads_opt_(ItemsCount) PKSOBJECT_CREATE_ITEM ItemsList
    );

_IRQL_requires_max_(APC_LEVEL)
KSDDKAPI
VOID
NTAPI
KsFreeDeviceHeader(
    _In_ KSDEVICE_HEADER Header
    );

_IRQL_requires_max_(APC_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAllocateObjectHeader(
    _Out_ KSOBJECT_HEADER* Header,
    _In_ ULONG ItemsCount,
    _In_reads_opt_(ItemsCount) PKSOBJECT_CREATE_ITEM ItemsList,
    _In_ PIRP Irp,
    _In_ const KSDISPATCH_TABLE* Table
    );

_IRQL_requires_max_(APC_LEVEL)
KSDDKAPI
VOID
NTAPI
KsFreeObjectHeader(
    _In_ KSOBJECT_HEADER Header
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAddObjectCreateItemToDeviceHeader(
    _In_ KSDEVICE_HEADER Header,
    _In_ PDRIVER_DISPATCH Create,
    _In_ PVOID Context,
    _In_ PWSTR ObjectClass,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAddObjectCreateItemToObjectHeader(
    _In_ KSOBJECT_HEADER Header,
    _In_ PDRIVER_DISPATCH Create,
    _In_ PVOID Context,
    _In_ PWSTR ObjectClass,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAllocateObjectCreateItem(
    _In_ KSDEVICE_HEADER Header,
    _In_ PKSOBJECT_CREATE_ITEM CreateItem,
    _In_ BOOLEAN AllocateEntry,
    _In_opt_ PFNKSITEMFREECALLBACK ItemFreeCallback
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFreeObjectCreateItem(
    _In_ KSDEVICE_HEADER Header,
    _In_ PUNICODE_STRING CreateItem
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFreeObjectCreateItemsByContext(
    _In_ KSDEVICE_HEADER Header,
    _In_ PVOID Context
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateDefaultSecurity(
    _In_opt_ PSECURITY_DESCRIPTOR ParentSecurity,
    _Out_ PSECURITY_DESCRIPTOR* DefaultSecurity
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsForwardIrp(
    _In_ PIRP Irp,
    _In_ PFILE_OBJECT FileObject,
    _In_ BOOLEAN ReuseStackLocation
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsForwardAndCatchIrp(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ PFILE_OBJECT FileObject,
    _In_ KSSTACK_USE StackUse
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsSynchronousIoControlDevice(
    _In_ PFILE_OBJECT FileObject,
    _In_ KPROCESSOR_MODE RequestorMode,
    _In_ ULONG IoControl,
    _In_reads_bytes_(InSize) PVOID InBuffer,
    _In_ ULONG InSize,
    _Out_writes_bytes_to_(OutSize, *BytesReturned) PVOID OutBuffer,
    _In_ ULONG OutSize,
    _Out_ PULONG BytesReturned
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsUnserializeObjectPropertiesFromRegistry(
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ HANDLE ParentKey,
    _In_opt_ PUNICODE_STRING RegistryPath
    );

#if (NTDDI_VERSION >= NTDDI_WINXP)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCacheMedium(
    _In_ PUNICODE_STRING SymbolicLink,
    _In_ PKSPIN_MEDIUM Medium,
    _In_ ULONG PinDirection
    );

#endif // (NTDDI_VERSION >= NTDDI_WINXP)

// thread.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsRegisterWorker(
    _In_ WORK_QUEUE_TYPE WorkQueueType,
    _Out_ PKSWORKER* Worker
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsRegisterCountedWorker(
    _In_ WORK_QUEUE_TYPE WorkQueueType,
    _In_ PWORK_QUEUE_ITEM CountedWorkItem,
    _Out_ PKSWORKER* Worker
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
VOID
NTAPI
KsUnregisterWorker(
    _In_ PKSWORKER Worker
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsQueueWorkItem(
    _In_ PKSWORKER Worker,
    _In_ PWORK_QUEUE_ITEM WorkItem
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
ULONG
NTAPI
KsIncrementCountedWorker(
    _In_ PKSWORKER Worker
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
ULONG
NTAPI
KsDecrementCountedWorker(
    _In_ PKSWORKER Worker
    );

// topology.c:

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateTopologyNode(
    _In_ HANDLE ParentHandle,
    _In_ PKSNODE_CREATE NodeCreate,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE NodeHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsValidateTopologyNodeCreateRequest(
    _In_ PIRP Irp,
    _In_ PKSTOPOLOGY Topology,
    _Out_ PKSNODE_CREATE* NodeCreate
    );

#if (NTDDI_VERSION >= NTDDI_WINXP)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsMergeAutomationTables(
    _Out_ PKSAUTOMATION_TABLE* AutomationTableAB,
    _In_opt_ PKSAUTOMATION_TABLE AutomationTableA,
    _In_opt_ PKSAUTOMATION_TABLE AutomationTableB,
    _In_opt_ KSOBJECT_BAG Bag
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsInitializeDriver(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPathName,
    _In_opt_ const KSDEVICE_DESCRIPTOR* Descriptor
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAddDevice(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateDevice(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_opt_ const KSDEVICE_DESCRIPTOR* Descriptor,
    _In_ ULONG ExtensionSize,
    _Out_opt_ PKSDEVICE* Device
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsInitializeDevice(
    _In_ PDEVICE_OBJECT FunctionalDeviceObject,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PDEVICE_OBJECT NextDeviceObject,
    _In_opt_ const KSDEVICE_DESCRIPTOR* Descriptor
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsTerminateDevice(
    _In_ PDEVICE_OBJECT DeviceObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PKSDEVICE
NTAPI
KsGetDeviceForDeviceObject(
    _In_ PDEVICE_OBJECT FunctionalDeviceObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsAcquireDevice(
    _In_ PKSDEVICE Device
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsReleaseDevice(
    _In_ PKSDEVICE Device
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsDeviceRegisterAdapterObject(
    _In_ PKSDEVICE Device,
    _In_ PADAPTER_OBJECT AdapterObject,
    _In_ ULONG MaxMappingsByteCount,
    _In_ ULONG MappingTableStride
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
ULONG
NTAPI
KsDeviceGetBusData(
    _In_ PKSDEVICE Device,
    _In_ ULONG DataType,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
ULONG
NTAPI
KsDeviceSetBusData(
    _In_ PKSDEVICE Device,
    _In_ ULONG DataType,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCreateFilterFactory(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ const KSFILTER_DESCRIPTOR *Descriptor,
    _In_opt_ PWSTR RefString,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG CreateItemFlags,
    _In_opt_ PFNKSFILTERFACTORYPOWER SleepCallback,
    _In_opt_ PFNKSFILTERFACTORYPOWER WakeCallback,
    _Out_opt_ PKSFILTERFACTORY *FilterFactory
    );

#define KsDeleteFilterFactory(FilterFactory) \
    KsFreeObjectCreateItemsByContext(\
        *(KSDEVICE_HEADER *)(\
            KsFilterFactoryGetParentDevice(FilterFactory)->FunctionalDeviceObject->\
                DeviceExtension),\
        FilterFactory)

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFilterFactoryUpdateCacheData(
    _In_ PKSFILTERFACTORY FilterFactory,
    _In_opt_ const KSFILTER_DESCRIPTOR *FilterDescriptor
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFilterFactoryAddCreateItem(
    _In_ PKSFILTERFACTORY FilterFactory,
    _In_ PWSTR RefString,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG CreateItemFlags
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFilterFactorySetDeviceClassesState(
    _In_ PKSFILTERFACTORY FilterFactory,
    _In_ BOOLEAN NewState
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PUNICODE_STRING
NTAPI
KsFilterFactoryGetSymbolicLink(
    _In_ PKSFILTERFACTORY FilterFactory
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsAddEvent(
    _In_ PVOID Object,
    _In_ PKSEVENT_ENTRY EventEntry
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
void _inline
KsFilterAddEvent(
    _In_ PKSFILTER Filter,
    _In_ PKSEVENT_ENTRY EventEntry
    )
{
    KsAddEvent(Filter,EventEntry);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
void _inline
KsPinAddEvent(
    _In_ PKSPIN Pin,
    _In_ PKSEVENT_ENTRY EventEntry
    )
{
    KsAddEvent(Pin,EventEntry);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS    
NTAPI
KsDefaultAddEventHandler(
    _In_ PIRP Irp,
    _In_ PKSEVENTDATA EventData,
    _Inout_ PKSEVENT_ENTRY EventEntry
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsGenerateEvents(
    _In_ PVOID Object,
    _In_opt_ const GUID* EventSet,
    _In_ ULONG EventId,
    _In_ ULONG DataSize,
    _In_reads_bytes_opt_(DataSize) PVOID Data,
    _In_opt_ PFNKSGENERATEEVENTCALLBACK CallBack,
    _In_opt_ PVOID CallBackContext
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
void _inline
KsFilterGenerateEvents(
    _In_ PKSFILTER Filter,
    _In_opt_ const GUID* EventSet,
    _In_ ULONG EventId,
    _In_ ULONG DataSize,
    _In_reads_bytes_(DataSize) PVOID Data,
    _In_opt_ PFNKSGENERATEEVENTCALLBACK CallBack,
    _In_opt_ PVOID CallBackContext
    )
{
    KsGenerateEvents(
        Filter,
        EventSet,
        EventId,
        DataSize,
        Data,
        CallBack,
        CallBackContext);
}

_IRQL_requires_max_(DISPATCH_LEVEL)
void _inline
KsPinGenerateEvents(
    _In_ PKSPIN Pin,
    _In_opt_ const GUID* EventSet,
    _In_ ULONG EventId,
    _In_ ULONG DataSize,
    _In_reads_bytes_opt_(DataSize) PVOID Data,
    _In_opt_ PFNKSGENERATEEVENTCALLBACK CallBack,
    _In_opt_ PVOID CallBackContext
    )
{
    KsGenerateEvents(
        Pin,
        EventSet,
        EventId,
        DataSize,
        Data,
        CallBack,
        CallBackContext);
}

typedef enum {
    KSSTREAM_POINTER_STATE_UNLOCKED = 0,
    KSSTREAM_POINTER_STATE_LOCKED
} KSSTREAM_POINTER_STATE;

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinGetAvailableByteCount(
    _In_ PKSPIN Pin,
    _Out_opt_ PLONG InputDataBytes,
    _Out_opt_ PLONG OutputBufferBytes
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSSTREAM_POINTER
NTAPI
KsPinGetLeadingEdgeStreamPointer(
    _In_ PKSPIN Pin,
    _In_ KSSTREAM_POINTER_STATE State
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSSTREAM_POINTER
NTAPI
KsPinGetTrailingEdgeStreamPointer(
    _In_ PKSPIN Pin,
    _In_ KSSTREAM_POINTER_STATE State
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsStreamPointerSetStatusCode(
    _In_ PKSSTREAM_POINTER StreamPointer,
    _In_ NTSTATUS Status
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsStreamPointerLock(
    _In_ PKSSTREAM_POINTER StreamPointer
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsStreamPointerUnlock(
    _In_ PKSSTREAM_POINTER StreamPointer,
    _In_ BOOLEAN Eject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsStreamPointerAdvanceOffsetsAndUnlock(
    _In_ PKSSTREAM_POINTER StreamPointer,
    _In_ ULONG InUsed,
    _In_ ULONG OutUsed,
    _In_ BOOLEAN Eject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsStreamPointerDelete(
    _In_ PKSSTREAM_POINTER StreamPointer
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsStreamPointerClone(
    _In_ PKSSTREAM_POINTER StreamPointer,
    _In_opt_ PFNKSSTREAMPOINTER CancelCallback,
    _In_ ULONG ContextSize,
    _Out_ PKSSTREAM_POINTER* CloneStreamPointer
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsStreamPointerAdvanceOffsets(
    _In_ PKSSTREAM_POINTER StreamPointer,
    _In_ ULONG InUsed,
    _In_ ULONG OutUsed,
    _In_ BOOLEAN Eject
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsStreamPointerAdvance(
    _In_ PKSSTREAM_POINTER StreamPointer
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PMDL
NTAPI
KsStreamPointerGetMdl(
    _In_ PKSSTREAM_POINTER StreamPointer
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PIRP
NTAPI
KsStreamPointerGetIrp(
    _In_ PKSSTREAM_POINTER StreamPointer,
    _Out_opt_ PBOOLEAN FirstFrameInIrp,
    _Out_opt_ PBOOLEAN LastFrameInIrp
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsStreamPointerScheduleTimeout(
    _In_ PKSSTREAM_POINTER StreamPointer,
    _In_ PFNKSSTREAMPOINTER Callback,
    _In_ ULONGLONG Interval
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsStreamPointerCancelTimeout(
    _In_ PKSSTREAM_POINTER StreamPointer
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSSTREAM_POINTER
NTAPI
KsPinGetFirstCloneStreamPointer(
    _In_ PKSPIN Pin
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSSTREAM_POINTER
NTAPI
KsStreamPointerGetNextClone(
    _In_ PKSSTREAM_POINTER StreamPointer
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinHandshake(
    _In_ PKSPIN Pin,
    _In_ PKSHANDSHAKE In,
    _Out_ PKSHANDSHAKE Out
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsCompletePendingRequest(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
KSOBJECTTYPE
NTAPI
KsGetObjectTypeFromIrp(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PVOID
NTAPI
KsGetObjectFromFileObject(
    _In_ PFILE_OBJECT FileObject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
KSOBJECTTYPE
NTAPI
KsGetObjectTypeFromFileObject(
    _In_ PFILE_OBJECT FileObject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PKSFILTER __inline
KsGetFilterFromFileObject(
    _In_ PFILE_OBJECT FileObject
    )
{
    return (PKSFILTER) KsGetObjectFromFileObject(FileObject);
}

_IRQL_requires_max_(DISPATCH_LEVEL)
PKSPIN __inline
KsGetPinFromFileObject(
    _In_ PFILE_OBJECT FileObject
    )
{
    return (PKSPIN) KsGetObjectFromFileObject(FileObject);
}    

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSGATE
NTAPI
KsFilterGetAndGate(
    _In_ PKSFILTER Filter
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsFilterAcquireProcessingMutex(
    _In_ PKSFILTER Filter
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsFilterReleaseProcessingMutex(
    _In_ PKSFILTER Filter
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsFilterAttemptProcessing(
    _In_ PKSFILTER Filter,
    _In_ BOOLEAN Asynchronous
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSGATE
NTAPI
KsPinGetAndGate(
    _In_ PKSPIN Pin
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinAttachAndGate(
    _In_ PKSPIN Pin,
    _In_opt_ PKSGATE AndGate
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinAttachOrGate(
    _In_ PKSPIN Pin,
    _In_opt_ PKSGATE OrGate
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinAcquireProcessingMutex(
    _In_ PKSPIN Pin
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinReleaseProcessingMutex(
    _In_ PKSPIN Pin
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
BOOLEAN
NTAPI
KsProcessPinUpdate(
    _In_ PKSPROCESSPIN ProcessPin
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsPinGetCopyRelationships(
    _In_ PKSPIN Pin,
    _Out_ PKSPIN* CopySource,
    _Out_ PKSPIN* DelegateBranch
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
void
NTAPI
KsPinAttemptProcessing(
    _In_ PKSPIN Pin,
    _In_ BOOLEAN Asynchronous
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PVOID
NTAPI
KsGetParent(
    _In_ PVOID Object
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSDEVICE __inline
KsFilterFactoryGetParentDevice(
    _In_ PKSFILTERFACTORY FilterFactory
    )
{
    return (PKSDEVICE) KsGetParent((PVOID) FilterFactory);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSFILTERFACTORY __inline
KsFilterGetParentFilterFactory(
    _In_ PKSFILTER Filter
    )
{
    return (PKSFILTERFACTORY) KsGetParent((PVOID) Filter);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PKSFILTER 
NTAPI
KsPinGetParentFilter(
    _In_ PKSPIN Pin
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PVOID
NTAPI
KsGetFirstChild(
    _In_ PVOID Object
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSFILTERFACTORY __inline
KsDeviceGetFirstChildFilterFactory(
    _In_ PKSDEVICE Device
    )
{
    return (PKSFILTERFACTORY) KsGetFirstChild((PVOID) Device);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSFILTER __inline
KsFilterFactoryGetFirstChildFilter(
    _In_ PKSFILTERFACTORY FilterFactory
    )
{
    return (PKSFILTER) KsGetFirstChild((PVOID) FilterFactory);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
ULONG
NTAPI
KsFilterGetChildPinCount(
    _In_ PKSFILTER Filter,
    _In_ ULONG PinId
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PKSPIN
NTAPI
KsFilterGetFirstChildPin(
    _In_ PKSFILTER Filter,
    _In_ ULONG PinId
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PVOID
NTAPI
KsGetNextSibling(
    _In_ PVOID Object
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PKSPIN 
NTAPI
KsPinGetNextSiblingPin(
    _In_ PKSPIN Pin
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSFILTERFACTORY __inline
KsFilterFactoryGetNextSiblingFilterFactory(
    _In_ PKSFILTERFACTORY FilterFactory
    )
{
    return (PKSFILTERFACTORY) KsGetNextSibling((PVOID) FilterFactory);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSFILTER __inline
KsFilterGetNextSiblingFilter(
    _In_ PKSFILTER Filter
    )
{
    return (PKSFILTER) KsGetNextSibling((PVOID) Filter);
}


_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PKSDEVICE
NTAPI
KsGetDevice(
    _In_ PVOID Object
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSDEVICE __inline
KsFilterFactoryGetDevice(
    _In_ PKSFILTERFACTORY FilterFactory
    )
{
    return KsGetDevice((PVOID) FilterFactory);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSDEVICE __inline
KsFilterGetDevice(
    _In_ PKSFILTER Filter
    )
{
    return KsGetDevice((PVOID) Filter);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PKSDEVICE __inline
KsPinGetDevice(
    _In_ PKSPIN Pin
    )
{
    return KsGetDevice((PVOID) Pin);
}

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSFILTER
NTAPI
KsGetFilterFromIrp(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
PKSPIN
NTAPI
KsGetPinFromIrp(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
ULONG
NTAPI
KsGetNodeIdFromIrp(
    _In_ PIRP Irp
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsAcquireControl(
    _In_ PVOID Object
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsReleaseControl(
    _In_ PVOID Object
    );

_IRQL_requires_max_(PASSIVE_LEVEL) 
void __inline
KsFilterAcquireControl(
    _In_ PKSFILTER Filter
    )
{
    KsAcquireControl((PVOID) Filter);
}

_IRQL_requires_max_(PASSIVE_LEVEL) 
void __inline
KsFilterReleaseControl(
    _In_ PKSFILTER Filter
    )
{
    KsReleaseControl((PVOID) Filter);
}

_IRQL_requires_max_(PASSIVE_LEVEL) 
void __inline
KsPinAcquireControl(
    _In_ PKSPIN Pin
    )
{
    KsAcquireControl((PVOID) Pin);
}

_IRQL_requires_max_(PASSIVE_LEVEL) 
void __inline
KsPinReleaseControl(
    _In_ PKSPIN Pin
    )
{
    KsReleaseControl((PVOID) Pin);
}

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAddItemToObjectBag(
    _In_ KSOBJECT_BAG ObjectBag,
    _In_ __drv_aliasesMem PVOID Item,
    _In_opt_ PFNKSFREE Free
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
ULONG
NTAPI
KsRemoveItemFromObjectBag(
    _In_ KSOBJECT_BAG ObjectBag,
    _In_ PVOID Item,
    _In_ BOOLEAN Free
    );

#define KsDiscard(Object,Pointer)\
    KsRemoveItemFromObjectBag(\
        (Object)->Bag,\
        (PVOID)(Pointer),\
        TRUE)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsAllocateObjectBag(
    _In_ PKSDEVICE Device,
    _Out_ KSOBJECT_BAG* ObjectBag
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsFreeObjectBag(
    _In_ KSOBJECT_BAG ObjectBag
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsCopyObjectBagItems(
    _In_ KSOBJECT_BAG ObjectBagDestination,
    _In_ KSOBJECT_BAG ObjectBagSource
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
_KsEdit(
    _In_ KSOBJECT_BAG ObjectBag,
    _Inout_ PVOID* PointerToPointerToItem,
    _In_ ULONG NewSize,
    _In_ ULONG OldSize,
    _In_ ULONG Tag
    );

#define KsEdit(Object,PointerToPointer,Tag)\
    _KsEdit(\
        (Object)->Bag,\
        (PVOID*)(PointerToPointer),\
        sizeof(**(PointerToPointer)),\
        sizeof(**(PointerToPointer)),\
        (Tag))
#define KsEditSized(Object,PointerToPointer,NewSize,OldSize,Tag)\
    _KsEdit((Object)->Bag,(PVOID*)(PointerToPointer),(NewSize),(OldSize),(Tag))

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsRegisterFilterWithNoKSPins(
                                      _In_ PDEVICE_OBJECT DeviceObject,
                                      _In_ const GUID * InterfaceClassGUID,
                                      _In_ ULONG PinCount,
                                      _In_reads_(PinCount) BOOL * PinDirection,
                                      _In_reads_(PinCount) KSPIN_MEDIUM * MediumList,
                                      _In_reads_opt_(PinCount) GUID * CategoryList
);

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFilterCreatePinFactory (
    _In_ PKSFILTER Filter,
    _In_ const KSPIN_DESCRIPTOR_EX *const PinDescriptor,
    _Out_ PULONG PinID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFilterCreateNode (
    _In_ PKSFILTER Filter,
    _In_ const KSNODE_DESCRIPTOR *const NodeDescriptor,
    _Out_ PULONG NodeID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsFilterAddTopologyConnections (
    _In_ PKSFILTER Filter,
    _In_ ULONG NewConnectionsCount,
    _In_reads_(NewConnectionsCount) const KSTOPOLOGY_CONNECTION *const NewTopologyConnections
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinGetConnectedPinInterface(
    _In_ PKSPIN Pin,
    _In_ const GUID* InterfaceId,
    _Out_ PVOID* Interface
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PFILE_OBJECT
NTAPI
KsPinGetConnectedPinFileObject(
    _In_ PKSPIN Pin
    );

KSDDKAPI
PDEVICE_OBJECT
NTAPI
KsPinGetConnectedPinDeviceObject(
    _In_ PKSPIN Pin
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinGetConnectedFilterInterface(
    _In_ PKSPIN Pin,
    _In_ const GUID* InterfaceId,
    _Out_ PVOID* Interface
    );

#if defined(_UNKNOWN_H_) || defined(__IUnknown_INTERFACE_DEFINED__)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinGetReferenceClockInterface(
    _In_ PKSPIN Pin,
    _Out_ PIKSREFERENCECLOCK* Interface
    );

#endif //defined(_UNKNOWN_H_) || defined(__IUnknown_INTERFACE_DEFINED__)

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
VOID
NTAPI
KsPinSetPinClockTime(
    _In_ PKSPIN Pin,
    _In_ LONGLONG Time
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinSubmitFrame(
    _In_ PKSPIN Pin,
    _In_reads_bytes_opt_(Size) PVOID Data,
    _In_ ULONG Size OPTIONAL,
    _In_opt_ PKSSTREAM_HEADER StreamHeader,
    _In_opt_ PVOID Context
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
KSDDKAPI
NTSTATUS
NTAPI
KsPinSubmitFrameMdl(
    _In_ PKSPIN Pin,
    _In_opt_ PMDL Mdl,
    _In_opt_ PKSSTREAM_HEADER StreamHeader,
    _In_opt_ PVOID Context
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinRegisterFrameReturnCallback(
    _In_ PKSPIN Pin,
    _In_ PFNKSPINFRAMERETURN FrameReturn
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinRegisterIrpCompletionCallback(
    _In_ PKSPIN Pin,
    _In_ PFNKSPINIRPCOMPLETION IrpCompletion
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinRegisterHandshakeCallback(
    _In_ PKSPIN Pin,
    _In_ PFNKSPINHANDSHAKE Handshake
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsFilterRegisterPowerCallbacks(
    _In_ PKSFILTER Filter,
    _In_opt_ PFNKSFILTERPOWER Sleep,
    _In_opt_ PFNKSFILTERPOWER Wake
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
void
NTAPI
KsPinRegisterPowerCallbacks(
    _In_ PKSPIN Pin,
    _In_opt_ PFNKSPINPOWER Sleep,
    _In_opt_ PFNKSPINPOWER Wake
    );

#if defined(_UNKNOWN_H_) || defined(__IUnknown_INTERFACE_DEFINED__)

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PUNKNOWN
NTAPI
KsRegisterAggregatedClientUnknown(
    _In_ PVOID Object,
    _In_ PUNKNOWN ClientUnknown 
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
PUNKNOWN
NTAPI
KsGetOuterUnknown(
    _In_ PVOID Object
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
PUNKNOWN __inline
KsDeviceRegisterAggregatedClientUnknown(
    _In_ PKSDEVICE Device,
    _In_ PUNKNOWN ClientUnknown 
    )
{
    return KsRegisterAggregatedClientUnknown((PVOID) Device,ClientUnknown);
}

_IRQL_requires_max_(PASSIVE_LEVEL) 
PUNKNOWN __inline
KsDeviceGetOuterUnknown(
    _In_ PKSDEVICE Device
    )
{
    return KsGetOuterUnknown((PVOID) Device);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PUNKNOWN __inline
KsFilterFactoryRegisterAggregatedClientUnknown(
    _In_ PKSFILTERFACTORY FilterFactory,
    _In_ PUNKNOWN ClientUnknown 
    )
{
    return KsRegisterAggregatedClientUnknown((PVOID) FilterFactory,ClientUnknown);
}

_IRQL_requires_max_(PASSIVE_LEVEL) 
PUNKNOWN __inline
KsFilterFactoryGetOuterUnknown(
    _In_ PKSFILTERFACTORY FilterFactory
    )
{
    return KsGetOuterUnknown((PVOID) FilterFactory);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PUNKNOWN __inline
KsFilterRegisterAggregatedClientUnknown(
    _In_ PKSFILTER Filter,
    _In_ PUNKNOWN ClientUnknown 
    )
{
    return KsRegisterAggregatedClientUnknown((PVOID) Filter,ClientUnknown);
}

_IRQL_requires_max_(PASSIVE_LEVEL) 
PUNKNOWN __inline
KsFilterGetOuterUnknown(
    _In_ PKSFILTER Filter
    )
{
    return KsGetOuterUnknown((PVOID) Filter);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
PUNKNOWN __inline
KsPinRegisterAggregatedClientUnknown(
    _In_ PKSPIN Pin,
    _In_ PUNKNOWN ClientUnknown 
    )
{
    return KsRegisterAggregatedClientUnknown((PVOID) Pin,ClientUnknown);
}

_IRQL_requires_max_(PASSIVE_LEVEL) 
PUNKNOWN __inline
KsPinGetOuterUnknown(
    _In_ PKSPIN Pin
    )
{
    return KsGetOuterUnknown((PVOID) Pin);
}

#endif // defined(_UNKNOWN_H_) || defined(__IUnknown_INTERFACE_DEFINED__)

#endif // (NTDDI_VERSION >= NTDDI_WINXP)

#else // !defined(_NTDDK_)

#if !defined( KS_NO_CREATE_FUNCTIONS )

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
WINAPI
KsCreateAllocator(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSALLOCATOR_FRAMING AllocatorFraming,
    _Out_ PHANDLE AllocatorHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
NTAPI
KsCreateClock(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSCLOCK_CREATE ClockCreate,
    _Out_ PHANDLE ClockHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
WINAPI
KsCreatePin(
    _In_ HANDLE FilterHandle,
    _In_ PKSPIN_CONNECT Connect,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE ConnectionHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
DWORD
WINAPI
KsCreateTopologyNode(
    _In_ HANDLE ParentHandle,
    _In_ PKSNODE_CREATE NodeCreate,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE NodeHandle
    );

//
// KS create function that needs to be called after initializing COM
//
_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
WINAPI
KsCreateAllocator2(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSALLOCATOR_FRAMING AllocatorFraming,
    _Out_ PHANDLE AllocatorHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
NTAPI
KsCreateClock2(
    _In_ HANDLE ConnectionHandle,
    _In_ PKSCLOCK_CREATE ClockCreate,
    _Out_ PHANDLE ClockHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
WINAPI
KsCreatePin2(
    _In_ HANDLE FilterHandle,
    _In_ PKSPIN_CONNECT Connect,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE ConnectionHandle
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
KSDDKAPI
HRESULT
WINAPI
KsCreateTopologyNode2(
    _In_ HANDLE ParentHandle,
    _In_ PKSNODE_CREATE NodeCreate,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE NodeHandle
    );
    
#endif

#endif // !defined(_NTDDK_)

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)


#define DENY_USERMODE_ACCESS( pIrp, CompleteRequest ) \
if ( pIrp->RequestorMode != KernelMode ) { \
    pIrp->IoStatus.Information = 0; \
    pIrp->IoStatus.Status = STATUS_INVALID_DEVICE_REQUEST; \
    if ( CompleteRequest ) IoCompleteRequest ( pIrp, IO_NO_INCREMENT ); \
    return STATUS_INVALID_DEVICE_REQUEST; \
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // !_KS_


