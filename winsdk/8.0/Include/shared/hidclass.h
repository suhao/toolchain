/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    hidclass.h

Abstract

    Definitions that are common to clients of the HID class driver.

Environment:

    Kernel mode and user mode

Revision History:


--*/


#include <basetyps.h>
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

//
//  Define the HID class guid *OUTSIDE* the #ifndef/#endif to allow
//  multiple includes with precompiled headers.
//
DEFINE_GUID( GUID_DEVINTERFACE_HID, 0x4D1E55B2L, 0xF16F, 0x11CF, 0x88, 0xCB, 0x00, \
             0x11, 0x11, 0x00, 0x00, 0x30);
// Obsolete GUID naming convention.
#define GUID_CLASS_INPUT GUID_DEVINTERFACE_HID

//
// 2c4e2e88-25e6-4c33-882f-3d82e6073681
//
DEFINE_GUID( GUID_HID_INTERFACE_NOTIFY, 0x2c4e2e88L, 0x25e6, 0x4c33, 0x88, 0x2f, 0x3d, 0x82, 0xe6, 0x07, 0x36, 0x81 );

// {F5C315A5-69AC-4bc2-9279-D0B64576F44B}
DEFINE_GUID( GUID_HID_INTERFACE_HIDPARSE, 0xf5c315a5, 0x69ac, 0x4bc2, 0x92, 0x79, 0xd0, 0xb6, 0x45, 0x76, 0xf4, 0x4b );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#ifndef __HIDCLASS_H__
#define __HIDCLASS_H__

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201) // nameless struct/union


#define GUID_CLASS_INPUT_STR "4D1E55B2-F16F-11CF-88CB-001111000030"

//
// HID_REVISION specifies the minimum revision of HIDCLASS.SYS
// required to support minidrivers compiled with this header file.
//
#define HID_REVISION    0x00000001

//
// Macro for defining HID ioctls
//
#define HID_CTL_CODE(id)    \
    CTL_CODE(FILE_DEVICE_KEYBOARD, (id), METHOD_NEITHER, FILE_ANY_ACCESS)
#define HID_BUFFER_CTL_CODE(id)  \
    CTL_CODE(FILE_DEVICE_KEYBOARD, (id), METHOD_BUFFERED, FILE_ANY_ACCESS)
#define HID_IN_CTL_CODE(id)  \
    CTL_CODE(FILE_DEVICE_KEYBOARD, (id), METHOD_IN_DIRECT, FILE_ANY_ACCESS)
