

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


#ifndef __fsrmenums_h__
#define __fsrmenums_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_fsrmenums_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef GUID FSRM_OBJECT_ID;

typedef 
enum _FsrmQuotaFlags
    {
        FsrmQuotaFlags_Enforce	= 0x100,
        FsrmQuotaFlags_Disable	= 0x200,
        FsrmQuotaFlags_StatusIncomplete	= 0x10000,
        FsrmQuotaFlags_StatusRebuilding	= 0x20000
    } 	FsrmQuotaFlags;

typedef 
enum _FsrmFileScreenFlags
    {
        FsrmFileScreenFlags_Enforce	= 0x1
    } 	FsrmFileScreenFlags;

typedef 
enum _FsrmCollectionState
    {
        FsrmCollectionState_Fetching	= 1,
        FsrmCollectionState_Committing	= 2,
        FsrmCollectionState_Complete	= 3,
        FsrmCollectionState_Cancelled	= 4
    } 	FsrmCollectionState;

typedef 
enum _FsrmEnumOptions
    {
        FsrmEnumOptions_None	= 0,
        FsrmEnumOptions_Asynchronous	= 0x1,
        FsrmEnumOptions_CheckRecycleBin	= 0x2,
        FsrmEnumOptions_IncludeClusterNodes	= 0x4,
        FsrmEnumOptions_IncludeDeprecatedObjects	= 0x8
    } 	FsrmEnumOptions;

typedef 
enum _FsrmCommitOptions
    {
        FsrmCommitOptions_None	= 0,
        FsrmCommitOptions_Asynchronous	= 0x1
    } 	FsrmCommitOptions;

typedef 
enum _FsrmTemplateApplyOptions
    {
        FsrmTemplateApplyOptions_ApplyToDerivedMatching	= 1,
        FsrmTemplateApplyOptions_ApplyToDerivedAll	= 2
    } 	FsrmTemplateApplyOptions;

typedef 
enum _FsrmActionType
    {
        FsrmActionType_Unknown	= 0,
        FsrmActionType_EventLog	= 1,
        FsrmActionType_Email	= 2,
        FsrmActionType_Command	= 3,
        FsrmActionType_Report	= 4
    } 	FsrmActionType;

typedef 
enum _FsrmEventType
    {
        FsrmEventType_Unknown	= 0,
        FsrmEventType_Information	= 1,
        FsrmEventType_Warning	= 2,
        FsrmEventType_Error	= 3
    } 	FsrmEventType;

typedef 
enum _FsrmAccountType
    {
        FsrmAccountType_Unknown	= 0,
        FsrmAccountType_NetworkService	= 1,
        FsrmAccountType_LocalService	= 2,
        FsrmAccountType_LocalSystem	= 3,
        FsrmAccountType_InProc	= 4,
        FsrmAccountType_External	= 5,
        FsrmAccountType_Automatic	= 500
    } 	FsrmAccountType;

typedef 
enum _FsrmReportType
    {
        FsrmReportType_Unknown	= 0,
        FsrmReportType_LargeFiles	= 1,
        FsrmReportType_FilesByType	= 2,
        FsrmReportType_LeastRecentlyAccessed	= 3,
        FsrmReportType_MostRecentlyAccessed	= 4,
        FsrmReportType_QuotaUsage	= 5,
        FsrmReportType_FilesByOwner	= 6,
        FsrmReportType_ExportReport	= 7,
        FsrmReportType_DuplicateFiles	= 8,
        FsrmReportType_FileScreenAudit	= 9,
        FsrmReportType_FilesByProperty	= 10,
        FsrmReportType_AutomaticClassification	= 11,
        FsrmReportType_Expiration	= 12,
        FsrmReportType_FoldersByProperty	= 13
    } 	FsrmReportType;

typedef 
enum _FsrmReportFormat
    {
        FsrmReportFormat_Unknown	= 0,
        FsrmReportFormat_DHtml	= 1,
        FsrmReportFormat_Html	= 2,
        FsrmReportFormat_Txt	= 3,
        FsrmReportFormat_Csv	= 4,
        FsrmReportFormat_Xml	= 5
    } 	FsrmReportFormat;

typedef 
enum _FsrmReportRunningStatus
    {
        FsrmReportRunningStatus_Unknown	= 0,
        FsrmReportRunningStatus_NotRunning	= 1,
        FsrmReportRunningStatus_Queued	= 2,
        FsrmReportRunningStatus_Running	= 3
    } 	FsrmReportRunningStatus;

