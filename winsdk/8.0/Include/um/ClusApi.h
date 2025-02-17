
/*++

Copyright (c) 1996 Microsoft Corporation.  All rights reserved.

Module Name:

    clusapi.h

Abstract:

    This module defines the common management and application interface to
    the Microsoft Cluster Server services.

Revision History:

--*/

#ifndef _CLUSTER_API_
#define _CLUSTER_API_


#if _MSC_VER > 1000
#pragma once
#endif
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#define CLUSAPI_VERSION_SERVER2008   0x00000600
#define CLUSAPI_VERSION_SERVER2008R2 0x00000700
#define CLUSAPI_VERSION_WINDOWS8     0x00000701

#if (!defined(CLUSAPI_VERSION))
#if (!defined(NTDDI_VERSION) || (NTDDI_VERSION >= NTDDI_WIN8))
#define CLUSAPI_VERSION CLUSAPI_VERSION_WINDOWS8
#elif (NTDDI_VERSION >= NTDDI_WIN7)
#define CLUSAPI_VERSION CLUSAPI_VERSION_SERVER2008R2
#else
#define CLUSAPI_VERSION CLUSAPI_VERSION_SERVER2008
#endif
#endif // !defined(CLUSAPI_VERSION)

#define CREATE_CLUSTER_VERSION CLUSAPI_VERSION_SERVER2008
#define CREATE_CLUSTER_MAJOR_VERSION_MASK 0xFFFFFF00

#ifdef __cplusplus
extern "C" {
#endif

#if ( !MIDL_PASS && !__midl )
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable : 4200 ) // nonstandard extension used : zero-sized array in struct/union
#pragma warning( disable : 4201 ) // nonstandard extension used : nameless struct/union
#endif // MIDL_PASS

//
// General cluster definitions
//

#ifndef _CLUSTER_API_TYPES_
//
// Defined cluster handle types.
//
typedef struct _HCLUSTER *HCLUSTER;
typedef struct _HNODE *HNODE;
typedef struct _HRESOURCE *HRESOURCE;
typedef struct _HGROUP *HGROUP;
typedef struct _HNETWORK *HNETWORK;
typedef struct _HNETINTERFACE *HNETINTERFACE;
typedef struct _HCHANGE *HCHANGE;
typedef struct _HCLUSENUM *HCLUSENUM;
typedef struct _HGROUPENUM *HGROUPENUM;
typedef struct _HRESENUM *HRESENUM;
typedef struct _HNETWORKENUM *HNETWORKENUM;
typedef struct _HNODEENUM *HNODEENUM;
typedef struct _HRESTYPEENUM *HRESTYPEENUM;
typedef struct _HREGBATCH *HREGBATCH;
typedef struct _HREGBATCHPORT *HREGBATCHPORT;
typedef struct _HREGBATCHNOTIFICATION *HREGBATCHNOTIFICATION;
typedef struct _HREGREADBATCH *HREGREADBATCH;
typedef struct _HREGREADBATCHREPLY *HREGREADBATCHREPLY;

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
typedef struct _HNODEENUMEX *HNODEENUMEX;
typedef struct _HCLUSENUMEX *HCLUSENUMEX;
#endif

#if(CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)
typedef struct _HGROUPENUMEX *HGROUPENUMEX;
typedef struct _HRESENUMEX *HRESENUMEX;
#endif

#endif // _CLUSTER_API_TYPES_

//
// Definitions used in cluster management routines.
//

#define MAX_CLUSTERNAME_LENGTH      DNS_MAX_LABEL_LENGTH

#ifndef _CLUSTER_API_TYPES_
//
// Cluster-related structures and types
//
typedef enum CLUSTER_QUORUM_TYPE {
    OperationalQuorum,
    ModifyQuorum
} CLUSTER_QUORUM_TYPE;

#if ( !MIDL_PASS && !__midl )

typedef struct CLUSTERVERSIONINFO_NT4 {
    DWORD dwVersionInfoSize;
    WORD  MajorVersion;
    WORD  MinorVersion;
    WORD  BuildNumber;
    WCHAR szVendorId[64];
    WCHAR szCSDVersion[64];
}CLUSTERVERSIONINFO_NT4, *PCLUSTERVERSIONINFO_NT4;

typedef struct CLUSTERVERSIONINFO {
    DWORD dwVersionInfoSize;
    WORD  MajorVersion;
    WORD  MinorVersion;
    WORD  BuildNumber;
    WCHAR szVendorId[64];
    WCHAR szCSDVersion[64];
    DWORD dwClusterHighestVersion;
    DWORD dwClusterLowestVersion;
    DWORD dwFlags;
    DWORD dwReserved;
} CLUSTERVERSIONINFO, *LPCLUSTERVERSIONINFO, *PCLUSTERVERSIONINFO;


typedef struct CLUS_STARTING_PARAMS {
    DWORD   dwSize;
    BOOL    bForm;
    BOOL    bFirst;
} CLUS_STARTING_PARAMS, * PCLUS_STARTING_PARAMS;


#define CLUSTER_VERSION_FLAG_MIXED_MODE     0x00000001

#define CLUSTER_VERSION_UNKNOWN         0xFFFFFFFF

// these defines represent cluster numbers, not windows OS numbers
#define NT4_MAJOR_VERSION           1
#define NT4SP4_MAJOR_VERSION        2
#define NT5_MAJOR_VERSION           3
#define NT51_MAJOR_VERSION          4
#define NT6_MAJOR_VERSION           5
#define NT7_MAJOR_VERSION           6
#define NT8_MAJOR_VERSION           7

//
// Version number macros
//

#define CLUSTER_MAKE_VERSION( _maj, _min ) ((( _maj ) << 16 ) | ( _min ))
#define CLUSTER_GET_MAJOR_VERSION( _ver ) (( _ver ) >> 16 )
#define CLUSTER_GET_MINOR_VERSION( _ver ) (( _ver ) & 0xFFFF )

#endif // MIDL_PASS

//
// Interfaces for the cluster state on a node
//
#define CLUSTER_INSTALLED   0x00000001
#define CLUSTER_CONFIGURED  0x00000002
#define CLUSTER_RUNNING     0x00000010

typedef enum NODE_CLUSTER_STATE {
    ClusterStateNotInstalled                = 0x00000000,
    ClusterStateNotConfigured               = CLUSTER_INSTALLED,
    ClusterStateNotRunning                  = CLUSTER_INSTALLED | CLUSTER_CONFIGURED,
    ClusterStateRunning                     = CLUSTER_INSTALLED | CLUSTER_CONFIGURED | CLUSTER_RUNNING
} NODE_CLUSTER_STATE;

// Quorum mode flags for SetClusterQuorumResource API

#define CLUS_HYBRID_QUORUM          1024                // 0xFFFFFFFF
#define CLUS_NODE_MAJORITY_QUORUM   0                   // 0xFFFFFFFE
#define CLUS_LEGACY_QUORUM          (4 * 1024 * 1024)   // 0xFFFFFFFD

//
//  Resource state change reason related types and defines
//
#define CLUSCTL_RESOURCE_STATE_CHANGE_REASON_VERSION_1  1

typedef enum CLUSTER_RESOURCE_STATE_CHANGE_REASON {
    eResourceStateChangeReasonUnknown,
    eResourceStateChangeReasonMove,
    eResourceStateChangeReasonFailover,
    eResourceStateChangeReasonFailedMove,
    eResourceStateChangeReasonShutdown,
    eResourceStateChangeReasonRundown
} CLUSTER_RESOURCE_STATE_CHANGE_REASON;

typedef enum _CLUSTER_REG_COMMAND
{
    CLUSREG_COMMAND_NONE = 0,

    CLUSREG_SET_VALUE = 1,
    CLUSREG_CREATE_KEY,
    CLUSREG_DELETE_KEY,
    CLUSREG_DELETE_VALUE,
    CLUSREG_SET_KEY_SECURITY,
    CLUSREG_VALUE_DELETED,

    // Commands for read batch
    CLUSREG_READ_KEY,
    CLUSREG_READ_VALUE,
    CLUSREG_READ_ERROR,

    CLUSREG_LAST_COMMAND

} CLUSTER_REG_COMMAND;


#if ( !MIDL_PASS && !__midl )

typedef struct _CLUSCTL_RESOURCE_STATE_CHANGE_REASON_STRUCT {
    DWORD                                   dwSize;
    DWORD                                   dwVersion;
    CLUSTER_RESOURCE_STATE_CHANGE_REASON    eReason;
} CLUSCTL_RESOURCE_STATE_CHANGE_REASON_STRUCT, *PCLUSCTL_RESOURCE_STATE_CHANGE_REASON_STRUCT;

typedef struct _CLUSTER_BATCH_COMMAND
{
    CLUSTER_REG_COMMAND Command;
    DWORD               dwOptions;
    LPCWSTR             wzName;
    BYTE CONST *        lpData;
    DWORD               cbData;
} CLUSTER_BATCH_COMMAND;

typedef struct _CLUSTER_READ_BATCH_COMMAND
{
    CLUSTER_REG_COMMAND Command;
    DWORD               dwOptions;
    LPCWSTR             wzSubkeyName;
    LPCWSTR             wzValueName;
    BYTE CONST *        lpData;
    DWORD               cbData;
} CLUSTER_READ_BATCH_COMMAND;

#endif // MIDL_PASS

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2

#define CLUSTER_ENUM_ITEM_VERSION_1 0x00000001
#define CLUSTER_ENUM_ITEM_VERSION   CLUSTER_ENUM_ITEM_VERSION_1

typedef struct _CLUSTER_ENUM_ITEM {
    DWORD dwVersion;
    DWORD dwType;
    DWORD cbId;
    LPWSTR lpszId;
    DWORD cbName;
    LPWSTR lpszName;
} CLUSTER_ENUM_ITEM, *PCLUSTER_ENUM_ITEM;

#endif // CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2

typedef enum {
    ClusGroupTypeCoreCluster        = 1,
    ClusGroupTypeAvailableStorage   = 2,
    ClusGroupTypeTemporary          = 3,
    ClusGroupTypeSharedVolume       = 4,
    ClusGroupTypeStoragePool        = 5,
    ClusGroupTypeFileServer         = 100,
    ClusGroupTypePrintServer        = 101,
    ClusGroupTypeDhcpServer         = 102,
    ClusGroupTypeDtc                = 103,
    ClusGroupTypeMsmq               = 104,
    ClusGroupTypeWins               = 105,
    ClusGroupTypeStandAloneDfs      = 106,
    ClusGroupTypeGenericApplication = 107,
    ClusGroupTypeGenericService     = 108,
    ClusGroupTypeGenericScript      = 109,
    ClusGroupTypeIScsiNameService   = 110,
    ClusGroupTypeVirtualMachine     = 111,
    ClusGroupTypeTsSessionBroker    = 112,
    ClusGroupTypeIScsiTarget        = 113,
    ClusGroupTypeScaleoutFileServer = 114,
    ClusGroupTypeVMReplicaBroker    = 115,
    ClusGroupTypeTaskScheduler      = 116,
    ClusGroupTypeClusterUpdateAgent = 117,
    ClusGroupTypeUnknown            = 9999
} CLUSGROUP_TYPE, *PCLUSGROUP_TYPE;

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

#define CLUSTER_CREATE_GROUP_INFO_VERSION_1 0x00000001
#define CLUSTER_CREATE_GROUP_INFO_VERSION   CLUSTER_CREATE_GROUP_INFO_VERSION_1

typedef struct _CLUSTER_CREATE_GROUP_INFO {
    DWORD   dwVersion;
    CLUSGROUP_TYPE  groupType;
}CLUSTER_CREATE_GROUP_INFO, *PCLUSTER_CREATE_GROUP_INFO;
#endif

#endif // _CLUSTER_API_TYPES_


//
// Interfaces for managing clusters
//

//
// Cluster API Specific Access Rights
//
#define CLUSAPI_READ_ACCESS     0x00000001L
#define CLUSAPI_CHANGE_ACCESS   0x00000002L
#define CLUSAPI_NO_ACCESS       0x00000004L
#define CLUSAPI_ALL_ACCESS (CLUSAPI_READ_ACCESS | CLUSAPI_CHANGE_ACCESS)

//
// Return values for CLUSCTL_CLUSTER_CHECK_VOTER_DOWN and CLUSCTL_CLUSTER_CHECK_VOTER_EVICT
//
typedef enum CLUSTER_QUORUM_VALUE {
    CLUSTER_QUORUM_MAINTAINED = 0,
    CLUSTER_QUORUM_LOST = 1,
} CLUSTER_QUORUM_VALUE;

#if ( !MIDL_PASS && !__midl )

//
// Structure used to pass in the path to validate
//
typedef struct _CLUSTER_VALIDATE_PATH {
    WCHAR          szPath[];
} CLUSTER_VALIDATE_PATH, *PCLUSTER_VALIDATE_PATH;

//
// Structure used to pass in the directory to validate
//
typedef struct _CLUSTER_VALIDATE_DIRECTORY {
    WCHAR          szPath[];
} CLUSTER_VALIDATE_DIRECTORY, *PCLUSTER_VALIDATE_DIRECTORY;

//
// Structure used to pass in the network name to validate
//
typedef struct _CLUSTER_VALIDATE_NETNAME {
    WCHAR          szNetworkName[];
} CLUSTER_VALIDATE_NETNAME , *PCLUSTER_VALIDATE_NETNAME ;

//
// Structure used to pass in the file name to validate
//
typedef struct _CLUSTER_VALIDATE_CSV_FILENAME {
    WCHAR          szFileName[];
} CLUSTER_VALIDATE_CSV_FILENAME , *PCLUSTER_VALIDATE_CSV_FILENAME ;

//
// Structure used to return the status of a request to set the
// password on the account used by the Cluster Service on each
// cluster node.
//
typedef struct CLUSTER_SET_PASSWORD_STATUS {
    DWORD    NodeId;
    BOOLEAN  SetAttempted;
    DWORD    ReturnStatus;
} CLUSTER_SET_PASSWORD_STATUS, *PCLUSTER_SET_PASSWORD_STATUS;

#ifndef _CLUSTER_API_TYPES_
typedef struct _CLUSTER_IP_ENTRY
{
    PCWSTR          lpszIpAddress;
    DWORD           dwPrefixLength;
} CLUSTER_IP_ENTRY, *PCLUSTER_IP_ENTRY;

typedef struct _CREATE_CLUSTER_CONFIG
{
    DWORD             dwVersion;
    PCWSTR            lpszClusterName;
    DWORD             cNodes;
    PCWSTR *          ppszNodeNames;
    DWORD             cIpEntries;
    PCLUSTER_IP_ENTRY pIpEntries;
    BOOLEAN           fEmptyCluster;
} CREATE_CLUSTER_CONFIG, *PCREATE_CLUSTER_CONFIG;
#endif // _CLUSTER_API_TYPES_

DWORD
WINAPI
GetNodeClusterState(
    _In_opt_    LPCWSTR lpszNodeName,
    _Out_       LPDWORD pdwClusterState
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_NODE_CLUSTER_STATE)(
    _In_opt_    LPCWSTR lpszNodeName,
    _Out_       LPDWORD pdwClusterState
    );

HCLUSTER
WINAPI
OpenCluster(
    _In_opt_ LPCWSTR lpszClusterName
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_OPEN_CLUSTER)(
    _In_opt_ LPCWSTR lpszClusterName
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
HCLUSTER
WINAPI
OpenClusterEx(
    _In_opt_ LPCWSTR lpszClusterName,
    _In_ DWORD DesiredAccess,
    _Out_opt_ DWORD* GrantedAccess
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_OPEN_CLUSTER_EX)(
    _In_opt_  LPCWSTR lpszClusterName,
    _In_      DWORD   dwDesiredAccess,
    _Out_opt_ LPDWORD lpdwGrantedAccess
    );
#endif

BOOL
WINAPI
CloseCluster(
    _In_ HCLUSTER hCluster
    );

typedef BOOL
(WINAPI * PCLUSAPI_CLOSE_CLUSTER)(
    _In_ HCLUSTER hCluster
    );

DWORD
WINAPI
SetClusterName(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNewClusterName
    );

typedef DWORD
(WINAPI * PCLUSAPI_SetClusterName)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNewClusterName
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterInformation(
    _In_ HCLUSTER hCluster,
    _Out_writes_to_(*lpcchClusterName, *lpcchClusterName + 1) LPWSTR lpszClusterName,
    _Inout_ LPDWORD lpcchClusterName,
    _Out_opt_ LPCLUSTERVERSIONINFO lpClusterInfo
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_INFORMATION)(
    _In_ HCLUSTER hCluster,
    _Out_writes_to_(*lpcchClusterName, *lpcchClusterName + 1) LPWSTR lpszClusterName,
    _Inout_ LPDWORD lpcchClusterName,
    _Out_opt_ LPCLUSTERVERSIONINFO lpClusterInfo
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterQuorumResource(
    _In_ HCLUSTER hCluster,
    _Out_writes_to_(*lpcchResourceName, *lpcchResourceName + 1) LPWSTR lpszResourceName,
    _Inout_ LPDWORD lpcchResourceName,
    _Out_writes_to_(*lpcchDeviceName, *lpcchDeviceName + 1) LPWSTR lpszDeviceName,
    _Inout_ LPDWORD lpcchDeviceName,
    _Out_ LPDWORD lpdwMaxQuorumLogSize
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_QUORUM_RESOURCE)(
    _In_ HCLUSTER hCluster,
    _Out_writes_to_(*lpcchResourceName, *lpcchResourceName + 1) LPWSTR lpszResourceName,
    _Inout_ LPDWORD lpcchResourceName,
    _Out_writes_to_(*lpcchDeviceName, *lpcchDeviceName + 1) LPWSTR lpszDeviceName,
    _Inout_ LPDWORD lpcchDeviceName,
    _Out_ LPDWORD lpdwMaxQuorumLogSize
    );

DWORD
WINAPI
SetClusterQuorumResource(
    _In_     HRESOURCE hResource,
    _In_opt_ LPCWSTR   lpszDeviceName,
    _In_     DWORD     dwMaxQuoLogSize
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_QUORUM_RESOURCE)(
    _In_     HRESOURCE hResource,
    _In_opt_ LPCWSTR   lpszDeviceName,
    _In_     DWORD     dwMaxQuoLogSize
    );

DWORD
WINAPI
BackupClusterDatabase(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR  lpszPathName
    );

typedef DWORD
(WINAPI * PCLUSAPI_BACKUP_CLUSTER_DATABASE)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR  lpszPathName
    );

DWORD
WINAPI
RestoreClusterDatabase(
    _In_ LPCWSTR  lpszPathName,
    _In_ BOOL     bForce,
    _In_opt_ LPCWSTR  lpszQuorumDriveLetter
    );

typedef DWORD
(WINAPI * PCLUSAPI_RESTORE_CLUSTER_DATABASE)(
    _In_ LPCWSTR  lpszPathName,
    _In_ BOOL     bForce,
    _In_opt_ LPCWSTR  lpszQuorumDriveLetter
    );

DWORD
WINAPI
SetClusterNetworkPriorityOrder(
    _In_ HCLUSTER hCluster,
    _In_ DWORD NetworkCount,
    _In_reads_( NetworkCount ) HNETWORK NetworkList[]
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_NETWORK_PRIORITY_ORDER)(
    _In_ HCLUSTER hCluster,
    _In_ DWORD NetworkCount,
    _In_reads_( NetworkCount ) HNETWORK NetworkList[]
    );

DWORD
WINAPI
SetClusterServiceAccountPassword(
    _In_ LPCWSTR lpszClusterName,
    _In_ LPCWSTR lpszNewPassword,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*lpcbReturnStatusBufferSize, *lpcbReturnStatusBufferSize) PCLUSTER_SET_PASSWORD_STATUS lpReturnStatusBuffer,
    _Inout_ LPDWORD lpcbReturnStatusBufferSize
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_SERVICE_ACCOUNT_PASSWORD)(
    _In_ LPCWSTR lpszClusterName,
    _In_ LPCWSTR lpszNewPassword,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*lpcbReturnStatusBufferSize, *lpcbReturnStatusBufferSize) PCLUSTER_SET_PASSWORD_STATUS lpReturnStatusBuffer,
    _Inout_ LPDWORD lpcbReturnStatusBufferSize
    );