#define HID_OUT_CTL_CODE(id)  \
    CTL_CODE(FILE_DEVICE_KEYBOARD, (id), METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

//
// IOCTLs supported by the upper edge of the HID class driver
//

#define IOCTL_HID_GET_DRIVER_CONFIG             HID_BUFFER_CTL_CODE(100)
#define IOCTL_HID_SET_DRIVER_CONFIG             HID_BUFFER_CTL_CODE(101)
#define IOCTL_HID_GET_POLL_FREQUENCY_MSEC       HID_BUFFER_CTL_CODE(102)
#define IOCTL_HID_SET_POLL_FREQUENCY_MSEC       HID_BUFFER_CTL_CODE(103)
#define IOCTL_GET_NUM_DEVICE_INPUT_BUFFERS      HID_BUFFER_CTL_CODE(104)
#define IOCTL_SET_NUM_DEVICE_INPUT_BUFFERS      HID_BUFFER_CTL_CODE(105)
#define IOCTL_HID_GET_COLLECTION_INFORMATION    HID_BUFFER_CTL_CODE(106)

#define IOCTL_HID_GET_COLLECTION_DESCRIPTOR     HID_CTL_CODE(100)
#define IOCTL_HID_FLUSH_QUEUE                   HID_CTL_CODE(101)

#define IOCTL_HID_SET_FEATURE                   HID_IN_CTL_CODE(100)
#if (NTDDI_VERSION >= NTDDI_WINXP) 
#define IOCTL_HID_SET_OUTPUT_REPORT             HID_IN_CTL_CODE(101)
#endif

#define IOCTL_HID_GET_FEATURE                   HID_OUT_CTL_CODE(100)
#define IOCTL_GET_PHYSICAL_DESCRIPTOR           HID_OUT_CTL_CODE(102)
#define IOCTL_HID_GET_HARDWARE_ID               HID_OUT_CTL_CODE(103)
#if (NTDDI_VERSION >= NTDDI_WINXP) 
#define IOCTL_HID_GET_INPUT_REPORT              HID_OUT_CTL_CODE(104)
#endif

/*
 *  No more IOCTL_HID_GET_FRIENDLY_NAME - use one of the following:
 */
#define IOCTL_HID_GET_MANUFACTURER_STRING       HID_OUT_CTL_CODE(110)
#define IOCTL_HID_GET_PRODUCT_STRING            HID_OUT_CTL_CODE(111)
#define IOCTL_HID_GET_SERIALNUMBER_STRING       HID_OUT_CTL_CODE(112)

#define IOCTL_HID_GET_INDEXED_STRING            HID_OUT_CTL_CODE(120)
#if (NTDDI_VERSION >= NTDDI_WINXP) 
#define IOCTL_HID_GET_MS_GENRE_DESCRIPTOR       HID_OUT_CTL_CODE(121)

#define IOCTL_HID_ENABLE_SECURE_READ 	  	HID_CTL_CODE(130)      
#define IOCTL_HID_DISABLE_SECURE_READ		HID_CTL_CODE(131)
#endif

/*
 *  This is used to pass write-report and feature-report information
 *  from HIDCLASS to a minidriver.
 */
typedef struct _HID_XFER_PACKET {
    PUCHAR  reportBuffer;
    ULONG   reportBufferLen;
    UCHAR   reportId;
} HID_XFER_PACKET, *PHID_XFER_PACKET;

#ifdef NT_INCLUDED

enum DeviceObjectState {
    DeviceObjectStarted,
    DeviceObjectStopped,
    DeviceObjectRemoved
};

typedef 
VOID 
(*PHID_STATUS_CHANGE)(
    _In_ PVOID Context, 
    _In_ enum DeviceObjectState State
    );

typedef struct _HID_INTERFACE_NOTIFY_PNP
{
#ifndef __cplusplus
    INTERFACE;
#else
    INTERFACE i;
#endif
    PHID_STATUS_CHANGE StatusChangeFn;
    PVOID CallbackContext;
} HID_INTERFACE_NOTIFY_PNP, *PHID_INTERFACE_NOTIFY_PNP;


#ifdef __HIDPI_H__

_Must_inspect_result_
typedef 
NTSTATUS 
(__stdcall *PHIDP_GETCAPS) (
    _In_  PHIDP_PREPARSED_DATA PreparsedData, 
    _Out_ PHIDP_CAPS Capabilities
    );

typedef struct _HID_INTERFACE_HIDPARSE
{
#ifndef __cplusplus
    INTERFACE;
#else
    INTERFACE i;
#endif
    PHIDP_GETCAPS HidpGetCaps;
} HID_INTERFACE_HIDPARSE, *PHID_INTERFACE_HIDPARSE;

#endif // __HIDPI_H__

#endif // NT_INCLUDED

//
// Structure passed by IOCTL_HID_GET_COLLECTION_INFORMATION
//

typedef struct _HID_COLLECTION_INFORMATION {

    //
    // DescriptorSize is the size of the input buffer required to accept
    // the collection descriptor returned by
    // IOCTL_HID_GET_COLLECTION_DESCRIPTOR.
    //

    ULONG   DescriptorSize;

    //
    // Polled is TRUE if this collection is a polled collection.
    //

    BOOLEAN Polled;

    //
    // Reserved1 must be set to zero.
    //

    UCHAR   Reserved1[ 1 ];

    //
    // Vendor ids of this hid device
    //
    USHORT  VendorID;
    USHORT  ProductID;
    USHORT  VersionNumber;

    //
    // Additional fields, if any, will be added at the end of this structure.
    //

} HID_COLLECTION_INFORMATION, *PHID_COLLECTION_INFORMATION;

//
// Structure passed by IOCTL_HID_GET_DRIVER_CONFIG and
// IOCTL_HID_SET_DRIVER_CONFIG
//

typedef struct _HID_DRIVER_CONFIG {

    //
    // Size must be set to the size of this structure.
    //

    ULONG   Size;

    //
    // Size of the input report queue (in reports).  This value can be set.
    //

    ULONG   RingBufferSize;

} HID_DRIVER_CONFIG, *PHID_DRIVER_CONFIG;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif  // __HIDCLASS_H__


