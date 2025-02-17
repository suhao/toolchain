/*++

Copyright (c) 1999 - 2008  Microsoft Corporation

Module Name:

    VirtDisk.w - Virtual Disk user mode interface

Abstract:

    This is the header file defining the data structures and user mode interface
    implemented by the virtual disk system.


Environment:

    User mode


--*/


#ifndef VIRT_DISK_API_DEF
#define VIRT_DISK_API_DEF

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if ((WINVER >= _WIN32_WINNT_WIN7) || defined(VIRTDISK_DEFINE_FLAGS))

#pragma warning(push)
#pragma warning(disable : 4200)
#pragma warning(disable : 4201)

#ifdef __cplusplus
extern "C" {
#endif

//
// Identifiers for virtual storage types and providers
//

#ifndef _VIRTUAL_STORAGE_TYPE_DEFINED
#define _VIRTUAL_STORAGE_TYPE_DEFINED
typedef struct _VIRTUAL_STORAGE_TYPE
{
    ULONG DeviceId;
    GUID  VendorId;
} VIRTUAL_STORAGE_TYPE, *PVIRTUAL_STORAGE_TYPE;
#endif

#ifdef DEFINE_GUID
DEFINE_GUID(VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

// {EC984AEC-A0F9-47e9-901F-71415A66345B}
DEFINE_GUID(VIRTUAL_STORAGE_TYPE_VENDOR_MICROSOFT, 0xec984aec, 0xa0f9, 0x47e9, 0x90, 0x1f, 0x71, 0x41, 0x5a, 0x66, 0x34, 0x5b);
#endif


#define VIRTUAL_STORAGE_TYPE_DEVICE_UNKNOWN     0
#define VIRTUAL_STORAGE_TYPE_DEVICE_ISO         1
#define VIRTUAL_STORAGE_TYPE_DEVICE_VHD         2
#define VIRTUAL_STORAGE_TYPE_DEVICE_VHDX        3

#if !defined(VIRTDISK_DEFINE_FLAGS)

// The default RW Depth parameter value
#define OPEN_VIRTUAL_DISK_RW_DEPTH_DEFAULT 1


// Version definitions
typedef enum _OPEN_VIRTUAL_DISK_VERSION
{
    OPEN_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
    OPEN_VIRTUAL_DISK_VERSION_1           = 1,
    OPEN_VIRTUAL_DISK_VERSION_2           = 2,

} OPEN_VIRTUAL_DISK_VERSION;


// Versioned OpenVirtualDisk parameter structure
typedef struct _OPEN_VIRTUAL_DISK_PARAMETERS
{
    OPEN_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            ULONG RWDepth;
        } Version1;
        struct
        {
            BOOL GetInfoOnly;
            BOOL ReadOnly;
            GUID ResiliencyGuid;
        } Version2;
    };
} OPEN_VIRTUAL_DISK_PARAMETERS, *POPEN_VIRTUAL_DISK_PARAMETERS;

#endif // VIRTDISK_DEFINE_FLAGS

//
//  Access Mask for OpenVirtualDisk and CreateVirtualDisk.  The virtual
//  disk drivers expose file objects as handles therefore we map
//  it into that AccessMask space.
//

