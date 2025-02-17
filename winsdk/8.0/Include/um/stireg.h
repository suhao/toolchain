/*++

Copyright (c) 1986-1997  Microsoft Corporation

Module Name:

    stireg.h

Abstract:

    This module contains the STI registry entries

Author:


Revision History:


--*/

#ifndef _STIREG_
#define _STIREG_
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


//
// Registry keys and values
//
#define REGSTR_VAL_TYPE_W            L"Type"
#define REGSTR_VAL_VENDOR_NAME_W     L"Vendor"
#define REGSTR_VAL_DEVICETYPE_W      L"DeviceType"
#define REGSTR_VAL_DEVICESUBTYPE_W   L"DeviceSubType"
#define REGSTR_VAL_DEV_NAME_W        L"DeviceName"
#define REGSTR_VAL_DRIVER_DESC_W     L"DriverDesc"
#define REGSTR_VAL_FRIENDLY_NAME_W   L"FriendlyName"
#define REGSTR_VAL_GENERIC_CAPS_W    L"Capabilities"
#define REGSTR_VAL_HARDWARE_W        L"HardwareConfig"
#define REGSTR_VAL_HARDWARE          TEXT("HardwareConfig")
#define REGSTR_VAL_DEVICE_NAME_W     L"DriverDesc"
#define REGSTR_VAL_DATA_W            L"DeviceData"
#define REGSTR_VAL_GUID_W            L"GUID"
#define REGSTR_VAL_GUID               TEXT("GUID")
#define REGSTR_VAL_LAUNCH_APPS_W     L"LaunchApplications"
#define REGSTR_VAL_LAUNCH_APPS        TEXT("LaunchApplications")
#define REGSTR_VAL_LAUNCHABLE_W      L"Launchable"
#define REGSTR_VAL_LAUNCHABLE         TEXT("Launchable")
#if (_WIN32_WINNT >= 0x0600) // Windows Vista and later
#define REGSTR_VAL_SHUTDOWNDELAY_W   L"ShutdownIfUnusedDelay"
#define REGSTR_VAL_SHUTDOWNDELAY      TEXT("ShutdownIfUnusedDelay")
#endif //#if (_WIN32_WINNT >= 0x0600)

#if (_WIN32_WINNT >= 0x0501) // Windows XP and later
//
// CustomDeviceProperty names and values
//
#define IS_DIGITAL_CAMERA_STR   L"IsDigitalCamera"
#define IS_DIGITAL_CAMERA_VAL   1
#define SUPPORTS_MSCPLUS_STR    L"SupportsMSCPlus"
#define SUPPORTS_MSCPLUS_VAL    1
#endif //#if (_WIN32_WINNT >= 0x0501)

//
// Device instance value names
//
#define STI_DEVICE_VALUE_TWAIN_NAME    L"TwainDS"
#define STI_DEVICE_VALUE_ISIS_NAME     L"ISISDriverName"
#define STI_DEVICE_VALUE_ICM_PROFILE   L"ICMProfile"
#define STI_DEVICE_VALUE_DEFAULT_LAUNCHAPP  L"DefaultLaunchApp"
#define STI_DEVICE_VALUE_TIMEOUT       L"PollTimeout"
#define STI_DEVICE_VALUE_DISABLE_NOTIFICATIONS  L"DisableNotifications"
#define REGSTR_VAL_BAUDRATE            L"BaudRate"

#define STI_DEVICE_VALUE_TWAIN_NAME_A  "TwainDS"
#define STI_DEVICE_VALUE_ISIS_NAME_A   "ISISDriverName"
#define STI_DEVICE_VALUE_ICM_PROFILE_A   "ICMProfile"
#define STI_DEVICE_VALUE_DEFAULT_LAUNCHAPP_A  "DefaultLaunchApp"
#define STI_DEVICE_VALUE_TIMEOUT_A       "PollTimeout"
#define STI_DEVICE_VALUE_DISABLE_NOTIFICATIONS_A  "DisableNotifications"
#define REGSTR_VAL_BAUDRATE_A            "BaudRate"



#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // _STIREG_