typedef 
enum _FsrmReportGenerationContext
    {
        FsrmReportGenerationContext_Undefined	= 1,
        FsrmReportGenerationContext_ScheduledReport	= 2,
        FsrmReportGenerationContext_InteractiveReport	= 3,
        FsrmReportGenerationContext_IncidentReport	= 4
    } 	FsrmReportGenerationContext;

typedef 
enum _FsrmReportFilter
    {
        FsrmReportFilter_MinSize	= 1,
        FsrmReportFilter_MinAgeDays	= 2,
        FsrmReportFilter_MaxAgeDays	= 3,
        FsrmReportFilter_MinQuotaUsage	= 4,
        FsrmReportFilter_FileGroups	= 5,
        FsrmReportFilter_Owners	= 6,
        FsrmReportFilter_NamePattern	= 7,
        FsrmReportFilter_Property	= 8
    } 	FsrmReportFilter;

typedef 
enum _FsrmReportLimit
    {
        FsrmReportLimit_MaxFiles	= 1,
        FsrmReportLimit_MaxFileGroups	= 2,
        FsrmReportLimit_MaxOwners	= 3,
        FsrmReportLimit_MaxFilesPerFileGroup	= 4,
        FsrmReportLimit_MaxFilesPerOwner	= 5,
        FsrmReportLimit_MaxFilesPerDuplGroup	= 6,
        FsrmReportLimit_MaxDuplicateGroups	= 7,
        FsrmReportLimit_MaxQuotas	= 8,
        FsrmReportLimit_MaxFileScreenEvents	= 9,
        FsrmReportLimit_MaxPropertyValues	= 10,
        FsrmReportLimit_MaxFilesPerPropertyValue	= 11,
        FsrmReportLimit_MaxFolders	= 12
    } 	FsrmReportLimit;

typedef 
enum _FsrmPropertyDefinitionType
    {
        FsrmPropertyDefinitionType_Unknown	= 0,
        FsrmPropertyDefinitionType_OrderedList	= 1,
        FsrmPropertyDefinitionType_MultiChoiceList	= 2,
        FsrmPropertyDefinitionType_SingleChoiceList	= 3,
        FsrmPropertyDefinitionType_String	= 4,
        FsrmPropertyDefinitionType_MultiString	= 5,
        FsrmPropertyDefinitionType_Int	= 6,
        FsrmPropertyDefinitionType_Bool	= 7,
        FsrmPropertyDefinitionType_Date	= 8
    } 	FsrmPropertyDefinitionType;

typedef 
enum _FsrmPropertyDefinitionFlags
    {
        FsrmPropertyDefinitionFlags_Global	= 0x1,
        FsrmPropertyDefinitionFlags_Deprecated	= 0x2,
        FsrmPropertyDefinitionFlags_Secure	= 0x4
    } 	FsrmPropertyDefinitionFlags;

typedef 
enum _FsrmPropertyDefinitionAppliesTo
    {
        FsrmPropertyDefinitionAppliesTo_Files	= 0x1,
        FsrmPropertyDefinitionAppliesTo_Folders	= 0x2
    } 	FsrmPropertyDefinitionAppliesTo;

typedef 
enum _FsrmRuleType
    {
        FsrmRuleType_Unknown	= 0,
        FsrmRuleType_Classification	= 1,
        FsrmRuleType_Generic	= 2
    } 	FsrmRuleType;

typedef 
enum _FsrmRuleFlags
    {
        FsrmRuleFlags_Disabled	= 0x100,
        FsrmRuleFlags_Invalid	= 0x1000
    } 	FsrmRuleFlags;

typedef 
enum _FsrmClassificationLoggingFlags
    {
        FsrmClassificationLoggingFlags_None	= 0,
        FsrmClassificationLoggingFlags_ClassificationsInLogFile	= 0x1,
        FsrmClassificationLoggingFlags_ErrorsInLogFile	= 0x2,
        FsrmClassificationLoggingFlags_ClassificationsInSystemLog	= 0x4,
        FsrmClassificationLoggingFlags_ErrorsInSystemLog	= 0x8
    } 	FsrmClassificationLoggingFlags;

typedef 
enum _FsrmExecutionOption
    {
        FsrmExecutionOption_Unknown	= 0,
        FsrmExecutionOption_EvaluateUnset	= 1,
        FsrmExecutionOption_ReEvaluate_ConsiderExistingValue	= 2,
        FsrmExecutionOption_ReEvaluate_IgnoreExistingValue	= 3
    } 	FsrmExecutionOption;