DWORD
WINAPI
ClusterControl(
    _In_ HCLUSTER hCluster,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_CONTROL)(
    _In_ HCLUSTER hCluster,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

#endif // MIDL_PASS

//
// Cluster Event Notification API
//

#ifndef _CLUSTER_API_TYPES_
//
// Cluster notification enums original
//
typedef enum CLUSTER_CHANGE {
    CLUSTER_CHANGE_NODE_STATE               = 0x00000001,
    CLUSTER_CHANGE_NODE_DELETED             = 0x00000002,
    CLUSTER_CHANGE_NODE_ADDED               = 0x00000004,
    CLUSTER_CHANGE_NODE_PROPERTY            = 0x00000008,

    CLUSTER_CHANGE_REGISTRY_NAME            = 0x00000010,
    CLUSTER_CHANGE_REGISTRY_ATTRIBUTES      = 0x00000020,
    CLUSTER_CHANGE_REGISTRY_VALUE           = 0x00000040,
    CLUSTER_CHANGE_REGISTRY_SUBTREE         = 0x00000080,

    CLUSTER_CHANGE_RESOURCE_STATE           = 0x00000100,
    CLUSTER_CHANGE_RESOURCE_DELETED         = 0x00000200,
    CLUSTER_CHANGE_RESOURCE_ADDED           = 0x00000400,
    CLUSTER_CHANGE_RESOURCE_PROPERTY        = 0x00000800,

    CLUSTER_CHANGE_GROUP_STATE              = 0x00001000,
    CLUSTER_CHANGE_GROUP_DELETED            = 0x00002000,
    CLUSTER_CHANGE_GROUP_ADDED              = 0x00004000,
    CLUSTER_CHANGE_GROUP_PROPERTY           = 0x00008000,

    CLUSTER_CHANGE_RESOURCE_TYPE_DELETED    = 0x00010000,
    CLUSTER_CHANGE_RESOURCE_TYPE_ADDED      = 0x00020000,
    CLUSTER_CHANGE_RESOURCE_TYPE_PROPERTY   = 0x00040000,

    CLUSTER_CHANGE_CLUSTER_RECONNECT        = 0x00080000,

    CLUSTER_CHANGE_NETWORK_STATE            = 0x00100000,
    CLUSTER_CHANGE_NETWORK_DELETED          = 0x00200000,
    CLUSTER_CHANGE_NETWORK_ADDED            = 0x00400000,
    CLUSTER_CHANGE_NETWORK_PROPERTY         = 0x00800000,

    CLUSTER_CHANGE_NETINTERFACE_STATE       = 0x01000000,
    CLUSTER_CHANGE_NETINTERFACE_DELETED     = 0x02000000,
    CLUSTER_CHANGE_NETINTERFACE_ADDED       = 0x04000000,
    CLUSTER_CHANGE_NETINTERFACE_PROPERTY    = 0x08000000,

    CLUSTER_CHANGE_QUORUM_STATE             = 0x10000000,
    CLUSTER_CHANGE_CLUSTER_STATE            = 0x20000000,
    CLUSTER_CHANGE_CLUSTER_PROPERTY         = 0x40000000,


    CLUSTER_CHANGE_HANDLE_CLOSE             = 0x80000000,

    CLUSTER_CHANGE_ALL                      = (CLUSTER_CHANGE_NODE_STATE                |
                                               CLUSTER_CHANGE_NODE_DELETED              |
                                               CLUSTER_CHANGE_NODE_ADDED                |
                                               CLUSTER_CHANGE_NODE_PROPERTY             |
                                               CLUSTER_CHANGE_REGISTRY_NAME             |
                                               CLUSTER_CHANGE_REGISTRY_ATTRIBUTES       |
                                               CLUSTER_CHANGE_REGISTRY_VALUE            |
                                               CLUSTER_CHANGE_REGISTRY_SUBTREE          |
                                               CLUSTER_CHANGE_RESOURCE_STATE            |
                                               CLUSTER_CHANGE_RESOURCE_DELETED          |
                                               CLUSTER_CHANGE_RESOURCE_ADDED            |
                                               CLUSTER_CHANGE_RESOURCE_PROPERTY         |
                                               CLUSTER_CHANGE_GROUP_STATE               |
                                               CLUSTER_CHANGE_GROUP_DELETED             |
                                               CLUSTER_CHANGE_GROUP_ADDED               |
                                               CLUSTER_CHANGE_GROUP_PROPERTY            |
                                               CLUSTER_CHANGE_RESOURCE_TYPE_DELETED     |
                                               CLUSTER_CHANGE_RESOURCE_TYPE_ADDED       |
                                               CLUSTER_CHANGE_RESOURCE_TYPE_PROPERTY    |
                                               CLUSTER_CHANGE_NETWORK_STATE             |
                                               CLUSTER_CHANGE_NETWORK_DELETED           |
                                               CLUSTER_CHANGE_NETWORK_ADDED             |
                                               CLUSTER_CHANGE_NETWORK_PROPERTY          |
                                               CLUSTER_CHANGE_NETINTERFACE_STATE        |
                                               CLUSTER_CHANGE_NETINTERFACE_DELETED      |
                                               CLUSTER_CHANGE_NETINTERFACE_ADDED        |
                                               CLUSTER_CHANGE_NETINTERFACE_PROPERTY     |
                                               CLUSTER_CHANGE_QUORUM_STATE              |
                                               CLUSTER_CHANGE_CLUSTER_STATE             |
                                               CLUSTER_CHANGE_CLUSTER_PROPERTY          |
                                               CLUSTER_CHANGE_CLUSTER_RECONNECT         |
                                               CLUSTER_CHANGE_HANDLE_CLOSE)

} CLUSTER_CHANGE;

#if ( CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 )
//
// Cluster notification enums V2
//
typedef enum CLUSTER_NOTIFICATIONS_VERSION {
    CLUSTER_NOTIFICATIONS_V1    =    0x00000001,
    CLUSTER_NOTIFICATIONS_V2    =    0x00000002
} CLUSTER_NOTIFICATIONS_VERSION;

typedef enum CLUSTER_CHANGE_CLUSTER_V2 {
    CLUSTER_CHANGE_CLUSTER_RECONNECT_V2             =    0x00000001,
    CLUSTER_CHANGE_CLUSTER_STATE_V2                 =    0x00000002,
    CLUSTER_CHANGE_CLUSTER_GROUP_ADDED_V2           =    0x00000004,
    CLUSTER_CHANGE_CLUSTER_HANDLE_CLOSE_V2          =    0x00000008,
    CLUSTER_CHANGE_CLUSTER_NETWORK_ADDED_V2         =    0x00000010,
    CLUSTER_CHANGE_CLUSTER_NODE_ADDED_V2            =    0x00000020,
    CLUSTER_CHANGE_CLUSTER_RESOURCE_TYPE_ADDED_V2   =    0x00000040,
    CLUSTER_CHANGE_CLUSTER_COMMON_PROPERTY_V2       =    0x00000080,
    CLUSTER_CHANGE_CLUSTER_PRIVATE_PROPERTY_V2      =    0x00000100,
    CLUSTER_CHANGE_CLUSTER_LOST_NOTIFICATIONS_V2    =    0x00000200,
    CLUSTER_CHANGE_CLUSTER_RENAME_V2                =    0x00000400,
    CLUSTER_CHANGE_CLUSTER_MEMBERSHIP_V2            =    0x00000800,
    CLUSTER_CHANGE_CLUSTER_ALL_V2                   =    (CLUSTER_CHANGE_CLUSTER_RECONNECT_V2             |
                                                          CLUSTER_CHANGE_CLUSTER_STATE_V2                 |
                                                          CLUSTER_CHANGE_CLUSTER_GROUP_ADDED_V2           |
                                                          CLUSTER_CHANGE_CLUSTER_HANDLE_CLOSE_V2          |
                                                          CLUSTER_CHANGE_CLUSTER_NETWORK_ADDED_V2         |
                                                          CLUSTER_CHANGE_CLUSTER_NODE_ADDED_V2            |
                                                          CLUSTER_CHANGE_CLUSTER_RESOURCE_TYPE_ADDED_V2   |
                                                          CLUSTER_CHANGE_CLUSTER_COMMON_PROPERTY_V2       |
                                                          CLUSTER_CHANGE_CLUSTER_PRIVATE_PROPERTY_V2      |
                                                          CLUSTER_CHANGE_CLUSTER_LOST_NOTIFICATIONS_V2    |
                                                          CLUSTER_CHANGE_CLUSTER_RENAME_V2                |
                                                          CLUSTER_CHANGE_CLUSTER_MEMBERSHIP_V2)
} CLUSTER_CHANGE_CLUSTER_V2;

typedef enum CLUSTER_CHANGE_GROUP_V2 {
    CLUSTER_CHANGE_GROUP_DELETED_V2            =    0x00000001,
    CLUSTER_CHANGE_GROUP_COMMON_PROPERTY_V2    =    0x00000002,
    CLUSTER_CHANGE_GROUP_PRIVATE_PROPERTY_V2   =    0x00000004,
    CLUSTER_CHANGE_GROUP_STATE_V2              =    0x00000008,
    CLUSTER_CHANGE_GROUP_OWNER_NODE_V2         =    0x00000010,
    CLUSTER_CHANGE_GROUP_PREFERRED_OWNERS_V2   =    0x00000020,
    CLUSTER_CHANGE_GROUP_RESOURCE_ADDED_V2     =    0x00000040,
    CLUSTER_CHANGE_GROUP_RESOURCE_GAINED_V2    =    0x00000080,
    CLUSTER_CHANGE_GROUP_RESOURCE_LOST_V2      =    0x00000100,
    CLUSTER_CHANGE_GROUP_HANDLE_CLOSE_V2       =    0x00000200,
    CLUSTER_CHANGE_GROUP_ALL_V2                =    (CLUSTER_CHANGE_GROUP_DELETED_V2            |
                                                     CLUSTER_CHANGE_GROUP_COMMON_PROPERTY_V2    |
                                                     CLUSTER_CHANGE_GROUP_PRIVATE_PROPERTY_V2   |
                                                     CLUSTER_CHANGE_GROUP_STATE_V2              |
                                                     CLUSTER_CHANGE_GROUP_OWNER_NODE_V2         |
                                                     CLUSTER_CHANGE_GROUP_PREFERRED_OWNERS_V2   |
                                                     CLUSTER_CHANGE_GROUP_RESOURCE_ADDED_V2     |
                                                     CLUSTER_CHANGE_GROUP_RESOURCE_GAINED_V2    |
                                                     CLUSTER_CHANGE_GROUP_RESOURCE_LOST_V2      |
                                                     CLUSTER_CHANGE_GROUP_HANDLE_CLOSE_V2)
} CLUSTER_CHANGE_GROUP_V2;

typedef enum CLUSTER_CHANGE_RESOURCE_V2 {
    CLUSTER_CHANGE_RESOURCE_COMMON_PROPERTY_V2    =    0x00000001,
    CLUSTER_CHANGE_RESOURCE_PRIVATE_PROPERTY_V2   =    0x00000002,
    CLUSTER_CHANGE_RESOURCE_STATE_V2              =    0x00000004,
    CLUSTER_CHANGE_RESOURCE_OWNER_GROUP_V2        =    0x00000008,
    CLUSTER_CHANGE_RESOURCE_DEPENDENCIES_V2       =    0x00000010,
    CLUSTER_CHANGE_RESOURCE_DEPENDENTS_V2         =    0x00000020,
    CLUSTER_CHANGE_RESOURCE_POSSIBLE_OWNERS_V2    =    0x00000040,
    CLUSTER_CHANGE_RESOURCE_DELETED_V2            =    0x00000080,
    CLUSTER_CHANGE_RESOURCE_DLL_UPGRADED_V2       =    0x00000100,
    CLUSTER_CHANGE_RESOURCE_HANDLE_CLOSE_V2       =    0x00000200,
    CLUSTER_CHANGE_RESOURCE_TERMINAL_STATE_V2     =    0X00000400,
    CLUSTER_CHANGE_RESOURCE_ALL_V2                =    (CLUSTER_CHANGE_RESOURCE_COMMON_PROPERTY_V2    |
                                                        CLUSTER_CHANGE_RESOURCE_PRIVATE_PROPERTY_V2   |
                                                        CLUSTER_CHANGE_RESOURCE_STATE_V2              |
                                                        CLUSTER_CHANGE_RESOURCE_OWNER_GROUP_V2        |
                                                        CLUSTER_CHANGE_RESOURCE_DEPENDENCIES_V2       |
                                                        CLUSTER_CHANGE_RESOURCE_DEPENDENTS_V2         |
                                                        CLUSTER_CHANGE_RESOURCE_POSSIBLE_OWNERS_V2    |
                                                        CLUSTER_CHANGE_RESOURCE_DELETED_V2            |
                                                        CLUSTER_CHANGE_RESOURCE_DLL_UPGRADED_V2       |
                                                        CLUSTER_CHANGE_RESOURCE_HANDLE_CLOSE_V2       |
                                                        CLUSTER_CHANGE_RESOURCE_TERMINAL_STATE_V2 )
} CLUSTER_CHANGE_RESOURCE_V2;

typedef enum CLUSTER_CHANGE_RESOURCE_TYPE_V2 {
    CLUSTER_CHANGE_RESOURCE_TYPE_DELETED_V2            =    0x00000001,
    CLUSTER_CHANGE_RESOURCE_TYPE_COMMON_PROPERTY_V2    =    0x00000002,
    CLUSTER_CHANGE_RESOURCE_TYPE_PRIVATE_PROPERTY_V2   =    0x00000004,
    CLUSTER_CHANGE_RESOURCE_TYPE_POSSIBLE_OWNERS_V2    =    0x00000008,
    CLUSTER_CHANGE_RESOURCE_TYPE_DLL_UPGRADED_V2       =    0x00000010,
    CLUSTER_CHANGE_RESOURCE_TYPE_ALL_V2                =    (CLUSTER_CHANGE_RESOURCE_TYPE_DELETED_V2            |
                                                             CLUSTER_CHANGE_RESOURCE_TYPE_COMMON_PROPERTY_V2    |
                                                             CLUSTER_CHANGE_RESOURCE_TYPE_PRIVATE_PROPERTY_V2   |
                                                             CLUSTER_CHANGE_RESOURCE_TYPE_POSSIBLE_OWNERS_V2    |
                                                             CLUSTER_CHANGE_RESOURCE_TYPE_DLL_UPGRADED_V2)
} CLUSTER_CHANGE_RESOURCE_TYPE_V2;

typedef enum CLUSTER_CHANGE_NETINTERFACE_V2 {
    CLUSTER_CHANGE_NETINTERFACE_DELETED_V2            =    0x00000001,
    CLUSTER_CHANGE_NETINTERFACE_COMMON_PROPERTY_V2    =    0x00000002,
    CLUSTER_CHANGE_NETINTERFACE_PRIVATE_PROPERTY_V2   =    0x00000004,
    CLUSTER_CHANGE_NETINTERFACE_STATE_V2              =    0x00000008,
    CLUSTER_CHANGE_NETINTERFACE_HANDLE_CLOSE_V2       =    0x00000010,
    CLUSTER_CHANGE_NETINTERFACE_ALL_V2                =    (CLUSTER_CHANGE_NETINTERFACE_DELETED_V2            |
                                                            CLUSTER_CHANGE_NETINTERFACE_COMMON_PROPERTY_V2    |
                                                            CLUSTER_CHANGE_NETINTERFACE_PRIVATE_PROPERTY_V2   |
                                                            CLUSTER_CHANGE_NETINTERFACE_STATE_V2              |
                                                            CLUSTER_CHANGE_NETINTERFACE_HANDLE_CLOSE_V2)
} CLUSTER_CHANGE_NETINTERFACE_V2;

typedef enum CLUSTER_CHANGE_NETWORK_V2 {
    CLUSTER_CHANGE_NETWORK_DELETED_V2            =    0x00000001,
    CLUSTER_CHANGE_NETWORK_COMMON_PROPERTY_V2    =    0x00000002,
    CLUSTER_CHANGE_NETWORK_PRIVATE_PROPERTY_V2   =    0x00000004,
    CLUSTER_CHANGE_NETWORK_STATE_V2              =    0x00000008,
    CLUSTER_CHANGE_NETWORK_HANDLE_CLOSE_V2       =    0x00000010,
    CLUSTER_CHANGE_NETWORK_ALL_V2                =    (CLUSTER_CHANGE_NETWORK_DELETED_V2            |
                                                       CLUSTER_CHANGE_NETWORK_COMMON_PROPERTY_V2    |
                                                       CLUSTER_CHANGE_NETWORK_PRIVATE_PROPERTY_V2   |
                                                       CLUSTER_CHANGE_NETWORK_STATE_V2              |
                                                       CLUSTER_CHANGE_NETWORK_HANDLE_CLOSE_V2)
} CLUSTER_CHANGE_NETWORK_V2;

typedef enum CLUSTER_CHANGE_NODE_V2 {
    CLUSTER_CHANGE_NODE_NETINTERFACE_ADDED_V2   =    0x00000001,
    CLUSTER_CHANGE_NODE_DELETED_V2              =    0x00000002,
    CLUSTER_CHANGE_NODE_COMMON_PROPERTY_V2      =    0x00000004,
    CLUSTER_CHANGE_NODE_PRIVATE_PROPERTY_V2     =    0x00000008,
    CLUSTER_CHANGE_NODE_STATE_V2                =    0x00000010,
    CLUSTER_CHANGE_NODE_GROUP_GAINED_V2         =    0x00000020,
    CLUSTER_CHANGE_NODE_GROUP_LOST_V2           =    0x00000040,
    CLUSTER_CHANGE_NODE_HANDLE_CLOSE_V2         =    0x00000080,
    CLUSTER_CHANGE_NODE_ALL_V2                  =    (CLUSTER_CHANGE_NODE_NETINTERFACE_ADDED_V2   |
                                                      CLUSTER_CHANGE_NODE_DELETED_V2              |
                                                      CLUSTER_CHANGE_NODE_COMMON_PROPERTY_V2      |
                                                      CLUSTER_CHANGE_NODE_PRIVATE_PROPERTY_V2     |
                                                      CLUSTER_CHANGE_NODE_STATE_V2                |
                                                      CLUSTER_CHANGE_NODE_GROUP_GAINED_V2         |
                                                      CLUSTER_CHANGE_NODE_GROUP_LOST_V2           |
                                                      CLUSTER_CHANGE_NODE_HANDLE_CLOSE_V2)
} CLUSTER_CHANGE_NODE_V2;

typedef enum CLUSTER_CHANGE_REGISTRY_V2 {
    CLUSTER_CHANGE_REGISTRY_ATTRIBUTES_V2   =    0x00000001,
    CLUSTER_CHANGE_REGISTRY_NAME_V2         =    0x00000002,
    CLUSTER_CHANGE_REGISTRY_SUBTREE_V2      =    0x00000004,
    CLUSTER_CHANGE_REGISTRY_VALUE_V2        =    0x00000008,
    CLUSTER_CHANGE_REGISTRY_HANDLE_CLOSE_V2 =    0x00000010,
    CLUSTER_CHANGE_REGISTRY_ALL_V2          =    (CLUSTER_CHANGE_REGISTRY_ATTRIBUTES_V2   |
                                                  CLUSTER_CHANGE_REGISTRY_NAME_V2         |
                                                  CLUSTER_CHANGE_REGISTRY_SUBTREE_V2      |
                                                  CLUSTER_CHANGE_REGISTRY_VALUE_V2        |
                                                  CLUSTER_CHANGE_REGISTRY_HANDLE_CLOSE_V2)
} CLUSTER_CHANGE_REGISTRY_V2;

typedef enum CLUSTER_CHANGE_QUORUM_V2 {
    CLUSTER_CHANGE_QUORUM_STATE_V2   =    0x00000001,
    CLUSTER_CHANGE_QUORUM_ALL_V2     =    (CLUSTER_CHANGE_QUORUM_STATE_V2)
} CLUSTER_CHANGE_QUORUM_V2;

typedef enum CLUSTER_CHANGE_SHARED_VOLUME_V2 {
    CLUSTER_CHANGE_SHARED_VOLUME_STATE_V2   = 0x00000001,
    CLUSTER_CHANGE_SHARED_VOLUME_ADDED_V2   = 0x00000002,
    CLUSTER_CHANGE_SHARED_VOLUME_REMOVED_V2 = 0x00000004,
    CLUSTER_CHANGE_SHARED_VOLUME_ALL_V2     = (CLUSTER_CHANGE_SHARED_VOLUME_STATE_V2   |
                                               CLUSTER_CHANGE_SHARED_VOLUME_ADDED_V2   |
                                               CLUSTER_CHANGE_SHARED_VOLUME_REMOVED_V2)
} CLUSTER_CHANGE_SHARED_VOLUME_V2;

typedef enum CLUSTER_OBJECT_TYPE {
    CLUSTER_OBJECT_TYPE_NONE                =    0x00000000,
    CLUSTER_OBJECT_TYPE_CLUSTER             =    0x00000001,
    CLUSTER_OBJECT_TYPE_GROUP               =    0x00000002,
    CLUSTER_OBJECT_TYPE_RESOURCE            =    0x00000003,
    CLUSTER_OBJECT_TYPE_RESOURCE_TYPE       =    0x00000004,
    CLUSTER_OBJECT_TYPE_NETWORK_INTERFACE   =    0x00000005,
    CLUSTER_OBJECT_TYPE_NETWORK             =    0x00000006,
    CLUSTER_OBJECT_TYPE_NODE                =    0x00000007,
    CLUSTER_OBJECT_TYPE_REGISTRY            =    0x00000008,
    CLUSTER_OBJECT_TYPE_QUORUM              =    0x00000009,
    CLUSTER_OBJECT_TYPE_SHARED_VOLUME       =    0x0000000a,
} CLUSTER_OBJECT_TYPE;

//
// Cluster notification structs V2
//
typedef struct _NOTIFY_FILTER_AND_TYPE
{
    DWORD dwObjectType;     // Uses CLUSTER_OBJECT_TYPE, but used for RPC so left
                            // as DWORD
    LONGLONG FilterFlags;
} NOTIFY_FILTER_AND_TYPE, *PNOTIFY_FILTER_AND_TYPE;

// Membership info returned as an array of up nodes
typedef struct _CLUSTER_MEMBERSHIP_INFO {
    BOOL  HasQuorum;
    DWORD UpnodesSize;
    BYTE  Upnodes[1];
} CLUSTER_MEMBERSHIP_INFO, *PCLUSTER_MEMBERSHIP_INFO;

#endif // (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)

#endif // _CLUSTER_API_TYPES_

#if ( !MIDL_PASS && !__midl )
#if ( CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 )
//
// V2 Notifications DLL Functions
//
HCHANGE
WINAPI
CreateClusterNotifyPortV2(
    _In_  HCHANGE hChange,
    _In_  HCLUSTER hCluster,
    _In_  NOTIFY_FILTER_AND_TYPE * Filters,
    _In_  DWORD dwFilterCount,
    _In_  DWORD_PTR dwNotifyKey
);

typedef HCHANGE
(WINAPI * PCLUSAPI_CREATE_CLUSTER_NOTIFY_PORT_V2)(
    _In_  HCHANGE hChange,
    _In_  HCLUSTER hCluster,
    _In_  NOTIFY_FILTER_AND_TYPE * Filters,
    _In_  DWORD dwFilterCount,
    _In_  DWORD_PTR dwNotifyKey
    );

DWORD
WINAPI
RegisterClusterNotifyV2(
    _In_  HCHANGE hChange,
    _In_  NOTIFY_FILTER_AND_TYPE Filter,
    _In_  HANDLE hObject,
    _In_  DWORD_PTR dwNotifyKey
);

typedef DWORD
(WINAPI * PCLUSAPI_REGISTER_CLUSTER_NOTIFY_V2)(
    _In_  HCHANGE hChange,
    _In_  NOTIFY_FILTER_AND_TYPE Filter,
    _In_  HANDLE hObject,
    _In_  DWORD_PTR dwNotifyKey
    );

DWORD
WINAPI
GetNotifyEventHandle(
    _In_  HCHANGE  hChange,
    _Out_ LPHANDLE lphTargetEvent
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_NOTIFY_EVENT_HANDLE_V2)(
    _In_  HCHANGE  hChange,
    _Out_ LPHANDLE lphTargetEvent
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterNotifyV2(
    _In_                                                            HCHANGE hChange,
    _Out_                                                           DWORD_PTR* lpdwNotifyKey,
    _Inout_opt_                                                     PNOTIFY_FILTER_AND_TYPE pFilterAndType,
    _Inout_updates_bytes_opt_(*lpbBufferSize)                              BYTE* buffer,
    _Inout_opt_                                                     LPDWORD lpbBufferSize,
    _Inout_updates_to_opt_(*lpcchObjectId, *lpcchObjectId + 1 )    LPWSTR lpszObjectId,
    _Inout_opt_                                                     LPDWORD lpcchObjectId,
    _Inout_updates_to_opt_(*lpcchParentId, *lpcchParentId + 1 )    LPWSTR lpszParentId,
    _Inout_opt_                                                     LPDWORD lpcchParentId,
    _Inout_updates_to_opt_(*lpcchName, *lpcchName + 1 )            LPWSTR lpszName,
    _Inout_opt_                                                     LPDWORD lpcchName,
    _Inout_updates_to_opt_(*lpcchType, *lpcchType + 1 )            LPWSTR lpszType,
    _Inout_opt_                                                     LPDWORD lpcchType,
    _In_opt_                                                        DWORD dwMilliseconds
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_NOTIFY_V2)(
    _In_      HCHANGE hChange,
    _Out_     DWORD_PTR* lpdwNotifyKey,
    _Inout_opt_ PNOTIFY_FILTER_AND_TYPE pFilterAndType,
    _Inout_opt_ BYTE* buffer,
    _Inout_opt_ LPDWORD lpcchBufferSize,
    _Inout_opt_ LPWSTR lpszObjectId,
    _Inout_opt_ LPDWORD lpcchObjectId,
    _Inout_opt_ LPWSTR lpszParentId,
    _Inout_opt_ LPDWORD lpcchParentId,
    _Inout_opt_ LPWSTR lpszName,
    _Inout_opt_ LPDWORD lpcchName,
    _Inout_opt_ LPWSTR lpszType,
    _Inout_opt_ LPDWORD lpcchType,
    _In_opt_  DWORD dwMilliseconds
    );


#endif // (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)

//
// Begin original notification DLL function defs
//
HCHANGE
WINAPI
CreateClusterNotifyPort(
    _In_ HCHANGE hChange,
    _In_ HCLUSTER hCluster,
    _In_ DWORD dwFilter,
    _In_ DWORD_PTR dwNotifyKey
    );

typedef HCHANGE
(WINAPI * PCLUSAPI_CREATE_CLUSTER_NOTIFY_PORT)(
    _In_ HCHANGE hChange,
    _In_ HCLUSTER hCluster,
    _In_ DWORD dwFilter,
    _In_ DWORD_PTR dwNotifyKey
    );

DWORD
WINAPI
RegisterClusterNotify(
    _In_ HCHANGE hChange,
    _In_ DWORD dwFilterType,
    _In_ HANDLE hObject,
    _In_ DWORD_PTR dwNotifyKey
    );

typedef DWORD
(WINAPI * PCLUSAPI_REGISTER_CLUSTER_NOTIFY)(
    _In_ HCHANGE hChange,
    _In_ DWORD dwFilterType,
    _In_ HANDLE hObject,
    _In_ DWORD_PTR dwNotifyKey
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterNotify(
    _In_ HCHANGE hChange,
    _Out_ DWORD_PTR *lpdwNotifyKey,
    _Out_ LPDWORD lpdwFilterType,
    _Out_writes_(*lpcchName) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName,
    _In_ DWORD dwMilliseconds
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_NOTIFY)(
    _In_ HCHANGE hChange,
    _Out_ DWORD_PTR *lpdwNotifyKey,
    _Out_ LPDWORD lpdwFilterType,
    _Out_writes_to_opt_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName,
    _In_ DWORD dwMilliseconds
    );

BOOL
WINAPI
CloseClusterNotifyPort(
    _In_ HCHANGE hChange
    );

typedef BOOL
(WINAPI * PCLUSAPI_CLOSE_CLUSTER_NOTIFY_PORT)(
    _In_ HCHANGE hChange
    );

#endif // MIDL_PASS

//
// Enumeration routines
//

#ifndef _CLUSTER_API_TYPES_
//
// Define enumerable types
//
typedef enum CLUSTER_ENUM {
    CLUSTER_ENUM_NODE                   = 0x00000001,
    CLUSTER_ENUM_RESTYPE                = 0x00000002,
    CLUSTER_ENUM_RESOURCE               = 0x00000004,
    CLUSTER_ENUM_GROUP                  = 0x00000008,
    CLUSTER_ENUM_NETWORK                = 0x00000010,
    CLUSTER_ENUM_NETINTERFACE           = 0x00000020,
    CLUSTER_ENUM_SHARED_VOLUME_RESOURCE = 0x40000000,
    CLUSTER_ENUM_INTERNAL_NETWORK       = 0x80000000,

    CLUSTER_ENUM_ALL                = (CLUSTER_ENUM_NODE      |
                                       CLUSTER_ENUM_RESTYPE   |
                                       CLUSTER_ENUM_RESOURCE  |
                                       CLUSTER_ENUM_GROUP     |
                                       CLUSTER_ENUM_NETWORK   |
                                       CLUSTER_ENUM_NETINTERFACE)

} CLUSTER_ENUM;

#endif // _CLUSTER_API_TYPES_

#if ( !MIDL_PASS && !__midl )
HCLUSENUM
WINAPI
ClusterOpenEnum(
    _In_ HCLUSTER hCluster,
    _In_ DWORD dwType
    );

typedef HCLUSENUM
(WINAPI * PCLUSAPI_CLUSTER_OPEN_ENUM)(
    _In_ HCLUSTER hCluster,
    _In_ DWORD dwType
    );

DWORD
WINAPI
ClusterGetEnumCount(
    _In_ HCLUSENUM hEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GET_ENUM_COUNT)(
    _In_ HCLUSENUM hEnum
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterEnum(
    _In_ HCLUSENUM hEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_ENUM)(
    _In_ HCLUSENUM hEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

DWORD
WINAPI
ClusterCloseEnum(
    _In_ HCLUSENUM hEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_CLOSE_ENUM)(
    _In_ HCLUSENUM hEnum
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)

HCLUSENUMEX
WINAPI
ClusterOpenEnumEx(
    _In_ HCLUSTER hCluster,
    _In_ DWORD dwType,
    _In_opt_ PVOID pOptions
    );

typedef HCLUSENUMEX
(WINAPI * PCLUSAPI_CLUSTER_OPEN_ENUM_EX)(
        _In_ HCLUSTER hCluster,
        _In_ DWORD dwType,
        _In_opt_ PVOID pOptions
        );

DWORD
WINAPI
ClusterGetEnumCountEx(
    _In_ HCLUSENUMEX hClusterEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GET_ENUM_COUNT_EX)(
    _In_ HCLUSENUMEX hClusterEnum
    );

DWORD
WINAPI
ClusterEnumEx(
    _In_ HCLUSENUMEX hClusterEnum,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_ENUM_EX)(
    _In_ HCLUSENUMEX hClusterEnum,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

DWORD
WINAPI
ClusterCloseEnumEx(
    _In_ HCLUSENUMEX hClusterEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_CLOSE_ENUM_EX)(
    _In_ HCLUSENUMEX hClusterEnum
    );

#endif // CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2

#endif // MIDL_PASS


#ifndef _CLUSTER_API_TYPES_
//
// Define enumerable node types
//
#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)

typedef enum CLUSTER_NODE_ENUM {
    CLUSTER_NODE_ENUM_NETINTERFACES = 0x00000001,
    CLUSTER_NODE_ENUM_GROUPS        = 0x00000002,

    CLUSTER_NODE_ENUM_ALL           = (CLUSTER_NODE_ENUM_NETINTERFACES |
                                       CLUSTER_NODE_ENUM_GROUPS)
} CLUSTER_NODE_ENUM;

#else

typedef enum CLUSTER_NODE_ENUM {
    CLUSTER_NODE_ENUM_NETINTERFACES = 0x00000001,

    CLUSTER_NODE_ENUM_ALL           = (CLUSTER_NODE_ENUM_NETINTERFACES)

} CLUSTER_NODE_ENUM;

#endif

//
// Node-related structures and types.
//
typedef enum CLUSTER_NODE_STATE {
    ClusterNodeStateUnknown = -1,
    ClusterNodeUp,
    ClusterNodeDown,
    ClusterNodePaused,
    ClusterNodeJoining
} CLUSTER_NODE_STATE;


#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)

typedef enum CLUSTER_NODE_DRAIN_STATUS {
    NodeDrainStatusNotInitiated = 0,
    NodeDrainStatusInProgress,
    NodeDrainStatusCompleted,
    NodeDrainStatusFailed,
    ClusterNodeDrainStatusCount
} CLUSTER_NODE_DRAIN_STATUS;

#endif //CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

#endif // _CLUSTER_API_TYPES_

//
// Interfaces for managing the nodes of a cluster.
//

#if ( !MIDL_PASS && !__midl )
HNODE
WINAPI
OpenClusterNode(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNodeName
    );

typedef HNODE
(WINAPI * PCLUSAPI_OPEN_CLUSTER_NODE)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNodeName
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
HNODE
WINAPI
OpenClusterNodeEx(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszNodeName,
    _In_      DWORD dwDesiredAccess,
    _Out_opt_ DWORD* lpdwGrantedAccess
    );

typedef HNODE
(WINAPI * PCLUSAPI_OPEN_CLUSTER_NODE_EX)(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszNodeName,
    _In_      DWORD   dwDesiredAccess,
    _Out_opt_ LPDWORD lpdwGrantedAccess
    );
#endif

BOOL
WINAPI
CloseClusterNode(
    _In_ HNODE hNode
    );

typedef BOOL
(WINAPI * PCLUSAPI_CLOSE_CLUSTER_NODE)(
    _In_ HNODE hNode
    );

CLUSTER_NODE_STATE
WINAPI
GetClusterNodeState(
    _In_ HNODE hNode
    );

typedef CLUSTER_NODE_STATE
(WINAPI * PCLUSAPI_GET_CLUSTER_NODE_STATE)(
    _In_ HNODE hNode
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterNodeId(
    _In_opt_ HNODE hNode,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszNodeId,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_NODE_ID)(
    _In_opt_ HNODE hNode,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszNodeId,
    _Inout_ LPDWORD lpcchName
    );

#define GetCurrentClusterNodeId(_lpszNodeId_, _lpcchName_) \
    GetClusterNodeId(NULL, (_lpszNodeId_), (_lpcchName_))

HCLUSTER
WINAPI
GetClusterFromNode(
    _In_ HNODE hNode
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_GET_CLUSTER_FROM_NODE)(
    _In_ HNODE hNode
    );

DWORD
WINAPI
PauseClusterNode(
    _In_ HNODE hNode
    );

typedef DWORD
(WINAPI * PCLUSAPI_PAUSE_CLUSTER_NODE)(
    _In_ HNODE hNode
    );

DWORD
WINAPI
ResumeClusterNode(
    _In_ HNODE hNode
    );

typedef DWORD
(WINAPI * PCLUSAPI_RESUME_CLUSTER_NODE)(
    _In_ HNODE hNode
    );

DWORD
WINAPI
EvictClusterNode(
    _In_ HNODE hNode
    );

typedef DWORD
(WINAPI * PCLUSAPI_EVICT_CLUSTER_NODE)(
    _In_ HNODE hNode
    );

HNODEENUM
WINAPI
ClusterNodeOpenEnum(
    _In_ HNODE hNode,
    _In_ DWORD dwType
    );

typedef HNODEENUM
(WINAPI * PCLUSAPI_CLUSTER_NODE_OPEN_ENUM)(
    _In_ HNODE hNode,
    _In_ DWORD dwType
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)

HNODEENUMEX
WINAPI
ClusterNodeOpenEnumEx(
    _In_ HNODE hNode,
    _In_ DWORD dwType,
    _In_opt_ PVOID pOptions
    );

typedef HNODEENUMEX
(WINAPI * PCLUSAPI_CLUSTER_NODE_OPEN_ENUM_EX)(
        _In_ HNODE hNode,
        _In_ DWORD dwType,
        _In_opt_ PVOID pOptions
        );

DWORD
WINAPI
ClusterNodeGetEnumCountEx(
    _In_ HNODEENUMEX hNodeEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NODE_GET_ENUM_COUNT_EX)(
    _In_ HNODEENUMEX hNodeEnum
    );

DWORD
WINAPI
ClusterNodeEnumEx(
    _In_ HNODEENUMEX hNodeEnum,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NODE_ENUM_EX)(
    _In_ HNODEENUMEX hNodeEnum,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

DWORD
WINAPI
ClusterNodeCloseEnumEx(
    _In_ HNODEENUMEX hNodeEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NODE_CLOSE_ENUM_EX)(
    _In_ HNODEENUMEX hNodeEnum
    );

#endif

DWORD
WINAPI
ClusterNodeGetEnumCount(
    _In_ HNODEENUM hNodeEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NODE_GET_ENUM_COUNT)(
    _In_ HNODEENUM hNodeEnum
    );

DWORD
WINAPI
ClusterNodeCloseEnum(
    _In_ HNODEENUM hNodeEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NODE_CLOSE_ENUM)(
    _In_ HNODEENUM hNodeEnum
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterNodeEnum(
    _In_ HNODEENUM hNodeEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NODE_ENUM)(
    _In_ HNODEENUM hNodeEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

DWORD
WINAPI
EvictClusterNodeEx(
    _In_ HNODE hNode,
    _In_ DWORD dwTimeOut,
    _Out_ HRESULT * phrCleanupStatus
    );

typedef DWORD
(WINAPI * PCLUSAPI_EVICT_CLUSTER_NODE_EX)(
    _In_ HNODE hNode,
    _In_ DWORD dwTimeOut,
    _Out_ HRESULT * phrCleanupStatus
    );

#endif // MIDL_PASS


//
// Interfaces for managing the resource types in a cluster
//

#if ( !MIDL_PASS && !__midl )
HKEY
WINAPI
GetClusterResourceTypeKey(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszTypeName,
    _In_ REGSAM samDesired
    );

typedef HKEY
(WINAPI * PCLUSAPI_GET_CLUSTER_RESOURCE_TYPE_KEY)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszTypeName,
    _In_ REGSAM samDesired
    );

#endif // MIDL_PASS

#ifndef _CLUSTER_API_TYPES_
//
// Define enumerable group types
//
typedef enum CLUSTER_GROUP_ENUM {
    CLUSTER_GROUP_ENUM_CONTAINS     = 0x00000001,
    CLUSTER_GROUP_ENUM_NODES        = 0x00000002,

    CLUSTER_GROUP_ENUM_ALL          = (CLUSTER_GROUP_ENUM_CONTAINS |
                                       CLUSTER_GROUP_ENUM_NODES)
} CLUSTER_GROUP_ENUM;

//
// Interfaces for managing the failover groups in a cluster.
//
typedef enum CLUSTER_GROUP_STATE {
    ClusterGroupStateUnknown = -1,
    ClusterGroupOnline,
    ClusterGroupOffline,
    ClusterGroupFailed,
    ClusterGroupPartialOnline,
    ClusterGroupPending
} CLUSTER_GROUP_STATE;

typedef enum CLUSTER_GROUP_PRIORITY
{
    PriorityDisabled = 0, // Groups with disabled priorities do not auto-start
    PriorityLow = 1000,
    PriorityMedium = 2000,
    PriorityHigh  = 3000
} CLUSTER_GROUP_PRIORITY;

typedef enum CLUSTER_GROUP_AUTOFAILBACK_TYPE
{
    ClusterGroupPreventFailback = 0,
    ClusterGroupAllowFailback,
    ClusterGroupFailbackTypeCount
} CLUSTER_GROUP_AUTOFAILBACK_TYPE, CGAFT;


#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

#define CLUSTER_GROUP_ENUM_ITEM_VERSION_1 0x00000001
#define CLUSTER_GROUP_ENUM_ITEM_VERSION   CLUSTER_GROUP_ENUM_ITEM_VERSION_1

typedef struct _CLUSTER_GROUP_ENUM_ITEM {
    DWORD dwVersion;
    DWORD cbId;
    LPWSTR lpszId;
    DWORD cbName;
    LPWSTR lpszName;
    CLUSTER_GROUP_STATE state;
    DWORD cbOwnerNode;
    LPWSTR lpszOwnerNode;
    DWORD dwFlags;
    DWORD cbProperties;
    PVOID pProperties;
    DWORD cbRoProperties;
    PVOID pRoProperties;
} CLUSTER_GROUP_ENUM_ITEM, *PCLUSTER_GROUP_ENUM_ITEM;

#define CLUSTER_RESOURCE_ENUM_ITEM_VERSION_1 0x00000001
#define CLUSTER_RESOURCE_ENUM_ITEM_VERSION   CLUSTER_RESOURCE_ENUM_ITEM_VERSION_1

typedef struct _CLUSTER_RESOURCE_ENUM_ITEM {
    DWORD dwVersion;
    DWORD cbId;
    LPWSTR lpszId;
    DWORD cbName;
    LPWSTR lpszName;
    DWORD cbOwnerGroupName;
    LPWSTR lpszOwnerGroupName;
    DWORD cbOwnerGroupId;
    LPWSTR lpszOwnerGroupId;
    DWORD cbProperties;
    PVOID pProperties;
    DWORD cbRoProperties;
    PVOID pRoProperties;
} CLUSTER_RESOURCE_ENUM_ITEM, *PCLUSTER_RESOURCE_ENUM_ITEM;

#endif  // CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

#endif // _CLUSTER_API_TYPES_

#if ( !MIDL_PASS && !__midl )
HGROUP
WINAPI
CreateClusterGroup(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszGroupName
    );

typedef HGROUP
(WINAPI * PCLUSAPI_CREATE_CLUSTER_GROUP)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszGroupName
    );

HGROUP
WINAPI
OpenClusterGroup(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszGroupName
    );

typedef HGROUP
(WINAPI * PCLUSAPI_OPEN_CLUSTER_GROUP)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszGroupName
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
HGROUP
WINAPI
OpenClusterGroupEx(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszGroupName,
    _In_      DWORD dwDesiredAccess,
    _Out_opt_ DWORD* lpdwGrantedAccess
    );

typedef HGROUP
(WINAPI * PCLUSAPI_OPEN_CLUSTER_GROUP_EX)(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszGroupName,
    _In_      DWORD   dwDesiredAccess,
    _Out_opt_ LPDWORD lpdwGrantedAccess
    );

#endif

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)

// flags for PauseClusterNodeEx
#define CLUSAPI_NODE_PAUSE_REMAIN_ON_PAUSED_NODE_ON_MOVE_ERROR 0x00000001

DWORD
WINAPI
PauseClusterNodeEx(
    _In_ HNODE hNode,
    _In_ BOOL bDrainNode,
    _In_ DWORD dwPauseFlags,
    _In_opt_ HNODE hNodeDrainTarget
    );

typedef DWORD
(WINAPI * PCLUSAPI_PAUSE_CLUSTER_NODE_EX)(
    _In_ HNODE hNode,
    _In_ BOOL bDrainNode,
    _In_ DWORD dwPauseFlags,
    _In_opt_ HNODE hNodeDrainTarget
    );

typedef enum CLUSTER_NODE_RESUME_FAILBACK_TYPE
{
    DoNotFailbackGroups = 0,
    FailbackGroupsImmediately,
    FailbackGroupsPerPolicy,
    ClusterNodeResumeFailbackTypeCount
} CLUSTER_NODE_RESUME_FAILBACK_TYPE;

DWORD
WINAPI
ResumeClusterNodeEx(
    _In_ HNODE hNode,
    _In_ CLUSTER_NODE_RESUME_FAILBACK_TYPE eResumeFailbackType,
    _In_ DWORD dwResumeFlagsReserved
    );

typedef DWORD
(WINAPI * PCLUSAPI_RESUME_CLUSTER_NODE_EX)(
    _In_ HNODE hNode,
    _In_ CLUSTER_NODE_RESUME_FAILBACK_TYPE eResumeFailbackType,
    _In_ DWORD dwResumeFlagsReserved
    );


// Group StatusInformation Flags; These flags are set only by Cluster Service Only;
#define CLUSGRP_STATUS_LOCKED_MODE                                             0x0000000000000001
#define CLUSGRP_STATUS_PREEMPTED                                               0x0000000000000002
#define CLUSGRP_STATUS_WAITING_IN_QUEUE_FOR_MOVE                               0x0000000000000004
#define CLUSGRP_STATUS_PHYSICAL_RESOURCES_LACKING                              0x0000000000000008
#define CLUSGRP_STATUS_WAITING_TO_START                                        0x0000000000000010
#define CLUSGRP_STATUS_EMBEDDED_FAILURE                                        0x0000000000000020
#define CLUSGRP_STATUS_OFFLINE_DUE_TO_ANTIAFFINITY_CONFLICT                    0x0000000000000040

HGROUP
WINAPI
CreateClusterGroupEx(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszGroupName,
    _In_opt_ PCLUSTER_CREATE_GROUP_INFO pGroupInfo
    );

typedef HGROUP
(WINAPI * PCLUSAPI_CREATE_CLUSTER_GROUPEX)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszGroupName,
    _In_opt_ PCLUSTER_CREATE_GROUP_INFO pGroupInfo
    );

HGROUPENUMEX
WINAPI
ClusterGroupOpenEnumEx(
    _In_ HCLUSTER hCluster,
    _In_reads_bytes_opt_(cbProperties)LPCWSTR lpszProperties,
    _In_ DWORD cbProperties,
    _In_reads_bytes_opt_(cbRoProperties) LPCWSTR lpszRoProperties,
    _In_ DWORD cbRoProperties,
    _In_ DWORD dwFlags
    );

typedef HGROUPENUMEX
(WINAPI * PCLUSAPI_CLUSTER_GROUP_OPEN_ENUM_EX)(
    _In_ HCLUSTER hCluster,
    _In_reads_bytes_opt_(cbProperties)LPCWSTR lpszProperties,
    _In_ DWORD cbProperties,
    _In_reads_bytes_opt_(cbRoProperties) LPCWSTR lpszRoProperties,
    _In_ DWORD cbRoProperties,
    _In_ DWORD dwFlags
    );

DWORD
WINAPI
ClusterGroupGetEnumCountEx(
    _In_ HGROUPENUMEX hGroupEnumEx
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GROUP_GET_ENUM_COUNT_EX)(
    _In_ HGROUPENUMEX hGroupEnumEx
    );

DWORD
WINAPI
ClusterGroupEnumEx(
    _In_ HGROUPENUMEX hGroupEnumEx,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_GROUP_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GROUP_ENUM_EX)(
    _In_ HGROUPENUMEX hGroupEnumEx,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_GROUP_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

DWORD
WINAPI
ClusterGroupCloseEnumEx(
    _In_ HGROUPENUMEX hGroupEnumEx
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GROUP_CLOSE_ENUM_EX)(
    _In_ HGROUPENUMEX hGroupEnumEx
    );

// Resource StatusInformation Flags; These are set by Cluster Service Only;
#define CLUSRES_STATUS_LOCKED_MODE                                             0x0000000000000001
#define CLUSRES_STATUS_EMBEDDED_FAILURE                                        0x0000000000000002
#define CLUSRES_STATUS_FAILED_DUE_TO_INSUFFICIENT_CPU                          0x0000000000000004
#define CLUSRES_STATUS_FAILED_DUE_TO_INSUFFICIENT_MEMORY                       0x0000000000000008
#define CLUSRES_STATUS_FAILED_DUE_TO_INSUFFICIENT_GENERIC_RESOURCES            0x0000000000000010

HRESENUMEX
WINAPI
ClusterResourceOpenEnumEx(
    _In_ HCLUSTER hCluster,
    _In_reads_bytes_opt_(cbProperties)LPCWSTR lpszProperties,
    _In_ DWORD cbProperties,
    _In_reads_bytes_opt_(cbRoProperties) LPCWSTR lpszRoProperties,
    _In_ DWORD cbRoProperties,
    _In_ DWORD dwFlags
    );

typedef HRESENUMEX
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_OPEN_ENUM_EX)(
    _In_ HCLUSTER hCluster,
    _In_reads_bytes_opt_(cbProperties)LPCWSTR lpszProperties,
    _In_ DWORD cbProperties,
    _In_reads_bytes_opt_(cbRoProperties) LPCWSTR lpszRoProperties,
    _In_ DWORD cbRoProperties,
    _In_ DWORD dwFlags
    );

DWORD
WINAPI
ClusterResourceGetEnumCountEx(
    _In_ HRESENUMEX hResourceEnumEx
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_GET_ENUM_COUNT_EX)(
    _In_ HRESENUMEX hResourceEnumEx
    );

DWORD
WINAPI
ClusterResourceEnumEx(
    _In_ HRESENUMEX hResourceEnumEx,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_RESOURCE_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_ENUM_EX)(
    _In_ HRESENUMEX hResourceEnumEx,
    _In_ DWORD dwIndex,
    _Inout_ PCLUSTER_RESOURCE_ENUM_ITEM pItem,
    _Inout_ LPDWORD cbItem
    );

DWORD
WINAPI
ClusterResourceCloseEnumEx(
    _In_ HRESENUMEX hResourceEnumEx
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_CLOSE_ENUM_EX)(
    _In_ HRESENUMEX hResourceEnumEx
    );

#define CLUSAPI_GROUP_ONLINE_IGNORE_RESOURCE_STATUS 0x00000001

DWORD WINAPI OnlineClusterGroupEx(
  _In_       HGROUP hGroup,
  _In_opt_   HNODE  hDestinationNode,
  _In_       DWORD  dwOnlineFlags,
  _In_reads_bytes_opt_(cbInBufferSize) PBYTE  lpInBuffer,
  _In_       DWORD  cbInBufferSize
    );


#define CLUSAPI_GROUP_OFFLINE_IGNORE_RESOURCE_STATUS 0x00000001

DWORD WINAPI OfflineClusterGroupEx(
  _In_       HGROUP hGroup,
  _In_       DWORD  dwOfflineFlags,
  _In_reads_bytes_opt_(cbInBufferSize) PBYTE  lpInBuffer,
  _In_       DWORD  cbInBufferSize
    );


#define CLUSAPI_RESOURCE_ONLINE_IGNORE_RESOURCE_STATUS          0x00000001
#define CLUSAPI_RESOURCE_ONLINE_DO_NOT_UPDATE_PERSISTENT_STATE  0x00000002
#define CLUSAPI_RESOURCE_ONLINE_NECESSARY_FOR_QUORUM            0x00000004


DWORD WINAPI OnlineClusterResourceEx(
  _In_       HRESOURCE hResource,
  _In_       DWORD     dwOnlineFlags,
  _In_reads_bytes_opt_(cbInBufferSize) PBYTE  lpInBuffer,
  _In_       DWORD     cbInBufferSize
    );


#define CLUSAPI_RESOURCE_OFFLINE_IGNORE_RESOURCE_STATUS 0x00000001
#define CLUSAPI_RESOURCE_OFFLINE_FORCE_WITH_TERMINATION 0x00000002

DWORD WINAPI OfflineClusterResourceEx(
  _In_       HRESOURCE hResource,
  _In_       DWORD     dwOfflineFlags,
  _In_reads_bytes_opt_(cbInBufferSize) PBYTE  lpInBuffer,
  _In_       DWORD     cbInBufferSize
    );


#define CLUSAPI_GROUP_MOVE_IGNORE_RESOURCE_STATUS           0x00000001
#define CLUSAPI_GROUP_MOVE_RETURN_TO_SOURCE_NODE_ON_ERROR   0x00000002
#define CLUSAPI_GROUP_MOVE_QUEUE_ENABLED                    0x00000004
#define CLUSAPI_GROUP_MOVE_HIGH_PRIORITY_START              0x00000008
#define CLUSAPI_GROUP_MOVE_FAILBACK                         0x00000010


DWORD
WINAPI
MoveClusterGroupEx(
  _In_       HGROUP hGroup,
  _In_opt_   HNODE  hDestinationNode,
  _In_       DWORD  dwMoveFlags,
  _In_reads_bytes_opt_(cbInBufferSize) PBYTE  lpInBuffer,
  _In_       DWORD  cbInBufferSize
    );


DWORD WINAPI CancelClusterGroupOperation(
  _In_       HGROUP hGroup,
  _In_       DWORD  dwCancelFlags_RESERVED
    );

DWORD WINAPI RestartClusterResource(
    _In_ HRESOURCE hResource,
    _In_ DWORD dwFlags
    );

typedef DWORD
(WINAPI * PCLUSAPI_RESTART_CLUSTER_RESOURCE)(
    HRESOURCE hResource,
    DWORD dwFlags
    );

#endif // (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)

BOOL
WINAPI
CloseClusterGroup(
    _In_ HGROUP hGroup
    );

typedef BOOL
(WINAPI * PCLUSAPI_CLOSE_CLUSTER_GROUP)(
    _In_ HGROUP hGroup
    );

HCLUSTER
WINAPI
GetClusterFromGroup(
    _In_ HGROUP hGroup
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_GET_CLUSTER_FROM_GROUP)(
    _In_ HGROUP hGroup
    );

_Success_(return >= 0) //!= ClusterGroupStateUnknown
CLUSTER_GROUP_STATE
WINAPI
GetClusterGroupState(
    _In_ HGROUP hGroup,
    _Out_writes_to_opt_(*lpcchNodeName, *lpcchNodeName + 1) LPWSTR lpszNodeName,
    _Inout_opt_ LPDWORD lpcchNodeName
    );

typedef CLUSTER_GROUP_STATE
(WINAPI * PCLUSAPI_GET_CLUSTER_GROUP_STATE)(
    _In_ HGROUP hGroup,
    _Out_writes_to_opt_(*lpcchNodeName, *lpcchNodeName + 1) LPWSTR lpszNodeName,
    _Inout_opt_ LPDWORD lpcchNodeName
    );

DWORD
WINAPI
SetClusterGroupName(
    _In_ HGROUP hGroup,
    _In_ LPCWSTR lpszGroupName
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_GROUP_NAME)(
    HGROUP hGroup,
    LPCWSTR lpszGroupName
    );

DWORD
WINAPI
SetClusterGroupNodeList(
    _In_ HGROUP hGroup,
    _In_ DWORD NodeCount,
    _In_reads_opt_( NodeCount ) HNODE NodeList[]
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_GROUP_NODE_LIST)(
    _In_ HGROUP hGroup,
    _In_ DWORD NodeCount,
    _In_reads_opt_( NodeCount ) HNODE NodeList[]
    );

DWORD
WINAPI
OnlineClusterGroup(
    _In_ HGROUP hGroup,
    _In_opt_ HNODE hDestinationNode
    );

typedef DWORD
(WINAPI * PCLUSAPI_ONLINE_CLUSTER_GROUP)(
    _In_ HGROUP hGroup,
    _In_opt_ HNODE hDestinationNode
    );

DWORD
WINAPI
MoveClusterGroup(
    _In_ HGROUP hGroup,
    _In_opt_ HNODE hDestinationNode
    );

typedef DWORD
(WINAPI * PCLUSAPI_MOVE_CLUSTER_GROUP)(
    _In_ HGROUP hGroup,
    _In_opt_ HNODE hDestinationNode
    );

DWORD
WINAPI
OfflineClusterGroup(
    _In_ HGROUP hGroup
    );

typedef DWORD
(WINAPI * PCLUSAPI_OFFLINE_CLUSTER_GROUP)(
    HGROUP hGroup
    );

DWORD
WINAPI
DeleteClusterGroup(
    _In_ HGROUP hGroup
    );

typedef DWORD
(WINAPI * PCLUSAPI_DELETE_CLUSTER_GROUP)(
    HGROUP hGroup
    );

DWORD
WINAPI
DestroyClusterGroup(
    _In_ HGROUP hGroup
    );

typedef DWORD
(WINAPI * PCLUSAPI_DESTROY_CLUSTER_GROUP)(
    HGROUP hGroup
    );

HGROUPENUM
WINAPI
ClusterGroupOpenEnum(
    _In_ HGROUP hGroup,
    _In_ DWORD dwType
    );

typedef HGROUPENUM
(WINAPI * PCLUSAPI_CLUSTER_GROUP_OPEN_ENUM)(
    HGROUP hGroup,
    DWORD dwType
    );

DWORD
WINAPI
ClusterGroupGetEnumCount(
    _In_ HGROUPENUM hGroupEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GROUP_GET_ENUM_COUNT)(
    _In_ HGROUPENUM hGroupEnum
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterGroupEnum(
    _In_ HGROUPENUM hGroupEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszResourceName,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GROUP_ENUM)(
    _In_ HGROUPENUM hGroupEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszResourceName,
    _Inout_ LPDWORD lpcchName
    );

DWORD
WINAPI
ClusterGroupCloseEnum(
    _In_ HGROUPENUM hGroupEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GROUP_CLOSE_ENUM)(
    HGROUPENUM hGroupEnum
    );

#endif // MIDL_PASS


//
// Definitions used in resource management routines.
//

#ifndef _CLUSTER_API_TYPES_
//
// Resource-related structures and types
//
typedef enum CLUSTER_RESOURCE_STATE {
    ClusterResourceStateUnknown = -1,
    ClusterResourceInherited,
    ClusterResourceInitializing,
    ClusterResourceOnline,
    ClusterResourceOffline,
    ClusterResourceFailed,
    ClusterResourcePending = 128,
    ClusterResourceOnlinePending,
    ClusterResourceOfflinePending
} CLUSTER_RESOURCE_STATE;

typedef enum CLUSTER_RESOURCE_RESTART_ACTION {
    ClusterResourceDontRestart = 0,
    ClusterResourceRestartNoNotify,
    ClusterResourceRestartNotify,
    ClusterResourceRestartActionCount
} CLUSTER_RESOURCE_RESTART_ACTION, CRRA;

typedef enum CLUSTER_RESOURCE_EMBEDDED_FAILURE_ACTION {
    ClusterResourceEmbeddedFailureActionNone = 0,
    ClusterResourceEmbeddedFailureActionLogOnly = 1,
    ClusterResourceEmbeddedFailureActionRecover
} CLUSTER_RESOURCE_EMBEDDED_FAILURE_ACTION;

//
// Flags for resource creation
//
typedef enum CLUSTER_RESOURCE_CREATE_FLAGS {
    CLUSTER_RESOURCE_DEFAULT_MONITOR   = 0,
    CLUSTER_RESOURCE_SEPARATE_MONITOR  = 1,
    CLUSTER_RESOURCE_VALID_FLAGS       = CLUSTER_RESOURCE_SEPARATE_MONITOR
} CLUSTER_RESOURCE_CREATE_FLAGS;

typedef enum CLUSTER_SHARED_VOLUME_SNAPSHOT_STATE {
    ClusterSharedVolumeSnapshotStateUnknown,
    ClusterSharedVolumePrepareForHWSnapshot,
    ClusterSharedVolumeHWSnapshotCompleted,
    ClusterSharedVolumePrepareForFreeze
} CLUSTER_SHARED_VOLUME_SNAPSHOT_STATE;

#endif // _CLUSTER_API_TYPES_

//
// Interfaces for managing the resources in a cluster
//

#if ( !MIDL_PASS && !__midl )
HRESOURCE
WINAPI
CreateClusterResource(
    _In_ HGROUP hGroup,
    _In_ LPCWSTR lpszResourceName,
    _In_ LPCWSTR lpszResourceType,
    _In_ DWORD dwFlags
    );

typedef HRESOURCE
(WINAPI * PCLUSAPI_CREATE_CLUSTER_RESOURCE)(
    HGROUP hGroup,
    LPCWSTR lpszResourceName,
    LPCWSTR lpszResourceType,
    DWORD dwFlags
    );

HRESOURCE
WINAPI
OpenClusterResource(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceName
    );

typedef HRESOURCE
(WINAPI * PCLUSAPI_OPEN_CLUSTER_RESOURCE)(
    HCLUSTER hCluster,
    LPCWSTR lpszResourceName
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
HRESOURCE
WINAPI
OpenClusterResourceEx(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszResourceName,
    _In_      DWORD dwDesiredAccess,
    _Out_opt_ DWORD* lpdwGrantedAccess
    );

typedef HRESOURCE
(WINAPI * PCLUSAPI_OPEN_CLUSTER_RESOURCE_EX)(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszResourceName,
    _In_      DWORD   dwDesiredAccess,
    _Out_opt_ LPDWORD lpdwGrantedAccess
    );
#endif

BOOL
WINAPI
CloseClusterResource(
    _In_ HRESOURCE hResource
    );

typedef BOOL
(WINAPI * PCLUSAPI_CLOSE_CLUSTER_RESOURCE)(
    HRESOURCE hResource
    );

HCLUSTER
WINAPI
GetClusterFromResource(
    _In_ HRESOURCE hResource
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_GET_CLUSTER_FROM_RESOURCE)(
    _In_ HRESOURCE hResource
    );

DWORD
WINAPI
DeleteClusterResource(
    _In_ HRESOURCE hResource
    );

typedef DWORD
(WINAPI * PCLUSAPI_DELETE_CLUSTER_RESOURCE)(
    HRESOURCE hResource
    );

_Success_(return >= 0) // != ClusterResourceStateUnknown
CLUSTER_RESOURCE_STATE
WINAPI
GetClusterResourceState(
    _In_ HRESOURCE hResource,
    _Out_writes_to_opt_(*lpcchNodeName, *lpcchNodeName + 1) LPWSTR lpszNodeName,
    _Inout_opt_ LPDWORD lpcchNodeName,
    _Out_writes_to_opt_(*lpcchGroupName, *lpcchGroupName + 1) LPWSTR lpszGroupName,
    _Inout_opt_ LPDWORD lpcchGroupName
    );

typedef CLUSTER_RESOURCE_STATE
(WINAPI * PCLUSAPI_GET_CLUSTER_RESOURCE_STATE)(
    _In_ HRESOURCE hResource,
    _Out_writes_to_opt_(*lpcchNodeName, *lpcchNodeName + 1) LPWSTR lpszNodeName,
    _Inout_opt_ LPDWORD lpcchNodeName,
    _Out_writes_to_opt_(*lpcchGroupName, *lpcchGroupName + 1) LPWSTR lpszGroupName,
    _Inout_opt_ LPDWORD lpcchGroupName
    );

DWORD
WINAPI
SetClusterResourceName(
    _In_ HRESOURCE hResource,
    _In_ LPCWSTR lpszResourceName
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_RESOURCE_NAME)(
    HRESOURCE hResource,
    LPCWSTR lpszResourceName
    );

DWORD
WINAPI
FailClusterResource(
    _In_ HRESOURCE hResource
    );

typedef DWORD
(WINAPI * PCLUSAPI_FAIL_CLUSTER_RESOURCE)(
    HRESOURCE hResource
    );

DWORD
WINAPI
OnlineClusterResource(
    _In_ HRESOURCE hResource
    );

typedef DWORD
(WINAPI * PCLUSAPI_ONLINE_CLUSTER_RESOURCE)(
    HRESOURCE hResource
    );

DWORD
WINAPI
OfflineClusterResource(
    _In_ HRESOURCE hResource
    );

typedef DWORD
(WINAPI * PCLUSAPI_OFFLINE_CLUSTER_RESOURCE)(
    HRESOURCE hResource
    );

DWORD
WINAPI
ChangeClusterResourceGroup(
    _In_ HRESOURCE hResource,
    _In_ HGROUP hGroup
    );

typedef DWORD
(WINAPI * PCLUSAPI_CHANGE_CLUSTER_RESOURCE_GROUP)(
    HRESOURCE hResource,
    HGROUP hGroup
    );

DWORD
WINAPI
AddClusterResourceNode(
    _In_ HRESOURCE hResource,
    _In_ HNODE hNode
    );

typedef DWORD
(WINAPI * PCLUSAPI_ADD_CLUSTER_RESOURCE_NODE)(
    HRESOURCE hResource,
    HNODE hNode
    );

DWORD
WINAPI
RemoveClusterResourceNode(
    _In_ HRESOURCE hResource,
    _In_ HNODE hNode
    );

typedef DWORD
(WINAPI * PCLUSAPI_REMOVE_CLUSTER_RESOURCE_NODE)(
    HRESOURCE hResource,
    HNODE hNode
    );

DWORD
WINAPI
AddClusterResourceDependency(
    _In_ HRESOURCE hResource,
    _In_ HRESOURCE hDependsOn
    );

typedef DWORD
(WINAPI * PCLUSAPI_ADD_CLUSTER_RESOURCE_DEPENDENCY)(
    HRESOURCE hResource,
    HRESOURCE hDependsOn
    );

DWORD
WINAPI
RemoveClusterResourceDependency(
    _In_ HRESOURCE hResource,
    _In_ HRESOURCE hDependsOn
    );

typedef DWORD
(WINAPI * PCLUSAPI_REMOVE_CLUSTER_RESOURCE_DEPENDENCY)(
    HRESOURCE hResource,
    HRESOURCE hDependsOn
    );

DWORD
WINAPI
SetClusterResourceDependencyExpression(
    _In_ HRESOURCE hResource,
    _In_ LPCWSTR lpszDependencyExpression
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_RESOURCE_DEPENDENCY_EXPRESSION)(
    _In_ HRESOURCE hResource,
    _In_ LPCWSTR lpszDependencyExpression
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterResourceDependencyExpression(
    _In_ HRESOURCE hResource,
    _Out_writes_to_opt_(*lpcchDependencyExpression, *lpcchDependencyExpression + 1)
        LPWSTR lpszDependencyExpression,
    _Inout_ LPDWORD lpcchDependencyExpression
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_RESOURCE_DEPENDENCY_EXPRESSION)(
    _In_ HRESOURCE hResource,
    _Out_writes_to_opt_(*lpcchDependencyExpression, *lpcchDependencyExpression + 1)
        LPWSTR lpszDependencyExpression,
    _Inout_ LPDWORD lpcchDependencyExpression
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
DWORD
WINAPI
AddResourceToClusterSharedVolumes(
    _In_ HRESOURCE hResource
    );
#endif

typedef DWORD
(WINAPI * PCLUSAPI_ADD_RESOURCE_TO_CLUSTER_SHARED_VOLUMES)(
    _In_ HRESOURCE hResource
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
DWORD
WINAPI
RemoveResourceFromClusterSharedVolumes(
    _In_ HRESOURCE hResource
    );
#endif

typedef DWORD
(WINAPI * PCLUSAPI_REMOVE_RESOURCE_FROM_CLUSTER_SHARED_VOLUMES)(
    _In_ HRESOURCE hResource
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
DWORD
WINAPI
IsFileOnClusterSharedVolume(
    _In_ LPCWSTR lpszPathName,
    _Out_ PBOOL pbFileIsOnSharedVolume
    );
#endif

typedef DWORD
(WINAPI *PCLUSAPI_IS_FILE_ON_CLUSTER_SHARED_VOLUME)(
    _In_ LPCWSTR lpszPathName,
    _Out_ PBOOL pbFileIsOnSharedVolume
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
DWORD
WINAPI
ClusterSharedVolumeSetSnapshotState(
    _In_ GUID    guidSnapshotSet,
    _In_ LPCWSTR lpszVolumeName,
    _In_ CLUSTER_SHARED_VOLUME_SNAPSHOT_STATE state
    );
#endif

typedef DWORD
(WINAPI *PCLUSAPI_SHARED_VOLUME_SET_SNAPSHOT_STATE)(
    _In_ GUID    guidSnapshotSet,
    _In_ LPCWSTR lpszVolumeName,
    _In_ CLUSTER_SHARED_VOLUME_SNAPSHOT_STATE state
    );

BOOL
WINAPI
CanResourceBeDependent(
    _In_ HRESOURCE hResource,
    _In_ HRESOURCE hResourceDependent
    );

typedef BOOL
(WINAPI * PCLUSAPI_CAN_RESOURCE_BE_DEPENDENT)(
    HRESOURCE hResource,
    HRESOURCE hResourceDependent
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterResourceControl(
    _In_ HRESOURCE hResource,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(cbInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD cbInBufferSize,
    _Out_writes_bytes_to_opt_(cbOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD cbOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_CONTROL)(
    _In_ HRESOURCE hResource,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(cbInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD cbInBufferSize,
    _Out_writes_bytes_to_opt_(cbOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD cbOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterResourceTypeControl(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceTypeName,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_TYPE_CONTROL)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceTypeName,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterGroupControl(
    _In_ HGROUP hGroup,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_GROUP_CONTROL)(
    _In_ HGROUP hGroup,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterNodeControl(
    _In_ HNODE hNode,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NODE_CONTROL)(
    _In_ HNODE hNode,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

_Success_(return != FALSE)
BOOL
WINAPI
GetClusterResourceNetworkName(
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*nSize, *nSize + 1) LPWSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );

typedef BOOL
(WINAPI * PCLUSAPI_GET_CLUSTER_RESOURCE_NETWORK_NAME)(
    _In_ HRESOURCE hResource,
    _Out_writes_to_(*nSize, *nSize + 1) LPWSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );


#endif // MIDL_PASS


//
// Cluster control properties
//

#ifndef _CLUSTER_API_TYPES_
//
// Cluster Control Property Data - Types (a WORD)
//
typedef enum CLUSTER_PROPERTY_TYPE {
    CLUSPROP_TYPE_UNKNOWN = -1,
    CLUSPROP_TYPE_ENDMARK = 0,
    CLUSPROP_TYPE_LIST_VALUE,
    CLUSPROP_TYPE_RESCLASS,
    CLUSPROP_TYPE_RESERVED1,
    CLUSPROP_TYPE_NAME,
    CLUSPROP_TYPE_SIGNATURE,
    CLUSPROP_TYPE_SCSI_ADDRESS,
    CLUSPROP_TYPE_DISK_NUMBER,
    CLUSPROP_TYPE_PARTITION_INFO,
    CLUSPROP_TYPE_FTSET_INFO,
    CLUSPROP_TYPE_DISK_SERIALNUMBER,
    CLUSPROP_TYPE_DISK_GUID,
    CLUSPROP_TYPE_DISK_SIZE,
    CLUSPROP_TYPE_PARTITION_INFO_EX,
    CLUSPROP_TYPE_NODE_BITMASK,
    CLUSPROP_TYPE_NODE_NAME,
    CLUSPROP_TYPE_DISK_HEADER_IDS,
    CLUSPROP_TYPE_DISK_VALUES,
    CLUSPROP_TYPE_DISK_PRIV_PROPERTIES,
    CLUSPROP_TYPE_CSV_PARTITION_INFO_EX,
    CLUSPROP_TYPE_NODE_INDEX,
    CLUSPROP_TYPE_DISKID,
    CLUSPROP_TYPE_VOLUME_INFO,
    CLUSPROP_TYPE_POOL_INFO,
    CLUSPROP_TYPE_POOL_PRIV_PROPERTIES,
    CLUSPROP_TYPE_RESOURCE_ID,
    CLUSPROP_TYPE_DISK_SP_ID,

    CLUSPROP_TYPE_USER=32768
} CLUSTER_PROPERTY_TYPE;

//
// Cluster Control Property Data - Formats (a WORD)
//
typedef enum CLUSTER_PROPERTY_FORMAT {
    CLUSPROP_FORMAT_UNKNOWN = 0,
    CLUSPROP_FORMAT_BINARY,
    CLUSPROP_FORMAT_DWORD,
    CLUSPROP_FORMAT_SZ,
    CLUSPROP_FORMAT_EXPAND_SZ,
    CLUSPROP_FORMAT_MULTI_SZ,
    CLUSPROP_FORMAT_ULARGE_INTEGER,
    CLUSPROP_FORMAT_LONG,
    CLUSPROP_FORMAT_EXPANDED_SZ,
    CLUSPROP_FORMAT_SECURITY_DESCRIPTOR,
    CLUSPROP_FORMAT_LARGE_INTEGER,
    CLUSPROP_FORMAT_WORD,
    CLUSPROP_FORMAT_FILETIME,
    CLUSPROP_FORMAT_VALUE_LIST,
    CLUSPROP_FORMAT_PROPERTY_LIST,

    CLUSPROP_FORMAT_USER=32768
} CLUSTER_PROPERTY_FORMAT;

#endif // _CLUSTER_API_TYPES_

//
// Cluster Control Property Data - Syntax
//
#define CLUSPROP_SYNTAX_VALUE( type, format ) ((DWORD) ((type << 16) | format))

#ifndef _CLUSTER_API_TYPES_

typedef enum CLUSTER_PROPERTY_SYNTAX {

    CLUSPROP_SYNTAX_ENDMARK         = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_ENDMARK, CLUSPROP_FORMAT_UNKNOWN ),
    CLUSPROP_SYNTAX_NAME            = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_NAME, CLUSPROP_FORMAT_SZ ),
    CLUSPROP_SYNTAX_RESCLASS        = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_RESCLASS, CLUSPROP_FORMAT_DWORD ),

    CLUSPROP_SYNTAX_LIST_VALUE_SZ                   = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_SZ ),
    CLUSPROP_SYNTAX_LIST_VALUE_EXPAND_SZ            = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_EXPAND_SZ ),
    CLUSPROP_SYNTAX_LIST_VALUE_DWORD                = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_DWORD ),
    CLUSPROP_SYNTAX_LIST_VALUE_BINARY               = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_LIST_VALUE_MULTI_SZ             = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_MULTI_SZ ),
    CLUSPROP_SYNTAX_LIST_VALUE_LONG                 = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_LONG ),
    CLUSPROP_SYNTAX_LIST_VALUE_EXPANDED_SZ          = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_EXPANDED_SZ ),
    CLUSPROP_SYNTAX_LIST_VALUE_SECURITY_DESCRIPTOR  = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_SECURITY_DESCRIPTOR ),
    CLUSPROP_SYNTAX_LIST_VALUE_LARGE_INTEGER        = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_LARGE_INTEGER ),
    CLUSPROP_SYNTAX_LIST_VALUE_ULARGE_INTEGER       = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_ULARGE_INTEGER ),
    CLUSPROP_SYNTAX_LIST_VALUE_WORD                 = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_WORD ),

    // Storage syntax values

    CLUSPROP_SYNTAX_DISK_SIGNATURE       = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_SIGNATURE, CLUSPROP_FORMAT_DWORD ),
    CLUSPROP_SYNTAX_SCSI_ADDRESS         = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_SCSI_ADDRESS, CLUSPROP_FORMAT_DWORD ),
    CLUSPROP_SYNTAX_DISK_NUMBER          = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_NUMBER, CLUSPROP_FORMAT_DWORD ),
    CLUSPROP_SYNTAX_PARTITION_INFO       = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_PARTITION_INFO, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_FTSET_INFO           = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_FTSET_INFO, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_DISK_SERIALNUMBER    = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_SERIALNUMBER, CLUSPROP_FORMAT_SZ ),
    CLUSPROP_SYNTAX_DISK_GUID            = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_GUID, CLUSPROP_FORMAT_SZ ),
    CLUSPROP_SYNTAX_DISK_SIZE            = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_SIZE, CLUSPROP_FORMAT_ULARGE_INTEGER ),
    CLUSPROP_SYNTAX_PARTITION_INFO_EX    = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_PARTITION_INFO_EX, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_CSV_PARTITION_INFO_EX= CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_CSV_PARTITION_INFO_EX, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_LIST_VALUE_FILETIME  = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_LIST_VALUE, CLUSPROP_FORMAT_FILETIME ),
    CLUSPROP_SYNTAX_NODE_BITMASK         = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_NODE_BITMASK, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_NODE_LIST            = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_NODE_NAME, CLUSPROP_FORMAT_MULTI_SZ ),
    CLUSPROP_SYNTAX_DISK_HEADER_IDS      = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_HEADER_IDS, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_DISK_VALUES          = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_VALUES, CLUSPROP_FORMAT_VALUE_LIST ),
    CLUSPROP_SYNTAX_DISK_PRIV_PROPERTIES = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_PRIV_PROPERTIES, CLUSPROP_FORMAT_PROPERTY_LIST ),
    CLUSPROP_SYNTAX_NODE_INDEX           = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_NODE_INDEX, CLUSPROP_FORMAT_DWORD ),
    CLUSPROP_SYNTAX_DISK_IDS             = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISKID, CLUSPROP_FORMAT_VALUE_LIST ),
    CLUSPROP_SYNTAX_DISK_VOLUMES         = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_VOLUME_INFO, CLUSPROP_FORMAT_VALUE_LIST ),
    CLUSPROP_SYNTAX_POOL_INFO            = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_POOL_INFO, CLUSPROP_FORMAT_BINARY ),
    CLUSPROP_SYNTAX_POOL_PRIV_PROPERTIES = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_POOL_PRIV_PROPERTIES, CLUSPROP_FORMAT_PROPERTY_LIST ),
    CLUSPROP_SYNTAX_RESOURCE_ID          = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_RESOURCE_ID, CLUSPROP_FORMAT_SZ ),
    CLUSPROP_SYNTAX_DISK_SP_ID           = CLUSPROP_SYNTAX_VALUE( CLUSPROP_TYPE_DISK_SP_ID, CLUSPROP_FORMAT_BINARY ),

} CLUSTER_PROPERTY_SYNTAX;