#if defined(__midl)
typedef [v1_enum] enum _VIRTUAL_DISK_ACCESS_MASK {
#else
typedef enum _VIRTUAL_DISK_ACCESS_MASK {
#endif
    VIRTUAL_DISK_ACCESS_NONE                = 0x00000000,
    VIRTUAL_DISK_ACCESS_ATTACH_RO           = 0x00010000,
    VIRTUAL_DISK_ACCESS_ATTACH_RW           = 0x00020000,
    VIRTUAL_DISK_ACCESS_DETACH              = 0x00040000,
    VIRTUAL_DISK_ACCESS_GET_INFO            = 0x00080000,
    VIRTUAL_DISK_ACCESS_CREATE              = 0x00100000,
    VIRTUAL_DISK_ACCESS_METAOPS             = 0x00200000,
    VIRTUAL_DISK_ACCESS_READ                = 0x000d0000,
    VIRTUAL_DISK_ACCESS_ALL                 = 0x003f0000,

    //
    // A special flag to be used to test if the virtual disk needs to be
    // opened for write.
    //

    VIRTUAL_DISK_ACCESS_WRITABLE            = 0x00320000

} VIRTUAL_DISK_ACCESS_MASK;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(VIRTUAL_DISK_ACCESS_MASK);
#endif

// Flags for OpenVirtualDisk
typedef enum _OPEN_VIRTUAL_DISK_FLAG
{
    OPEN_VIRTUAL_DISK_FLAG_NONE                = 0x00000000,

    // Open the backing store without opening any differencing chain parents.
    // This allows one to fixup broken parent links.
    OPEN_VIRTUAL_DISK_FLAG_NO_PARENTS          = 0x00000001,

    // The backing store being opened is an empty file. Do not perform virtual
    // disk verification.
    OPEN_VIRTUAL_DISK_FLAG_BLANK_FILE          = 0x00000002,

    // This flag is only specified at boot time to load the system disk
    // during virtual disk boot.  Must be kernel mode to specify this flag.
    OPEN_VIRTUAL_DISK_FLAG_BOOT_DRIVE          = 0x00000004,

    // This flag causes the backing file to be opened in cached mode.
    OPEN_VIRTUAL_DISK_FLAG_CACHED_IO           = 0x00000008,

    // Open the backing store without opening any differencing chain parents.
    // This allows one to fixup broken parent links temporarily without updating
    // the parent locator.
    OPEN_VIRTUAL_DISK_FLAG_CUSTOM_DIFF_CHAIN   = 0x00000010,

} OPEN_VIRTUAL_DISK_FLAG;

#if !defined(VIRTDISK_DEFINE_FLAGS)

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(OPEN_VIRTUAL_DISK_FLAG);
#endif

DWORD
WINAPI
OpenVirtualDisk(
    _In_     PVIRTUAL_STORAGE_TYPE         VirtualStorageType,
    _In_     PCWSTR                        Path,
    _In_     VIRTUAL_DISK_ACCESS_MASK      VirtualDiskAccessMask,
    _In_     OPEN_VIRTUAL_DISK_FLAG        Flags,
    _In_opt_ POPEN_VIRTUAL_DISK_PARAMETERS Parameters,
    _Out_    PHANDLE                       Handle
    );

//
// CreateVirtualDisk
//

//
// This value causes the implementation defaults to be used for block size:
//
// Fixed VHDs: 0 is the only valid value since block size is N/A.
// Dynamic VHDs: The default block size will be used (2 MB, subject to change).
// Differencing VHDs: 0 causes the parent VHD's block size to be used.
//
#define CREATE_VIRTUAL_DISK_PARAMETERS_DEFAULT_BLOCK_SIZE 0

// Default logical sector size is 512B
#define CREATE_VIRTUAL_DISK_PARAMETERS_DEFAULT_SECTOR_SIZE 0

// Version definitions
typedef enum _CREATE_VIRTUAL_DISK_VERSION
{
    CREATE_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
    CREATE_VIRTUAL_DISK_VERSION_1           = 1,
    CREATE_VIRTUAL_DISK_VERSION_2           = 2,

} CREATE_VIRTUAL_DISK_VERSION;


// Versioned CreateVirtualDisk parameter structure
typedef struct _CREATE_VIRTUAL_DISK_PARAMETERS
{
    CREATE_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            GUID                  UniqueId;
            ULONGLONG             MaximumSize;
            ULONG                 BlockSizeInBytes;
            ULONG                 SectorSizeInBytes;
            PCWSTR                ParentPath;
            PCWSTR                SourcePath;
        } Version1;

        struct
        {
            GUID                   UniqueId;
            ULONGLONG              MaximumSize;
            ULONG                  BlockSizeInBytes;
            ULONG                  SectorSizeInBytes;
            ULONG                  PhysicalSectorSizeInBytes;
            PCWSTR                 ParentPath;
            PCWSTR                 SourcePath;
            OPEN_VIRTUAL_DISK_FLAG OpenFlags;
            VIRTUAL_STORAGE_TYPE   ParentVirtualStorageType;
            VIRTUAL_STORAGE_TYPE   SourceVirtualStorageType;
            GUID                   ResiliencyGuid;
        } Version2;
    };
} CREATE_VIRTUAL_DISK_PARAMETERS, *PCREATE_VIRTUAL_DISK_PARAMETERS;


// Flags for CreateVirtualDisk
typedef enum _CREATE_VIRTUAL_DISK_FLAG
{
    CREATE_VIRTUAL_DISK_FLAG_NONE                          = 0x0,

    // Pre-allocate all physical space necessary for the virtual
    // size of the disk (e.g. a fixed VHD).
    CREATE_VIRTUAL_DISK_FLAG_FULL_PHYSICAL_ALLOCATION      = 0x1,

    // Take ownership of the source disk during create from source disk, to
    // insure the source disk does not change during the create operation.  The
    // source disk must also already be offline or read-only (or both).
    // Ownership is released when create is done.  This also has a side-effect
    // of disallowing concurrent create from same source disk.  Create will fail
    // if ownership cannot be obtained or if the source disk is not already
    // offline or read-only.  This flag is optional, but highly recommended for
    // creates from source disk.  No effect for other types of create (no effect
    // for create from source VHD; no effect for create without SourcePath).
    CREATE_VIRTUAL_DISK_FLAG_PREVENT_WRITES_TO_SOURCE_DISK = 0x2,

    // Do not copy initial virtual disk metadata or block states from the
    // parent VHD; this is useful if the parent VHD is a stand-in file and the
    // real parent will be explicitly set later.
    CREATE_VIRTUAL_DISK_FLAG_DO_NOT_COPY_METADATA_FROM_PARENT = 0x4,

} CREATE_VIRTUAL_DISK_FLAG;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(CREATE_VIRTUAL_DISK_FLAG);
#endif


