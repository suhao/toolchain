
/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    evntprov.h

Abstract:

    This defines the unified provider side user mode API.

Revision History:

--*/

#ifndef _EVNTPROV_H_
#define _EVNTPROV_H_

#pragma once
#include <winapifamily.h>

#ifndef EVNTAPI
#ifndef MIDL_PASS
#ifdef _EVNT_SOURCE_
#define EVNTAPI __stdcall
#else
#define EVNTAPI DECLSPEC_IMPORT __stdcall
#endif // _EVNT_SOURCE_
#endif // MIDL_PASS
#endif // EVNTAPI

#ifdef __cplusplus
extern "C" {
#endif


#define EVENT_MIN_LEVEL                      (0)
#define EVENT_MAX_LEVEL                      (0xff)

#define EVENT_ACTIVITY_CTRL_GET_ID           (1)
#define EVENT_ACTIVITY_CTRL_SET_ID           (2)
#define EVENT_ACTIVITY_CTRL_CREATE_ID        (3)
#define EVENT_ACTIVITY_CTRL_GET_SET_ID       (4)
#define EVENT_ACTIVITY_CTRL_CREATE_SET_ID    (5)

typedef ULONGLONG REGHANDLE, *PREGHANDLE;

#define MAX_EVENT_DATA_DESCRIPTORS           (128)
#define MAX_EVENT_FILTER_DATA_SIZE           (1024)
#define MAX_EVENT_FILTER_PAYLOAD_SIZE        (4096)

//
// MAX_EVENT_FILTERS_COUNT is the maximum count of filters
// that can be provided.
//
#define MAX_EVENT_FILTERS_COUNT              (8)

#define MAX_EVENT_FILTER_PID_COUNT           (8)
#define MAX_EVENT_FILTER_EVENT_ID_COUNT      (64)

#define EVENT_FILTER_TYPE_NONE               (0x00000000)
#define EVENT_FILTER_TYPE_SCHEMATIZED        (0x80000000)
#define EVENT_FILTER_TYPE_SYSTEM_FLAGS       (0x80000001)
#define EVENT_FILTER_TYPE_TRACEHANDLE        (0x80000002)
#define EVENT_FILTER_TYPE_PID                (0x80000004)
#define EVENT_FILTER_TYPE_EXECUTABLE_NAME    (0x80000008)
#define EVENT_FILTER_TYPE_PACKAGE_ID         (0x80000010)
#define EVENT_FILTER_TYPE_PACKAGE_APP_ID     (0x80000020)  // Package Relative App Id (PRAID)
#define EVENT_FILTER_TYPE_PAYLOAD            (0x80000100)
#define EVENT_FILTER_TYPE_EVENT_ID           (0x80000200)
#define EVENT_FILTER_TYPE_STACKWALK          (0x80001000)

#define EVENT_DATA_DESCRIPTOR_TYPE_NONE               (0)
#define EVENT_DATA_DESCRIPTOR_TYPE_EVENT_METADATA     (1)
#define EVENT_DATA_DESCRIPTOR_TYPE_PROVIDER_METADATA  (2)
// #define EVENT_DATA_DESCRIPTOR_TYPE_TIMESTAMP_OVERRIDE (3) // Win10+ only

#pragma warning(push)
#pragma warning(disable:4201)
//
// EVENT_DATA_DESCRIPTOR is used to pass in user data items
// in events.
// 
typedef struct _EVENT_DATA_DESCRIPTOR {

    ULONGLONG       Ptr;        // Pointer to data
    ULONG           Size;       // Size of data in bytes
    union {
        ULONG       Reserved;
        struct {
            UCHAR   Type;
            UCHAR   Reserved1;
            USHORT  Reserved2;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;

} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;
#pragma warning(pop)


#ifndef EVENT_DESCRIPTOR_DEF
#define EVENT_DESCRIPTOR_DEF

//
// EVENT_DESCRIPTOR describes and categorizes an event.
// 
typedef struct _EVENT_DESCRIPTOR {

    USHORT      Id;
    UCHAR       Version;
    UCHAR       Channel;
    UCHAR       Level;
    UCHAR       Opcode;
    USHORT      Task;
    ULONGLONG   Keyword;

} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;

typedef const EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;
#endif

//
// EVENT_FILTER_DESCRIPTOR is used to pass in enable filter
// data item to a user callback function.
// 
typedef struct _EVENT_FILTER_DESCRIPTOR {

    ULONGLONG   Ptr;
    ULONG       Size;
    ULONG       Type;

} EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;


typedef struct _EVENT_FILTER_HEADER {

    USHORT     Id;
    UCHAR      Version;
    UCHAR      Reserved[5];
    ULONGLONG  InstanceId;
    ULONG      Size;
    ULONG      NextOffset;

} EVENT_FILTER_HEADER, *PEVENT_FILTER_HEADER;

//
// EVENT_FILTER_EVENT_ID is used to pass EventId filter for 
// stack walk filters.
//
typedef struct _EVENT_FILTER_EVENT_ID {
    BOOLEAN FilterIn;
    UCHAR Reserved;
    USHORT Count;
    USHORT Events[ANYSIZE_ARRAY];
} EVENT_FILTER_EVENT_ID, *PEVENT_FILTER_EVENT_ID;

#ifndef MIDL_PASS

typedef enum _EVENT_INFO_CLASS {
    EventProviderBinaryTrackInfo,
    // Enum value 1 is an available reserved value. It was used 
    // temporarily in development but removed prior to release.
    EventProviderSetTraits = 2,
    EventProviderUseDescriptorType,
    MaxEventInfo
} EVENT_INFO_CLASS;

#ifndef _ETW_KM_ 

//
// Optional callback function that users provide
//
typedef 
VOID
(NTAPI *PENABLECALLBACK) (
    _In_ LPCGUID SourceId,
    _In_ ULONG IsEnabled,
    _In_ UCHAR Level,
    _In_ ULONGLONG MatchAnyKeyword,
    _In_ ULONGLONG MatchAllKeyword,
    _In_opt_ PEVENT_FILTER_DESCRIPTOR FilterData,
    _Inout_opt_ PVOID CallbackContext
    );  

#ifndef _APISET_EVENTING

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

//
// Registration APIs
//

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG
EVNTAPI
EventRegister(
    _In_ LPCGUID ProviderId,
    _In_opt_ PENABLECALLBACK EnableCallback,
    _In_opt_ PVOID CallbackContext,
    _Out_ PREGHANDLE RegHandle
    );
#endif

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG
EVNTAPI
EventUnregister(
    _In_ REGHANDLE RegHandle
    );
#endif


#if (WINVER >= _WIN32_WINNT_WIN8)
ULONG
EVNTAPI
EventSetInformation(
    _In_ REGHANDLE RegHandle,
    _In_ EVENT_INFO_CLASS InformationClass,
    _In_reads_bytes_(InformationLength) PVOID EventInformation,
    _In_ ULONG InformationLength
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

//
// Control (Is Enabled) APIs
//

#if (WINVER >= _WIN32_WINNT_VISTA)
BOOLEAN
EVNTAPI
EventEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    );
#endif

#if (WINVER >= _WIN32_WINNT_VISTA)
BOOLEAN
EVNTAPI
EventProviderEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword
    );
#endif

//
// Writing (Publishing/Logging) APIs
//

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG
EVNTAPI
EventWrite(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
#endif

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG
EVNTAPI
EventWriteTransfer(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)
ULONG
EVNTAPI
EventWriteEx(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG64 Filter,
    _In_ ULONG Flags,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
#endif

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG
EVNTAPI
EventWriteString(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword,
    _In_ PCWSTR String
    );
#endif


//
// ActivityId Control APIs
//

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG
EVNTAPI
EventActivityIdControl(
    _In_ ULONG ControlCode,
    _Inout_ LPGUID ActivityId
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // _APISET_EVENTING

#endif // _ETW_KM_ 

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

//
// Macros to create Event and Event Data Descriptors
//

FORCEINLINE
VOID
EventDataDescCreate(
    _Out_ PEVENT_DATA_DESCRIPTOR EventDataDescriptor,
    _In_reads_bytes_(DataSize) const VOID* DataPtr,
    _In_ ULONG DataSize
    )
{
    EventDataDescriptor->Ptr = (ULONGLONG)(ULONG_PTR)DataPtr;
    EventDataDescriptor->Size = DataSize;
    EventDataDescriptor->Reserved = 0;
    return;
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

FORCEINLINE
VOID
EventDescCreate(
    _Out_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT Id,
    _In_ UCHAR Version,
    _In_ UCHAR Channel,
    _In_ UCHAR Level,
    _In_ USHORT Task,
    _In_ UCHAR Opcode,
    _In_ ULONGLONG Keyword
    )
{
    EventDescriptor->Id = Id;
    EventDescriptor->Version = Version;
    EventDescriptor->Channel = Channel;
    EventDescriptor->Level = Level;
    EventDescriptor->Task = Task;
    EventDescriptor->Opcode = Opcode;
    EventDescriptor->Keyword = Keyword;
    return;
}

FORCEINLINE
VOID
EventDescZero(
    _Out_ PEVENT_DESCRIPTOR EventDescriptor
    )
{
    memset(EventDescriptor, 0, sizeof(EVENT_DESCRIPTOR));
    return;
}

//
// Macros to extract info from an Event Descriptor
//

FORCEINLINE
USHORT
EventDescGetId(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Id);
}

FORCEINLINE
UCHAR
EventDescGetVersion(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Version);
}

FORCEINLINE
USHORT
EventDescGetTask(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Task);
}

FORCEINLINE
UCHAR
EventDescGetOpcode(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Opcode);
}

FORCEINLINE
UCHAR
EventDescGetChannel(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Channel);
}

FORCEINLINE
UCHAR
EventDescGetLevel(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Level);
}