#endif // _CLUSTER_API_TYPES_


#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)

#define GROUP_FAILURE_INFO_VERSION_1        0x1

typedef struct GROUP_FAILURE_INFO {
    DWORD dwFailoverAttemptsRemaining;
    DWORD dwFailoverPeriodRemaining; // in sec
} GROUP_FAILURE_INFO, *PGROUP_FAILURE_INFO;

typedef struct GROUP_FAILURE_INFO_BUFFER {
    DWORD dwVersion;
    GROUP_FAILURE_INFO Info;
} GROUP_FAILURE_INFO_BUFFER, *PGROUP_FAILURE_INFO_BUFFER;


#define RESOURCE_FAILURE_INFO_VERSION_1     0x1

typedef struct RESOURCE_FAILURE_INFO {
    DWORD dwRestartAttemptsRemaining;
    DWORD dwRestartPeriodRemaining; // in sec
} RESOURCE_FAILURE_INFO, *PRESOURCE_FAILURE_INFO;


typedef struct RESOURCE_FAILURE_INFO_BUFFER {
    DWORD dwVersion;
    RESOURCE_FAILURE_INFO Info;
} RESOURCE_FAILURE_INFO_BUFFER, *PRESOURCE_FAILURE_INFO_BUFFER;


#endif //(CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)