DWORD
WINAPI
CreateVirtualDisk(
    _In_      PVIRTUAL_STORAGE_TYPE           VirtualStorageType,
    _In_      PCWSTR                          Path,
    _In_      VIRTUAL_DISK_ACCESS_MASK        VirtualDiskAccessMask,
    _In_opt_  PSECURITY_DESCRIPTOR            SecurityDescriptor,
    _In_      CREATE_VIRTUAL_DISK_FLAG        Flags,
    _In_      ULONG                           ProviderSpecificFlags,
    _In_      PCREATE_VIRTUAL_DISK_PARAMETERS Parameters,
    _In_opt_  LPOVERLAPPED                    Overlapped,
    _Out_     PHANDLE                         Handle
    );



//
// AttachVirtualDisk
//

// Version definitions
typedef enum _ATTACH_VIRTUAL_DISK_VERSION
{
    ATTACH_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
    ATTACH_VIRTUAL_DISK_VERSION_1           = 1,

} ATTACH_VIRTUAL_DISK_VERSION;

// Versioned parameter structure for AttachVirtualDisk
typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS
{
    ATTACH_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            ULONG Reserved;
        } Version1;
    };
} ATTACH_VIRTUAL_DISK_PARAMETERS, *PATTACH_VIRTUAL_DISK_PARAMETERS;

#endif // VIRTDISK_DEFINE_FLAGS

// Flags for AttachVirtualDisk
typedef enum _ATTACH_VIRTUAL_DISK_FLAG
{
    ATTACH_VIRTUAL_DISK_FLAG_NONE                = 0x00000000,

    // Attach the disk as read only
    ATTACH_VIRTUAL_DISK_FLAG_READ_ONLY           = 0x00000001,

    // Will cause all volumes on the disk to be mounted
    // without drive letters.
    //
    ATTACH_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER     = 0x00000002,

    // Will decouple the disk lifetime from that of the VirtualDiskHandle.
    // The disk will be attached until an explicit call is made to
    // DetachVirtualDisk, even if all handles are closed.
    ATTACH_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME  = 0x00000004,

    // Indicates that the drive will not be attached to
    // the local system (but rather to a VM).
    ATTACH_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST       = 0x00000008,

} ATTACH_VIRTUAL_DISK_FLAG;

#if !defined(VIRTDISK_DEFINE_FLAGS)

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(ATTACH_VIRTUAL_DISK_FLAG);
#endif

DWORD
WINAPI
AttachVirtualDisk(
    _In_     HANDLE                             VirtualDiskHandle,
    _In_opt_ PSECURITY_DESCRIPTOR               SecurityDescriptor,
    _In_     ATTACH_VIRTUAL_DISK_FLAG           Flags,
    _In_     ULONG                              ProviderSpecificFlags,
    _In_opt_ PATTACH_VIRTUAL_DISK_PARAMETERS    Parameters,
    _In_opt_ LPOVERLAPPED                       Overlapped
    );



//
// DetachVirtualDisk
//

#endif // VIRTDISK_DEFINE_FLAGS

// Flags for DetachVirtualDisk
typedef enum _DETACH_VIRTUAL_DISK_FLAG
{
    DETACH_VIRTUAL_DISK_FLAG_NONE                = 0x00000000,

} DETACH_VIRTUAL_DISK_FLAG;

#if !defined(VIRTDISK_DEFINE_FLAGS)

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(DETACH_VIRTUAL_DISK_FLAG);
#endif

DWORD
WINAPI
DetachVirtualDisk(
    _In_     HANDLE                   VirtualDiskHandle,
    _In_     DETACH_VIRTUAL_DISK_FLAG Flags,
    _In_     ULONG                    ProviderSpecificFlags
    );



//
// GetVirtualDiskPhysicalPath
//

DWORD
WINAPI
GetVirtualDiskPhysicalPath(
    _In_                                     HANDLE VirtualDiskHandle,
    _Inout_                                  PULONG DiskPathSizeInBytes,
    _Out_writes_bytes_(*DiskPathSizeInBytes) PWSTR  DiskPath
    );

#endif // VIRTDISK_DEFINE_FLAGS

//
// GetStorageDependencyInformation
//