FORCEINLINE
ULONGLONG
EventDescGetKeyword(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Keyword);
}

//
// Macros to set info into an Event Descriptor
//

FORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetId(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT Id
    )
{
    EventDescriptor->Id         = Id;
    return (EventDescriptor);
}

FORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetVersion(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR Version
    )
{
    EventDescriptor->Version    = Version;
    return (EventDescriptor);
}

FORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetTask(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT Task
    )
{
    EventDescriptor->Task       = Task;
    return (EventDescriptor);
}

FORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetOpcode(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR Opcode
    )
{
    EventDescriptor->Opcode     = Opcode;
    return (EventDescriptor);
}

FORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetLevel(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR  Level
    )
{
    EventDescriptor->Level      = Level;
    return (EventDescriptor);
}

FORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetChannel(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ UCHAR Channel
    )
{
    EventDescriptor->Channel    = Channel;
    return (EventDescriptor);
}

FORCEINLINE
PEVENT_DESCRIPTOR
EventDescSetKeyword(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONGLONG Keyword
    )
{
    EventDescriptor->Keyword    = Keyword;
    return (EventDescriptor);
}


FORCEINLINE
PEVENT_DESCRIPTOR
EventDescOrKeyword(
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONGLONG Keyword
    )
{
    EventDescriptor->Keyword    |= Keyword;
    return (EventDescriptor);
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion



#endif // MIDL_PASS

#ifdef __cplusplus
}
#endif


#endif