typedef 
enum _FsrmStorageModuleCaps
    {
        FsrmStorageModuleCaps_Unknown	= 0,
        FsrmStorageModuleCaps_CanGet	= 0x1,
        FsrmStorageModuleCaps_CanSet	= 0x2,
        FsrmStorageModuleCaps_CanHandleDirectories	= 0x4,
        FsrmStorageModuleCaps_CanHandleFiles	= 0x8
    } 	FsrmStorageModuleCaps;

typedef 
enum _FsrmStorageModuleType
    {
        FsrmStorageModuleType_Unknown	= 0,
        FsrmStorageModuleType_Cache	= 1,
        FsrmStorageModuleType_InFile	= 2,
        FsrmStorageModuleType_Database	= 3,
        FsrmStorageModuleType_System	= 100
    } 	FsrmStorageModuleType;

typedef 
enum _FsrmPropertyBagFlags
    {
        FsrmPropertyBagFlags_UpdatedByClassifier	= 0x1,
        FsrmPropertyBagFlags_FailedLoadingProperties	= 0x2,
        FsrmPropertyBagFlags_FailedSavingProperties	= 0x4,
        FsrmPropertyBagFlags_FailedClassifyingProperties	= 0x8
    } 	FsrmPropertyBagFlags;

typedef 
enum _FsrmPropertyBagField
    {
        FsrmPropertyBagField_AccessVolume	= 0,
        FsrmPropertyBagField_VolumeGuidName	= 1
    } 	FsrmPropertyBagField;

typedef 
enum _FsrmPropertyFlags
    {
        FsrmPropertyFlags_None	= 0,
        FsrmPropertyFlags_Orphaned	= 0x1,
        FsrmPropertyFlags_RetrievedFromCache	= 0x2,
        FsrmPropertyFlags_RetrievedFromStorage	= 0x4,
        FsrmPropertyFlags_SetByClassifier	= 0x8,
        FsrmPropertyFlags_Deleted	= 0x10,
        FsrmPropertyFlags_Reclassified	= 0x20,
        FsrmPropertyFlags_AggregationFailed	= 0x40,
        FsrmPropertyFlags_Existing	= 0x80,
        FsrmPropertyFlags_FailedLoadingProperties	= 0x100,
        FsrmPropertyFlags_FailedClassifyingProperties	= 0x200,
        FsrmPropertyFlags_FailedSavingProperties	= 0x400,
        FsrmPropertyFlags_Secure	= 0x800,
        FsrmPropertyFlags_PolicyDerived	= 0x1000,
        FsrmPropertyFlags_Inherited	= 0x2000,
        FsrmPropertyFlags_Manual	= 0x4000,
        FsrmPropertyFlags_ExplicitValueDeleted	= 0x8000,
        FsrmPropertyFlags_PropertySourceMask	= ( ( FsrmPropertyFlags_RetrievedFromCache | FsrmPropertyFlags_RetrievedFromStorage )  | FsrmPropertyFlags_SetByClassifier ) ,
        FsrmPropertyFlags_PersistentMask	= ( FsrmPropertyFlags_PolicyDerived | FsrmPropertyFlags_Manual ) 
    } 	FsrmPropertyFlags;

typedef 
enum _FsrmPipelineModuleType
    {
        FsrmPipelineModuleType_Unknown	= 0,
        FsrmPipelineModuleType_Storage	= 1,
        FsrmPipelineModuleType_Classifier	= 2
    } 	FsrmPipelineModuleType;

typedef 
enum _FsrmGetFilePropertyOptions
    {
        FsrmGetFilePropertyOptions_None	= 0,
        FsrmGetFilePropertyOptions_NoRuleEvaluation	= 0x1,
        FsrmGetFilePropertyOptions_Persistent	= 0x2,
        FsrmGetFilePropertyOptions_FailOnPersistErrors	= 0x4,
        FsrmGetFilePropertyOptions_SkipOrphaned	= 0x8
    } 	FsrmGetFilePropertyOptions;

typedef 
enum _FsrmFileManagementType
    {
        FsrmFileManagementType_Unknown	= 0,
        FsrmFileManagementType_Expiration	= 1,
        FsrmFileManagementType_Custom	= 2,
        FsrmFileManagementType_Rms	= 3
    } 	FsrmFileManagementType;