// Flags for dependent disks
typedef enum _DEPENDENT_DISK_FLAG
{
    DEPENDENT_DISK_FLAG_NONE                 = 0x00000000,

    //
    // Multiple files backing the virtual storage device
    //
    DEPENDENT_DISK_FLAG_MULT_BACKING_FILES   = 0x00000001,

    DEPENDENT_DISK_FLAG_FULLY_ALLOCATED      = 0x00000002,

    DEPENDENT_DISK_FLAG_READ_ONLY            = 0x00000004,

    //
    //Backing file of the virtual storage device is not local to the machine
    //
    DEPENDENT_DISK_FLAG_REMOTE               = 0x00000008,

    //
    // Volume is the system volume
    //
    DEPENDENT_DISK_FLAG_SYSTEM_VOLUME        = 0x00000010,

    //
    // Volume backing the virtual storage device file is the system volume
    //
    DEPENDENT_DISK_FLAG_SYSTEM_VOLUME_PARENT = 0x00000020,

    DEPENDENT_DISK_FLAG_REMOVABLE            = 0x00000040,

    //
    // Drive letters are not assigned to the volumes
    // on the virtual disk automatically.
    //
    DEPENDENT_DISK_FLAG_NO_DRIVE_LETTER      = 0x00000080,

    DEPENDENT_DISK_FLAG_PARENT               = 0x00000100,

    //
    // Virtual disk is not attached on the local host
    // (instead attached on a guest VM for instance)
    //
    DEPENDENT_DISK_FLAG_NO_HOST_DISK         = 0x00000200,

    //
    // Indicates the lifetime of the disk is not tied
    // to any system handles
    //
    DEPENDENT_DISK_FLAG_PERMANENT_LIFETIME   = 0x00000400,

} DEPENDENT_DISK_FLAG;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(DEPENDENT_DISK_FLAG);
#endif

#if !defined(VIRTDISK_DEFINE_FLAGS)

// Version definitions
typedef enum _STORAGE_DEPENDENCY_INFO_VERSION
{
    STORAGE_DEPENDENCY_INFO_VERSION_UNSPECIFIED = 0,
    STORAGE_DEPENDENCY_INFO_VERSION_1           = 1,
    STORAGE_DEPENDENCY_INFO_VERSION_2           = 2,

} STORAGE_DEPENDENCY_INFO_VERSION;


// Parameter structure for GetStorageDependencyInformation
typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_1
{
    DEPENDENT_DISK_FLAG   DependencyTypeFlags;
    ULONG                 ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE  VirtualStorageType;
} STORAGE_DEPENDENCY_INFO_TYPE_1, *PSTORAGE_DEPENDENCY_INFO_TYPE_1;


// Parameter structure for GetStorageDependencyInformation
typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_2
{
    DEPENDENT_DISK_FLAG  DependencyTypeFlags;
    ULONG                ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG                AncestorLevel;
    PWSTR                DependencyDeviceName;
    PWSTR                HostVolumeName;
    PWSTR                DependentVolumeName;
    PWSTR                DependentVolumeRelativePath;
} STORAGE_DEPENDENCY_INFO_TYPE_2, *PSTORAGE_DEPENDENCY_INFO_TYPE_2;


// Parameter structure for GetStorageDependencyInformation
typedef struct _STORAGE_DEPENDENCY_INFO
{
    STORAGE_DEPENDENCY_INFO_VERSION Version;
    ULONG NumberEntries;
    union
    {
        STORAGE_DEPENDENCY_INFO_TYPE_1 Version1Entries[];
        STORAGE_DEPENDENCY_INFO_TYPE_2 Version2Entries[];
    };
} STORAGE_DEPENDENCY_INFO, *PSTORAGE_DEPENDENCY_INFO;

#endif // VIRTDISK_DEFINE_FLAGS

// Flags for GetStorageDependencyInformation
typedef enum _GET_STORAGE_DEPENDENCY_FLAG
{
    GET_STORAGE_DEPENDENCY_FLAG_NONE         = 0x00000000,

    // Return information for volumes or disks hosting the volume specified
    // If not set, returns info about volumes or disks being hosted by
    // the volume or disk specified
    GET_STORAGE_DEPENDENCY_FLAG_HOST_VOLUMES = 0x00000001,

    //  The handle provided is to a disk, not volume or file
    GET_STORAGE_DEPENDENCY_FLAG_DISK_HANDLE  = 0x00000002,

} GET_STORAGE_DEPENDENCY_FLAG;

#define GET_STORAGE_DEPENDENCY_FLAG_PARENTS GET_STORAGE_DEPENDENCY_FLAG_HOST_VOLUMES

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(GET_STORAGE_DEPENDENCY_FLAG);
#endif

#if !defined(VIRTDISK_DEFINE_FLAGS)

DWORD
WINAPI
GetStorageDependencyInformation(
    _In_        HANDLE                      ObjectHandle,
    _In_        GET_STORAGE_DEPENDENCY_FLAG Flags,
    _In_        ULONG                       StorageDependencyInfoSize,
    _Inout_     PSTORAGE_DEPENDENCY_INFO    StorageDependencyInfo,
    _Inout_opt_ PULONG                      SizeUsed
    );



//
// GetVirtualDiskInformation
//