//
// Define Cluster Control Code access methods
//
#define CLUS_ACCESS_ANY        0
#define CLUS_ACCESS_READ    0x01
#define CLUS_ACCESS_WRITE   0x02

//
// Define Cluster Control Code modification actions
//
#define CLUS_NO_MODIFY      0
#define CLUS_MODIFY         0x01

//
// Define Cluster Control Code Global actions
//
#define CLUS_NOT_GLOBAL     0
#define CLUS_GLOBAL         0x01

#ifndef _CLUSTER_API_TYPES_
//
// Define Cluster Control Code target objects
//
typedef enum CLUSTER_CONTROL_OBJECT {
    CLUS_OBJECT_INVALID=0,
    CLUS_OBJECT_RESOURCE,
    CLUS_OBJECT_RESOURCE_TYPE,
    CLUS_OBJECT_GROUP,
    CLUS_OBJECT_NODE,
    CLUS_OBJECT_NETWORK,
    CLUS_OBJECT_NETINTERFACE,
    CLUS_OBJECT_CLUSTER,
    CLUS_OBJECT_USER=128
} CLUSTER_CONTROL_OBJECT;

#endif // _CLUSTER_API_TYPES_

//
// Macro to generate full cluster control codes
//
//  31      24 23 22 21 20 19       16 15                    2 1    0
// +----------+--+--+--+--+-----------+-----------------------+------+
// |  OBJECT  |G |M |U |I       CLUSTER CONTROL CODES         |ACCESS|
// +----------+--+--+--+--+-----------+-----------------------+------+
//
// OBJECT - Object identifier (8 bits)
// G - Global bit (operation must be performed on all nodes of cluster)
// M - Modify bit (code causes a modification, may cause event notification)
// U - User code bit (splits the control codes into 2 spaces each 2^^19 in size)
// I - Internal code bit (only for non-user control codes)
// CLUSTER CONTROL CODES - 2^^18 (256 thousand possible control codes)
// ACCESS - Access mode (2 bits)
//

//
// Define control code shifts
//
#define CLUSCTL_ACCESS_SHIFT         0
#define CLUSCTL_FUNCTION_SHIFT       2
#define CLCTL_INTERNAL_SHIFT        20
#define CLCTL_USER_SHIFT            21
#define CLCTL_MODIFY_SHIFT          22
#define CLCTL_GLOBAL_SHIFT          23
#define CLUSCTL_OBJECT_SHIFT        24

//
// Define control code masks
//
#define CLCTL_INTERNAL_MASK             (1<<CLCTL_INTERNAL_SHIFT)
#define CLCTL_USER_MASK                 (1<<CLCTL_USER_SHIFT)
#define CLCTL_MODIFY_MASK               (1<<CLCTL_MODIFY_SHIFT)
#define CLCTL_GLOBAL_MASK               (1<<CLCTL_GLOBAL_SHIFT)
#define CLUSCTL_CONTROL_CODE_MASK       0x3FFFFF // Includes access mask
#define CLUSCTL_OBJECT_MASK             0xFF
#define CLUSCTL_ACCESS_MODE_MASK        0x03

//
// Cluster Control function codes (a DWORD)
//
#define CLCTL_CLUSTER_BASE  0           // Start of cluster defined functions
#define CLCTL_USER_BASE     (1<<CLCTL_USER_SHIFT) // Start of user functions

#define CLCTL_EXTERNAL_CODE( Function, Access, Modify ) ( \
    ((Access) << CLUSCTL_ACCESS_SHIFT) | \
    ((CLCTL_CLUSTER_BASE + Function) << CLUSCTL_FUNCTION_SHIFT) | \
    ((Modify) << CLCTL_MODIFY_SHIFT) )

#define CLCTL_INTERNAL_CODE( Function, Access, Modify ) ( \
    ((Access) << CLUSCTL_ACCESS_SHIFT) | \
    CLCTL_INTERNAL_MASK | \
    ((CLCTL_CLUSTER_BASE + Function) << CLUSCTL_FUNCTION_SHIFT) | \
    ((Modify) << CLCTL_MODIFY_SHIFT) )