typedef 
enum _FsrmFileManagementLoggingFlags
    {
        FsrmFileManagementLoggingFlags_None	= 0,
        FsrmFileManagementLoggingFlags_Error	= 0x1,
        FsrmFileManagementLoggingFlags_Information	= 0x2,
        FsrmFileManagementLoggingFlags_Audit	= 0x4
    } 	FsrmFileManagementLoggingFlags;

typedef 
enum _FsrmPropertyConditionType
    {
        FsrmPropertyConditionType_Unknown	= 0,
        FsrmPropertyConditionType_Equal	= 1,
        FsrmPropertyConditionType_NotEqual	= 2,
        FsrmPropertyConditionType_GreaterThan	= 3,
        FsrmPropertyConditionType_LessThan	= 4,
        FsrmPropertyConditionType_Contain	= 5,
        FsrmPropertyConditionType_Exist	= 6,
        FsrmPropertyConditionType_NotExist	= 7,
        FsrmPropertyConditionType_StartWith	= 8,
        FsrmPropertyConditionType_EndWith	= 9,
        FsrmPropertyConditionType_ContainedIn	= 10,
        FsrmPropertyConditionType_PrefixOf	= 11,
        FsrmPropertyConditionType_SuffixOf	= 12,
        FsrmPropertyConditionType_MatchesPattern	= 13
    } 	FsrmPropertyConditionType;

typedef 
enum _FsrmFileStreamingMode
    {
        FsrmFileStreamingMode_Unknown	= 0,
        FsrmFileStreamingMode_Read	= 0x1,
        FsrmFileStreamingMode_Write	= 0x2
    } 	FsrmFileStreamingMode;

typedef 
enum _FsrmFileStreamingInterfaceType
    {
        FsrmFileStreamingInterfaceType_Unknown	= 0,
        FsrmFileStreamingInterfaceType_ILockBytes	= 0x1,
        FsrmFileStreamingInterfaceType_IStream	= 0x2
    } 	FsrmFileStreamingInterfaceType;

typedef 
enum _FsrmFileConditionType
    {
        FsrmFileConditionType_Unknown	= 0,
        FsrmFileConditionType_Property	= 1
    } 	FsrmFileConditionType;

typedef 
enum _FsrmFileSystemPropertyId
    {
        FsrmFileSystemPropertyId_Undefined	= 0,
        FsrmFileSystemPropertyId_FileName	= 1,
        FsrmFileSystemPropertyId_DateCreated	= 2,
        FsrmFileSystemPropertyId_DateLastAccessed	= 3,
        FsrmFileSystemPropertyId_DateLastModified	= 4,
        FsrmFileSystemPropertyId_DateNow	= 5
    } 	FsrmFileSystemPropertyId;

typedef 
enum _FsrmPropertyValueType
    {
        FsrmPropertyValueType_Undefined	= 0,
        FsrmPropertyValueType_Literal	= 1,
        FsrmPropertyValueType_DateOffset	= 2
    } 	FsrmPropertyValueType;

typedef 
enum _AdrClientDisplayFlags
    {
        AdrClientDisplayFlags_AllowEmailRequests	= 0x1,
        AdrClientDisplayFlags_ShowDeviceTroubleshooting	= 0x2
    } 	AdrClientDisplayFlags;

typedef 
enum _AdrEmailFlags
    {
        AdrEmailFlags_PutDataOwnerOnToLine	= 0x1,
        AdrEmailFlags_PutAdminOnToLine	= 0x2,
        AdrEmailFlags_IncludeDeviceClaims	= 0x4,
        AdrEmailFlags_IncludeUserInfo	= 0x8,
        AdrEmailFlags_GenerateEventLog	= 0x10
    } 	AdrEmailFlags;

typedef 
enum _AdrClientErrorType
    {
        AdrClientErrorType_Unknown	= 0,
        AdrClientErrorType_AccessDenied	= 1,
        AdrClientErrorType_FileNotFound	= 2
    } 	AdrClientErrorType;

typedef 
enum _AdrClientFlags
    {
        AdrClientFlags_None	= 0,
        AdrClientFlags_FailForLocalPaths	= 0x1,
        AdrClientFlags_FailIfNotSupportedByServer	= 0x2,
        AdrClientFlags_FailIfNotDomainJoined	= 0x4
    } 	AdrClientFlags;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_fsrmenums_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmenums_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