// Version definitions
typedef enum _GET_VIRTUAL_DISK_INFO_VERSION
{
    GET_VIRTUAL_DISK_INFO_UNSPECIFIED                   = 0,
    GET_VIRTUAL_DISK_INFO_SIZE                          = 1,
    GET_VIRTUAL_DISK_INFO_IDENTIFIER                    = 2,
    GET_VIRTUAL_DISK_INFO_PARENT_LOCATION               = 3,
    GET_VIRTUAL_DISK_INFO_PARENT_IDENTIFIER             = 4,
    GET_VIRTUAL_DISK_INFO_PARENT_TIMESTAMP              = 5,
    GET_VIRTUAL_DISK_INFO_VIRTUAL_STORAGE_TYPE          = 6,
    GET_VIRTUAL_DISK_INFO_PROVIDER_SUBTYPE              = 7,
    GET_VIRTUAL_DISK_INFO_IS_4K_ALIGNED                 = 8,
    GET_VIRTUAL_DISK_INFO_PHYSICAL_DISK                 = 9,
    GET_VIRTUAL_DISK_INFO_VHD_PHYSICAL_SECTOR_SIZE      = 10,
    GET_VIRTUAL_DISK_INFO_SMALLEST_SAFE_VIRTUAL_SIZE    = 11,
    GET_VIRTUAL_DISK_INFO_FRAGMENTATION                 = 12,

} GET_VIRTUAL_DISK_INFO_VERSION;


// Versioned parameter structure for GetVirtualDiskInformation
typedef struct _GET_VIRTUAL_DISK_INFO
{
    GET_VIRTUAL_DISK_INFO_VERSION Version;

    union
    {
        struct
        {
            ULONGLONG VirtualSize;
            ULONGLONG PhysicalSize;
            ULONG     BlockSize;
            ULONG     SectorSize;
        } Size;

        GUID Identifier;

        struct
        {
            BOOL  ParentResolved;
            WCHAR ParentLocationBuffer[1];  // MultiSz string
        } ParentLocation;

        GUID ParentIdentifier;

        ULONG ParentTimestamp;

        VIRTUAL_STORAGE_TYPE VirtualStorageType;

        ULONG ProviderSubtype;

        BOOL Is4kAligned;

        struct
        {
            ULONG LogicalSectorSize;
            ULONG PhysicalSectorSize;
            BOOL IsRemote;
        } PhysicalDisk;

        ULONG VhdPhysicalSectorSize;

        ULONGLONG SmallestSafeVirtualSize;

        // GET_VIRTUAL_DISK_INFO_FRAGMENTATION
        ULONG FragmentationPercentage;
    };
} GET_VIRTUAL_DISK_INFO, *PGET_VIRTUAL_DISK_INFO;


_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetVirtualDiskInformation(
    _In_                                    HANDLE                 VirtualDiskHandle,
    _Inout_                                 PULONG                 VirtualDiskInfoSize,
    _Inout_updates_bytes_to_(*VirtualDiskInfoSize, *VirtualDiskInfoSize) PGET_VIRTUAL_DISK_INFO VirtualDiskInfo,
    _Out_opt_                               PULONG                 SizeUsed
    );



//
// SetVirtualDiskInformation
//

// Version definitions
typedef enum _SET_VIRTUAL_DISK_INFO_VERSION
{
    SET_VIRTUAL_DISK_INFO_UNSPECIFIED            = 0,
    SET_VIRTUAL_DISK_INFO_PARENT_PATH            = 1,
    SET_VIRTUAL_DISK_INFO_IDENTIFIER             = 2,
    SET_VIRTUAL_DISK_INFO_PARENT_PATH_WITH_DEPTH = 3,
    SET_VIRTUAL_DISK_INFO_PHYSICAL_SECTOR_SIZE   = 4,

} SET_VIRTUAL_DISK_INFO_VERSION;


// Versioned parameter structure for SetVirtualDiskInformation
typedef struct _SET_VIRTUAL_DISK_INFO
{
    SET_VIRTUAL_DISK_INFO_VERSION Version;

    union
    {
        PCWSTR ParentFilePath;

        GUID UniqueIdentifier;

        struct
        {
            ULONG  ChildDepth;
            PCWSTR ParentFilePath;
        } ParentPathWithDepthInfo;

        ULONG VhdPhysicalSectorSize;
    };
} SET_VIRTUAL_DISK_INFO, *PSET_VIRTUAL_DISK_INFO;


DWORD
WINAPI
SetVirtualDiskInformation(
    _In_ HANDLE                 VirtualDiskHandle,
    _In_ PSET_VIRTUAL_DISK_INFO VirtualDiskInfo
    );


#if (NTDDI_VERSION >= NTDDI_WIN8)

DWORD
WINAPI
EnumerateVirtualDiskMetadata(
    _In_ HANDLE VirtualDiskHandle,
    _Inout_ PULONG NumberOfItems,
    _Out_writes_(*NumberOfItems) GUID* Items
    );


DWORD
WINAPI
GetVirtualDiskMetadata(
    _In_ HANDLE VirtualDiskHandle,
    _In_ const GUID *Item,
    _Inout_ PULONG MetaDataSize,
    _Out_writes_bytes_(*MetaDataSize) PVOID MetaData
    );