#ifndef _CLUSTER_API_TYPES_
typedef enum CLCTL_CODES {
    //
    // External control codes
    //
    CLCTL_UNKNOWN                           = CLCTL_EXTERNAL_CODE( 0, CLUS_ACCESS_ANY, CLUS_NO_MODIFY ),
    CLCTL_GET_CHARACTERISTICS               = CLCTL_EXTERNAL_CODE( 1, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_FLAGS                         = CLCTL_EXTERNAL_CODE( 2, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_CLASS_INFO                    = CLCTL_EXTERNAL_CODE( 3, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_REQUIRED_DEPENDENCIES         = CLCTL_EXTERNAL_CODE( 4, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_ARB_TIMEOUT                   = CLCTL_EXTERNAL_CODE( 5, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_FAILURE_INFO                  = CLCTL_EXTERNAL_CODE( 6, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_GET_NAME                          = CLCTL_EXTERNAL_CODE( 10, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_RESOURCE_TYPE                 = CLCTL_EXTERNAL_CODE( 11, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_NODE                          = CLCTL_EXTERNAL_CODE( 12, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_NETWORK                       = CLCTL_EXTERNAL_CODE( 13, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_ID                            = CLCTL_EXTERNAL_CODE( 14, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_FQDN                          = CLCTL_EXTERNAL_CODE( 15, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_CLUSTER_SERVICE_ACCOUNT_NAME  = CLCTL_EXTERNAL_CODE( 16, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_CHECK_VOTER_EVICT                 = CLCTL_EXTERNAL_CODE( 17, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_CHECK_VOTER_DOWN                  = CLCTL_EXTERNAL_CODE( 18, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_SHUTDOWN                          = CLCTL_EXTERNAL_CODE( 19, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_ENUM_COMMON_PROPERTIES            = CLCTL_EXTERNAL_CODE( 20, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_RO_COMMON_PROPERTIES          = CLCTL_EXTERNAL_CODE( 21, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_COMMON_PROPERTIES             = CLCTL_EXTERNAL_CODE( 22, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_SET_COMMON_PROPERTIES             = CLCTL_EXTERNAL_CODE( 23, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_VALIDATE_COMMON_PROPERTIES        = CLCTL_EXTERNAL_CODE( 24, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_COMMON_PROPERTY_FMTS          = CLCTL_EXTERNAL_CODE( 25, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_COMMON_RESOURCE_PROPERTY_FMTS = CLCTL_EXTERNAL_CODE( 26, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_ENUM_PRIVATE_PROPERTIES           = CLCTL_EXTERNAL_CODE( 30, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_RO_PRIVATE_PROPERTIES         = CLCTL_EXTERNAL_CODE( 31, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_PRIVATE_PROPERTIES            = CLCTL_EXTERNAL_CODE( 32, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_SET_PRIVATE_PROPERTIES            = CLCTL_EXTERNAL_CODE( 33, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_VALIDATE_PRIVATE_PROPERTIES       = CLCTL_EXTERNAL_CODE( 34, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_PRIVATE_PROPERTY_FMTS         = CLCTL_EXTERNAL_CODE( 35, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_GET_PRIVATE_RESOURCE_PROPERTY_FMTS= CLCTL_EXTERNAL_CODE( 36, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_ADD_REGISTRY_CHECKPOINT           = CLCTL_EXTERNAL_CODE( 40, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_DELETE_REGISTRY_CHECKPOINT        = CLCTL_EXTERNAL_CODE( 41, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_GET_REGISTRY_CHECKPOINTS          = CLCTL_EXTERNAL_CODE( 42, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_ADD_CRYPTO_CHECKPOINT             = CLCTL_EXTERNAL_CODE( 43, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_DELETE_CRYPTO_CHECKPOINT          = CLCTL_EXTERNAL_CODE( 44, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_GET_CRYPTO_CHECKPOINTS            = CLCTL_EXTERNAL_CODE( 45, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_RESOURCE_UPGRADE_DLL              = CLCTL_EXTERNAL_CODE( 46, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_ADD_REGISTRY_CHECKPOINT_64BIT     = CLCTL_EXTERNAL_CODE( 47, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_ADD_REGISTRY_CHECKPOINT_32BIT     = CLCTL_EXTERNAL_CODE( 48, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_GET_LOADBAL_PROCESS_LIST          = CLCTL_EXTERNAL_CODE( 50, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_GET_NETWORK_NAME                  = CLCTL_EXTERNAL_CODE( 90, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),
    CLCTL_NETNAME_GET_VIRTUAL_SERVER_TOKEN  = CLCTL_EXTERNAL_CODE( 91, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),
    CLCTL_NETNAME_REGISTER_DNS_RECORDS      = CLCTL_EXTERNAL_CODE( 92, CLUS_ACCESS_WRITE, CLUS_NO_MODIFY ),
    CLCTL_GET_DNS_NAME                      = CLCTL_EXTERNAL_CODE( 93, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),
    CLCTL_NETNAME_SET_PWD_INFO              = CLCTL_EXTERNAL_CODE( 94, CLUS_ACCESS_WRITE, CLUS_NO_MODIFY ),
    CLCTL_NETNAME_DELETE_CO                 = CLCTL_EXTERNAL_CODE( 95, CLUS_ACCESS_WRITE, CLUS_NO_MODIFY ),
    CLCTL_NETNAME_VALIDATE_VCO              = CLCTL_EXTERNAL_CODE( 96, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),
    CLCTL_NETNAME_RESET_VCO                 = CLCTL_EXTERNAL_CODE( 97, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),
    CLCTL_NETNAME_REPAIR_VCO                = CLCTL_EXTERNAL_CODE( 99, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),

    CLCTL_STORAGE_GET_DISK_INFO             = CLCTL_EXTERNAL_CODE( 100, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_GET_AVAILABLE_DISKS       = CLCTL_EXTERNAL_CODE( 101, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_IS_PATH_VALID             = CLCTL_EXTERNAL_CODE( 102, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_SYNC_CLUSDISK_DB          = CLCTL_EXTERNAL_CODE( 103, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_QUERY_DELETE                      = CLCTL_EXTERNAL_CODE( 110, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_IPADDRESS_RENEW_LEASE             = CLCTL_EXTERNAL_CODE( 111, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_IPADDRESS_RELEASE_LEASE           = CLCTL_EXTERNAL_CODE( 112, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_QUERY_MAINTENANCE_MODE            = CLCTL_EXTERNAL_CODE( 120, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_SET_MAINTENANCE_MODE              = CLCTL_EXTERNAL_CODE( 121, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STORAGE_SET_DRIVELETTER           = CLCTL_EXTERNAL_CODE( 122, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STORAGE_GET_DRIVELETTERS          = CLCTL_EXTERNAL_CODE( 123, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_GET_DISK_INFO_EX          = CLCTL_EXTERNAL_CODE( 124, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_GET_AVAILABLE_DISKS_EX    = CLCTL_EXTERNAL_CODE( 125, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_REMAP_DRIVELETTER         = CLCTL_EXTERNAL_CODE( 128, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_GET_DISKID                = CLCTL_EXTERNAL_CODE( 129, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_IS_CLUSTERABLE            = CLCTL_EXTERNAL_CODE( 130, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_REMOVE_VM_OWNERSHIP       = CLCTL_EXTERNAL_CODE( 131, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STORAGE_GET_MOUNTPOINTS           = CLCTL_EXTERNAL_CODE( 132, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_GET_DIRTY                 = CLCTL_EXTERNAL_CODE( 134, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    // Codes 135-136 are available for storage after the two previous squatters were made internal.
    CLCTL_STORAGE_GET_SHARED_VOLUME_INFO    = CLCTL_EXTERNAL_CODE( 137, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_IS_CSV_FILE               = CLCTL_EXTERNAL_CODE( 138, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_STORAGE_GET_RESOURCEID            = CLCTL_EXTERNAL_CODE( 139, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_VALIDATE_PATH                     = CLCTL_EXTERNAL_CODE( 140, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_VALIDATE_NETNAME                  = CLCTL_EXTERNAL_CODE( 141, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_VALIDATE_DIRECTORY                = CLCTL_EXTERNAL_CODE( 142, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_BATCH_BLOCK_KEY                   = CLCTL_EXTERNAL_CODE( 143, CLUS_ACCESS_WRITE, CLUS_NO_MODIFY ),
    CLCTL_BATCH_UNBLOCK_KEY                 = CLCTL_EXTERNAL_CODE( 144, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_FILESERVER_SHARE_ADD              = CLCTL_EXTERNAL_CODE( 145, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_FILESERVER_SHARE_DEL              = CLCTL_EXTERNAL_CODE( 146, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_FILESERVER_SHARE_MODIFY           = CLCTL_EXTERNAL_CODE( 147, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_FILESERVER_SHARE_REPORT           = CLCTL_EXTERNAL_CODE( 148, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),

    CLCTL_NETNAME_GET_OU_FOR_VCO            = CLCTL_EXTERNAL_CODE( 155, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    // Codes 160-161 are available for storage after the two previous squatters were made internal.
    CLCTL_ENABLE_SHARED_VOLUME_DIRECTIO     = CLCTL_EXTERNAL_CODE( 162, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_DISABLE_SHARED_VOLUME_DIRECTIO    = CLCTL_EXTERNAL_CODE( 163, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_GET_SHARED_VOLUME_ID              = CLCTL_EXTERNAL_CODE( 164, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_SET_CSV_MAINTENANCE_MODE          = CLCTL_EXTERNAL_CODE( 165, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_SET_SHARED_VOLUME_BACKUP_MODE     = CLCTL_EXTERNAL_CODE( 166, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STORAGE_GET_SHARED_VOLUME_PARTITION_NAMES = CLCTL_EXTERNAL_CODE( 167, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_STORAGE_GET_SHARED_VOLUME_STATES  = CLCTL_EXTERNAL_CODE( 168, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STORAGE_IS_SHARED_VOLUME          = CLCTL_EXTERNAL_CODE( 169, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    CLCTL_GET_CLUSDB_TIMESTAMP              = CLCTL_EXTERNAL_CODE( 170, CLUS_ACCESS_READ,  CLUS_NO_MODIFY ),

    // this control has CLUS_MODIFY bit set and will trigger property change notification, that is the only purpose of this control
    CLCTL_RW_MODIFY_NOOP                    = CLCTL_EXTERNAL_CODE( 171, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_IS_QUORUM_BLOCKED                 = CLCTL_EXTERNAL_CODE( 172, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_POOL_GET_DRIVE_INFO               = CLCTL_EXTERNAL_CODE( 173, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),

    // Control codes 2000 to 2999 are reserved.


    //
    // Internal control codes
    //
    CLCTL_DELETE                            = CLCTL_INTERNAL_CODE( 1, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_INSTALL_NODE                      = CLCTL_INTERNAL_CODE( 2, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_EVICT_NODE                        = CLCTL_INTERNAL_CODE( 3, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_ADD_DEPENDENCY                    = CLCTL_INTERNAL_CODE( 4, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_REMOVE_DEPENDENCY                 = CLCTL_INTERNAL_CODE( 5, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_ADD_OWNER                         = CLCTL_INTERNAL_CODE( 6, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_REMOVE_OWNER                      = CLCTL_INTERNAL_CODE( 7, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    //************ Hole here at 8
    CLCTL_SET_NAME                          = CLCTL_INTERNAL_CODE( 9, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_CLUSTER_NAME_CHANGED              = CLCTL_INTERNAL_CODE( 10, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_CLUSTER_VERSION_CHANGED           = CLCTL_INTERNAL_CODE( 11, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_FIXUP_ON_UPGRADE                  = CLCTL_INTERNAL_CODE( 12, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STARTING_PHASE1                   = CLCTL_INTERNAL_CODE( 13, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STARTING_PHASE2                   = CLCTL_INTERNAL_CODE( 14, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_HOLD_IO                           = CLCTL_INTERNAL_CODE( 15, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_RESUME_IO                         = CLCTL_INTERNAL_CODE( 16, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_FORCE_QUORUM                      = CLCTL_INTERNAL_CODE( 17, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_INITIALIZE                        = CLCTL_INTERNAL_CODE( 18, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_STATE_CHANGE_REASON               = CLCTL_INTERNAL_CODE( 19, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_PROVIDER_STATE_CHANGE             = CLCTL_INTERNAL_CODE( 20, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_LEAVING_GROUP                     = CLCTL_INTERNAL_CODE( 21, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_JOINING_GROUP                     = CLCTL_INTERNAL_CODE( 22, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_FSWITNESS_GET_EPOCH_INFO          = CLCTL_INTERNAL_CODE( 23, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),
    CLCTL_FSWITNESS_SET_EPOCH_INFO          = CLCTL_INTERNAL_CODE( 24, CLUS_ACCESS_WRITE, CLUS_MODIFY ),
    CLCTL_FSWITNESS_RELEASE_LOCK            = CLCTL_INTERNAL_CODE( 25, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_NETNAME_CREDS_NOTIFYCAM           = CLCTL_INTERNAL_CODE( 26, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_NOTIFY_QUORUM_STATUS              = CLCTL_INTERNAL_CODE( 31, CLUS_ACCESS_WRITE, CLUS_MODIFY ),

    CLCTL_GET_OPERATION_CONTEXT             = CLCTL_INTERNAL_CODE( 2106, CLUS_ACCESS_READ, CLUS_NO_MODIFY ),



} CLCTL_CODES;

#endif // _CLUSTER_API_TYPES_

//
// Define macros to generate object specific control codes
//
#define CLUSCTL_RESOURCE_CODE( Function ) ( \
    ((CLUS_OBJECT_RESOURCE << CLUSCTL_OBJECT_SHIFT) | Function) )

#define CLUSCTL_RESOURCE_TYPE_CODE( Function ) ( \
    ((CLUS_OBJECT_RESOURCE_TYPE << CLUSCTL_OBJECT_SHIFT) | Function) )

#define CLUSCTL_GROUP_CODE( Function ) ( \
    ((CLUS_OBJECT_GROUP << CLUSCTL_OBJECT_SHIFT) | Function) )

#define CLUSCTL_NODE_CODE( Function ) ( \
    ((CLUS_OBJECT_NODE << CLUSCTL_OBJECT_SHIFT) | Function) )

#define CLUSCTL_NETWORK_CODE( Function ) ( \
    ((CLUS_OBJECT_NETWORK << CLUSCTL_OBJECT_SHIFT) | Function) )

#define CLUSCTL_NETINTERFACE_CODE( Function ) ( \
    ((CLUS_OBJECT_NETINTERFACE << CLUSCTL_OBJECT_SHIFT) | Function) )

#define CLUSCTL_CLUSTER_CODE( Function ) ( \
    ((CLUS_OBJECT_CLUSTER << CLUSCTL_OBJECT_SHIFT) | Function) )

#define CLUSCTL_USER_CODE( Function, Object ) ( \
     ( (Object) << CLUSCTL_OBJECT_SHIFT)  |  CLCTL_USER_BASE  |  (Function << CLUSCTL_FUNCTION_SHIFT)  )

//
// Define macros to get the function, object, access mode, or User Base flag out
// of a control code
//
#define CLUSCTL_GET_CONTROL_FUNCTION( ControlCode ) \
    ((ControlCode >> CLUSCTL_ACCESS_SHIFT) & CLUSCTL_CONTROL_CODE_MASK)

#define CLUSCTL_GET_ACCESS_MODE( ControlCode ) \
    ((ControlCode >> CLUSCTL_ACCESS_SHIFT) & CLUSCTL_ACCESS_MODE_MASK)

#define CLUSCTL_GET_CONTROL_OBJECT( ControlCode ) \
    ((ControlCode >> CLUSCTL_OBJECT_SHIFT) & CLUSCTL_OBJECT_MASK)

#define CLUSCTL_GET_USER( ControlCode ) \
    ((ControlCode & CLCTL_USER_MASK) >> CLCTL_USER_SHIFT)

#ifndef _CLUSTER_API_TYPES_
//
// Cluster Control Codes for Resources
//
typedef enum CLUSCTL_RESOURCE_CODES {

    //
    // External resource codes
    //
    CLUSCTL_RESOURCE_UNKNOWN =
        CLUSCTL_RESOURCE_CODE( CLCTL_UNKNOWN ),

    CLUSCTL_RESOURCE_GET_CHARACTERISTICS =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_CHARACTERISTICS ),

    CLUSCTL_RESOURCE_GET_FLAGS =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_FLAGS ),

    CLUSCTL_RESOURCE_GET_CLASS_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_CLASS_INFO ),

    CLUSCTL_RESOURCE_GET_REQUIRED_DEPENDENCIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_REQUIRED_DEPENDENCIES ),

    CLUSCTL_RESOURCE_GET_NAME =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_NAME ),

    CLUSCTL_RESOURCE_GET_ID =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_ID ),

    CLUSCTL_RESOURCE_GET_RESOURCE_TYPE =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_RESOURCE_TYPE ),

    CLUSCTL_RESOURCE_ENUM_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_ENUM_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_GET_RO_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_RO_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_GET_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_SET_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_SET_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_VALIDATE_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_VALIDATE_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_GET_COMMON_PROPERTY_FMTS =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_COMMON_PROPERTY_FMTS ),

    CLUSCTL_RESOURCE_ENUM_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_ENUM_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_GET_RO_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_RO_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_GET_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_SET_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_SET_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_VALIDATE_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_CODE( CLCTL_VALIDATE_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_GET_PRIVATE_PROPERTY_FMTS =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_PRIVATE_PROPERTY_FMTS ),

    CLUSCTL_RESOURCE_ADD_REGISTRY_CHECKPOINT =
        CLUSCTL_RESOURCE_CODE( CLCTL_ADD_REGISTRY_CHECKPOINT ),

    CLUSCTL_RESOURCE_DELETE_REGISTRY_CHECKPOINT =
        CLUSCTL_RESOURCE_CODE( CLCTL_DELETE_REGISTRY_CHECKPOINT ),

    CLUSCTL_RESOURCE_GET_REGISTRY_CHECKPOINTS =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_REGISTRY_CHECKPOINTS ),

    CLUSCTL_RESOURCE_ADD_CRYPTO_CHECKPOINT =
        CLUSCTL_RESOURCE_CODE( CLCTL_ADD_CRYPTO_CHECKPOINT ),

    CLUSCTL_RESOURCE_DELETE_CRYPTO_CHECKPOINT =
        CLUSCTL_RESOURCE_CODE( CLCTL_DELETE_CRYPTO_CHECKPOINT ),

    CLUSCTL_RESOURCE_GET_CRYPTO_CHECKPOINTS =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_CRYPTO_CHECKPOINTS ),

    CLUSCTL_RESOURCE_GET_LOADBAL_PROCESS_LIST =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_LOADBAL_PROCESS_LIST ),

    CLUSCTL_RESOURCE_GET_NETWORK_NAME =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_NETWORK_NAME ),

    CLUSCTL_RESOURCE_NETNAME_GET_VIRTUAL_SERVER_TOKEN =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_GET_VIRTUAL_SERVER_TOKEN ),

    CLUSCTL_RESOURCE_NETNAME_SET_PWD_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_SET_PWD_INFO ),

    CLUSCTL_RESOURCE_NETNAME_DELETE_CO =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_DELETE_CO ),

    CLUSCTL_RESOURCE_NETNAME_VALIDATE_VCO =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_VALIDATE_VCO ),

    CLUSCTL_RESOURCE_NETNAME_RESET_VCO =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_RESET_VCO ),

    CLUSCTL_RESOURCE_NETNAME_REPAIR_VCO =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_REPAIR_VCO ),

    CLUSCTL_RESOURCE_NETNAME_REGISTER_DNS_RECORDS =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_REGISTER_DNS_RECORDS ),

    CLUSCTL_RESOURCE_GET_DNS_NAME =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_DNS_NAME ),

    CLUSCTL_RESOURCE_STORAGE_GET_DISK_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_DISK_INFO ),

    CLUSCTL_RESOURCE_STORAGE_IS_PATH_VALID =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_IS_PATH_VALID ),

    CLUSCTL_RESOURCE_QUERY_DELETE =
        CLUSCTL_RESOURCE_CODE( CLCTL_QUERY_DELETE ),

    CLUSCTL_RESOURCE_UPGRADE_DLL =
        CLUSCTL_RESOURCE_CODE( CLCTL_RESOURCE_UPGRADE_DLL ),

    CLUSCTL_RESOURCE_IPADDRESS_RENEW_LEASE =
        CLUSCTL_RESOURCE_CODE( CLCTL_IPADDRESS_RENEW_LEASE ),

    CLUSCTL_RESOURCE_IPADDRESS_RELEASE_LEASE =
        CLUSCTL_RESOURCE_CODE( CLCTL_IPADDRESS_RELEASE_LEASE ),

    CLUSCTL_RESOURCE_ADD_REGISTRY_CHECKPOINT_64BIT =
        CLUSCTL_RESOURCE_CODE( CLCTL_ADD_REGISTRY_CHECKPOINT_64BIT ),

    CLUSCTL_RESOURCE_ADD_REGISTRY_CHECKPOINT_32BIT =
        CLUSCTL_RESOURCE_CODE( CLCTL_ADD_REGISTRY_CHECKPOINT_32BIT ),

    CLUSCTL_RESOURCE_QUERY_MAINTENANCE_MODE =
        CLUSCTL_RESOURCE_CODE( CLCTL_QUERY_MAINTENANCE_MODE ),

    CLUSCTL_RESOURCE_SET_MAINTENANCE_MODE =
        CLUSCTL_RESOURCE_CODE( CLCTL_SET_MAINTENANCE_MODE ),

    CLUSCTL_RESOURCE_STORAGE_SET_DRIVELETTER =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_SET_DRIVELETTER ),

    CLUSCTL_RESOURCE_STORAGE_GET_DISK_INFO_EX =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_DISK_INFO_EX ),

    CLUSCTL_RESOURCE_STORAGE_GET_MOUNTPOINTS =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_MOUNTPOINTS ),

    CLUSCTL_RESOURCE_STORAGE_GET_DIRTY =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_DIRTY ),

    CLUSCTL_RESOURCE_STORAGE_GET_SHARED_VOLUME_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_SHARED_VOLUME_INFO ),

    CLUSCTL_RESOURCE_SET_CSV_MAINTENANCE_MODE =
        CLUSCTL_RESOURCE_CODE( CLCTL_SET_CSV_MAINTENANCE_MODE ),

    CLUSCTL_RESOURCE_ENABLE_SHARED_VOLUME_DIRECTIO =
        CLUSCTL_RESOURCE_CODE( CLCTL_ENABLE_SHARED_VOLUME_DIRECTIO ),

    CLUSCTL_RESOURCE_DISABLE_SHARED_VOLUME_DIRECTIO =
        CLUSCTL_RESOURCE_CODE( CLCTL_DISABLE_SHARED_VOLUME_DIRECTIO ),

    CLUSCTL_RESOURCE_SET_SHARED_VOLUME_BACKUP_MODE =
        CLUSCTL_RESOURCE_CODE( CLCTL_SET_SHARED_VOLUME_BACKUP_MODE ),

    CLUSCTL_RESOURCE_STORAGE_GET_SHARED_VOLUME_PARTITION_NAMES =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_SHARED_VOLUME_PARTITION_NAMES ),

    // get diagnostics info about resource failures
    CLUSCTL_RESOURCE_GET_FAILURE_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_FAILURE_INFO ),

    CLUSCTL_RESOURCE_STORAGE_GET_DISKID =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_DISKID ),

    CLUSCTL_RESOURCE_STORAGE_GET_SHARED_VOLUME_STATES =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_GET_SHARED_VOLUME_STATES ),

    CLUSCTL_RESOURCE_STORAGE_IS_SHARED_VOLUME =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_IS_SHARED_VOLUME ),

    CLUSCTL_RESOURCE_IS_QUORUM_BLOCKED =
        CLUSCTL_RESOURCE_CODE( CLCTL_IS_QUORUM_BLOCKED ),

    CLUSCTL_RESOURCE_POOL_GET_DRIVE_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_POOL_GET_DRIVE_INFO ),

    //
    // Internal resource codes
    //
    CLUSCTL_RESOURCE_DELETE =
        CLUSCTL_RESOURCE_CODE( CLCTL_DELETE ),

    CLUSCTL_RESOURCE_INSTALL_NODE =
        CLUSCTL_RESOURCE_CODE( CLCTL_INSTALL_NODE ),

    CLUSCTL_RESOURCE_EVICT_NODE =
        CLUSCTL_RESOURCE_CODE( CLCTL_EVICT_NODE ),

    CLUSCTL_RESOURCE_ADD_DEPENDENCY =
        CLUSCTL_RESOURCE_CODE( CLCTL_ADD_DEPENDENCY ),

    CLUSCTL_RESOURCE_REMOVE_DEPENDENCY =
        CLUSCTL_RESOURCE_CODE( CLCTL_REMOVE_DEPENDENCY ),

    CLUSCTL_RESOURCE_ADD_OWNER =
        CLUSCTL_RESOURCE_CODE( CLCTL_ADD_OWNER ),

    CLUSCTL_RESOURCE_REMOVE_OWNER =
        CLUSCTL_RESOURCE_CODE( CLCTL_REMOVE_OWNER ),

    CLUSCTL_RESOURCE_SET_NAME =
        CLUSCTL_RESOURCE_CODE( CLCTL_SET_NAME ),

    CLUSCTL_RESOURCE_CLUSTER_NAME_CHANGED =
        CLUSCTL_RESOURCE_CODE( CLCTL_CLUSTER_NAME_CHANGED ),

    CLUSCTL_RESOURCE_CLUSTER_VERSION_CHANGED =
        CLUSCTL_RESOURCE_CODE( CLCTL_CLUSTER_VERSION_CHANGED ),

    CLUSCTL_RESOURCE_FORCE_QUORUM =
        CLUSCTL_RESOURCE_CODE( CLCTL_FORCE_QUORUM ),

    CLUSCTL_RESOURCE_INITIALIZE =
        CLUSCTL_RESOURCE_CODE( CLCTL_INITIALIZE ),

    CLUSCTL_RESOURCE_STATE_CHANGE_REASON =
        CLUSCTL_RESOURCE_CODE( CLCTL_STATE_CHANGE_REASON ),

    CLUSCTL_RESOURCE_PROVIDER_STATE_CHANGE =
        CLUSCTL_RESOURCE_CODE( CLCTL_PROVIDER_STATE_CHANGE ),

    CLUSCTL_RESOURCE_LEAVING_GROUP =
        CLUSCTL_RESOURCE_CODE( CLCTL_LEAVING_GROUP ),

    CLUSCTL_RESOURCE_JOINING_GROUP =
        CLUSCTL_RESOURCE_CODE( CLCTL_JOINING_GROUP ),

    CLUSCTL_RESOURCE_FSWITNESS_GET_EPOCH_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_FSWITNESS_GET_EPOCH_INFO ),

    CLUSCTL_RESOURCE_FSWITNESS_SET_EPOCH_INFO =
        CLUSCTL_RESOURCE_CODE( CLCTL_FSWITNESS_SET_EPOCH_INFO ),

    CLUSCTL_RESOURCE_FSWITNESS_RELEASE_LOCK =
        CLUSCTL_RESOURCE_CODE( CLCTL_FSWITNESS_RELEASE_LOCK ),

    CLUSCTL_RESOURCE_NETNAME_CREDS_NOTIFYCAM =
        CLUSCTL_RESOURCE_CODE( CLCTL_NETNAME_CREDS_NOTIFYCAM ),

    /*
        CLUSCTL_RESOURCE_GET_OPERATION_CONTEXT

        input is GET_OPERATION_CONTEXT_PARAMS

        output should be a property list containing
        CLUSRES_GET_OPERATION_CONTEXT_FLAGS

        and 0->many properties with the name being a resource type name
        and the value being what will be passed along with it
    */

    CLUSCTL_RESOURCE_GET_OPERATION_CONTEXT =
        CLUSCTL_RESOURCE_CODE( CLCTL_GET_OPERATION_CONTEXT ),

    CLUSCTL_RESOURCE_RW_MODIFY_NOOP =
        CLUSCTL_RESOURCE_CODE( CLCTL_RW_MODIFY_NOOP ),

    CLUSCTL_RESOURCE_NOTIFY_QUORUM_STATUS =
        CLUSCTL_RESOURCE_CODE( CLCTL_NOTIFY_QUORUM_STATUS ),

} CLUSCTL_RESOURCE_CODES;

//
// Cluster Control Codes for Resource Types
//
typedef enum CLUSCTL_RESOURCE_TYPE_CODES {

    // External
    CLUSCTL_RESOURCE_TYPE_UNKNOWN =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_UNKNOWN ),

    CLUSCTL_RESOURCE_TYPE_GET_CHARACTERISTICS  =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_CHARACTERISTICS ),

    CLUSCTL_RESOURCE_TYPE_GET_FLAGS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_FLAGS ),

    CLUSCTL_RESOURCE_TYPE_GET_CLASS_INFO =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_CLASS_INFO ),

    CLUSCTL_RESOURCE_TYPE_GET_REQUIRED_DEPENDENCIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_REQUIRED_DEPENDENCIES ),

    CLUSCTL_RESOURCE_TYPE_GET_ARB_TIMEOUT =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_ARB_TIMEOUT ),

    CLUSCTL_RESOURCE_TYPE_ENUM_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_ENUM_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_GET_RO_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_RO_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_GET_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_VALIDATE_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_VALIDATE_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_SET_COMMON_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_SET_COMMON_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_GET_COMMON_PROPERTY_FMTS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_COMMON_PROPERTY_FMTS ),

    CLUSCTL_RESOURCE_TYPE_GET_COMMON_RESOURCE_PROPERTY_FMTS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_COMMON_RESOURCE_PROPERTY_FMTS ),

    CLUSCTL_RESOURCE_TYPE_ENUM_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_ENUM_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_GET_RO_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_RO_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_GET_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_SET_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_SET_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_VALIDATE_PRIVATE_PROPERTIES =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_VALIDATE_PRIVATE_PROPERTIES ),

    CLUSCTL_RESOURCE_TYPE_GET_PRIVATE_PROPERTY_FMTS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_PRIVATE_PROPERTY_FMTS ),

    CLUSCTL_RESOURCE_TYPE_GET_PRIVATE_RESOURCE_PROPERTY_FMTS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_PRIVATE_RESOURCE_PROPERTY_FMTS ),

    CLUSCTL_RESOURCE_TYPE_GET_REGISTRY_CHECKPOINTS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_REGISTRY_CHECKPOINTS ),

    CLUSCTL_RESOURCE_TYPE_GET_CRYPTO_CHECKPOINTS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_GET_CRYPTO_CHECKPOINTS ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_GET_AVAILABLE_DISKS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_GET_AVAILABLE_DISKS ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_SYNC_CLUSDISK_DB =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_SYNC_CLUSDISK_DB ),

    CLUSCTL_RESOURCE_TYPE_NETNAME_VALIDATE_NETNAME =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_VALIDATE_NETNAME ),

    CLUSCTL_RESOURCE_TYPE_NETNAME_GET_OU_FOR_VCO =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_NETNAME_GET_OU_FOR_VCO ),

    CLUSCTL_RESOURCE_TYPE_GEN_APP_VALIDATE_PATH =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_VALIDATE_PATH ),

    CLUSCTL_RESOURCE_TYPE_GEN_APP_VALIDATE_DIRECTORY =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_VALIDATE_DIRECTORY ),

    CLUSCTL_RESOURCE_TYPE_GEN_SCRIPT_VALIDATE_PATH =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_VALIDATE_PATH ),

    CLUSCTL_RESOURCE_TYPE_QUERY_DELETE =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_QUERY_DELETE ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_GET_DRIVELETTERS =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_GET_DRIVELETTERS ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_GET_AVAILABLE_DISKS_EX =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_GET_AVAILABLE_DISKS_EX ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_REMAP_DRIVELETTER =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_REMAP_DRIVELETTER ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_GET_DISKID =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_GET_DISKID ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_GET_RESOURCEID =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_GET_RESOURCEID ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_IS_CLUSTERABLE =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_IS_CLUSTERABLE ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_REMOVE_VM_OWNERSHIP =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STORAGE_REMOVE_VM_OWNERSHIP ),

    CLUSCTL_RESOURCE_TYPE_STORAGE_IS_CSV_FILE =
        CLUSCTL_RESOURCE_CODE( CLCTL_STORAGE_IS_CSV_FILE ),

    CLUSCTL_RESOURCE_TYPE_WITNESS_VALIDATE_PATH =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_VALIDATE_PATH ),

    // Internal
    CLUSCTL_RESOURCE_TYPE_INSTALL_NODE =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_INSTALL_NODE ),

    CLUSCTL_RESOURCE_TYPE_EVICT_NODE =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_EVICT_NODE ),

    CLUSCTL_RESOURCE_TYPE_CLUSTER_VERSION_CHANGED =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_CLUSTER_VERSION_CHANGED ),

    CLUSCTL_RESOURCE_TYPE_FIXUP_ON_UPGRADE =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_FIXUP_ON_UPGRADE ),

    CLUSCTL_RESOURCE_TYPE_STARTING_PHASE1 =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STARTING_PHASE1 ),

    CLUSCTL_RESOURCE_TYPE_STARTING_PHASE2 =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_STARTING_PHASE2 ),

    CLUSCTL_RESOURCE_TYPE_HOLD_IO =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_HOLD_IO ),

    CLUSCTL_RESOURCE_TYPE_RESUME_IO =
        CLUSCTL_RESOURCE_TYPE_CODE( CLCTL_RESUME_IO ),

} CLUSCTL_RESOURCE_TYPE_CODES;

//
// Cluster Control Codes for Groups
//
typedef enum CLUSCTL_GROUP_CODES {

    // External
    CLUSCTL_GROUP_UNKNOWN =
        CLUSCTL_GROUP_CODE( CLCTL_UNKNOWN ),

    CLUSCTL_GROUP_GET_CHARACTERISTICS =
        CLUSCTL_GROUP_CODE( CLCTL_GET_CHARACTERISTICS ),

    CLUSCTL_GROUP_GET_FLAGS =
        CLUSCTL_GROUP_CODE( CLCTL_GET_FLAGS ),

    CLUSCTL_GROUP_GET_NAME =
        CLUSCTL_GROUP_CODE( CLCTL_GET_NAME ),

    CLUSCTL_GROUP_GET_ID =
        CLUSCTL_GROUP_CODE( CLCTL_GET_ID ),

    CLUSCTL_GROUP_ENUM_COMMON_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_ENUM_COMMON_PROPERTIES ),

    CLUSCTL_GROUP_GET_RO_COMMON_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_GET_RO_COMMON_PROPERTIES ),

    CLUSCTL_GROUP_GET_COMMON_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_GET_COMMON_PROPERTIES ),

    CLUSCTL_GROUP_SET_COMMON_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_SET_COMMON_PROPERTIES ),

    CLUSCTL_GROUP_VALIDATE_COMMON_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_VALIDATE_COMMON_PROPERTIES ),

    CLUSCTL_GROUP_ENUM_PRIVATE_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_ENUM_PRIVATE_PROPERTIES ),

    CLUSCTL_GROUP_GET_RO_PRIVATE_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_GET_RO_PRIVATE_PROPERTIES ),

    CLUSCTL_GROUP_GET_PRIVATE_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_GET_PRIVATE_PROPERTIES ),

    CLUSCTL_GROUP_SET_PRIVATE_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_SET_PRIVATE_PROPERTIES ),

    CLUSCTL_GROUP_VALIDATE_PRIVATE_PROPERTIES =
        CLUSCTL_GROUP_CODE( CLCTL_VALIDATE_PRIVATE_PROPERTIES ),

    CLUSCTL_GROUP_QUERY_DELETE =
        CLUSCTL_GROUP_CODE( CLCTL_QUERY_DELETE ),

    CLUSCTL_GROUP_GET_COMMON_PROPERTY_FMTS=
        CLUSCTL_GROUP_CODE( CLCTL_GET_COMMON_PROPERTY_FMTS ),

    CLUSCTL_GROUP_GET_PRIVATE_PROPERTY_FMTS=
        CLUSCTL_GROUP_CODE( CLCTL_GET_PRIVATE_PROPERTY_FMTS ),

    CLUSCTL_GROUP_GET_FAILURE_INFO =
        CLUSCTL_GROUP_CODE( CLCTL_GET_FAILURE_INFO ),


    // Internal

} CLUSCTL_GROUP_CODES;

//
// Cluster Control Codes for Nodes
//
typedef enum CLUSCTL_NODE_CODES {

    // External
    CLUSCTL_NODE_UNKNOWN =
        CLUSCTL_NODE_CODE( CLCTL_UNKNOWN ),

    CLUSCTL_NODE_GET_CHARACTERISTICS =
        CLUSCTL_NODE_CODE( CLCTL_GET_CHARACTERISTICS ),

    CLUSCTL_NODE_GET_FLAGS =
        CLUSCTL_NODE_CODE( CLCTL_GET_FLAGS ),

    CLUSCTL_NODE_GET_NAME =
        CLUSCTL_NODE_CODE( CLCTL_GET_NAME ),

    CLUSCTL_NODE_GET_ID =
        CLUSCTL_NODE_CODE( CLCTL_GET_ID ),

    CLUSCTL_NODE_ENUM_COMMON_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_ENUM_COMMON_PROPERTIES ),

    CLUSCTL_NODE_GET_RO_COMMON_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_GET_RO_COMMON_PROPERTIES ),

    CLUSCTL_NODE_GET_COMMON_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_GET_COMMON_PROPERTIES ),

    CLUSCTL_NODE_SET_COMMON_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_SET_COMMON_PROPERTIES ),

    CLUSCTL_NODE_VALIDATE_COMMON_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_VALIDATE_COMMON_PROPERTIES ),

    CLUSCTL_NODE_ENUM_PRIVATE_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_ENUM_PRIVATE_PROPERTIES ),

    CLUSCTL_NODE_GET_RO_PRIVATE_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_GET_RO_PRIVATE_PROPERTIES ),

    CLUSCTL_NODE_GET_PRIVATE_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_GET_PRIVATE_PROPERTIES ),

    CLUSCTL_NODE_SET_PRIVATE_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_SET_PRIVATE_PROPERTIES ),

    CLUSCTL_NODE_VALIDATE_PRIVATE_PROPERTIES =
        CLUSCTL_NODE_CODE( CLCTL_VALIDATE_PRIVATE_PROPERTIES ),

    CLUSCTL_NODE_GET_COMMON_PROPERTY_FMTS=
        CLUSCTL_NODE_CODE( CLCTL_GET_COMMON_PROPERTY_FMTS ),

    CLUSCTL_NODE_GET_PRIVATE_PROPERTY_FMTS=
        CLUSCTL_NODE_CODE( CLCTL_GET_PRIVATE_PROPERTY_FMTS ),

    CLUSCTL_NODE_GET_CLUSTER_SERVICE_ACCOUNT_NAME =
        CLUSCTL_NODE_CODE( CLCTL_GET_CLUSTER_SERVICE_ACCOUNT_NAME ),


} CLUSCTL_NODE_CODES;

//
// Cluster Control Codes for Networks
//
typedef enum CLUSCTL_NETWORK_CODES {

    // External
    CLUSCTL_NETWORK_UNKNOWN =
        CLUSCTL_NETWORK_CODE( CLCTL_UNKNOWN ),

    CLUSCTL_NETWORK_GET_CHARACTERISTICS =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_CHARACTERISTICS ),

    CLUSCTL_NETWORK_GET_FLAGS =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_FLAGS ),

    CLUSCTL_NETWORK_GET_NAME =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_NAME ),

    CLUSCTL_NETWORK_GET_ID =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_ID ),

    CLUSCTL_NETWORK_ENUM_COMMON_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_ENUM_COMMON_PROPERTIES ),

    CLUSCTL_NETWORK_GET_RO_COMMON_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_RO_COMMON_PROPERTIES ),

    CLUSCTL_NETWORK_GET_COMMON_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_COMMON_PROPERTIES ),

    CLUSCTL_NETWORK_SET_COMMON_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_SET_COMMON_PROPERTIES ),

    CLUSCTL_NETWORK_VALIDATE_COMMON_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_VALIDATE_COMMON_PROPERTIES ),

    CLUSCTL_NETWORK_ENUM_PRIVATE_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_ENUM_PRIVATE_PROPERTIES ),

    CLUSCTL_NETWORK_GET_RO_PRIVATE_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_RO_PRIVATE_PROPERTIES ),

    CLUSCTL_NETWORK_GET_PRIVATE_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_GET_PRIVATE_PROPERTIES ),

    CLUSCTL_NETWORK_SET_PRIVATE_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_SET_PRIVATE_PROPERTIES ),

    CLUSCTL_NETWORK_VALIDATE_PRIVATE_PROPERTIES =
        CLUSCTL_NETWORK_CODE( CLCTL_VALIDATE_PRIVATE_PROPERTIES ),

    CLUSCTL_NETWORK_GET_COMMON_PROPERTY_FMTS=
        CLUSCTL_NETWORK_CODE( CLCTL_GET_COMMON_PROPERTY_FMTS ),

    CLUSCTL_NETWORK_GET_PRIVATE_PROPERTY_FMTS=
        CLUSCTL_NETWORK_CODE( CLCTL_GET_PRIVATE_PROPERTY_FMTS )

} CLUSCTL_NETWORK_CODES;

//
// Cluster Control Codes for Network Interfaces
//
typedef enum CLUSCTL_NETINTERFACE_CODES {

    // External
    CLUSCTL_NETINTERFACE_UNKNOWN =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_UNKNOWN ),

    CLUSCTL_NETINTERFACE_GET_CHARACTERISTICS =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_CHARACTERISTICS ),

    CLUSCTL_NETINTERFACE_GET_FLAGS =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_FLAGS ),

    CLUSCTL_NETINTERFACE_GET_NAME =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_NAME ),

    CLUSCTL_NETINTERFACE_GET_ID =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_ID ),

    CLUSCTL_NETINTERFACE_GET_NODE =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_NODE ),

    CLUSCTL_NETINTERFACE_GET_NETWORK =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_NETWORK ),

    CLUSCTL_NETINTERFACE_ENUM_COMMON_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_ENUM_COMMON_PROPERTIES ),

    CLUSCTL_NETINTERFACE_GET_RO_COMMON_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_RO_COMMON_PROPERTIES ),

    CLUSCTL_NETINTERFACE_GET_COMMON_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_COMMON_PROPERTIES ),

    CLUSCTL_NETINTERFACE_SET_COMMON_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_SET_COMMON_PROPERTIES ),

    CLUSCTL_NETINTERFACE_VALIDATE_COMMON_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_VALIDATE_COMMON_PROPERTIES ),

    CLUSCTL_NETINTERFACE_ENUM_PRIVATE_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_ENUM_PRIVATE_PROPERTIES ),

    CLUSCTL_NETINTERFACE_GET_RO_PRIVATE_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_RO_PRIVATE_PROPERTIES ),

    CLUSCTL_NETINTERFACE_GET_PRIVATE_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_PRIVATE_PROPERTIES ),

    CLUSCTL_NETINTERFACE_SET_PRIVATE_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_SET_PRIVATE_PROPERTIES ),

    CLUSCTL_NETINTERFACE_VALIDATE_PRIVATE_PROPERTIES =
        CLUSCTL_NETINTERFACE_CODE( CLCTL_VALIDATE_PRIVATE_PROPERTIES ),

    CLUSCTL_NETINTERFACE_GET_COMMON_PROPERTY_FMTS=
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_COMMON_PROPERTY_FMTS ),

    CLUSCTL_NETINTERFACE_GET_PRIVATE_PROPERTY_FMTS=
        CLUSCTL_NETINTERFACE_CODE( CLCTL_GET_PRIVATE_PROPERTY_FMTS )

} CLUSCTL_NETINTERFACE_CODES;