DWORD
WINAPI
SetVirtualDiskMetadata(
    _In_ HANDLE VirtualDiskHandle,
    _In_ const GUID *Item,
    _In_ ULONG MetaDataSize,
    _In_reads_bytes_(MetaDataSize) const void *MetaData
    );


DWORD
WINAPI
DeleteVirtualDiskMetadata(
    _In_ HANDLE VirtualDiskHandle,
    _In_ const GUID *Item
    );

#endif // NTDDI_VERSION >= NTDDI_WIN8


//
// GetVirtualDiskOperationProgress
//

typedef struct _VIRTUAL_DISK_PROGRESS
{
    DWORD      OperationStatus;
    ULONGLONG  CurrentValue;
    ULONGLONG  CompletionValue;
} VIRTUAL_DISK_PROGRESS, *PVIRTUAL_DISK_PROGRESS;


DWORD WINAPI
GetVirtualDiskOperationProgress(
    _In_      HANDLE                 VirtualDiskHandle,
    _In_      LPOVERLAPPED           Overlapped,
    _Out_     PVIRTUAL_DISK_PROGRESS Progress
    );



//
// CompactVirtualDisk
//

// Version definitions
typedef enum _COMPACT_VIRTUAL_DISK_VERSION
{
    COMPACT_VIRTUAL_DISK_VERSION_UNSPECIFIED    = 0,
    COMPACT_VIRTUAL_DISK_VERSION_1              = 1,

} COMPACT_VIRTUAL_DISK_VERSION;


// Versioned structure for CompactVirtualDisk
typedef struct _COMPACT_VIRTUAL_DISK_PARAMETERS
{
    COMPACT_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            ULONG Reserved;
        } Version1;
    };
} COMPACT_VIRTUAL_DISK_PARAMETERS, *PCOMPACT_VIRTUAL_DISK_PARAMETERS;


// Flags for CompactVirtualDisk
typedef enum _COMPACT_VIRTUAL_DISK_FLAG
{
    COMPACT_VIRTUAL_DISK_FLAG_NONE                 = 0x00000000,
    COMPACT_VIRTUAL_DISK_FLAG_NO_ZERO_SCAN         = 0x00000001,
    COMPACT_VIRTUAL_DISK_FLAG_NO_BLOCK_MOVES       = 0x00000002,

} COMPACT_VIRTUAL_DISK_FLAG;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(COMPACT_VIRTUAL_DISK_FLAG);
#endif

DWORD
WINAPI
CompactVirtualDisk(
    _In_     HANDLE                           VirtualDiskHandle,
    _In_     COMPACT_VIRTUAL_DISK_FLAG        Flags,
    _In_opt_ PCOMPACT_VIRTUAL_DISK_PARAMETERS Parameters,
    _In_opt_ LPOVERLAPPED                     Overlapped
    );



//
// MergeVirtualDisk
//

// Version definitions
typedef enum _MERGE_VIRTUAL_DISK_VERSION
{
    MERGE_VIRTUAL_DISK_VERSION_UNSPECIFIED    = 0,
    MERGE_VIRTUAL_DISK_VERSION_1              = 1,
    MERGE_VIRTUAL_DISK_VERSION_2              = 2,

} MERGE_VIRTUAL_DISK_VERSION;



// Versioned parameter structure for MergeVirtualDisk
#define MERGE_VIRTUAL_DISK_DEFAULT_MERGE_DEPTH 1

typedef struct _MERGE_VIRTUAL_DISK_PARAMETERS
{
    MERGE_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            ULONG MergeDepth;
        } Version1;
        struct
        {
            ULONG MergeSourceDepth;
            ULONG MergeTargetDepth;
        } Version2;
    };
} MERGE_VIRTUAL_DISK_PARAMETERS, *PMERGE_VIRTUAL_DISK_PARAMETERS;


// Flags for MergeVirtualDisk
typedef enum _MERGE_VIRTUAL_DISK_FLAG
{
    MERGE_VIRTUAL_DISK_FLAG_NONE                 = 0x00000000,

} MERGE_VIRTUAL_DISK_FLAG;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(MERGE_VIRTUAL_DISK_FLAG);
#endif

DWORD
WINAPI
MergeVirtualDisk(
    _In_     HANDLE                         VirtualDiskHandle,
    _In_     MERGE_VIRTUAL_DISK_FLAG        Flags,
    _In_     PMERGE_VIRTUAL_DISK_PARAMETERS Parameters,
    _In_opt_ LPOVERLAPPED                   Overlapped
    );



//
// ExpandVirtualDisk
//

// Version definitions
typedef enum _EXPAND_VIRTUAL_DISK_VERSION
{
    EXPAND_VIRTUAL_DISK_VERSION_UNSPECIFIED    = 0,
    EXPAND_VIRTUAL_DISK_VERSION_1              = 1,

} EXPAND_VIRTUAL_DISK_VERSION;


// Versioned parameter structure for ExpandVirtualDisk
typedef struct _EXPAND_VIRTUAL_DISK_PARAMETERS
{
    EXPAND_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            ULONGLONG NewSize;
        } Version1;
    };
} EXPAND_VIRTUAL_DISK_PARAMETERS, *PEXPAND_VIRTUAL_DISK_PARAMETERS;


// Flags for ExpandVirtualDisk
typedef enum _EXPAND_VIRTUAL_DISK_FLAG
{
    EXPAND_VIRTUAL_DISK_FLAG_NONE                 = 0x00000000,

} EXPAND_VIRTUAL_DISK_FLAG;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(EXPAND_VIRTUAL_DISK_FLAG);
#endif

DWORD
WINAPI
ExpandVirtualDisk(
    _In_     HANDLE                          VirtualDiskHandle,
    _In_     EXPAND_VIRTUAL_DISK_FLAG        Flags,
    _In_     PEXPAND_VIRTUAL_DISK_PARAMETERS Parameters,
    _In_opt_ LPOVERLAPPED                    Overlapped
    );


//
// ResizeVirtualDisk
//

// Version definitions
typedef enum _RESIZE_VIRTUAL_DISK_VERSION
{
    RESIZE_VIRTUAL_DISK_VERSION_UNSPECIFIED    = 0,
    RESIZE_VIRTUAL_DISK_VERSION_1              = 1,

} RESIZE_VIRTUAL_DISK_VERSION;


// Versioned parameter structure for ResizeVirtualDisk
typedef struct _RESIZE_VIRTUAL_DISK_PARAMETERS
{
    RESIZE_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            ULONGLONG NewSize;
        } Version1;
    };
} RESIZE_VIRTUAL_DISK_PARAMETERS, *PRESIZE_VIRTUAL_DISK_PARAMETERS;


// Flags for ResizeVirtualDisk
typedef enum _RESIZE_VIRTUAL_DISK_FLAG
{
    RESIZE_VIRTUAL_DISK_FLAG_NONE                                 = 0x0,

    // If this flag is set, skip checking the virtual disk's partition table
    // to ensure that this truncation is safe. Setting this flag can cause
    // unrecoverable data loss; use with care.
    RESIZE_VIRTUAL_DISK_FLAG_ALLOW_UNSAFE_VIRTUAL_SIZE            = 0x1,

    // If this flag is set, resize the disk to the smallest virtual size
    // possible without truncating past any existing partitions. If this
    // is set, NewSize in RESIZE_VIRTUAL_DISK_PARAMETERS must be zero.
    RESIZE_VIRTUAL_DISK_FLAG_RESIZE_TO_SMALLEST_SAFE_VIRTUAL_SIZE = 0x2,

} RESIZE_VIRTUAL_DISK_FLAG;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(RESIZE_VIRTUAL_DISK_FLAG);
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)

DWORD
WINAPI
ResizeVirtualDisk(
    _In_     HANDLE                          VirtualDiskHandle,
    _In_     RESIZE_VIRTUAL_DISK_FLAG        Flags,
    _In_     PRESIZE_VIRTUAL_DISK_PARAMETERS Parameters,
    _In_opt_ LPOVERLAPPED                    Overlapped
    );

#endif // NTDDI_VERSION >= NTDDI_WIN8

//
// MirrorVirtualDisk
//

// Version definitions
typedef enum _MIRROR_VIRTUAL_DISK_VERSION
{
    MIRROR_VIRTUAL_DISK_VERSION_UNSPECIFIED    = 0,
    MIRROR_VIRTUAL_DISK_VERSION_1              = 1,

} MIRROR_VIRTUAL_DISK_VERSION;


// Versioned parameter structure for MirrorVirtualDisk
typedef struct _MIRROR_VIRTUAL_DISK_PARAMETERS
{
    MIRROR_VIRTUAL_DISK_VERSION Version;

    union
    {
        struct
        {
            PCWSTR MirrorVirtualDiskPath;
        } Version1;
    };
} MIRROR_VIRTUAL_DISK_PARAMETERS, *PMIRROR_VIRTUAL_DISK_PARAMETERS;


// Flags for MirrorVirtualDisk
typedef enum _MIRROR_VIRTUAL_DISK_FLAG
{
    MIRROR_VIRTUAL_DISK_FLAG_NONE                 = 0x00000000,
    MIRROR_VIRTUAL_DISK_FLAG_EXISTING_FILE        = 0x00000001,

} MIRROR_VIRTUAL_DISK_FLAG;

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(MIRROR_VIRTUAL_DISK_FLAG);
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)

DWORD
WINAPI
MirrorVirtualDisk(
    _In_     HANDLE                          VirtualDiskHandle,
    _In_     MIRROR_VIRTUAL_DISK_FLAG        Flags,
    _In_     PMIRROR_VIRTUAL_DISK_PARAMETERS Parameters,
    _In_     LPOVERLAPPED                    Overlapped
    );