//
// Cluster Control Codes for Clusters
//
typedef enum CLUSCTL_CLUSTER_CODES {

    // External
    CLUSCTL_CLUSTER_UNKNOWN =
        CLUSCTL_CLUSTER_CODE( CLCTL_UNKNOWN ),

    CLUSCTL_CLUSTER_GET_FQDN =
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_FQDN ),

    CLUSCTL_CLUSTER_ENUM_COMMON_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_ENUM_COMMON_PROPERTIES ),

    CLUSCTL_CLUSTER_GET_RO_COMMON_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_RO_COMMON_PROPERTIES ),

    CLUSCTL_CLUSTER_GET_COMMON_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_COMMON_PROPERTIES ),

    CLUSCTL_CLUSTER_SET_COMMON_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_SET_COMMON_PROPERTIES ),

    CLUSCTL_CLUSTER_VALIDATE_COMMON_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_VALIDATE_COMMON_PROPERTIES ),

    CLUSCTL_CLUSTER_ENUM_PRIVATE_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_ENUM_PRIVATE_PROPERTIES ),

    CLUSCTL_CLUSTER_GET_RO_PRIVATE_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_RO_PRIVATE_PROPERTIES ),

    CLUSCTL_CLUSTER_GET_PRIVATE_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_PRIVATE_PROPERTIES ),

    CLUSCTL_CLUSTER_SET_PRIVATE_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_SET_PRIVATE_PROPERTIES ),

    CLUSCTL_CLUSTER_VALIDATE_PRIVATE_PROPERTIES =
        CLUSCTL_CLUSTER_CODE( CLCTL_VALIDATE_PRIVATE_PROPERTIES ),

    CLUSCTL_CLUSTER_GET_COMMON_PROPERTY_FMTS=
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_COMMON_PROPERTY_FMTS ),

    CLUSCTL_CLUSTER_GET_PRIVATE_PROPERTY_FMTS=
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_PRIVATE_PROPERTY_FMTS ),

    CLUSCTL_CLUSTER_CHECK_VOTER_EVICT=
        CLUSCTL_CLUSTER_CODE( CLCTL_CHECK_VOTER_EVICT ),

    CLUSCTL_CLUSTER_CHECK_VOTER_DOWN=
        CLUSCTL_CLUSTER_CODE( CLCTL_CHECK_VOTER_DOWN ),

    CLUSCTL_CLUSTER_SHUTDOWN=
        CLUSCTL_CLUSTER_CODE( CLCTL_SHUTDOWN ),

    CLUSCTL_CLUSTER_BATCH_BLOCK_KEY =
        CLUSCTL_CLUSTER_CODE( CLCTL_BATCH_BLOCK_KEY ),

    CLUSCTL_CLUSTER_BATCH_UNBLOCK_KEY =
        CLUSCTL_CLUSTER_CODE( CLCTL_BATCH_UNBLOCK_KEY ),

    CLUSCTL_CLUSTER_GET_SHARED_VOLUME_ID =
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_SHARED_VOLUME_ID ),

    CLUSCTL_CLUSTER_GET_CLUSDB_TIMESTAMP =
        CLUSCTL_CLUSTER_CODE( CLCTL_GET_CLUSDB_TIMESTAMP ),


} CLUSCTL_CLUSTER_CODES;

//
// Cluster Resource Class types
//
typedef enum CLUSTER_RESOURCE_CLASS {
    CLUS_RESCLASS_UNKNOWN = 0,
    CLUS_RESCLASS_STORAGE,
    CLUS_RESCLASS_NETWORK,
    CLUS_RESCLASS_USER = 32768
} CLUSTER_RESOURCE_CLASS;

//
// Define Resource SubClass bits
//
// legacy subclass struct
//
typedef enum CLUS_RESSUBCLASS {
    CLUS_RESSUBCLASS_SHARED =                       0x80000000
} CLUS_RESSUBCLASS;

typedef enum CLUS_RESSUBCLASS_STORAGE {
    CLUS_RESSUBCLASS_STORAGE_SHARED_BUS =           0x80000000
} CLUS_RESSUBCLASS_STORAGE;

typedef enum CLUS_RESSUBCLASS_NETWORK {
    CLUS_RESSUBCLASS_NETWORK_INTERNET_PROTOCOL =    0x80000000    // Identifies IP address providers
} CLUS_RESSUBCLASS_NETWORK;

//
// Cluster Characteristics used by resource types and resources
//
typedef enum CLUS_CHARACTERISTICS {
    CLUS_CHAR_UNKNOWN                       = 0x00000000,
    CLUS_CHAR_QUORUM                        = 0x00000001,
    CLUS_CHAR_DELETE_REQUIRES_ALL_NODES     = 0x00000002,
    CLUS_CHAR_LOCAL_QUORUM                  = 0x00000004,       // deprecated in Vista
    CLUS_CHAR_LOCAL_QUORUM_DEBUG            = 0x00000008,       // deprecated in Vista
    CLUS_CHAR_REQUIRES_STATE_CHANGE_REASON  = 0x00000010,
    CLUS_CHAR_BROADCAST_DELETE              = 0x00000020,
    CLUS_CHAR_SINGLE_CLUSTER_INSTANCE       = 0x00000040,       // only one resource of this type allowed per cluster
    CLUS_CHAR_SINGLE_GROUP_INSTANCE         = 0x00000080,       // only one resource of this type allowed per group
    CLUS_CHAR_COEXIST_IN_SHARED_VOLUME_GROUP= 0x00000100,
    CLUS_CHAR_PLACEMENT_DATA                = 0x00000200,
    CLUS_CHAR_MONITOR_DETACH                = 0x00000400,
    CLUS_CHAR_MONITOR_REATTACH              = 0x00000800,
    CLUS_CHAR_OPERATION_CONTEXT             = 0x00001000,
    CLUS_CHAR_CLONES                        = 0x00002000,
    CLUS_CHAR_NOT_PREEMPTABLE               = 0x00004000
} CLUS_CHARACTERISTICS;

//
// Cluster Flags
//
typedef enum CLUS_FLAGS {
    CLUS_FLAG_CORE          = 0x00000001
}  CLUS_FLAGS;


//
// Cluster Resource Property Helper Structures
//

#if ( !MIDL_PASS && !__midl )

// Property syntax.  Used for property names and values.
typedef union CLUSPROP_SYNTAX {
    DWORD dw;
    struct {
        WORD wFormat;
        WORD wType;
    } DUMMYSTRUCTNAME;
} CLUSPROP_SYNTAX, *PCLUSPROP_SYNTAX;

// Property value.
typedef struct CLUSPROP_VALUE {
    CLUSPROP_SYNTAX Syntax;
    DWORD           cbLength;
} CLUSPROP_VALUE, *PCLUSPROP_VALUE;

// Binary property value.
#ifdef __cplusplus
typedef struct CLUSPROP_BINARY : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_BINARY {
    CLUSPROP_VALUE;
#endif
    BYTE            rgb[];
} CLUSPROP_BINARY, *PCLUSPROP_BINARY;

// WORD property value.
#ifdef __cplusplus
typedef struct CLUSPROP_WORD : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_WORD {
    CLUSPROP_VALUE;
#endif
    WORD            w;
} CLUSPROP_WORD, *PCLUSPROP_WORD;

// DWORD property value.
#ifdef __cplusplus
typedef struct CLUSPROP_DWORD : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_DWORD {
    CLUSPROP_VALUE;
#endif
    DWORD           dw;
} CLUSPROP_DWORD, *PCLUSPROP_DWORD;

// LONG property value.
#ifdef __cplusplus
typedef struct CLUSPROP_LONG : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_LONG {
    CLUSPROP_VALUE;
#endif
    LONG           l;
} CLUSPROP_LONG, *PCLUSPROP_LONG;

// String property value.
#ifdef __cplusplus
typedef struct CLUSPROP_SZ : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_SZ {
    CLUSPROP_VALUE;
#endif
    WCHAR           sz[];
} CLUSPROP_SZ, *PCLUSPROP_SZ;

// Multiple string property value.
typedef CLUSPROP_SZ CLUSPROP_MULTI_SZ, *PCLUSPROP_MULTI_SZ;

// Property name.
typedef CLUSPROP_SZ CLUSPROP_PROPERTY_NAME, *PCLUSPROP_PROPERTY_NAME;

// Unsigned large Integer property value.
#ifdef __cplusplus
typedef struct CLUSPROP_ULARGE_INTEGER
    : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_ULARGE_INTEGER {
    CLUSPROP_VALUE;
#endif
    ULARGE_INTEGER li;
} CLUSPROP_ULARGE_INTEGER;

typedef CLUSPROP_ULARGE_INTEGER UNALIGNED *PCLUSPROP_ULARGE_INTEGER;

// Signed large Integer property value.
#ifdef __cplusplus
typedef struct CLUSPROP_LARGE_INTEGER
    : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_LARGE_INTEGER {
    CLUSPROP_VALUE;
#endif
    LARGE_INTEGER li;
} CLUSPROP_LARGE_INTEGER;

typedef CLUSPROP_LARGE_INTEGER UNALIGNED *PCLUSPROP_LARGE_INTEGER;

// Security Descriptor property value.
#ifdef __cplusplus
typedef struct CLUSPROP_SECURITY_DESCRIPTOR : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_SECURITY_DESCRIPTOR {
    CLUSPROP_VALUE;
#endif
    union {
        SECURITY_DESCRIPTOR_RELATIVE    sd;
        BYTE                            rgbSecurityDescriptor[];
    } DUMMYUNIONNAME;
} CLUSPROP_SECURITY_DESCRIPTOR, *PCLUSPROP_SECURITY_DESCRIPTOR;

// FILETIME Time property value.
#ifdef __cplusplus
typedef struct CLUSPROP_FILETIME
    : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_FILETIME {
    CLUSPROP_VALUE;
#endif
    FILETIME ft;
} CLUSPROP_FILETIME, *PCLUSPROP_FILETIME;

// Resource class info returned by CLCTL_GET_CLASS_INFO control functions.
typedef struct CLUS_RESOURCE_CLASS_INFO {
    union {
        struct {
            union {
                DWORD                   dw;
                CLUSTER_RESOURCE_CLASS  rc;
                } DUMMYUNIONNAME;
            DWORD           SubClass;
        } DUMMYSTRUCTNAME;
        ULARGE_INTEGER      li;
    } DUMMYUNIONNAME;
} CLUS_RESOURCE_CLASS_INFO, *PCLUS_RESOURCE_CLASS_INFO;