#endif // NTDDI_VERSION >= NTDDI_WIN8


//
// BreakMirrorVirtualDisk
//

#if (NTDDI_VERSION >= NTDDI_WIN8)

DWORD
WINAPI
BreakMirrorVirtualDisk(
    _In_     	HANDLE				VirtualDiskHandle
    );

#endif // NTDDI_VERSION >= NTDDI_WIN8

//
// AddVirtualDiskParent
//

#if (NTDDI_VERSION >= NTDDI_WIN8)

DWORD
WINAPI
AddVirtualDiskParent(
    _In_ HANDLE VirtualDiskHandle,
    _In_ PCWSTR ParentPath
    );

#endif // NTDDI_VERSION >= NTDDI_WIN8

#endif // VIRTDISK_DEFINE_FLAGS

//
//  The Surface and Unsurface API names are deprecated.  Use Attach/Detach versions
//  instead.  If you use any of these defines below your code will break post Win7.
//

#define SurfaceVirtualDisk                           AttachVirtualDisk
#define UnsurfaceVirtualDisk                         DetachVirtualDisk
#define VIRTUAL_DISK_ACCESS_SURFACE_RO               VIRTUAL_DISK_ACCESS_ATTACH_RO
#define VIRTUAL_DISK_ACCESS_SURFACE_RW               VIRTUAL_DISK_ACCESS_ATTACH_RW
#define VIRTUAL_DISK_ACCESS_UNSURFACE                VIRTUAL_DISK_ACCESS_DETACH
#define SURFACE_VIRTUAL_DISK_VERSION_UNSPECIFIED     ATTACH_VIRTUAL_DISK_VERSION_UNSPECIFIED
#define SURFACE_VIRTUAL_DISK_VERSION_1               ATTACH_VIRTUAL_DISK_VERSION_1
#define SURFACE_VIRTUAL_DISK_VERSION                 ATTACH_VIRTUAL_DISK_VERSION
#define _SURFACE_VIRTUAL_DISK_VERSION                _ATTACH_VIRTUAL_DISK_VERSION
#define SURFACE_VIRTUAL_DISK_PARAMETERS              ATTACH_VIRTUAL_DISK_PARAMETERS
#define PSURFACE_VIRTUAL_DISK_PARAMETERS             PATTACH_VIRTUAL_DISK_PARAMETERS
#define _SURFACE_VIRTUAL_DISK_PARAMETERS             _ATTACH_VIRTUAL_DISK_PARAMETERS

#if !defined(__midl)

#define _SURFACE_VIRTUAL_DISK_FLAG                   _ATTACH_VIRTUAL_DISK_FLAG
#define SURFACE_VIRTUAL_DISK_FLAG_NONE               ATTACH_VIRTUAL_DISK_FLAG_NONE
#define SURFACE_VIRTUAL_DISK_FLAG_READ_ONLY          ATTACH_VIRTUAL_DISK_FLAG_READ_ONLY
#define SURFACE_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER    ATTACH_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER
#define SURFACE_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME ATTACH_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME
#define SURFACE_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST      ATTACH_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST
#define SURFACE_VIRTUAL_DISK_FLAG                    ATTACH_VIRTUAL_DISK_FLAG
#define _UNSURFACE_VIRTUAL_DISK_FLAG                 _DETACH_VIRTUAL_DISK_FLAG
#define UNSURFACE_VIRTUAL_DISK_FLAG_NONE             DETACH_VIRTUAL_DISK_FLAG_NONE
#define UNSURFACE_VIRTUAL_DISK_FLAG                  DETACH_VIRTUAL_DISK_FLAG

#else

typedef enum _SURFACE_VIRTUAL_DISK_FLAG
{
    SURFACE_VIRTUAL_DISK_FLAG_NONE                = 0x00000000,
    SURFACE_VIRTUAL_DISK_FLAG_READ_ONLY           = 0x00000001,
    SURFACE_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER     = 0x00000002,
    SURFACE_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME  = 0x00000004,
    SURFACE_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST       = 0x00000008,
} SURFACE_VIRTUAL_DISK_FLAG;

typedef enum _UNSURFACE_VIRTUAL_DISK_FLAG
{
    UNSURFACE_VIRTUAL_DISK_FLAG_NONE                = 0x00000000,
} UNSURFACE_VIRTUAL_DISK_FLAG;

#if !defined(VIRTDISK_DEFINE_FLAGS)

#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(SURFACE_VIRTUAL_DISK_FLAG);
#endif
#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(UNSURFACE_VIRTUAL_DISK_FLAG);
#endif
#endif

#endif

//  End deprecated APIs

#ifdef __cplusplus
}
#endif

#pragma warning(pop)

#endif // WIN32_WINNT_WIN7

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // VIRT_DISK_API_DEF

// VirtDisk.h EOF