// Resource class property value.
#ifdef __cplusplus
typedef struct CLUSPROP_RESOURCE_CLASS
    : public CLUSPROP_VALUE {
#else
typedef struct CLUSPROP_RESOURCE_CLASS {
    CLUSPROP_VALUE;
#endif
    CLUSTER_RESOURCE_CLASS rc;
} CLUSPROP_RESOURCE_CLASS, *PCLUSPROP_RESOURCE_CLASS;

// Resource class info property value.
#ifdef __cplusplus
typedef struct CLUSPROP_RESOURCE_CLASS_INFO
    : public CLUSPROP_VALUE
    , public CLUS_RESOURCE_CLASS_INFO {
#else
typedef struct CLUSPROP_RESOURCE_CLASS_INFO {
    CLUSPROP_VALUE;
    CLUS_RESOURCE_CLASS_INFO;
#endif
} CLUSPROP_RESOURCE_CLASS_INFO, *PCLUSPROP_RESOURCE_CLASS_INFO;

// One entry from list returned by CLCTL_GET_REQUIRED_DEPENDENCIES control functions.
typedef union CLUSPROP_REQUIRED_DEPENDENCY {
    CLUSPROP_VALUE          Value;
    CLUSPROP_RESOURCE_CLASS ResClass;
    CLUSPROP_SZ             ResTypeName;
} CLUSPROP_REQUIRED_DEPENDENCY, *PCLUSPROP_REQUIRED_DEPENDENCY;

typedef CLUSPROP_DWORD CLUSPROP_DISK_NUMBER, *PCLUSPROP_DISK_NUMBER;

#endif // MIDL_PASS
#endif // _CLUSTER_API_TYPES_

#ifndef _CLUSTER_API_TYPES_

// Disk partition information flags.
typedef enum CLUSPROP_PIFLAGS {
    CLUSPROP_PIFLAG_STICKY          = 0x00000001,
    CLUSPROP_PIFLAG_REMOVABLE       = 0x00000002,
    CLUSPROP_PIFLAG_USABLE          = 0x00000004,
    CLUSPROP_PIFLAG_DEFAULT_QUORUM  = 0x00000008,
    CLUSPROP_PIFLAG_USABLE_FOR_CSV  = 0x00000010
} CLUSPROP_PIFLAGS;

#if ( !MIDL_PASS && !__midl )
//force quorum information, useful for QON type resources
//to be able to continue operation without the quorum
typedef struct CLUS_FORCE_QUORUM_INFO {
    DWORD           dwSize;             // size of this struct including the nodes list.
    DWORD           dwNodeBitMask;      // a bit mask representing the max assumed node set
    DWORD           dwMaxNumberofNodes; // the number of bits set in the mask
    WCHAR           multiszNodeList[1]; // Multi sz list of nodes
} CLUS_FORCE_QUORUM_INFO, *PCLUS_FORCE_QUORUM_INFO;


// Disk partition information.
typedef struct CLUS_PARTITION_INFO {
    DWORD           dwFlags;
    WCHAR           szDeviceName[MAX_PATH];
    WCHAR           szVolumeLabel[MAX_PATH];
    DWORD           dwSerialNumber;
    DWORD           rgdwMaximumComponentLength;
    DWORD           dwFileSystemFlags;
    WCHAR           szFileSystem[32];
} CLUS_PARTITION_INFO, *PCLUS_PARTITION_INFO;

// Disk partition information ex

// NOTE: property lists are 32b aligned which means this structure could be returned with a starting
// address that is 32b. aligned, i.e., an address ending in 0, 4, 8 or 0xC. The distance to the
// ULARGE_INTEGER members are properly aligned when the address of the structure ends with 0 or 8 but
// are unaligned when the structure addresses ends with 4 or 0xC. Since it is unpredictable as to
// the alignment of the structure's address, the developer must always access the ULARGE_INTEGER members
// with unaligned pointers or copy the data to another, aligned structure.

typedef struct CLUS_PARTITION_INFO_EX {
    DWORD           dwFlags;
    WCHAR           szDeviceName[MAX_PATH];
    WCHAR           szVolumeLabel[MAX_PATH];
    DWORD           dwSerialNumber;
    DWORD           rgdwMaximumComponentLength;
    DWORD           dwFileSystemFlags;
    WCHAR           szFileSystem[32];
    ULARGE_INTEGER  TotalSizeInBytes;
    ULARGE_INTEGER  FreeSizeInBytes;
    DWORD           DeviceNumber;
    DWORD           PartitionNumber;
    GUID            VolumeGuid;
} CLUS_PARTITION_INFO_EX, *PCLUS_PARTITION_INFO_EX;

typedef enum _CLUSTER_CSV_VOLUME_FAULT_STATE {
    VolumeStateNoFaults       = 0x00000000,
    VolumeStateNoDirectIO     = 0x00000001,
    VolumeStateNoAccess       = 0x00000002,
    VolumeStateInMaintenance  = 0x00000004,
    VolumeStateDismounted     = 0x00000008
} CLUSTER_CSV_VOLUME_FAULT_STATE, *PCLUSTER_CSV_VOLUME_FAULT_STATE;

typedef enum _CLUSTER_SHARED_VOLUME_BACKUP_STATE {
    VolumeBackupNone        = 0x00000000,
    VolumeBackupInProgress  = 0x00000001
} CLUSTER_SHARED_VOLUME_BACKUP_STATE, *PCLUSTER_SHARED_VOLUME_BACKUP_STATE;

typedef struct _CLUS_CSV_VOLUME_INFO {
    ULARGE_INTEGER                 VolumeOffset;
    DWORD                          PartitionNumber;
    CLUSTER_CSV_VOLUME_FAULT_STATE FaultState;
    CLUSTER_SHARED_VOLUME_BACKUP_STATE BackupState;
    WCHAR                          szVolumeFriendlyName[MAX_PATH];
    WCHAR                          szVolumeName[50]; // CSV volume name
} CLUS_CSV_VOLUME_INFO, *PCLUS_CSV_VOLUME_INFO;

typedef struct _CLUS_CSV_VOLUME_NAME {
    LARGE_INTEGER                  VolumeOffset;
    WCHAR                          szVolumeName[MAX_PATH];
    WCHAR                          szRootPath[MAX_PATH+3];
} CLUS_CSV_VOLUME_NAME, *PCLUS_CSV_VOLUME_NAME;

typedef enum _CLUSTER_SHARED_VOLUME_STATE
{
    SharedVolumeStateUnavailable = 0,
    SharedVolumeStatePaused      = 1,
    SharedVolumeStateActive      = 2,
    SharedVolumeStateActiveRedirected = 3,
    SharedVolumeStateActiveVolumeRedirected = 4

} CLUSTER_SHARED_VOLUME_STATE, *PCLUSTER_SHARED_VOLUME_STATE;

typedef struct _CLUSTER_SHARED_VOLUME_STATE_INFO
{
    WCHAR szVolumeName[MAX_PATH];
    WCHAR szNodeName[MAX_PATH];
    CLUSTER_SHARED_VOLUME_STATE VolumeState;
} CLUSTER_SHARED_VOLUME_STATE_INFO, *PCLUSTER_SHARED_VOLUME_STATE_INFO;


typedef struct _CLUS_CHKDSK_INFO {
    DWORD PartitionNumber;
    DWORD ChkdskState;
    DWORD FileIdCount;
    ULONGLONG FileIdList[1];   // variable length array
} CLUS_CHKDSK_INFO, *PCLUS_CHKDSK_INFO;

typedef struct _CLUS_DISK_NUMBER_INFO {
    DWORD DiskNumber;
    DWORD BytesPerSector;
} CLUS_DISK_NUMBER_INFO, *PCLUS_DISK_NUMBER_INFO;

typedef struct _CLUS_SHARED_VOLUME_BACKUP_MODE {
    CLUSTER_SHARED_VOLUME_BACKUP_STATE BackupState;
    DWORD DelayTimerInSecs;
    WCHAR VolumeName[MAX_PATH];
} CLUS_SHARED_VOLUME_BACKUP_MODE, *PCLUS_SHARED_VOLUME_BACKUP_MODE;

// Disk partition information property value.
#ifdef __cplusplus
typedef struct CLUSPROP_PARTITION_INFO
    : public CLUSPROP_VALUE
    , public CLUS_PARTITION_INFO {
#else
typedef struct CLUSPROP_PARTITION_INFO {
    CLUSPROP_VALUE;
    CLUS_PARTITION_INFO;
#endif
} CLUSPROP_PARTITION_INFO, *PCLUSPROP_PARTITION_INFO;

// Disk partition information ex property value.
#ifdef __cplusplus
typedef struct CLUSPROP_PARTITION_INFO_EX
    : public CLUSPROP_VALUE
    , public CLUS_PARTITION_INFO_EX {
#else
typedef struct CLUSPROP_PARTITION_INFO_EX {
    CLUSPROP_VALUE;
    CLUS_PARTITION_INFO_EX;
#endif
} CLUSPROP_PARTITION_INFO_EX;

typedef CLUSPROP_PARTITION_INFO_EX UNALIGNED *PCLUSPROP_PARTITION_INFO_EX;

//
// FT set information.
//
typedef struct CLUS_FTSET_INFO {
    DWORD           dwRootSignature;
    DWORD           dwFtType;
} CLUS_FTSET_INFO, *PCLUS_FTSET_INFO;

// Disk partition information property value.
#ifdef __cplusplus
typedef struct CLUSPROP_FTSET_INFO
    : public CLUSPROP_VALUE
    , public CLUS_FTSET_INFO {
#else
typedef struct CLUSPROP_FTSET_INFO {
    CLUSPROP_VALUE;
    CLUS_FTSET_INFO;
#endif
} CLUSPROP_FTSET_INFO, *PCLUSPROP_FTSET_INFO;

// Disk Signature property value.
typedef CLUSPROP_DWORD CLUSPROP_DISK_SIGNATURE, *PCLUSPROP_DISK_SIGNATURE;

// SCSI Address.
typedef struct CLUS_SCSI_ADDRESS {
    union {
        struct {
            UCHAR PortNumber;
            UCHAR PathId;
            UCHAR TargetId;
            UCHAR Lun;
        } DUMMYSTRUCTNAME;
        DWORD   dw;
    } DUMMYUNIONNAME;
} CLUS_SCSI_ADDRESS, *PCLUS_SCSI_ADDRESS;

// SCSI Address property value.
#ifdef __cplusplus
typedef struct CLUSPROP_SCSI_ADDRESS
    : public CLUSPROP_VALUE
    , public CLUS_SCSI_ADDRESS {
#else
typedef struct CLUSPROP_SCSI_ADDRESS {
    CLUSPROP_VALUE;
    CLUS_SCSI_ADDRESS;
#endif
} CLUSPROP_SCSI_ADDRESS, *PCLUSPROP_SCSI_ADDRESS;

//
// input structure for CLUSCTL_RESOURCE_NETNAME_GET_VIRTUAL_SERVER_TOKEN
//
typedef struct CLUS_NETNAME_VS_TOKEN_INFO {
    DWORD ProcessID;
    DWORD DesiredAccess;
    BOOL  InheritHandle;
} CLUS_NETNAME_VS_TOKEN_INFO, *PCLUS_NETNAME_VS_TOKEN_INFO;


//
// input structure for CLUSCTL_RESOURCE_NETNAME_SET_PWD
//
#define MAX_OBJECTID 64
#define MAX_CO_PASSWORD_LENGTH 16
#define GUID_PRESENT 0x1
#define CREATEDC_PRESENT 0x2

#define MAX_CREATINGDC_LENGTH 256

typedef struct CLUS_NETNAME_PWD_INFO {
    DWORD Flags;
    WCHAR Password[MAX_CO_PASSWORD_LENGTH];
    WCHAR CreatingDC[MAX_CREATINGDC_LENGTH+2];  // including the '\\' prefix
    WCHAR ObjectGuid[MAX_OBJECTID];                          //
} CLUS_NETNAME_PWD_INFO, *PCLUS_NETNAME_PWD_INFO;

//
// input structure for CLUSCTL_RESOURCE_DNN_SEND_LEADER_STATUS
//
typedef struct CLUS_DNN_LEADER_STATUS {
    BOOL IsOnline; // Indicates if the leader is online or is shutting down
    BOOL IsFileServerPresent; // Indicates if a file server is depending on the netname
} CLUS_DNN_LEADER_STATUS , *PCLUS_DNN_LEADER_STATUS;

//
// input structure for CLUSCTL_RESOURCE_DNN_UPDATE_SODAFS_CLONE_STATUS
//
typedef struct CLUS_DNN_SODAFS_CLONE_STATUS {
    DWORD NodeId; // Indicates the cluster assigned node id of the SODAFS clone
    CLUSTER_RESOURCE_STATE Status; // Indicates the status of the clone (Online/Failed)
} CLUS_DNN_SODAFS_CLONE_STATUS , *PCLUS_DNN_SODAFS_CLONE_STATUS;

//
// A single IP info entry consisting of the node and the IP address
//
typedef struct CLUS_NETNAME_IP_INFO_ENTRY {
    DWORD NodeId; // Node to which this IP belongs to
    DWORD AddressSize;
    BYTE Address[ANYSIZE_ARRAY]; // The actual IP info
} CLUS_NETNAME_IP_INFO_ENTRY, *PCLUS_NETNAME_IP_INFO_ENTRY;

//
// input structure for CLUSCTL_RESOURCE_NETNAME_SEND_IP_INFO_FOR_MULTICHANNEL
//
#define DNS_LENGTH 64
typedef struct CLUS_NETNAME_IP_INFO_FOR_MULTICHANNEL {
    WCHAR  szName[DNS_LENGTH]; // The actual name
    DWORD NumEntries; // Number of CLUS_NETNAME_IP_INFO_ENTRY
    CLUS_NETNAME_IP_INFO_ENTRY IpInfo[ANYSIZE_ARRAY]; // The actual IP Info as an array
} CLUS_NETNAME_IP_INFO_FOR_MULTICHANNEL, *PCLUS_NETNAME_IP_INFO_FOR_MULTICHANNEL;

//
// input/output structure associated with Maintenance Mode
//
typedef struct CLUS_MAINTENANCE_MODE_INFO {
    BOOL  InMaintenance;
} CLUS_MAINTENANCE_MODE_INFO, *PCLUS_MAINTENANCE_MODE_INFO;

typedef struct CLUS_CSV_MAINTENANCE_MODE_INFO {
    BOOL  InMaintenance;
    WCHAR VolumeName[MAX_PATH];
} CLUS_CSV_MAINTENANCE_MODE_INFO, *PCLUS_CSV_MAINTENANCE_MODE_INFO;

#define MAINTENANCE_MODE_V2_SIG 0xabbaf00f

typedef enum _MAINTENANCE_MODE_TYPE_ENUM {
    MaintenanceModeTypeDisableIsAliveCheck=1,
    MaintenanceModeTypeOfflineResource=2,
    MaintenanceModeTypeUnclusterResource=3,
} MAINTENANCE_MODE_TYPE_ENUM, *PMAINTENANCE_MODE_TYPE_ENUM;

typedef struct _CLUS_MAINTENANCE_MODE_INFOEX {
    BOOL                        InMaintenance;
    MAINTENANCE_MODE_TYPE_ENUM  MaintainenceModeType;
    CLUSTER_RESOURCE_STATE      InternalState;
    DWORD                       Signature;
} CLUS_MAINTENANCE_MODE_INFOEX, *PCLUS_MAINTENANCE_MODE_INFOEX;

typedef struct _CLUS_STORAGE_SET_DRIVELETTER {
    DWORD    PartitionNumber;
    DWORD    DriveLetterMask;
} CLUS_STORAGE_SET_DRIVELETTER, *PCLUS_STORAGE_SET_DRIVELETTER;

typedef struct _CLUS_STORAGE_GET_AVAILABLE_DRIVELETTERS {
    DWORD    AvailDrivelettersMask;
} CLUS_STORAGE_GET_AVAILABLE_DRIVELETTERS, *PCLUS_STORAGE_GET_AVAILABLE_DRIVELETTERS;

typedef struct _CLUS_STORAGE_REMAP_DRIVELETTER {
    DWORD    CurrentDriveLetterMask;
    DWORD    TargetDriveLetterMask;
} CLUS_STORAGE_REMAP_DRIVELETTER, *PCLUS_STORAGE_REMAP_DRIVELETTER;

typedef struct _CLUS_PROVIDER_STATE_CHANGE_INFO {
    DWORD                   dwSize;             // size of this struct including the provider name.
    CLUSTER_RESOURCE_STATE  resourceState;
    WCHAR                   szProviderId[1];
} CLUS_PROVIDER_STATE_CHANGE_INFO, *PCLUS_PROVIDER_STATE_CHANGE_INFO;

// Beginning of a property list.
typedef struct CLUSPROP_LIST {
    DWORD                   nPropertyCount;
    CLUSPROP_PROPERTY_NAME  PropertyName;
} CLUSPROP_LIST, *PCLUSPROP_LIST;

//
// values for IP Address' EnableNetbios property
//
typedef enum CLUSPROP_IPADDR_ENABLENETBIOS {
    CLUSPROP_IPADDR_ENABLENETBIOS_DISABLED = 0,
    CLUSPROP_IPADDR_ENABLENETBIOS_ENABLED,
    CLUSPROP_IPADDR_ENABLENETBIOS_TRACK_NIC
} CLUSPROP_IPADDR_ENABLENETBIOS;

//
// List of change notifications for File Server resource.
//
typedef enum _FILESHARE_CHANGE_ENUM {
    FILESHARE_CHANGE_NONE,
    FILESHARE_CHANGE_ADD,
    FILESHARE_CHANGE_DEL,
    FILESHARE_CHANGE_MODIFY
} FILESHARE_CHANGE_ENUM, *PFILESHARE_CHANGE_ENUM;

// Copied from Lmcons.h
#define NNLEN       80                  // Net name length (share name)
typedef struct _FILESHARE_CHANGE {
    FILESHARE_CHANGE_ENUM   Change;
    WCHAR                   ShareName[NNLEN+4];
} FILESHARE_CHANGE, *PFILESHARE_CHANGE;

#pragma warning(push)
#pragma warning(disable: 4200)
typedef struct _FILESHARE_CHANGE_LIST {
    DWORD               NumEntries;
    FILESHARE_CHANGE    ChangeEntry[0];
} FILESHARE_CHANGE_LIST, *PFILESHARE_CHANGE_LIST;
#pragma warning(pop)


// Helper for building or parsing a property list buffer.
typedef union CLUSPROP_BUFFER_HELPER {
    BYTE *                          pb;
    WORD *                          pw;
    DWORD *                         pdw;
    LONG *                          pl;
    LPWSTR                          psz;
    PCLUSPROP_LIST                  pList;
    PCLUSPROP_SYNTAX                pSyntax;
    PCLUSPROP_PROPERTY_NAME         pName;
    PCLUSPROP_VALUE                 pValue;
    PCLUSPROP_BINARY                pBinaryValue;
    PCLUSPROP_WORD                  pWordValue;
    PCLUSPROP_DWORD                 pDwordValue;
    PCLUSPROP_LONG                  pLongValue;
    PCLUSPROP_ULARGE_INTEGER        pULargeIntegerValue;
    PCLUSPROP_LARGE_INTEGER         pLargeIntegerValue;
    PCLUSPROP_SZ                    pStringValue;
    PCLUSPROP_MULTI_SZ              pMultiSzValue;
    PCLUSPROP_SECURITY_DESCRIPTOR   pSecurityDescriptor;
    PCLUSPROP_RESOURCE_CLASS        pResourceClassValue;
    PCLUSPROP_RESOURCE_CLASS_INFO   pResourceClassInfoValue;
    PCLUSPROP_DISK_SIGNATURE        pDiskSignatureValue;
    PCLUSPROP_SCSI_ADDRESS          pScsiAddressValue;
    PCLUSPROP_DISK_NUMBER           pDiskNumberValue;
    PCLUSPROP_PARTITION_INFO        pPartitionInfoValue;
    PCLUSPROP_REQUIRED_DEPENDENCY   pRequiredDependencyValue;
    PCLUSPROP_PARTITION_INFO_EX     pPartitionInfoValueEx;
    PCLUSPROP_FILETIME              pFileTimeValue;
} CLUSPROP_BUFFER_HELPER, *PCLUSPROP_BUFFER_HELPER;

#endif // MIDL_PASS

#endif // _CLUSTER_API_TYPES_

// Macro for aligning CLUSPROP buffers on a DWORD boundary.
#define ALIGN_CLUSPROP( count ) ((count + 3) & ~3)

// Macros for declaring array format values
#define CLUSPROP_BINARY_DECLARE( name, cb ) \
    struct {                                \
        CLUSPROP_SYNTAX Syntax;             \
        DWORD           cbLength;           \
        BYTE            rgb[(cb + 3) & ~3]; \
    } name

#define CLUSPROP_SZ_DECLARE( name, cch )    \
    struct {                                \
        CLUSPROP_SYNTAX Syntax;             \
        DWORD           cbLength;           \
        WCHAR           sz[(cch + 1) & ~1]; \
    } name

#define CLUSPROP_PROPERTY_NAME_DECLARE( name, cch ) CLUSPROP_SZ_DECLARE( name, cch )



//
// Cluster resource property enumeration.
//

#ifndef _CLUSTER_API_TYPES_
//
// Define enumerable types
//
typedef enum CLUSTER_RESOURCE_ENUM {
    CLUSTER_RESOURCE_ENUM_DEPENDS   = 0x00000001,
    CLUSTER_RESOURCE_ENUM_PROVIDES  = 0x00000002,
    CLUSTER_RESOURCE_ENUM_NODES     = 0x00000004,

    CLUSTER_RESOURCE_ENUM_ALL       = (CLUSTER_RESOURCE_ENUM_DEPENDS  |
                                       CLUSTER_RESOURCE_ENUM_PROVIDES |
                                       CLUSTER_RESOURCE_ENUM_NODES)
} CLUSTER_RESOURCE_ENUM;

typedef enum CLUSTER_RESOURCE_TYPE_ENUM {
    CLUSTER_RESOURCE_TYPE_ENUM_NODES     = 0x00000001,
    CLUSTER_RESOURCE_TYPE_ENUM_RESOURCES = 0x00000002,

    CLUSTER_RESOURCE_TYPE_ENUM_ALL       = (CLUSTER_RESOURCE_TYPE_ENUM_NODES |
                                            CLUSTER_RESOURCE_TYPE_ENUM_RESOURCES)
} CLUSTER_RESOURCE_TYPE_ENUM;

#endif // _CLUSTER_API_TYPES_

#if ( !MIDL_PASS && !__midl )
HRESENUM
WINAPI
ClusterResourceOpenEnum(
    _In_ HRESOURCE hResource,
    _In_ DWORD dwType
    );

typedef HRESENUM
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_OPEN_ENUM)(
    HRESOURCE hResource,
    DWORD dwType
    );

DWORD
WINAPI
ClusterResourceGetEnumCount(
    _In_ HRESENUM hResEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_GET_ENUM_COUNT)(
    _In_ HRESENUM hResEnum
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterResourceEnum(
    _In_ HRESENUM hResEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_ENUM)(
    _In_ HRESENUM hResEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

DWORD
WINAPI
ClusterResourceCloseEnum(
    _In_ HRESENUM hResEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_CLOSE_ENUM)(
    HRESENUM hResEnum
    );

DWORD
WINAPI
CreateClusterResourceType(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceTypeName,
    _In_ LPCWSTR lpszDisplayName,
    _In_ LPCWSTR lpszResourceTypeDll,
    _In_ DWORD dwLooksAlivePollInterval,
    _In_ DWORD dwIsAlivePollInterval
    );

typedef DWORD
(WINAPI * PCLUSAPI_CREATE_CLUSTER_RESOURCE_TYPE)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceTypeName,
    _In_ LPCWSTR lpszDisplayName,
    _In_ LPCWSTR lpszResourceTypeDll,
    _In_ DWORD dwLooksAlivePollInterval,
    _In_ DWORD dwIsAlivePollInterval
    );

DWORD
WINAPI
DeleteClusterResourceType(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceTypeName
    );

typedef DWORD
(WINAPI * PCLUSAPI_DELETE_CLUSTER_RESOURCE_TYPE)(
    HCLUSTER hCluster,
    LPCWSTR lpszResourceTypeName
    );

HRESTYPEENUM
WINAPI
ClusterResourceTypeOpenEnum(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceTypeName,
    _In_ DWORD dwType
    );

typedef HRESTYPEENUM
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_TYPE_OPEN_ENUM)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszResourceTypeName,
    _In_ DWORD dwType
    );

DWORD
WINAPI
ClusterResourceTypeGetEnumCount(
    _In_ HRESTYPEENUM hResTypeEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_TYPE_GET_ENUM_COUNT)(
    _In_ HRESTYPEENUM hResTypeEnum
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterResourceTypeEnum(
    _In_ HRESTYPEENUM hResTypeEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_TYPE_ENUM)(
    _In_ HRESTYPEENUM hResTypeEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

DWORD
WINAPI
ClusterResourceTypeCloseEnum(
    _In_ HRESTYPEENUM hResTypeEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_RESOURCE_TYPE_CLOSE_ENUM)(
    _In_ HRESTYPEENUM hResTypeEnum
    );

#endif // MIDL_PASS



//
// Network-related structures and types.
//

#ifndef _CLUSTER_API_TYPES_
//
// Define enumerable group types
//
typedef enum CLUSTER_NETWORK_ENUM {
    CLUSTER_NETWORK_ENUM_NETINTERFACES  = 0x00000001,

    CLUSTER_NETWORK_ENUM_ALL            = CLUSTER_NETWORK_ENUM_NETINTERFACES
} CLUSTER_NETWORK_ENUM;

typedef enum CLUSTER_NETWORK_STATE {
    ClusterNetworkStateUnknown = -1,
    ClusterNetworkUnavailable,
    ClusterNetworkDown,
    ClusterNetworkPartitioned,
    ClusterNetworkUp
} CLUSTER_NETWORK_STATE;

// Role the network plays in the cluster.  This is a bitmask.
typedef enum CLUSTER_NETWORK_ROLE {
    ClusterNetworkRoleNone              = 0,
    ClusterNetworkRoleInternalUse       = 0x00000001,
    ClusterNetworkRoleClientAccess      = 0x00000002,
    ClusterNetworkRoleInternalAndClient = 0x00000003
} CLUSTER_NETWORK_ROLE;

#endif // _CLUSTER_API_TYPES_

//
// Interfaces for managing the networks of a cluster.
//

#if ( !MIDL_PASS && !__midl )
HNETWORK
WINAPI
OpenClusterNetwork(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNetworkName
    );

typedef HNETWORK
(WINAPI * PCLUSAPI_OPEN_CLUSTER_NETWORK)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNetworkName
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
HNETWORK
WINAPI
OpenClusterNetworkEx(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszNetworkName,
    _In_      DWORD dwDesiredAccess,
    _Out_opt_ DWORD* lpdwGrantedAccess
    );

typedef HNETWORK
(WINAPI * PCLUSAPI_OPEN_CLUSTER_NETWORK_EX)(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszNetworkName,
    _In_      DWORD   dwDesiredAccess,
    _Out_opt_ LPDWORD lpdwGrantedAccess
    );
#endif

BOOL
WINAPI
CloseClusterNetwork(
    _In_ HNETWORK hNetwork
    );

typedef BOOL
(WINAPI * PCLUSAPI_CLOSE_CLUSTER_NETWORK)(
    _In_ HNETWORK hNetwork
    );

HCLUSTER
WINAPI
GetClusterFromNetwork(
    _In_ HNETWORK hNetwork
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_GET_CLUSTER_FROM_NETWORK)(
    _In_ HNETWORK hNetwork
    );

HNETWORKENUM
WINAPI
ClusterNetworkOpenEnum(
    _In_ HNETWORK hNetwork,
    _In_ DWORD dwType
    );

typedef HNETWORKENUM
(WINAPI * PCLUSAPI_CLUSTER_NETWORK_OPEN_ENUM)(
    _In_ HNETWORK hNetwork,
    _In_ DWORD dwType
    );

DWORD
WINAPI
ClusterNetworkGetEnumCount(
    _In_ HNETWORKENUM hNetworkEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NETWORK_GET_ENUM_COUNT)(
    _In_ HNETWORKENUM hNetworkEnum
    );

_Success_ (return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterNetworkEnum(
    _In_ HNETWORKENUM hNetworkEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NETWORK_ENUM)(
    _In_ HNETWORKENUM hNetworkEnum,
    _In_ DWORD dwIndex,
    _Out_ LPDWORD lpdwType,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName
    );

DWORD
WINAPI
ClusterNetworkCloseEnum(
    _In_ HNETWORKENUM hNetworkEnum
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NETWORK_CLOSE_ENUM)(
    _In_ HNETWORKENUM hNetworkEnum
    );

CLUSTER_NETWORK_STATE
WINAPI
GetClusterNetworkState(
    _In_ HNETWORK hNetwork
    );

typedef CLUSTER_NETWORK_STATE
(WINAPI * PCLUSAPI_GET_CLUSTER_NETWORK_STATE)(
    _In_ HNETWORK hNetwork
    );

DWORD
WINAPI
SetClusterNetworkName(
    _In_ HNETWORK hNetwork,
    _In_ LPCWSTR lpszName
    );

typedef DWORD
(WINAPI * PCLUSAPI_SET_CLUSTER_NETWORK_NAME)(
    _In_ HNETWORK hNetwork,
    _In_ LPCWSTR lpszName
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterNetworkId(
    _In_ HNETWORK hNetwork,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszNetworkId,
    _Inout_ LPDWORD lpcchName
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_NETWORK_ID)(
    _In_ HNETWORK hNetwork,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszNetworkId,
    _Inout_ LPDWORD lpcchName
    );

DWORD
WINAPI
ClusterNetworkControl(
    _In_ HNETWORK hNetwork,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NETWORK_CONTROL)(
    _In_ HNETWORK hNetwork,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

#endif // MIDL_PASS


#ifndef _CLUSTER_API_TYPES_
//
// Network interface-related structures and types.
//
typedef enum CLUSTER_NETINTERFACE_STATE {
    ClusterNetInterfaceStateUnknown = -1,
    ClusterNetInterfaceUnavailable,
    ClusterNetInterfaceFailed,
    ClusterNetInterfaceUnreachable,
    ClusterNetInterfaceUp
} CLUSTER_NETINTERFACE_STATE;

#endif // _CLUSTER_API_TYPES_

//
// Interfaces for managing the network interfaces of a cluster.
//

#if ( !MIDL_PASS && !__midl )
HNETINTERFACE
WINAPI
OpenClusterNetInterface(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszInterfaceName
    );

typedef HNETINTERFACE
(WINAPI * PCLUSAPI_OPEN_CLUSTER_NET_INTERFACE)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszInterfaceName
    );

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_SERVER2008R2)
HNETINTERFACE
WINAPI
OpenClusterNetInterfaceEx(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszInterfaceName,
    _In_      DWORD dwDesiredAccess,
    _Out_opt_ DWORD* lpdwGrantedAccess
    );

typedef HNETINTERFACE
(WINAPI * PCLUSAPI_OPEN_CLUSTER_NETINTERFACE_EX)(
    _In_      HCLUSTER hCluster,
    _In_opt_  LPCWSTR lpszNetInterfaceName,
    _In_      DWORD   dwDesiredAccess,
    _Out_opt_ LPDWORD lpdwGrantedAccess
    );
#endif

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetClusterNetInterface(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNodeName,
    _In_ LPCWSTR lpszNetworkName,
    _Out_writes_to_(*lpcchInterfaceName, *lpcchInterfaceName + 1) LPWSTR lpszInterfaceName,
    _Inout_ LPDWORD lpcchInterfaceName
    );

typedef DWORD
(WINAPI * PCLUSAPI_GET_CLUSTER_NET_INTERFACE)(
    _In_ HCLUSTER hCluster,
    _In_ LPCWSTR lpszNodeName,
    _In_ LPCWSTR lpszNetworkName,
    _Out_writes_to_opt_(*lpcchInterfaceName, *lpcchInterfaceName + 1) LPWSTR lpszInterfaceName,
    _Inout_ LPDWORD lpcchInterfaceName
    );

BOOL
WINAPI
CloseClusterNetInterface(
    _In_ HNETINTERFACE hNetInterface
    );

typedef BOOL
(WINAPI * PCLUSAPI_CLOSE_CLUSTER_NET_INTERFACE)(
    _In_ HNETINTERFACE hNetInterface
    );

HCLUSTER
WINAPI
GetClusterFromNetInterface(
    _In_ HNETINTERFACE hNetInterface
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_GET_CLUSTER_FROM_NET_INTERFACE)(
    _In_ HNETINTERFACE hNetInterface
    );

CLUSTER_NETINTERFACE_STATE
WINAPI
GetClusterNetInterfaceState(
    _In_ HNETINTERFACE hNetInterface
    );

typedef CLUSTER_NETINTERFACE_STATE
(WINAPI * PCLUSAPI_GET_CLUSTER_NET_INTERFACE_STATE)(
    _In_ HNETINTERFACE hNetInterface
    );

DWORD
WINAPI
ClusterNetInterfaceControl(
    _In_ HNETINTERFACE hNetInterface,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_NET_INTERFACE_CONTROL)(
    _In_ HNETINTERFACE hNetInterface,
    _In_opt_ HNODE hHostNode,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize, *lpBytesReturned) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_opt_ LPDWORD lpBytesReturned
    );
#endif // MIDL_PASS


//
// Cluster registry update and access routines
//

#if ( !MIDL_PASS && !__midl )
HKEY
WINAPI
GetClusterKey(
    _In_ HCLUSTER hCluster,
    _In_ REGSAM samDesired
    );

typedef HKEY
(WINAPI * PCLUSAPI_GET_CLUSTER_KEY)(
     HCLUSTER hCluster,
     REGSAM samDesired
     );

HKEY
WINAPI
GetClusterGroupKey(
    _In_ HGROUP hGroup,
    _In_ REGSAM samDesired
    );

typedef HKEY
(WINAPI * PCLUSAPI_GET_CLUSTER_GROUP_KEY)(
    HGROUP hGroup,
    REGSAM samDesired
    );

HKEY
WINAPI
GetClusterResourceKey(
    _In_ HRESOURCE hResource,
    _In_ REGSAM samDesired
    );

typedef HKEY
(WINAPI * PCLUSAPI_GET_CLUSTER_RESOURCE_KEY)(
    HRESOURCE hResource,
    REGSAM samDesired
    );

HKEY
WINAPI
GetClusterNodeKey(
    _In_ HNODE hNode,
    _In_ REGSAM samDesired
    );

typedef HKEY
(WINAPI * PCLUSAPI_GET_CLUSTER_NODE_KEY)(
    HNODE hNode,
    REGSAM samDesired
    );

HKEY
WINAPI
GetClusterNetworkKey(
    _In_ HNETWORK hNetwork,
    _In_ REGSAM samDesired
    );

typedef HKEY
(WINAPI * PCLUSAPI_GET_CLUSTER_NETWORK_KEY)(
    _In_ HNETWORK hNetwork,
    _In_ REGSAM samDesired
    );

HKEY
WINAPI
GetClusterNetInterfaceKey(
    _In_ HNETINTERFACE hNetInterface,
    _In_ REGSAM samDesired
    );

typedef HKEY
(WINAPI * PCLUSAPI_GET_CLUSTER_NET_INTERFACE_KEY)(
    _In_ HNETINTERFACE hNetInterface,
    _In_ REGSAM samDesired
    );

LONG
WINAPI
ClusterRegCreateKey(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszSubKey,
    _In_ DWORD dwOptions,
    _In_ REGSAM samDesired,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _Out_ PHKEY phkResult,
    _Out_opt_ LPDWORD lpdwDisposition
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_CREATE_KEY)(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszSubKey,
    _In_ DWORD dwOptions,
    _In_ REGSAM samDesired,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _Out_ PHKEY phkResult,
    _Out_opt_ LPDWORD lpdwDisposition
    );

LONG
WINAPI
ClusterRegOpenKey(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszSubKey,
    _In_ REGSAM samDesired,
    _Out_ PHKEY phkResult
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_OPEN_KEY)(
    HKEY hKey,
    LPCWSTR lpszSubKey,
    REGSAM samDesired,
    PHKEY phkResult
    );

LONG
WINAPI
ClusterRegDeleteKey(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszSubKey
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_DELETE_KEY)(
    HKEY hKey,
    LPCWSTR lpszSubKey
    );

LONG
WINAPI
ClusterRegCloseKey(
    _In_ HKEY hKey
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_CLOSE_KEY)(
    HKEY hKey
    );

_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
ClusterRegEnumKey(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName,
    _Out_opt_ PFILETIME lpftLastWriteTime
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_ENUM_KEY)(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_(*lpcchName, *lpcchName + 1) LPWSTR lpszName,
    _Inout_ LPDWORD lpcchName,
    _Out_ PFILETIME lpftLastWriteTime
    );

DWORD
WINAPI
ClusterRegSetValue(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszValueName,
    _In_ DWORD dwType,
    _In_ CONST BYTE* lpData,
    _In_ DWORD cbData
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_REG_SET_VALUE)(
    HKEY hKey,
    LPCWSTR lpszValueName,
    DWORD dwType,
    CONST BYTE* lpData,
    DWORD cbData
    );

DWORD
WINAPI
ClusterRegDeleteValue(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszValueName
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_REG_DELETE_VALUE)(
    HKEY hKey,
    LPCWSTR lpszValueName
    );

LONG
WINAPI
ClusterRegQueryValue(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszValueName,
    _Out_opt_ LPDWORD lpdwValueType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) LPBYTE lpData,
    _Inout_opt_ LPDWORD lpcbData
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_QUERY_VALUE)(
    _In_ HKEY hKey,
    _In_ LPCWSTR lpszValueName,
    _Out_opt_ LPDWORD lpdwValueType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) LPBYTE lpData,
    _Inout_opt_ LPDWORD lpcbData
    );

_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
ClusterRegEnumValue(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_(*lpcchValueName, *lpcchValueName + 1) LPWSTR lpszValueName,
    _Inout_ LPDWORD lpcchValueName,
    _Out_opt_ LPDWORD lpdwType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) LPBYTE lpData,
    _Inout_opt_ LPDWORD lpcbData
    );

typedef DWORD
(WINAPI * PCLUSAPI_CLUSTER_REG_ENUM_VALUE)(
    _In_ HKEY hKey,
    _In_ DWORD dwIndex,
    _Out_writes_to_(*lpcchValueName, *lpcchValueName + 1) LPWSTR lpszValueName,
    _Inout_ LPDWORD lpcchValueName,
    _Out_ LPDWORD lpdwType,
    _Out_writes_bytes_to_opt_(*lpcbData, *lpcbData) LPBYTE lpData,
    _Inout_opt_ LPDWORD lpcbData
    );

LONG
WINAPI
ClusterRegQueryInfoKey(
    _In_ HKEY hKey,
    _In_ LPDWORD lpcSubKeys,
    _In_ LPDWORD lpcchMaxSubKeyLen,
    _In_ LPDWORD lpcValues,
    _In_ LPDWORD lpcchMaxValueNameLen,
    _In_ LPDWORD lpcbMaxValueLen,
    _In_ LPDWORD lpcbSecurityDescriptor,
    _In_ PFILETIME lpftLastWriteTime
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_QUERY_INFO_KEY)(
    HKEY hKey,
    LPDWORD lpcSubKeys,
    LPDWORD lpcbMaxSubKeyLen,
    LPDWORD lpcValues,
    LPDWORD lpcbMaxValueNameLen,
    LPDWORD lpcbMaxValueLen,
    LPDWORD lpcbSecurityDescriptor,
    PFILETIME lpftLastWriteTime
    );

LONG
WINAPI
ClusterRegGetKeySecurity (
    _In_ HKEY hKey,
    _In_ SECURITY_INFORMATION RequestedInformation,
    _Out_writes_bytes_to_(*lpcbSecurityDescriptor, *lpcbSecurityDescriptor) PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _Inout_ LPDWORD lpcbSecurityDescriptor
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_GET_KEY_SECURITY)(
    _In_ HKEY hKey,
    _In_ SECURITY_INFORMATION RequestedInformation,
    _Out_writes_bytes_to_(*lpcbSecurityDescriptor, *lpcbSecurityDescriptor) PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _Inout_ LPDWORD lpcbSecurityDescriptor
    );

LONG
WINAPI
ClusterRegSetKeySecurity(
    _In_ HKEY hKey,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
    );

typedef LONG
(WINAPI * PCLUSAPI_CLUSTER_REG_SET_KEY_SECURITY)(
    HKEY hKey,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor
    );

LONG WINAPI ClusterRegCreateBatch(
    _In_opt_ HKEY hKey,
    _Out_ HREGBATCH* pHREGBATCH
    );

typedef LONG
(WINAPI *PCLUSAPI_CLUSTER_REG_CREATE_BATCH)(
    _In_opt_ HKEY hKey,
    _Out_ HREGBATCH* pHREGBATCH
    );

LONG WINAPI ClusterRegBatchAddCommand(
    _In_ HREGBATCH hRegBatch,
    _In_ CLUSTER_REG_COMMAND dwCommand,
    _In_opt_ LPCWSTR wzName,
    _In_ DWORD dwOptions,
    _In_reads_bytes_opt_(cbData) VOID CONST * lpData,
    _In_ DWORD cbData
    );

typedef LONG
(WINAPI *PCLUSTER_REG_BATCH_ADD_COMMAND)(
    _In_ HREGBATCH hRegBatch,
    _In_ CLUSTER_REG_COMMAND dwCommand,
    _In_opt_ LPWSTR wzName,
    _In_ DWORD dwOptions,
    _In_reads_bytes_opt_(cbData) VOID CONST * lpData,
    _In_ DWORD cbData
    );

LONG WINAPI ClusterRegCloseBatch(
    _In_ HREGBATCH hRegBatch,
    _In_ BOOL bCommit,
    _Out_opt_ INT * failedCommandNumber
    );

typedef LONG
(WINAPI *PCLUSTER_REG_CLOSE_BATCH)(
    _In_ HREGBATCH hRegBatch,
    _In_ BOOL bCommit,
    _Out_opt_ INT * failedCommandNumber
    );

LONG WINAPI ClusterRegBatchReadCommand(
    _In_ HREGBATCHNOTIFICATION hBatchNotification,
    _Out_ CLUSTER_BATCH_COMMAND * pBatchCommand);

typedef LONG
(WINAPI *PCLUSTER_REG_BATCH_READ_COMMAND)(
    _In_ HREGBATCHNOTIFICATION hBatchNotification,
    _Out_ CLUSTER_BATCH_COMMAND * pBatchCommand);

LONG WINAPI ClusterRegBatchCloseNotification(
    _In_ HREGBATCHNOTIFICATION hBatchNotification);

typedef LONG
(WINAPI *PCLUSTER_REG_BATCH_CLOSE_NOTIFICATION)(
    _In_ HREGBATCHNOTIFICATION hBatchNotification);

LONG WINAPI ClusterRegCreateBatchNotifyPort(
    _In_ HKEY hKey,
    _Out_ HREGBATCHPORT * phBatchNotifyPort);

typedef LONG
(WINAPI *PCLUSTER_REG_CREATE_BATCH_NOTIFY_PORT)(
    _In_ HKEY hKey,
    _Out_ HREGBATCHPORT * phBatchNotifyPort);

LONG WINAPI ClusterRegCloseBatchNotifyPort(
    _In_ HREGBATCHPORT hBatchNotifyPort);

typedef LONG
(WINAPI *PCLUSTER_REG_CLOSE_BATCH_NOTIFY_PORT)(
    _In_ HREGBATCHPORT hBatchNotifyPort);

LONG WINAPI ClusterRegGetBatchNotification(
    _In_ HREGBATCHPORT hBatchNotify,
    _Out_ HREGBATCHNOTIFICATION * phBatchNotification);

typedef LONG
(WINAPI *PCLUSTER_REG_GET_BATCH_NOTIFICATION)(
    _In_ HREGBATCHPORT hBatchNotify,
    _Out_ HREGBATCHNOTIFICATION * phBatchNotification);


LONG WINAPI ClusterRegCreateReadBatch(
    _In_ HKEY hKey,
    _Out_ HREGREADBATCH* phRegReadBatch);

typedef LONG
(WINAPI *PCLUSTER_REG_CREATE_READ_BATCH)(
    _In_ HKEY hKey,
    _Out_ HREGREADBATCH* phRegReadBatch);

LONG WINAPI ClusterRegReadBatchAddCommand(
    _In_ HREGREADBATCH hRegReadBatch,
    _In_ LPCWSTR wzSubkeyName,
    _In_ LPCWSTR wzValueName);

typedef LONG
(WINAPI *PCLUSTER_REG_READ_BATCH_ADD_COMMAND)(
    _In_ HREGREADBATCH hRegReadBatch,
    _In_ LPCWSTR wzSubkeyName,
    _In_ LPCWSTR wzValueName);

LONG WINAPI ClusterRegCloseReadBatch(
    _In_ HREGREADBATCH hRegReadBatch,
    _Out_ HREGREADBATCHREPLY * phRegReadBatchReply);

typedef LONG
(WINAPI *PCLUSTER_REG_CLOSE_READ_BATCH)(
    _In_ HREGREADBATCH hRegReadBatch,
    _Out_ HREGREADBATCHREPLY * phRegReadBatchReply);

LONG WINAPI ClusterRegReadBatchReplyNextCommand(
    _In_ HREGREADBATCHREPLY hRegReadBatchReply,
    _Out_ CLUSTER_READ_BATCH_COMMAND * pBatchCommand);

typedef LONG
(WINAPI *PCLUSTER_REG_READ_BATCH_REPLY_NEXT_COMMAND)(
    _In_ HREGREADBATCHREPLY hRegReadBatchReply,
    _Out_ CLUSTER_READ_BATCH_COMMAND * pBatchCommand);

LONG WINAPI ClusterRegCloseReadBatchReply(
    _In_ HREGREADBATCHREPLY hRegReadBatchReply);

typedef LONG
(WINAPI *PCLUSTER_REG_CLOSE_READ_BATCH_REPLY)(
    _In_ HREGREADBATCHREPLY hRegReadBatchReply);


//
// Cluster Create, Add Node and Destroy Cluster APIs
//

//
// Phases that cluster setup operations through.
// Phase numbers may arrive in any order via the callback function.
//

typedef enum _CLUSTER_SETUP_PHASE {

    ClusterSetupPhaseInitialize                     = 1,

    ClusterSetupPhaseValidateNodeState              = 100,
    ClusterSetupPhaseValidateNetft                  = 102,
    ClusterSetupPhaseValidateClusDisk               = 103,
    ClusterSetupPhaseConfigureClusSvc               = 104,
    ClusterSetupPhaseStartingClusSvc                = 105,

    ClusterSetupPhaseQueryClusterNameAccount        = 106,
    ClusterSetupPhaseValidateClusterNameAccount     = 107,
    ClusterSetupPhaseCreateClusterAccount           = 108,
    ClusterSetupPhaseConfigureClusterAccount        = 109,

    ClusterSetupPhaseFormingCluster                 = 200,
    ClusterSetupPhaseAddClusterProperties           = 201,
    ClusterSetupPhaseCreateResourceTypes            = 202,
    ClusterSetupPhaseCreateGroups                   = 203,
    ClusterSetupPhaseCreateIPAddressResources       = 204,
    ClusterSetupPhaseCreateNetworkName              = 205,
    ClusterSetupPhaseClusterGroupOnline             = 206,

    ClusterSetupPhaseGettingCurrentMembership       = 300,
    ClusterSetupPhaseAddNodeToCluster               = 301,
    ClusterSetupPhaseNodeUp                         = 302,

    ClusterSetupPhaseMoveGroup                      = 400,
    ClusterSetupPhaseDeleteGroup                    = 401,
    ClusterSetupPhaseCleanupCOs                     = 402,
    ClusterSetupPhaseOfflineGroup                   = 403,
    ClusterSetupPhaseEvictNode                      = 404,
    ClusterSetupPhaseCleanupNode                    = 405,
    ClusterSetupPhaseCoreGroupCleanup               = 406,

    ClusterSetupPhaseFailureCleanup                 = 999

} CLUSTER_SETUP_PHASE;

//
// used to delineate between phases
//
typedef enum _CLUSTER_SETUP_PHASE_TYPE {

    ClusterSetupPhaseStart                          = 1,
    ClusterSetupPhaseContinue                       = 2,
    ClusterSetupPhaseEnd                            = 3

} CLUSTER_SETUP_PHASE_TYPE;

typedef enum _CLUSTER_SETUP_PHASE_SEVERITY {

    ClusterSetupPhaseInformational                  = 1,
    ClusterSetupPhaseWarning                        = 2,
    ClusterSetupPhaseFatal                          = 3

} CLUSTER_SETUP_PHASE_SEVERITY;

typedef BOOL
(WINAPI *PCLUSTER_SETUP_PROGRESS_CALLBACK)(
    PVOID                           pvCallbackArg,
    CLUSTER_SETUP_PHASE             eSetupPhase,
    CLUSTER_SETUP_PHASE_TYPE        ePhaseType,
    CLUSTER_SETUP_PHASE_SEVERITY    ePhaseSeverity,
    DWORD                           dwPercentComplete,
    _In_opt_ PCWSTR                 lpszObjectName,
    DWORD                           dwStatus );

HCLUSTER
WINAPI
CreateCluster(
    _In_ PCREATE_CLUSTER_CONFIG pConfig,
    _In_opt_ PCLUSTER_SETUP_PROGRESS_CALLBACK   pfnProgressCallback,
    _In_opt_ PVOID              pvCallbackArg
    );

typedef HCLUSTER
(WINAPI * PCLUSAPI_CREATE_CLUSTER)(
    _In_ PCREATE_CLUSTER_CONFIG pConfig,
    _In_opt_ PCLUSTER_SETUP_PROGRESS_CALLBACK   pfnProgressCallback,
    _In_opt_ PVOID              pvCallbackArg
    );

HNODE
WINAPI
AddClusterNode(
    _In_ HCLUSTER    hCluster,
    _In_ PCWSTR      lpszNodeName,
    _In_opt_ PCLUSTER_SETUP_PROGRESS_CALLBACK   pfnProgressCallback,
    _In_opt_ PVOID   pvCallbackArg
    );

typedef HNODE
(WINAPI * PCLUSAPI_ADD_CLUSTER_NODE)(
    _In_ HCLUSTER    hCluster,
    _In_ PCWSTR      lpszNodeName,
    _In_opt_ PCLUSTER_SETUP_PROGRESS_CALLBACK   pfnProgressCallback,
    _In_opt_ PVOID   pvCallbackArg
    );

DWORD
WINAPI
DestroyCluster(
    _In_ HCLUSTER    hCluster,
    _In_opt_ PCLUSTER_SETUP_PROGRESS_CALLBACK   pfnProgressCallback,
    _In_opt_ PVOID   pvCallbackArg,
    _In_     BOOL    fdeleteVirtualComputerObjects
    );

typedef DWORD
(WINAPI * PCLUSAPI_DESTROY_CLUSTER)(
    _In_ HCLUSTER    hCluster,
    _In_opt_ PCLUSTER_SETUP_PROGRESS_CALLBACK   pfnProgressCallback,
    _In_opt_ PVOID   pvCallbackArg,
    _In_     BOOL    fdeleteVirtualComputerObjects
    );

//
// Standard Resource Type Names, these are duplicated in resapi.w's CLUSTER_ROLE struct. Be sure
// to update that struct when adding restype names.
//

#define CLUS_RESTYPE_NAME_GENAPP                L"Generic Application"
#define CLUS_RESTYPE_NAME_GENSVC                L"Generic Service"
#define CLUS_RESTYPE_NAME_GENSCRIPT             L"Generic Script"
#define CLUS_RESTYPE_NAME_IPADDR                L"IP Address"
#define CLUS_RESTYPE_NAME_NETNAME               L"Network Name"
#define CLUS_RESTYPE_NAME_DNN                   L"Distributed Network Name"
#define CLUS_RESTYPE_NAME_FILESHR               L"File Share"
#define CLUS_RESTYPE_NAME_PRTSPLR               L"Print Spooler"
#define CLUS_RESTYPE_NAME_IPV6_NATIVE           L"IPv6 Address"
#define CLUS_RESTYPE_NAME_IPV6_TUNNEL           L"IPv6 Tunnel Address"
#define CLUS_RESTYPE_NAME_VSSTASK               L"Volume Shadow Copy Service Task"
#define CLUS_RESTYPE_NAME_WINS                  L"WINS Service"
#define CLUS_RESTYPE_NAME_DHCP                  L"DHCP Service"
#define CLUS_RESTYPE_NAME_MSMQ                  L"Microsoft Message Queue Server"
#define CLUS_RESTYPE_NAME_NEW_MSMQ              L"MSMQ"
#define CLUS_RESTYPE_NAME_MSMQ_TRIGGER          L"MSMQTriggers"
#define CLUS_RESTYPE_NAME_MSDTC                 L"Distributed Transaction Coordinator"
#define CLUS_RESTYPE_NAME_NFS                   L"NFS Share"
#define CLUS_RESTYPE_NAME_NETWORK_FILE_SYSTEM   L"Network File System"
#define CLUS_RESTYPE_NAME_ISNS                  L"Microsoft iSNS"
#define CLUS_RESTYPE_NAME_HARDDISK              L"Physical Disk"
#define CLUS_RESTYPE_NAME_PHYS_DISK             CLUS_RESTYPE_NAME_HARDDISK
#define CLUS_RESTYPE_NAME_FSWITNESS             L"File Share Witness"
#define CLUS_RESTYPE_NAME_FILESERVER            L"File Server"
#define CLUS_RESTYPE_NAME_SODAFILESERVER        L"Scale Out File Server"
#define CLUS_RESTYPE_NAME_DFS                   L"Distributed File System"
#define CLUS_RESTYPE_NAME_DFSR                  L"DFS Replicated Folder"
#define CLUS_RESTYPE_NAME_VM                    L"Virtual Machine"
#define CLUS_RESTYPE_NAME_VM_CONFIG             L"Virtual Machine Configuration"
#define CLUS_RESTYPE_NAME_ISCSITARGET           L"iSCSI Target Server"
#define CLUS_RESTYPE_NAME_STORAGE_POOL          L"Storage Pool"
#define CLUS_RESTYPE_NAME_TASKSCHEDULER         L"Task Scheduler"
#define CLUS_RESTYPE_NAME_VMREPLICA_BROKER      L"Virtual Machine Replication Broker"
#define CLUS_RESTYPE_NAME_NFS_V2                L"Network File System"

//
// Cluster common property names
//

#define CLUSREG_NAME_CLUS_DESC                     L"Description"
#define CLUSREG_NAME_CLUS_SD                       L"Security Descriptor"
#define CLUSREG_NAME_CLUS_DEFAULT_NETWORK_ROLE     L"DefaultNetworkRole"
#define CLUSREG_NAME_QUORUM_ARBITRATION_TIMEOUT    L"QuorumArbitrationTimeMax"
#define CLUSTER_HANG_TIMEOUT_KEYNAME               L"ClusSvcHangTimeout"
#define CLUSTER_HANG_RECOVERY_ACTION_KEYNAME       L"HangRecoveryAction"
#define CLUSTER_CSA_VSS_STATE                      L"BackupInProgress"
#define CLUSTER_REQUEST_REPLY_TIMEOUT              L"RequestReplyTimeout"
#define CLUSTER_WITNESS_FAILED_RESTART_INTERVAL    L"WitnessRestartInterval"
#define CLUSTER_WITNESS_DATABASE_WRITE_TIMEOUT     L"WitnessDatabaseWriteTimeout"
#define CLUSTER_ADD_EVICT_DELAY                    L"AddEvictDelay"
#define CLUSREG_NAME_FIXQUORUM                     L"FixQuorum"
#define CLUSREG_NAME_PREVENTQUORUM                 L"PreventQuorum"
#define CLUSREG_NAME_IGNORE_PERSISTENT_STATE       L"IgnorePersistentStateOnStartup"
#define CLUSTER_SHARED_VOLUMES_ROOT                L"SharedVolumesRoot"
#define ENABLE_CLUSTER_SHARED_VOLUMES              L"EnableSharedVolumes"
#define CLUSTER_SHARED_VOLUME_VSS_WRITER_OPERATION_TIMEOUT   L"SharedVolumeVssWriterOperationTimeout"
#define USE_CLIENT_ACCESS_NETWORKS_FOR_CSV         L"UseClientAccessNetworksForSharedVolumes"
#define CLUSTER_CSV_COMPATIBLE_FILTERS             L"SharedVolumeCompatibleFilters"
#define CLUSTER_CSV_INCOMPATIBLE_FILTERS           L"SharedVolumeIncompatibleFilters"
#define CLUSTER_GROUP_WAIT_DELAY                   L"ClusterGroupWaitDelay"
#define MINIMUM_PREEMPTOR_PRIORITY                 L"MinimumPreemptorPriority"
#define MINIMUM_NEVER_PREEMPT_PRIORITY             L"MinimumNeverPreemptPriority"
#define CLUSTER_ENFORCED_ANTIAFFINITY              L"ClusterEnforcedAntiaffinity"
#define CLUSREG_NAME_SHUTDOWN_TIMEOUT_MINUTES      L"ShutdownTimeoutInMinutes"
#define CLUSREG_NAME_CSV_MDS_SD                    L"SharedVolumeSecurityDescriptor"
#define CLUSREG_NAME_FAILOVER_MOVE_MIGRATION_TYPE  L"FailoverMoveMigrationType"
#define CLUSREG_NAME_CSV_BLOCK_CACHE               L"SharedVolumeBlockCacheSizeInMB"
#define CLUSREG_NAME_ROUTE_HISTORY_LENGTH          L"RouteHistoryLength"
#define CLUSREG_NAME_LAST_RECENT_EVENTS_RESET_TIME L"RecentEventsResetTime"

//
// Properties and defaults for single and multi subnet delays and thresholds.
//

#define CLUSREG_NAME_SAME_SUBNET_DELAY              L"SameSubnetDelay"
#define CLUSREG_NAME_CROSS_SUBNET_DELAY             L"CrossSubnetDelay"
#define CLUSREG_NAME_SAME_SUBNET_THRESHOLD          L"SameSubnetThreshold"
#define CLUSREG_NAME_PLUMB_ALL_CROSS_SUBNET_ROUTES  L"PlumbAllCrossSubnetRoutes"
#define CLUSREG_NAME_CROSS_SUBNET_THRESHOLD         L"CrossSubnetThreshold"


//
// Node common property names
//

#define CLUSREG_NAME_NODE_NAME              L"NodeName"
#define CLUSREG_NAME_NODE_HIGHEST_VERSION   L"NodeHighestVersion"
#define CLUSREG_NAME_NODE_LOWEST_VERSION    L"NodeLowestVersion"
#define CLUSREG_NAME_NODE_DESC              L"Description"
#define CLUSREG_NAME_NODE_MAJOR_VERSION     L"MajorVersion"
#define CLUSREG_NAME_NODE_MINOR_VERSION     L"MinorVersion"
#define CLUSREG_NAME_NODE_BUILD_NUMBER      L"BuildNumber"
#define CLUSREG_NAME_NODE_CSDVERSION        L"CSDVersion"
#define CLUSREG_NAME_NODE_WEIGHT            L"NodeWeight"
#define CLUSREG_NAME_NODE_DYNAMIC_WEIGHT    L"DynamicWeight"
#define CLUSREG_NAME_NODE_IS_PRIMARY        L"IsPrimary"
#define CLUSREG_NAME_NODE_DRAIN_STATUS      L"NodeDrainStatus"
#define CLUSREG_NAME_NODE_DRAIN_TARGET      L"NodeDrainTarget"
#define CLUSREG_NAME_NODE_NEEDS_PQ          L"NeedsPreventQuorum"

//
// Group common property names
//

#define CLUSREG_NAME_GRP_NAME                              L"Name"
#define CLUSREG_NAME_GRP_TYPE                              L"GroupType"
#define CLUSREG_NAME_GRP_DESC                              L"Description"
#define CLUSREG_NAME_GRP_PERSISTENT_STATE                  L"PersistentState"
#define CLUSREG_NAME_GRP_FAILBACK_TYPE                     L"AutoFailbackType"
#define CLUSREG_NAME_GRP_FAILBACK_WIN_START                L"FailbackWindowStart"
#define CLUSREG_NAME_GRP_FAILBACK_WIN_END                  L"FailbackWindowEnd"
#define CLUSREG_NAME_GRP_FAILOVER_THRESHOLD                L"FailoverThreshold"
#define CLUSREG_NAME_GRP_FAILOVER_PERIOD                   L"FailoverPeriod"
#define CLUSREG_NAME_GRP_PRIORITY                          L"Priority"
#define CLUSREG_NAME_GRP_DEFAULT_OWNER                     L"DefaultOwner"
#define CLUSREG_NAME_GRP_STATUS_INFORMATION                L"StatusInformation"
#define CLUSREG_NAME_GRP_ANTI_AFFINITY_CLASS_NAME          L"AntiAffinityClassNames"


//
// Resource common property names
//

#define CLUSREG_NAME_RES_NAME                              L"Name"
#define CLUSREG_NAME_RES_TYPE                              L"Type"
#define CLUSREG_NAME_RES_DESC                              L"Description"
#define CLUSREG_NAME_RES_SEPARATE_MONITOR                  L"SeparateMonitor"
#define CLUSREG_NAME_RES_PERSISTENT_STATE                  L"PersistentState"
#define CLUSREG_NAME_RES_LOOKS_ALIVE                       L"LooksAlivePollInterval"
#define CLUSREG_NAME_RES_IS_ALIVE                          L"IsAlivePollInterval"
#define CLUSREG_NAME_RES_RESTART_ACTION                    L"RestartAction"
#define CLUSREG_NAME_RES_RESTART_THRESHOLD                 L"RestartThreshold"
#define CLUSREG_NAME_RES_RESTART_PERIOD                    L"RestartPeriod"
#define CLUSREG_NAME_RES_RESTART_DELAY                     L"RestartDelay"
#define CLUSREG_NAME_RES_RETRY_PERIOD_ON_FAILURE           L"RetryPeriodOnFailure"
#define CLUSREG_NAME_RES_EMBEDDED_FAILURE_ACTION           L"EmbeddedFailureAction"
#define CLUSREG_NAME_RES_PENDING_TIMEOUT                   L"PendingTimeout"
#define CLUSREG_NAME_RES_DEADLOCK_TIMEOUT                  L"DeadlockTimeout"
#define CLUSREG_NAME_RES_MONITOR_PID                       L"MonitorProcessId"
#define CLUSREG_NAME_RES_STATUS_INFORMATION                L"StatusInformation"
#define CLUSREG_NAME_RES_LAST_OPERATION_STATUS_CODE        L"LastOperationStatusCode"
#define CLUSREG_NAME_RES_DATA1                             L"ResourceSpecificData1"
#define CLUSREG_NAME_RES_DATA2                             L"ResourceSpecificData2"
#define CLUSREG_NAME_RES_STATUS                            L"ResourceSpecificStatus"


//
// Resource Type common property names
//

#define CLUSREG_NAME_RESTYPE_NAME               L"Name"
#define CLUSREG_NAME_RESTYPE_DESC               L"Description"
#define CLUSREG_NAME_RESTYPE_DLL_NAME           L"DllName"
#define CLUSREG_NAME_RESTYPE_ADMIN_EXTENSIONS   L"AdminExtensions"
#define CLUSREG_NAME_RESTYPE_LOOKS_ALIVE        CLUSREG_NAME_RES_LOOKS_ALIVE
#define CLUSREG_NAME_RESTYPE_IS_ALIVE           CLUSREG_NAME_RES_IS_ALIVE
#define CLUSREG_NAME_RESTYPE_PENDING_TIMEOUT    CLUSREG_NAME_RES_PENDING_TIMEOUT
#define CLUSREG_NAME_RESTYPE_DEADLOCK_TIMEOUT   CLUSREG_NAME_RES_DEADLOCK_TIMEOUT

//
// Network common property names
//

#define CLUSREG_NAME_NET_NAME               L"Name"
#define CLUSREG_NAME_NET_IPV6_ADDRESSES     L"IPv6Addresses"
#define CLUSREG_NAME_NET_IPV6_PREFIXLENGTHS L"IPv6PrefixLengths"
#define CLUSREG_NAME_NET_IPV4_ADDRESSES     L"IPv4Addresses"
#define CLUSREG_NAME_NET_IPV4_PREFIXLENGTHS L"IPv4PrefixLengths"
#define CLUSREG_NAME_NET_ADDRESS            L"Address"
#define CLUSREG_NAME_NET_ADDRESS_MASK       L"AddressMask"
#define CLUSREG_NAME_NET_DESC               L"Description"
#define CLUSREG_NAME_NET_ROLE               L"Role"
#define CLUSREG_NAME_NET_SPEED              L"LinkSpeed"
#define CLUSREG_NAME_NET_RDMA_CAPABLE       L"RdmaCapable"
#define CLUSREG_NAME_NET_RSS_CAPABLE        L"RssCapable"
#define CLUSREG_NAME_NET_METRIC             L"Metric"
#define CLUSREG_NAME_NET_AUTOMETRIC         L"AutoMetric"


//
// Network Interface common property names
//

#define CLUSREG_NAME_NETIFACE_NAME              L"Name"
#define CLUSREG_NAME_NETIFACE_NODE              L"Node"
#define CLUSREG_NAME_NETIFACE_NETWORK           L"Network"
#define CLUSREG_NAME_NETIFACE_ADAPTER_NAME      L"Adapter"
#define CLUSREG_NAME_NETIFACE_ADAPTER_ID        L"AdapterId"
#define CLUSREG_NAME_NETIFACE_DHCP_ENABLED      L"DhcpEnabled"
#define CLUSREG_NAME_NETIFACE_IPV6_ADDRESSES    L"IPv6Addresses"
#define CLUSREG_NAME_NETIFACE_IPV4_ADDRESSES    L"IPv4Addresses"
#define CLUSREG_NAME_NETIFACE_ADDRESS           L"Address"
#define CLUSREG_NAME_NETIFACE_DESC              L"Description"

//
// Resource private property names
//

//
// Common to All Resources interested in using Cluster Awareness of Application Memory Usage
//
#define CLUSREG_NAME_START_MEMORY               L"StartMemory"
#define CLUSREG_NAME_VIRTUAL_NUMA_COUNT         L"VirtualNumaCount"

//
// Physical Disk
//

#define CLUSREG_NAME_PHYSDISK_DISKIDTYPE       L"DiskIdType"
#define CLUSREG_NAME_PHYSDISK_DISKSIGNATURE    L"DiskSignature"
#define CLUSREG_NAME_PHYSDISK_DISKIDGUID       L"DiskIdGuid"
#define CLUSREG_NAME_PHYSDISK_DISKRUNCHKDSK    L"DiskRunChkDsk"
#define CLUSREG_NAME_PHYSDISK_DISKUNIQUEIDS    L"DiskUniqueIds"
#define CLUSREG_NAME_PHYSDISK_DISKVOLUMEINFO   L"DiskVolumeInfo"
#define CLUSREG_NAME_PHYSDISK_DISKARBTYPE      L"DiskArbType"
#define CLUSREG_NAME_PHYSDISK_DISKARBINTERVAL  L"DiskArbInterval"
#define CLUSREG_NAME_PHYSDISK_DISKPATH         L"DiskPath"
#define CLUSREG_NAME_PHYSDISK_DISKRELOAD       L"DiskReload"
#define CLUSREG_NAME_PHYSDISK_MAINTMODE        L"MaintenanceMode"
#define CLUSREG_NAME_PHYSDISK_DISKIODELAY      L"MaxIoLatency"
#define CLUSREG_NAME_PHYSDISK_MIGRATEFIXUP     L"MigrateDriveLetters"
#define CLUSREG_NAME_PHYSDISK_CSVWRITETHROUGH  L"CsvEnforceWriteThrough"
#define CLUSREG_NAME_PHYSDISK_CSVBLOCKCACHE    L"CsvEnableBlockCache"
#define CLUSREG_NAME_PHYSDISK_FASTONLINEARBITRATE L"FastOnlineArbitrate"
#define CLUSREG_NAME_PHYSDISK_SPACEIDGUID         L"VirtualDiskId"
#define CLUSREG_NAME_STORAGESPACE_POOLIDGUID      L"PoolId"

#define CLUSREG_NAME_STORAGESPACE_NAME                  L"VirtualDiskName"
#define CLUSREG_NAME_STORAGESPACE_DESCRIPTION           L"VirtualDiskDescription"
#define CLUSREG_NAME_STORAGESPACE_HEALTH                L"VirtualDiskHealth"
#define CLUSREG_NAME_STORAGESPACE_STATE                 L"VirtualDiskState"
#define CLUSREG_NAME_STORAGESPACE_PROVISIONING          L"VirtualDiskProvisioning"
#define CLUSREG_NAME_STORAGESPACE_RESILIENCYTYPE        L"VirtualDiskResiliencyType"
#define CLUSREG_NAME_STORAGESPACE_RESILIENCYCOLUMNS     L"VirtualDiskResiliencyColumns"
#define CLUSREG_NAME_STORAGESPACE_RESILIENCYINTERLEAVE  L"VirtualDiskResiliencyInterleave"


//
// Generic Application
//

#define CLUSREG_NAME_GENAPP_COMMAND_LINE            L"CommandLine"
#define CLUSREG_NAME_GENAPP_CURRENT_DIRECTORY       L"CurrentDirectory"
#define CLUSREG_NAME_GENAPP_USE_NETWORK_NAME        L"UseNetworkName"

//
// Generic Script
//

#define CLUSREG_NAME_GENSCRIPT_SCRIPT_FILEPATH      L"ScriptFilepath"


//
// Generic Service
//

#define CLUSREG_NAME_GENSVC_SERVICE_NAME            L"ServiceName"
#define CLUSREG_NAME_GENSVC_STARTUP_PARAMS          L"StartupParameters"
#define CLUSREG_NAME_GENSVC_USE_NETWORK_NAME        L"UseNetworkName"


//
// IPv4 Address
//

#define CLUSREG_NAME_IPADDR_NETWORK                     L"Network"
#define CLUSREG_NAME_IPADDR_ADDRESS                     L"Address"
#define CLUSREG_NAME_IPADDR_SUBNET_MASK                 L"SubnetMask"
#define CLUSREG_NAME_IPADDR_ENABLE_NETBIOS              L"EnableNetBIOS"
#define CLUSREG_NAME_IPADDR_OVERRIDE_ADDRMATCH          L"OverrideAddressMatch"
#define CLUSREG_NAME_IPADDR_ENABLE_DHCP                 L"EnableDhcp"
#define CLUSREG_NAME_IPADDR_LEASE_OBTAINED_TIME         L"LeaseObtainedTime"
#define CLUSREG_NAME_IPADDR_LEASE_TERMINATES_TIME       L"LeaseExpiresTime"
#define CLUSREG_NAME_IPADDR_T1                          L"T1"
#define CLUSREG_NAME_IPADDR_T2                          L"T2"
#define CLUSREG_NAME_IPADDR_DHCP_SERVER                 L"DhcpServer"
#define CLUSREG_NAME_IPADDR_DHCP_ADDRESS                L"DhcpAddress"
#define CLUSREG_NAME_IPADDR_DHCP_SUBNET_MASK            L"DhcpSubnetMask"
#define CLUSREG_NAME_IPADDR_SHARED_NETNAME              L"SharedNetname"
#define CLUSREG_NAME_IPADDR_PROBE_PORT                  L"ProbePort"
#define CLUSREG_NAME_IPADDR_PROBE_FAILURE_THRESHOLD     L"ProbeFailureThreshold"

//
// IPv6 Address
//

#define CLUSREG_NAME_IPV6_NATIVE_NETWORK            L"Network"
#define CLUSREG_NAME_IPV6_NATIVE_ADDRESS            L"Address"
#define CLUSREG_NAME_IPV6_NATIVE_PREFIX_LENGTH      L"PrefixLength"

#define CLUSREG_NAME_IPV6_TUNNEL_ADDRESS            L"Address"
#define CLUSREG_NAME_IPV6_TUNNEL_TUNNELTYPE         L"TunnelType"


//
// Network Name
//
#define CLUSREG_NAME_NETNAME_NAME                   L"Name"
#define CLUSREG_NAME_NETNAME_CREATING_DC            L"CreatingDC"
#define CLUSREG_NAME_NETNAME_OBJECT_ID              L"ObjectGUID"
#define CLUSREG_NAME_NETNAME_DNS_NAME               L"DnsName"
#define CLUSREG_NAME_NETNAME_REMAP_PIPE_NAMES       L"RemapPipeNames"
#define CLUSREG_NAME_NETNAME_RESOURCE_DATA          L"ResourceData"
#define CLUSREG_NAME_NETNAME_STATUS_NETBIOS         L"StatusNetBIOS"
#define CLUSREG_NAME_NETNAME_STATUS_DNS             L"StatusDNS"
#define CLUSREG_NAME_NETNAME_STATUS_KERBEROS        L"StatusKerberos"
#define CLUSREG_NAME_NETNAME_VCO_CONTAINER          L"VcoContainer"
#define CLUSREG_NAME_NETNAME_LAST_DNS_UPDATE        L"LastDNSUpdateTime"
#define CLUSREG_NAME_NETNAME_CONTAINERGUID          L"CryptoContainerGUID"
#define CLUSREG_NAME_NETNAME_HOST_TTL               L"HostRecordTTL"
#define CLUSREG_NAME_NETNAME_PUBLISH_PTR            L"PublishPTRRecords"
#define CLUSREG_NAME_NETNAME_REMOVEVCO_ONDELETE     L"DeleteVcoOnResCleanup"
#define CLUSREG_NAME_NETNAME_REGISTER_ALL_IP        L"RegisterAllProvidersIP"
#define CLUSREG_KEYNAME_OBJECTGUIDS                 L"ObjectGUIDs"
#define CLUSREG_NAME_NETNAME_EXCLUDE_NETWORKS       L"ExcludeNetworks"
#define CLUSREG_NAME_NETNAME_ALIASES                L"Aliases"
#define CLUSREG_NAME_NETNAME_IN_USE_NETWORKS        L"InUseNetworks"


//
// Print Spooler
//

#define CLUSREG_NAME_PRTSPOOL_DEFAULT_SPOOL_DIR     L"DefaultSpoolDirectory"
#define CLUSREG_NAME_PRTSPOOL_TIMEOUT               L"JobCompletionTimeout"

//
// File Share
//

#define CLUSREG_NAME_FILESHR_SERVER_NAME            L"ServerName"
#define CLUSREG_NAME_FILESHR_SHARE_NAME             L"ShareName"
#define CLUSREG_NAME_FILESHR_PATH                   L"Path"
#define CLUSREG_NAME_FILESHR_REMARK                 L"Remark"
#define CLUSREG_NAME_FILESHR_MAX_USERS              L"MaxUsers"
#define CLUSREG_NAME_FILESHR_SD                     L"Security Descriptor"
#define CLUSREG_NAME_FILESHR_SHARE_SUBDIRS          L"ShareSubDirs"
#define CLUSREG_NAME_FILESHR_HIDE_SUBDIR_SHARES     L"HideSubDirShares"
#define CLUSREG_NAME_FILESHR_IS_DFS_ROOT            L"IsDfsRoot"
#define CLUSREG_NAME_FILESHR_SHARE_FLAGS            L"ShareFlags"
#define CLUSREG_NAME_FILESHR_CA_TIMEOUT             L"CATimeout"

//
// DHCP Service
//

#define CLUSREG_NAME_DHCP_DATABASE_PATH             L"DatabasePath"
#define CLUSREG_NAME_DHCP_BACKUP_PATH               L"BackupPath"
#define CLUSREG_NAME_LOG_FILE_PATH                  L"LogFilePath"


//
// WINS Service
//

#define CLUSREG_NAME_WINS_DATABASE_PATH             L"DatabasePath"
#define CLUSREG_NAME_WINS_BACKUP_PATH               L"BackupPath"


//
// Volume Shadow Copy Service Task
//

#define CLUSREG_NAME_VSSTASK_CURRENTDIRECTORY       L"CurrentDirectory"
#define CLUSREG_NAME_VSSTASK_APPNAME                L"ApplicationName"
#define CLUSREG_NAME_VSSTASK_APPPARAMS              L"ApplicationParams"
#define CLUSREG_NAME_VSSTASK_TRIGGERARRAY           L"TriggerArray"

//
// File Share Quorum Witness Resource
//

#define CLUSREG_NAME_FSWITNESS_SHARE_PATH           L"SharePath"
#define CLUSREG_NAME_FSWITNESS_ARB_DELAY            L"ArbitrationDelay"

//
// Storage Pool
//
#define CLUSREG_NAME_STORAGESPACE_POOLNAME              L"Name"
#define CLUSREG_NAME_STORAGESPACE_POOLDESC              L"Description"
#define CLUSREG_NAME_STORAGESPACE_POOLDRIVEIDS          L"DriveIds"
#define CLUSREG_NAME_STORAGESPACE_POOLHEALTH            L"Health"
#define CLUSREG_NAME_STORAGESPACE_POOLSTATE             L"State"
#define CLUSREG_NAME_STORAGESPACE_POOLTOTALCAPACITY     L"TotalCapacity"
#define CLUSREG_NAME_STORAGESPACE_POOLCONSUMEDCAPACITY  L"ConsumedCapacity"

#define CLUSREG_NAME_STORAGESPACE_POOLARBITRATE         L"Arbitrate"



#if _MSC_VER >= 1200
#pragma warning(pop)              // restore 4200/4201
#else
#pragma warning( default : 4200 ) // nonstandard extension used : zero-sized array in struct/union
#pragma warning( default : 4201 ) // nonstandard extension used : nameless struct/union
#endif
#endif // MIDL_PASS

#ifdef __cplusplus
} // extern "C"
#endif

#ifndef _CLUSTER_API_TYPES_
#define _CLUSTER_API_TYPES_
#endif // _CLUSTER_API_TYPES_


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // _CLUSTER_API_

