

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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __certenroll_h__
#define __certenroll_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IObjectId_FWD_DEFINED__
#define __IObjectId_FWD_DEFINED__
typedef interface IObjectId IObjectId;

#endif 	/* __IObjectId_FWD_DEFINED__ */


#ifndef __IObjectIds_FWD_DEFINED__
#define __IObjectIds_FWD_DEFINED__
typedef interface IObjectIds IObjectIds;

#endif 	/* __IObjectIds_FWD_DEFINED__ */


#ifndef __IBinaryConverter_FWD_DEFINED__
#define __IBinaryConverter_FWD_DEFINED__
typedef interface IBinaryConverter IBinaryConverter;

#endif 	/* __IBinaryConverter_FWD_DEFINED__ */


#ifndef __IX500DistinguishedName_FWD_DEFINED__
#define __IX500DistinguishedName_FWD_DEFINED__
typedef interface IX500DistinguishedName IX500DistinguishedName;

#endif 	/* __IX500DistinguishedName_FWD_DEFINED__ */


#ifndef __IX509EnrollmentStatus_FWD_DEFINED__
#define __IX509EnrollmentStatus_FWD_DEFINED__
typedef interface IX509EnrollmentStatus IX509EnrollmentStatus;

#endif 	/* __IX509EnrollmentStatus_FWD_DEFINED__ */


#ifndef __ICspAlgorithm_FWD_DEFINED__
#define __ICspAlgorithm_FWD_DEFINED__
typedef interface ICspAlgorithm ICspAlgorithm;

#endif 	/* __ICspAlgorithm_FWD_DEFINED__ */


#ifndef __ICspAlgorithms_FWD_DEFINED__
#define __ICspAlgorithms_FWD_DEFINED__
typedef interface ICspAlgorithms ICspAlgorithms;

#endif 	/* __ICspAlgorithms_FWD_DEFINED__ */


#ifndef __ICspInformation_FWD_DEFINED__
#define __ICspInformation_FWD_DEFINED__
typedef interface ICspInformation ICspInformation;

#endif 	/* __ICspInformation_FWD_DEFINED__ */


#ifndef __ICspInformations_FWD_DEFINED__
#define __ICspInformations_FWD_DEFINED__
typedef interface ICspInformations ICspInformations;

#endif 	/* __ICspInformations_FWD_DEFINED__ */


#ifndef __ICspStatus_FWD_DEFINED__
#define __ICspStatus_FWD_DEFINED__
typedef interface ICspStatus ICspStatus;

#endif 	/* __ICspStatus_FWD_DEFINED__ */


#ifndef __ICspStatuses_FWD_DEFINED__
#define __ICspStatuses_FWD_DEFINED__
typedef interface ICspStatuses ICspStatuses;

#endif 	/* __ICspStatuses_FWD_DEFINED__ */


#ifndef __IX509PublicKey_FWD_DEFINED__
#define __IX509PublicKey_FWD_DEFINED__
typedef interface IX509PublicKey IX509PublicKey;

#endif 	/* __IX509PublicKey_FWD_DEFINED__ */


#ifndef __IX509PrivateKey_FWD_DEFINED__
#define __IX509PrivateKey_FWD_DEFINED__
typedef interface IX509PrivateKey IX509PrivateKey;

#endif 	/* __IX509PrivateKey_FWD_DEFINED__ */


#ifndef __IX509Extension_FWD_DEFINED__
#define __IX509Extension_FWD_DEFINED__
typedef interface IX509Extension IX509Extension;

#endif 	/* __IX509Extension_FWD_DEFINED__ */


#ifndef __IX509Extensions_FWD_DEFINED__
#define __IX509Extensions_FWD_DEFINED__
typedef interface IX509Extensions IX509Extensions;

#endif 	/* __IX509Extensions_FWD_DEFINED__ */


#ifndef __IX509ExtensionKeyUsage_FWD_DEFINED__
#define __IX509ExtensionKeyUsage_FWD_DEFINED__
typedef interface IX509ExtensionKeyUsage IX509ExtensionKeyUsage;

#endif 	/* __IX509ExtensionKeyUsage_FWD_DEFINED__ */


#ifndef __IX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
#define __IX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
typedef interface IX509ExtensionEnhancedKeyUsage IX509ExtensionEnhancedKeyUsage;

#endif 	/* __IX509ExtensionEnhancedKeyUsage_FWD_DEFINED__ */


#ifndef __IX509ExtensionTemplateName_FWD_DEFINED__
#define __IX509ExtensionTemplateName_FWD_DEFINED__
typedef interface IX509ExtensionTemplateName IX509ExtensionTemplateName;

#endif 	/* __IX509ExtensionTemplateName_FWD_DEFINED__ */


#ifndef __IX509ExtensionTemplate_FWD_DEFINED__
#define __IX509ExtensionTemplate_FWD_DEFINED__
typedef interface IX509ExtensionTemplate IX509ExtensionTemplate;

#endif 	/* __IX509ExtensionTemplate_FWD_DEFINED__ */


#ifndef __IAlternativeName_FWD_DEFINED__
#define __IAlternativeName_FWD_DEFINED__
typedef interface IAlternativeName IAlternativeName;

#endif 	/* __IAlternativeName_FWD_DEFINED__ */


#ifndef __IAlternativeNames_FWD_DEFINED__
#define __IAlternativeNames_FWD_DEFINED__
typedef interface IAlternativeNames IAlternativeNames;

#endif 	/* __IAlternativeNames_FWD_DEFINED__ */


#ifndef __IX509ExtensionAlternativeNames_FWD_DEFINED__
#define __IX509ExtensionAlternativeNames_FWD_DEFINED__
typedef interface IX509ExtensionAlternativeNames IX509ExtensionAlternativeNames;

#endif 	/* __IX509ExtensionAlternativeNames_FWD_DEFINED__ */


#ifndef __IX509ExtensionBasicConstraints_FWD_DEFINED__
#define __IX509ExtensionBasicConstraints_FWD_DEFINED__
typedef interface IX509ExtensionBasicConstraints IX509ExtensionBasicConstraints;

#endif 	/* __IX509ExtensionBasicConstraints_FWD_DEFINED__ */


#ifndef __IX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__
#define __IX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__
typedef interface IX509ExtensionSubjectKeyIdentifier IX509ExtensionSubjectKeyIdentifier;

#endif 	/* __IX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__ */


#ifndef __IX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__
#define __IX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__
typedef interface IX509ExtensionAuthorityKeyIdentifier IX509ExtensionAuthorityKeyIdentifier;

#endif 	/* __IX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__ */


#ifndef __ISmimeCapability_FWD_DEFINED__
#define __ISmimeCapability_FWD_DEFINED__
typedef interface ISmimeCapability ISmimeCapability;

#endif 	/* __ISmimeCapability_FWD_DEFINED__ */


#ifndef __ISmimeCapabilities_FWD_DEFINED__
#define __ISmimeCapabilities_FWD_DEFINED__
typedef interface ISmimeCapabilities ISmimeCapabilities;

#endif 	/* __ISmimeCapabilities_FWD_DEFINED__ */


#ifndef __IX509ExtensionSmimeCapabilities_FWD_DEFINED__
#define __IX509ExtensionSmimeCapabilities_FWD_DEFINED__
typedef interface IX509ExtensionSmimeCapabilities IX509ExtensionSmimeCapabilities;

#endif 	/* __IX509ExtensionSmimeCapabilities_FWD_DEFINED__ */


#ifndef __IPolicyQualifier_FWD_DEFINED__
#define __IPolicyQualifier_FWD_DEFINED__
typedef interface IPolicyQualifier IPolicyQualifier;

#endif 	/* __IPolicyQualifier_FWD_DEFINED__ */


#ifndef __IPolicyQualifiers_FWD_DEFINED__
#define __IPolicyQualifiers_FWD_DEFINED__
typedef interface IPolicyQualifiers IPolicyQualifiers;

#endif 	/* __IPolicyQualifiers_FWD_DEFINED__ */


#ifndef __ICertificatePolicy_FWD_DEFINED__
#define __ICertificatePolicy_FWD_DEFINED__
typedef interface ICertificatePolicy ICertificatePolicy;

#endif 	/* __ICertificatePolicy_FWD_DEFINED__ */


#ifndef __ICertificatePolicies_FWD_DEFINED__
#define __ICertificatePolicies_FWD_DEFINED__
typedef interface ICertificatePolicies ICertificatePolicies;

#endif 	/* __ICertificatePolicies_FWD_DEFINED__ */


#ifndef __IX509ExtensionCertificatePolicies_FWD_DEFINED__
#define __IX509ExtensionCertificatePolicies_FWD_DEFINED__
typedef interface IX509ExtensionCertificatePolicies IX509ExtensionCertificatePolicies;

#endif 	/* __IX509ExtensionCertificatePolicies_FWD_DEFINED__ */


#ifndef __IX509ExtensionMSApplicationPolicies_FWD_DEFINED__
#define __IX509ExtensionMSApplicationPolicies_FWD_DEFINED__
typedef interface IX509ExtensionMSApplicationPolicies IX509ExtensionMSApplicationPolicies;

#endif 	/* __IX509ExtensionMSApplicationPolicies_FWD_DEFINED__ */


#ifndef __IX509Attribute_FWD_DEFINED__
#define __IX509Attribute_FWD_DEFINED__
typedef interface IX509Attribute IX509Attribute;

#endif 	/* __IX509Attribute_FWD_DEFINED__ */


#ifndef __IX509Attributes_FWD_DEFINED__
#define __IX509Attributes_FWD_DEFINED__
typedef interface IX509Attributes IX509Attributes;

#endif 	/* __IX509Attributes_FWD_DEFINED__ */


#ifndef __IX509AttributeExtensions_FWD_DEFINED__
#define __IX509AttributeExtensions_FWD_DEFINED__
typedef interface IX509AttributeExtensions IX509AttributeExtensions;

#endif 	/* __IX509AttributeExtensions_FWD_DEFINED__ */


#ifndef __IX509AttributeClientId_FWD_DEFINED__
#define __IX509AttributeClientId_FWD_DEFINED__
typedef interface IX509AttributeClientId IX509AttributeClientId;

#endif 	/* __IX509AttributeClientId_FWD_DEFINED__ */


#ifndef __IX509AttributeRenewalCertificate_FWD_DEFINED__
#define __IX509AttributeRenewalCertificate_FWD_DEFINED__
typedef interface IX509AttributeRenewalCertificate IX509AttributeRenewalCertificate;

#endif 	/* __IX509AttributeRenewalCertificate_FWD_DEFINED__ */


#ifndef __IX509AttributeArchiveKey_FWD_DEFINED__
#define __IX509AttributeArchiveKey_FWD_DEFINED__
typedef interface IX509AttributeArchiveKey IX509AttributeArchiveKey;

#endif 	/* __IX509AttributeArchiveKey_FWD_DEFINED__ */


#ifndef __IX509AttributeArchiveKeyHash_FWD_DEFINED__
#define __IX509AttributeArchiveKeyHash_FWD_DEFINED__
typedef interface IX509AttributeArchiveKeyHash IX509AttributeArchiveKeyHash;

#endif 	/* __IX509AttributeArchiveKeyHash_FWD_DEFINED__ */


#ifndef __IX509AttributeOSVersion_FWD_DEFINED__
#define __IX509AttributeOSVersion_FWD_DEFINED__
typedef interface IX509AttributeOSVersion IX509AttributeOSVersion;

#endif 	/* __IX509AttributeOSVersion_FWD_DEFINED__ */


#ifndef __IX509AttributeCspProvider_FWD_DEFINED__
#define __IX509AttributeCspProvider_FWD_DEFINED__
typedef interface IX509AttributeCspProvider IX509AttributeCspProvider;

#endif 	/* __IX509AttributeCspProvider_FWD_DEFINED__ */


#ifndef __ICryptAttribute_FWD_DEFINED__
#define __ICryptAttribute_FWD_DEFINED__
typedef interface ICryptAttribute ICryptAttribute;

#endif 	/* __ICryptAttribute_FWD_DEFINED__ */


#ifndef __ICryptAttributes_FWD_DEFINED__
#define __ICryptAttributes_FWD_DEFINED__
typedef interface ICryptAttributes ICryptAttributes;

#endif 	/* __ICryptAttributes_FWD_DEFINED__ */


#ifndef __ICertProperty_FWD_DEFINED__
#define __ICertProperty_FWD_DEFINED__
typedef interface ICertProperty ICertProperty;

#endif 	/* __ICertProperty_FWD_DEFINED__ */


#ifndef __ICertProperties_FWD_DEFINED__
#define __ICertProperties_FWD_DEFINED__
typedef interface ICertProperties ICertProperties;

#endif 	/* __ICertProperties_FWD_DEFINED__ */


#ifndef __ICertPropertyFriendlyName_FWD_DEFINED__
#define __ICertPropertyFriendlyName_FWD_DEFINED__
typedef interface ICertPropertyFriendlyName ICertPropertyFriendlyName;

#endif 	/* __ICertPropertyFriendlyName_FWD_DEFINED__ */


#ifndef __ICertPropertyDescription_FWD_DEFINED__
#define __ICertPropertyDescription_FWD_DEFINED__
typedef interface ICertPropertyDescription ICertPropertyDescription;

#endif 	/* __ICertPropertyDescription_FWD_DEFINED__ */


#ifndef __ICertPropertyAutoEnroll_FWD_DEFINED__
#define __ICertPropertyAutoEnroll_FWD_DEFINED__
typedef interface ICertPropertyAutoEnroll ICertPropertyAutoEnroll;

#endif 	/* __ICertPropertyAutoEnroll_FWD_DEFINED__ */


#ifndef __ICertPropertyRequestOriginator_FWD_DEFINED__
#define __ICertPropertyRequestOriginator_FWD_DEFINED__
typedef interface ICertPropertyRequestOriginator ICertPropertyRequestOriginator;

#endif 	/* __ICertPropertyRequestOriginator_FWD_DEFINED__ */


#ifndef __ICertPropertySHA1Hash_FWD_DEFINED__
#define __ICertPropertySHA1Hash_FWD_DEFINED__
typedef interface ICertPropertySHA1Hash ICertPropertySHA1Hash;

#endif 	/* __ICertPropertySHA1Hash_FWD_DEFINED__ */


#ifndef __ICertPropertyKeyProvInfo_FWD_DEFINED__
#define __ICertPropertyKeyProvInfo_FWD_DEFINED__
typedef interface ICertPropertyKeyProvInfo ICertPropertyKeyProvInfo;

#endif 	/* __ICertPropertyKeyProvInfo_FWD_DEFINED__ */


#ifndef __ICertPropertyArchived_FWD_DEFINED__
#define __ICertPropertyArchived_FWD_DEFINED__
typedef interface ICertPropertyArchived ICertPropertyArchived;

#endif 	/* __ICertPropertyArchived_FWD_DEFINED__ */


#ifndef __ICertPropertyBackedUp_FWD_DEFINED__
#define __ICertPropertyBackedUp_FWD_DEFINED__
typedef interface ICertPropertyBackedUp ICertPropertyBackedUp;

#endif 	/* __ICertPropertyBackedUp_FWD_DEFINED__ */


#ifndef __ICertPropertyEnrollment_FWD_DEFINED__
#define __ICertPropertyEnrollment_FWD_DEFINED__
typedef interface ICertPropertyEnrollment ICertPropertyEnrollment;

#endif 	/* __ICertPropertyEnrollment_FWD_DEFINED__ */


#ifndef __ICertPropertyRenewal_FWD_DEFINED__
#define __ICertPropertyRenewal_FWD_DEFINED__
typedef interface ICertPropertyRenewal ICertPropertyRenewal;

#endif 	/* __ICertPropertyRenewal_FWD_DEFINED__ */


#ifndef __ICertPropertyArchivedKeyHash_FWD_DEFINED__
#define __ICertPropertyArchivedKeyHash_FWD_DEFINED__
typedef interface ICertPropertyArchivedKeyHash ICertPropertyArchivedKeyHash;

#endif 	/* __ICertPropertyArchivedKeyHash_FWD_DEFINED__ */


#ifndef __ICertPropertyEnrollmentPolicyServer_FWD_DEFINED__
#define __ICertPropertyEnrollmentPolicyServer_FWD_DEFINED__
typedef interface ICertPropertyEnrollmentPolicyServer ICertPropertyEnrollmentPolicyServer;

#endif 	/* __ICertPropertyEnrollmentPolicyServer_FWD_DEFINED__ */


#ifndef __IX509SignatureInformation_FWD_DEFINED__
#define __IX509SignatureInformation_FWD_DEFINED__
typedef interface IX509SignatureInformation IX509SignatureInformation;

#endif 	/* __IX509SignatureInformation_FWD_DEFINED__ */


#ifndef __ISignerCertificate_FWD_DEFINED__
#define __ISignerCertificate_FWD_DEFINED__
typedef interface ISignerCertificate ISignerCertificate;

#endif 	/* __ISignerCertificate_FWD_DEFINED__ */


#ifndef __ISignerCertificates_FWD_DEFINED__
#define __ISignerCertificates_FWD_DEFINED__
typedef interface ISignerCertificates ISignerCertificates;

#endif 	/* __ISignerCertificates_FWD_DEFINED__ */


#ifndef __IX509NameValuePair_FWD_DEFINED__
#define __IX509NameValuePair_FWD_DEFINED__
typedef interface IX509NameValuePair IX509NameValuePair;

#endif 	/* __IX509NameValuePair_FWD_DEFINED__ */


#ifndef __IX509NameValuePairs_FWD_DEFINED__
#define __IX509NameValuePairs_FWD_DEFINED__
typedef interface IX509NameValuePairs IX509NameValuePairs;

#endif 	/* __IX509NameValuePairs_FWD_DEFINED__ */


#ifndef __IX509CertificateTemplate_FWD_DEFINED__
#define __IX509CertificateTemplate_FWD_DEFINED__
typedef interface IX509CertificateTemplate IX509CertificateTemplate;

#endif 	/* __IX509CertificateTemplate_FWD_DEFINED__ */


#ifndef __IX509CertificateTemplates_FWD_DEFINED__
#define __IX509CertificateTemplates_FWD_DEFINED__
typedef interface IX509CertificateTemplates IX509CertificateTemplates;

#endif 	/* __IX509CertificateTemplates_FWD_DEFINED__ */


#ifndef __IX509CertificateTemplateWritable_FWD_DEFINED__
#define __IX509CertificateTemplateWritable_FWD_DEFINED__
typedef interface IX509CertificateTemplateWritable IX509CertificateTemplateWritable;

#endif 	/* __IX509CertificateTemplateWritable_FWD_DEFINED__ */


#ifndef __ICertificationAuthority_FWD_DEFINED__
#define __ICertificationAuthority_FWD_DEFINED__
typedef interface ICertificationAuthority ICertificationAuthority;

#endif 	/* __ICertificationAuthority_FWD_DEFINED__ */


#ifndef __ICertificationAuthorities_FWD_DEFINED__
#define __ICertificationAuthorities_FWD_DEFINED__
typedef interface ICertificationAuthorities ICertificationAuthorities;

#endif 	/* __ICertificationAuthorities_FWD_DEFINED__ */


#ifndef __IX509EnrollmentPolicyServer_FWD_DEFINED__
#define __IX509EnrollmentPolicyServer_FWD_DEFINED__
typedef interface IX509EnrollmentPolicyServer IX509EnrollmentPolicyServer;

#endif 	/* __IX509EnrollmentPolicyServer_FWD_DEFINED__ */


#ifndef __IX509PolicyServerUrl_FWD_DEFINED__
#define __IX509PolicyServerUrl_FWD_DEFINED__
typedef interface IX509PolicyServerUrl IX509PolicyServerUrl;

#endif 	/* __IX509PolicyServerUrl_FWD_DEFINED__ */


#ifndef __IX509PolicyServerListManager_FWD_DEFINED__
#define __IX509PolicyServerListManager_FWD_DEFINED__
typedef interface IX509PolicyServerListManager IX509PolicyServerListManager;

#endif 	/* __IX509PolicyServerListManager_FWD_DEFINED__ */


#ifndef __IX509CertificateRequest_FWD_DEFINED__
#define __IX509CertificateRequest_FWD_DEFINED__
typedef interface IX509CertificateRequest IX509CertificateRequest;

#endif 	/* __IX509CertificateRequest_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestPkcs10_FWD_DEFINED__
#define __IX509CertificateRequestPkcs10_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs10 IX509CertificateRequestPkcs10;

#endif 	/* __IX509CertificateRequestPkcs10_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestPkcs10V2_FWD_DEFINED__
#define __IX509CertificateRequestPkcs10V2_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs10V2 IX509CertificateRequestPkcs10V2;

#endif 	/* __IX509CertificateRequestPkcs10V2_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestCertificate_FWD_DEFINED__
#define __IX509CertificateRequestCertificate_FWD_DEFINED__
typedef interface IX509CertificateRequestCertificate IX509CertificateRequestCertificate;

#endif 	/* __IX509CertificateRequestCertificate_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestCertificate2_FWD_DEFINED__
#define __IX509CertificateRequestCertificate2_FWD_DEFINED__
typedef interface IX509CertificateRequestCertificate2 IX509CertificateRequestCertificate2;

#endif 	/* __IX509CertificateRequestCertificate2_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestPkcs7_FWD_DEFINED__
#define __IX509CertificateRequestPkcs7_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs7 IX509CertificateRequestPkcs7;

#endif 	/* __IX509CertificateRequestPkcs7_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestPkcs7V2_FWD_DEFINED__
#define __IX509CertificateRequestPkcs7V2_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs7V2 IX509CertificateRequestPkcs7V2;

#endif 	/* __IX509CertificateRequestPkcs7V2_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestCmc_FWD_DEFINED__
#define __IX509CertificateRequestCmc_FWD_DEFINED__
typedef interface IX509CertificateRequestCmc IX509CertificateRequestCmc;

#endif 	/* __IX509CertificateRequestCmc_FWD_DEFINED__ */


#ifndef __IX509CertificateRequestCmc2_FWD_DEFINED__
#define __IX509CertificateRequestCmc2_FWD_DEFINED__
typedef interface IX509CertificateRequestCmc2 IX509CertificateRequestCmc2;

#endif 	/* __IX509CertificateRequestCmc2_FWD_DEFINED__ */


#ifndef __IX509Enrollment_FWD_DEFINED__
#define __IX509Enrollment_FWD_DEFINED__
typedef interface IX509Enrollment IX509Enrollment;

#endif 	/* __IX509Enrollment_FWD_DEFINED__ */


#ifndef __IX509Enrollment2_FWD_DEFINED__
#define __IX509Enrollment2_FWD_DEFINED__
typedef interface IX509Enrollment2 IX509Enrollment2;

#endif 	/* __IX509Enrollment2_FWD_DEFINED__ */


#ifndef __IX509EnrollmentHelper_FWD_DEFINED__
#define __IX509EnrollmentHelper_FWD_DEFINED__
typedef interface IX509EnrollmentHelper IX509EnrollmentHelper;

#endif 	/* __IX509EnrollmentHelper_FWD_DEFINED__ */


#ifndef __IX509EnrollmentWebClassFactory_FWD_DEFINED__
#define __IX509EnrollmentWebClassFactory_FWD_DEFINED__
typedef interface IX509EnrollmentWebClassFactory IX509EnrollmentWebClassFactory;

#endif 	/* __IX509EnrollmentWebClassFactory_FWD_DEFINED__ */


#ifndef __IX509MachineEnrollmentFactory_FWD_DEFINED__
#define __IX509MachineEnrollmentFactory_FWD_DEFINED__
typedef interface IX509MachineEnrollmentFactory IX509MachineEnrollmentFactory;

#endif 	/* __IX509MachineEnrollmentFactory_FWD_DEFINED__ */


#ifndef __CObjectId_FWD_DEFINED__
#define __CObjectId_FWD_DEFINED__

#ifdef __cplusplus
typedef class CObjectId CObjectId;
#else
typedef struct CObjectId CObjectId;
#endif /* __cplusplus */

#endif 	/* __CObjectId_FWD_DEFINED__ */


#ifndef __CObjectIds_FWD_DEFINED__
#define __CObjectIds_FWD_DEFINED__

#ifdef __cplusplus
typedef class CObjectIds CObjectIds;
#else
typedef struct CObjectIds CObjectIds;
#endif /* __cplusplus */

#endif 	/* __CObjectIds_FWD_DEFINED__ */


#ifndef __CBinaryConverter_FWD_DEFINED__
#define __CBinaryConverter_FWD_DEFINED__

#ifdef __cplusplus
typedef class CBinaryConverter CBinaryConverter;
#else
typedef struct CBinaryConverter CBinaryConverter;
#endif /* __cplusplus */

#endif 	/* __CBinaryConverter_FWD_DEFINED__ */


#ifndef __CX500DistinguishedName_FWD_DEFINED__
#define __CX500DistinguishedName_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX500DistinguishedName CX500DistinguishedName;
#else
typedef struct CX500DistinguishedName CX500DistinguishedName;
#endif /* __cplusplus */

#endif 	/* __CX500DistinguishedName_FWD_DEFINED__ */


#ifndef __CCspInformation_FWD_DEFINED__
#define __CCspInformation_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCspInformation CCspInformation;
#else
typedef struct CCspInformation CCspInformation;
#endif /* __cplusplus */

#endif 	/* __CCspInformation_FWD_DEFINED__ */


#ifndef __CCspInformations_FWD_DEFINED__
#define __CCspInformations_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCspInformations CCspInformations;
#else
typedef struct CCspInformations CCspInformations;
#endif /* __cplusplus */

#endif 	/* __CCspInformations_FWD_DEFINED__ */


#ifndef __CCspStatus_FWD_DEFINED__
#define __CCspStatus_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCspStatus CCspStatus;
#else
typedef struct CCspStatus CCspStatus;
#endif /* __cplusplus */

#endif 	/* __CCspStatus_FWD_DEFINED__ */


#ifndef __CX509PublicKey_FWD_DEFINED__
#define __CX509PublicKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509PublicKey CX509PublicKey;
#else
typedef struct CX509PublicKey CX509PublicKey;
#endif /* __cplusplus */

#endif 	/* __CX509PublicKey_FWD_DEFINED__ */


#ifndef __CX509PrivateKey_FWD_DEFINED__
#define __CX509PrivateKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509PrivateKey CX509PrivateKey;
#else
typedef struct CX509PrivateKey CX509PrivateKey;
#endif /* __cplusplus */

#endif 	/* __CX509PrivateKey_FWD_DEFINED__ */


#ifndef __CX509Extension_FWD_DEFINED__
#define __CX509Extension_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509Extension CX509Extension;
#else
typedef struct CX509Extension CX509Extension;
#endif /* __cplusplus */

#endif 	/* __CX509Extension_FWD_DEFINED__ */


#ifndef __CX509Extensions_FWD_DEFINED__
#define __CX509Extensions_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509Extensions CX509Extensions;
#else
typedef struct CX509Extensions CX509Extensions;
#endif /* __cplusplus */

#endif 	/* __CX509Extensions_FWD_DEFINED__ */


#ifndef __CX509ExtensionKeyUsage_FWD_DEFINED__
#define __CX509ExtensionKeyUsage_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionKeyUsage CX509ExtensionKeyUsage;
#else
typedef struct CX509ExtensionKeyUsage CX509ExtensionKeyUsage;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionKeyUsage_FWD_DEFINED__ */


#ifndef __CX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
#define __CX509ExtensionEnhancedKeyUsage_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionEnhancedKeyUsage CX509ExtensionEnhancedKeyUsage;
#else
typedef struct CX509ExtensionEnhancedKeyUsage CX509ExtensionEnhancedKeyUsage;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionEnhancedKeyUsage_FWD_DEFINED__ */


#ifndef __CX509ExtensionTemplateName_FWD_DEFINED__
#define __CX509ExtensionTemplateName_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionTemplateName CX509ExtensionTemplateName;
#else
typedef struct CX509ExtensionTemplateName CX509ExtensionTemplateName;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionTemplateName_FWD_DEFINED__ */


#ifndef __CX509ExtensionTemplate_FWD_DEFINED__
#define __CX509ExtensionTemplate_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionTemplate CX509ExtensionTemplate;
#else
typedef struct CX509ExtensionTemplate CX509ExtensionTemplate;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionTemplate_FWD_DEFINED__ */


#ifndef __CAlternativeName_FWD_DEFINED__
#define __CAlternativeName_FWD_DEFINED__

#ifdef __cplusplus
typedef class CAlternativeName CAlternativeName;
#else
typedef struct CAlternativeName CAlternativeName;
#endif /* __cplusplus */

#endif 	/* __CAlternativeName_FWD_DEFINED__ */


#ifndef __CAlternativeNames_FWD_DEFINED__
#define __CAlternativeNames_FWD_DEFINED__

#ifdef __cplusplus
typedef class CAlternativeNames CAlternativeNames;
#else
typedef struct CAlternativeNames CAlternativeNames;
#endif /* __cplusplus */

#endif 	/* __CAlternativeNames_FWD_DEFINED__ */


#ifndef __CX509ExtensionAlternativeNames_FWD_DEFINED__
#define __CX509ExtensionAlternativeNames_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionAlternativeNames CX509ExtensionAlternativeNames;
#else
typedef struct CX509ExtensionAlternativeNames CX509ExtensionAlternativeNames;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionAlternativeNames_FWD_DEFINED__ */


#ifndef __CX509ExtensionBasicConstraints_FWD_DEFINED__
#define __CX509ExtensionBasicConstraints_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionBasicConstraints CX509ExtensionBasicConstraints;
#else
typedef struct CX509ExtensionBasicConstraints CX509ExtensionBasicConstraints;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionBasicConstraints_FWD_DEFINED__ */


#ifndef __CX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__
#define __CX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionSubjectKeyIdentifier CX509ExtensionSubjectKeyIdentifier;
#else
typedef struct CX509ExtensionSubjectKeyIdentifier CX509ExtensionSubjectKeyIdentifier;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__ */


#ifndef __CX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__
#define __CX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionAuthorityKeyIdentifier CX509ExtensionAuthorityKeyIdentifier;
#else
typedef struct CX509ExtensionAuthorityKeyIdentifier CX509ExtensionAuthorityKeyIdentifier;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__ */


#ifndef __CSmimeCapability_FWD_DEFINED__
#define __CSmimeCapability_FWD_DEFINED__

#ifdef __cplusplus
typedef class CSmimeCapability CSmimeCapability;
#else
typedef struct CSmimeCapability CSmimeCapability;
#endif /* __cplusplus */

#endif 	/* __CSmimeCapability_FWD_DEFINED__ */


#ifndef __CSmimeCapabilities_FWD_DEFINED__
#define __CSmimeCapabilities_FWD_DEFINED__

#ifdef __cplusplus
typedef class CSmimeCapabilities CSmimeCapabilities;
#else
typedef struct CSmimeCapabilities CSmimeCapabilities;
#endif /* __cplusplus */

#endif 	/* __CSmimeCapabilities_FWD_DEFINED__ */


#ifndef __CX509ExtensionSmimeCapabilities_FWD_DEFINED__
#define __CX509ExtensionSmimeCapabilities_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionSmimeCapabilities CX509ExtensionSmimeCapabilities;
#else
typedef struct CX509ExtensionSmimeCapabilities CX509ExtensionSmimeCapabilities;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionSmimeCapabilities_FWD_DEFINED__ */


#ifndef __CPolicyQualifier_FWD_DEFINED__
#define __CPolicyQualifier_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPolicyQualifier CPolicyQualifier;
#else
typedef struct CPolicyQualifier CPolicyQualifier;
#endif /* __cplusplus */

#endif 	/* __CPolicyQualifier_FWD_DEFINED__ */


#ifndef __CPolicyQualifiers_FWD_DEFINED__
#define __CPolicyQualifiers_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPolicyQualifiers CPolicyQualifiers;
#else
typedef struct CPolicyQualifiers CPolicyQualifiers;
#endif /* __cplusplus */

#endif 	/* __CPolicyQualifiers_FWD_DEFINED__ */


#ifndef __CCertificatePolicy_FWD_DEFINED__
#define __CCertificatePolicy_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertificatePolicy CCertificatePolicy;
#else
typedef struct CCertificatePolicy CCertificatePolicy;
#endif /* __cplusplus */

#endif 	/* __CCertificatePolicy_FWD_DEFINED__ */


#ifndef __CCertificatePolicies_FWD_DEFINED__
#define __CCertificatePolicies_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertificatePolicies CCertificatePolicies;
#else
typedef struct CCertificatePolicies CCertificatePolicies;
#endif /* __cplusplus */

#endif 	/* __CCertificatePolicies_FWD_DEFINED__ */


#ifndef __CX509ExtensionCertificatePolicies_FWD_DEFINED__
#define __CX509ExtensionCertificatePolicies_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionCertificatePolicies CX509ExtensionCertificatePolicies;
#else
typedef struct CX509ExtensionCertificatePolicies CX509ExtensionCertificatePolicies;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionCertificatePolicies_FWD_DEFINED__ */


#ifndef __CX509ExtensionMSApplicationPolicies_FWD_DEFINED__
#define __CX509ExtensionMSApplicationPolicies_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509ExtensionMSApplicationPolicies CX509ExtensionMSApplicationPolicies;
#else
typedef struct CX509ExtensionMSApplicationPolicies CX509ExtensionMSApplicationPolicies;
#endif /* __cplusplus */

#endif 	/* __CX509ExtensionMSApplicationPolicies_FWD_DEFINED__ */


#ifndef __CX509Attribute_FWD_DEFINED__
#define __CX509Attribute_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509Attribute CX509Attribute;
#else
typedef struct CX509Attribute CX509Attribute;
#endif /* __cplusplus */

#endif 	/* __CX509Attribute_FWD_DEFINED__ */


#ifndef __CX509Attributes_FWD_DEFINED__
#define __CX509Attributes_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509Attributes CX509Attributes;
#else
typedef struct CX509Attributes CX509Attributes;
#endif /* __cplusplus */

#endif 	/* __CX509Attributes_FWD_DEFINED__ */


#ifndef __CX509AttributeExtensions_FWD_DEFINED__
#define __CX509AttributeExtensions_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509AttributeExtensions CX509AttributeExtensions;
#else
typedef struct CX509AttributeExtensions CX509AttributeExtensions;
#endif /* __cplusplus */

#endif 	/* __CX509AttributeExtensions_FWD_DEFINED__ */


#ifndef __CX509AttributeClientId_FWD_DEFINED__
#define __CX509AttributeClientId_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509AttributeClientId CX509AttributeClientId;
#else
typedef struct CX509AttributeClientId CX509AttributeClientId;
#endif /* __cplusplus */

#endif 	/* __CX509AttributeClientId_FWD_DEFINED__ */


#ifndef __CX509AttributeRenewalCertificate_FWD_DEFINED__
#define __CX509AttributeRenewalCertificate_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509AttributeRenewalCertificate CX509AttributeRenewalCertificate;
#else
typedef struct CX509AttributeRenewalCertificate CX509AttributeRenewalCertificate;
#endif /* __cplusplus */

#endif 	/* __CX509AttributeRenewalCertificate_FWD_DEFINED__ */


#ifndef __CX509AttributeArchiveKey_FWD_DEFINED__
#define __CX509AttributeArchiveKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509AttributeArchiveKey CX509AttributeArchiveKey;
#else
typedef struct CX509AttributeArchiveKey CX509AttributeArchiveKey;
#endif /* __cplusplus */

#endif 	/* __CX509AttributeArchiveKey_FWD_DEFINED__ */


#ifndef __CX509AttributeArchiveKeyHash_FWD_DEFINED__
#define __CX509AttributeArchiveKeyHash_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509AttributeArchiveKeyHash CX509AttributeArchiveKeyHash;
#else
typedef struct CX509AttributeArchiveKeyHash CX509AttributeArchiveKeyHash;
#endif /* __cplusplus */

#endif 	/* __CX509AttributeArchiveKeyHash_FWD_DEFINED__ */


#ifndef __CX509AttributeOSVersion_FWD_DEFINED__
#define __CX509AttributeOSVersion_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509AttributeOSVersion CX509AttributeOSVersion;
#else
typedef struct CX509AttributeOSVersion CX509AttributeOSVersion;
#endif /* __cplusplus */

#endif 	/* __CX509AttributeOSVersion_FWD_DEFINED__ */


#ifndef __CX509AttributeCspProvider_FWD_DEFINED__
#define __CX509AttributeCspProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509AttributeCspProvider CX509AttributeCspProvider;
#else
typedef struct CX509AttributeCspProvider CX509AttributeCspProvider;
#endif /* __cplusplus */

#endif 	/* __CX509AttributeCspProvider_FWD_DEFINED__ */


#ifndef __CCryptAttribute_FWD_DEFINED__
#define __CCryptAttribute_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCryptAttribute CCryptAttribute;
#else
typedef struct CCryptAttribute CCryptAttribute;
#endif /* __cplusplus */

#endif 	/* __CCryptAttribute_FWD_DEFINED__ */


#ifndef __CCryptAttributes_FWD_DEFINED__
#define __CCryptAttributes_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCryptAttributes CCryptAttributes;
#else
typedef struct CCryptAttributes CCryptAttributes;
#endif /* __cplusplus */

#endif 	/* __CCryptAttributes_FWD_DEFINED__ */


#ifndef __CCertProperty_FWD_DEFINED__
#define __CCertProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertProperty CCertProperty;
#else
typedef struct CCertProperty CCertProperty;
#endif /* __cplusplus */

#endif 	/* __CCertProperty_FWD_DEFINED__ */


#ifndef __CCertProperties_FWD_DEFINED__
#define __CCertProperties_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertProperties CCertProperties;
#else
typedef struct CCertProperties CCertProperties;
#endif /* __cplusplus */

#endif 	/* __CCertProperties_FWD_DEFINED__ */


#ifndef __CCertPropertyFriendlyName_FWD_DEFINED__
#define __CCertPropertyFriendlyName_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyFriendlyName CCertPropertyFriendlyName;
#else
typedef struct CCertPropertyFriendlyName CCertPropertyFriendlyName;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyFriendlyName_FWD_DEFINED__ */


#ifndef __CCertPropertyDescription_FWD_DEFINED__
#define __CCertPropertyDescription_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyDescription CCertPropertyDescription;
#else
typedef struct CCertPropertyDescription CCertPropertyDescription;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyDescription_FWD_DEFINED__ */


#ifndef __CCertPropertyAutoEnroll_FWD_DEFINED__
#define __CCertPropertyAutoEnroll_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyAutoEnroll CCertPropertyAutoEnroll;
#else
typedef struct CCertPropertyAutoEnroll CCertPropertyAutoEnroll;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyAutoEnroll_FWD_DEFINED__ */


#ifndef __CCertPropertyRequestOriginator_FWD_DEFINED__
#define __CCertPropertyRequestOriginator_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyRequestOriginator CCertPropertyRequestOriginator;
#else
typedef struct CCertPropertyRequestOriginator CCertPropertyRequestOriginator;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyRequestOriginator_FWD_DEFINED__ */


#ifndef __CCertPropertySHA1Hash_FWD_DEFINED__
#define __CCertPropertySHA1Hash_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertySHA1Hash CCertPropertySHA1Hash;
#else
typedef struct CCertPropertySHA1Hash CCertPropertySHA1Hash;
#endif /* __cplusplus */

#endif 	/* __CCertPropertySHA1Hash_FWD_DEFINED__ */


#ifndef __CCertPropertyKeyProvInfo_FWD_DEFINED__
#define __CCertPropertyKeyProvInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyKeyProvInfo CCertPropertyKeyProvInfo;
#else
typedef struct CCertPropertyKeyProvInfo CCertPropertyKeyProvInfo;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyKeyProvInfo_FWD_DEFINED__ */


#ifndef __CCertPropertyArchived_FWD_DEFINED__
#define __CCertPropertyArchived_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyArchived CCertPropertyArchived;
#else
typedef struct CCertPropertyArchived CCertPropertyArchived;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyArchived_FWD_DEFINED__ */


#ifndef __CCertPropertyBackedUp_FWD_DEFINED__
#define __CCertPropertyBackedUp_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyBackedUp CCertPropertyBackedUp;
#else
typedef struct CCertPropertyBackedUp CCertPropertyBackedUp;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyBackedUp_FWD_DEFINED__ */


#ifndef __CCertPropertyEnrollment_FWD_DEFINED__
#define __CCertPropertyEnrollment_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyEnrollment CCertPropertyEnrollment;
#else
typedef struct CCertPropertyEnrollment CCertPropertyEnrollment;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyEnrollment_FWD_DEFINED__ */


#ifndef __CCertPropertyRenewal_FWD_DEFINED__
#define __CCertPropertyRenewal_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyRenewal CCertPropertyRenewal;
#else
typedef struct CCertPropertyRenewal CCertPropertyRenewal;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyRenewal_FWD_DEFINED__ */


#ifndef __CCertPropertyArchivedKeyHash_FWD_DEFINED__
#define __CCertPropertyArchivedKeyHash_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyArchivedKeyHash CCertPropertyArchivedKeyHash;
#else
typedef struct CCertPropertyArchivedKeyHash CCertPropertyArchivedKeyHash;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyArchivedKeyHash_FWD_DEFINED__ */


#ifndef __CCertPropertyEnrollmentPolicyServer_FWD_DEFINED__
#define __CCertPropertyEnrollmentPolicyServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertPropertyEnrollmentPolicyServer CCertPropertyEnrollmentPolicyServer;
#else
typedef struct CCertPropertyEnrollmentPolicyServer CCertPropertyEnrollmentPolicyServer;
#endif /* __cplusplus */

#endif 	/* __CCertPropertyEnrollmentPolicyServer_FWD_DEFINED__ */


#ifndef __CSignerCertificate_FWD_DEFINED__
#define __CSignerCertificate_FWD_DEFINED__

#ifdef __cplusplus
typedef class CSignerCertificate CSignerCertificate;
#else
typedef struct CSignerCertificate CSignerCertificate;
#endif /* __cplusplus */

#endif 	/* __CSignerCertificate_FWD_DEFINED__ */


#ifndef __CX509NameValuePair_FWD_DEFINED__
#define __CX509NameValuePair_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509NameValuePair CX509NameValuePair;
#else
typedef struct CX509NameValuePair CX509NameValuePair;
#endif /* __cplusplus */

#endif 	/* __CX509NameValuePair_FWD_DEFINED__ */


#ifndef __CX509CertificateRequestPkcs10_FWD_DEFINED__
#define __CX509CertificateRequestPkcs10_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509CertificateRequestPkcs10 CX509CertificateRequestPkcs10;
#else
typedef struct CX509CertificateRequestPkcs10 CX509CertificateRequestPkcs10;
#endif /* __cplusplus */

#endif 	/* __CX509CertificateRequestPkcs10_FWD_DEFINED__ */


#ifndef __CX509CertificateRequestCertificate_FWD_DEFINED__
#define __CX509CertificateRequestCertificate_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509CertificateRequestCertificate CX509CertificateRequestCertificate;
#else
typedef struct CX509CertificateRequestCertificate CX509CertificateRequestCertificate;
#endif /* __cplusplus */

#endif 	/* __CX509CertificateRequestCertificate_FWD_DEFINED__ */


#ifndef __CX509CertificateRequestPkcs7_FWD_DEFINED__
#define __CX509CertificateRequestPkcs7_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509CertificateRequestPkcs7 CX509CertificateRequestPkcs7;
#else
typedef struct CX509CertificateRequestPkcs7 CX509CertificateRequestPkcs7;
#endif /* __cplusplus */

#endif 	/* __CX509CertificateRequestPkcs7_FWD_DEFINED__ */


#ifndef __CX509CertificateRequestCmc_FWD_DEFINED__
#define __CX509CertificateRequestCmc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509CertificateRequestCmc CX509CertificateRequestCmc;
#else
typedef struct CX509CertificateRequestCmc CX509CertificateRequestCmc;
#endif /* __cplusplus */

#endif 	/* __CX509CertificateRequestCmc_FWD_DEFINED__ */


#ifndef __CX509Enrollment_FWD_DEFINED__
#define __CX509Enrollment_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509Enrollment CX509Enrollment;
#else
typedef struct CX509Enrollment CX509Enrollment;
#endif /* __cplusplus */

#endif 	/* __CX509Enrollment_FWD_DEFINED__ */


#ifndef __CX509EnrollmentWebClassFactory_FWD_DEFINED__
#define __CX509EnrollmentWebClassFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509EnrollmentWebClassFactory CX509EnrollmentWebClassFactory;
#else
typedef struct CX509EnrollmentWebClassFactory CX509EnrollmentWebClassFactory;
#endif /* __cplusplus */

#endif 	/* __CX509EnrollmentWebClassFactory_FWD_DEFINED__ */


#ifndef __CX509EnrollmentHelper_FWD_DEFINED__
#define __CX509EnrollmentHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509EnrollmentHelper CX509EnrollmentHelper;
#else
typedef struct CX509EnrollmentHelper CX509EnrollmentHelper;
#endif /* __cplusplus */

#endif 	/* __CX509EnrollmentHelper_FWD_DEFINED__ */


#ifndef __CX509MachineEnrollmentFactory_FWD_DEFINED__
#define __CX509MachineEnrollmentFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509MachineEnrollmentFactory CX509MachineEnrollmentFactory;
#else
typedef struct CX509MachineEnrollmentFactory CX509MachineEnrollmentFactory;
#endif /* __cplusplus */

#endif 	/* __CX509MachineEnrollmentFactory_FWD_DEFINED__ */


#ifndef __CX509EnrollmentPolicyActiveDirectory_FWD_DEFINED__
#define __CX509EnrollmentPolicyActiveDirectory_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509EnrollmentPolicyActiveDirectory CX509EnrollmentPolicyActiveDirectory;
#else
typedef struct CX509EnrollmentPolicyActiveDirectory CX509EnrollmentPolicyActiveDirectory;
#endif /* __cplusplus */

#endif 	/* __CX509EnrollmentPolicyActiveDirectory_FWD_DEFINED__ */


#ifndef __CX509EnrollmentPolicyWebService_FWD_DEFINED__
#define __CX509EnrollmentPolicyWebService_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509EnrollmentPolicyWebService CX509EnrollmentPolicyWebService;
#else
typedef struct CX509EnrollmentPolicyWebService CX509EnrollmentPolicyWebService;
#endif /* __cplusplus */

#endif 	/* __CX509EnrollmentPolicyWebService_FWD_DEFINED__ */


#ifndef __CX509PolicyServerListManager_FWD_DEFINED__
#define __CX509PolicyServerListManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509PolicyServerListManager CX509PolicyServerListManager;
#else
typedef struct CX509PolicyServerListManager CX509PolicyServerListManager;
#endif /* __cplusplus */

#endif 	/* __CX509PolicyServerListManager_FWD_DEFINED__ */


#ifndef __CX509PolicyServerUrl_FWD_DEFINED__
#define __CX509PolicyServerUrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509PolicyServerUrl CX509PolicyServerUrl;
#else
typedef struct CX509PolicyServerUrl CX509PolicyServerUrl;
#endif /* __cplusplus */

#endif 	/* __CX509PolicyServerUrl_FWD_DEFINED__ */


#ifndef __CX509CertificateTemplateADWritable_FWD_DEFINED__
#define __CX509CertificateTemplateADWritable_FWD_DEFINED__

#ifdef __cplusplus
typedef class CX509CertificateTemplateADWritable CX509CertificateTemplateADWritable;
#else
typedef struct CX509CertificateTemplateADWritable CX509CertificateTemplateADWritable;
#endif /* __cplusplus */

#endif 	/* __CX509CertificateTemplateADWritable_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "oaidl.h"
#include "certcli.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_certenroll_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if defined(MIDL_PASS)
typedef typedef void VOID;
;

#endif
typedef 
enum CERTENROLL_OBJECTID
    {
        XCN_OID_NONE	= 0,
        XCN_OID_RSA	= 1,
        XCN_OID_PKCS	= 2,
        XCN_OID_RSA_HASH	= 3,
        XCN_OID_RSA_ENCRYPT	= 4,
        XCN_OID_PKCS_1	= 5,
        XCN_OID_PKCS_2	= 6,
        XCN_OID_PKCS_3	= 7,
        XCN_OID_PKCS_4	= 8,
        XCN_OID_PKCS_5	= 9,
        XCN_OID_PKCS_6	= 10,
        XCN_OID_PKCS_7	= 11,
        XCN_OID_PKCS_8	= 12,
        XCN_OID_PKCS_9	= 13,
        XCN_OID_PKCS_10	= 14,
        XCN_OID_PKCS_12	= 15,
        XCN_OID_RSA_RSA	= 16,
        XCN_OID_RSA_MD2RSA	= 17,
        XCN_OID_RSA_MD4RSA	= 18,
        XCN_OID_RSA_MD5RSA	= 19,
        XCN_OID_RSA_SHA1RSA	= 20,
        XCN_OID_RSA_SETOAEP_RSA	= 21,
        XCN_OID_RSA_DH	= 22,
        XCN_OID_RSA_data	= 23,
        XCN_OID_RSA_signedData	= 24,
        XCN_OID_RSA_envelopedData	= 25,
        XCN_OID_RSA_signEnvData	= 26,
        XCN_OID_RSA_digestedData	= 27,
        XCN_OID_RSA_hashedData	= 28,
        XCN_OID_RSA_encryptedData	= 29,
        XCN_OID_RSA_emailAddr	= 30,
        XCN_OID_RSA_unstructName	= 31,
        XCN_OID_RSA_contentType	= 32,
        XCN_OID_RSA_messageDigest	= 33,
        XCN_OID_RSA_signingTime	= 34,
        XCN_OID_RSA_counterSign	= 35,
        XCN_OID_RSA_challengePwd	= 36,
        XCN_OID_RSA_unstructAddr	= 37,
        XCN_OID_RSA_extCertAttrs	= 38,
        XCN_OID_RSA_certExtensions	= 39,
        XCN_OID_RSA_SMIMECapabilities	= 40,
        XCN_OID_RSA_preferSignedData	= 41,
        XCN_OID_RSA_SMIMEalg	= 42,
        XCN_OID_RSA_SMIMEalgESDH	= 43,
        XCN_OID_RSA_SMIMEalgCMS3DESwrap	= 44,
        XCN_OID_RSA_SMIMEalgCMSRC2wrap	= 45,
        XCN_OID_RSA_MD2	= 46,
        XCN_OID_RSA_MD4	= 47,
        XCN_OID_RSA_MD5	= 48,
        XCN_OID_RSA_RC2CBC	= 49,
        XCN_OID_RSA_RC4	= 50,
        XCN_OID_RSA_DES_EDE3_CBC	= 51,
        XCN_OID_RSA_RC5_CBCPad	= 52,
        XCN_OID_ANSI_X942	= 53,
        XCN_OID_ANSI_X942_DH	= 54,
        XCN_OID_X957	= 55,
        XCN_OID_X957_DSA	= 56,
        XCN_OID_X957_SHA1DSA	= 57,
        XCN_OID_DS	= 58,
        XCN_OID_DSALG	= 59,
        XCN_OID_DSALG_CRPT	= 60,
        XCN_OID_DSALG_HASH	= 61,
        XCN_OID_DSALG_SIGN	= 62,
        XCN_OID_DSALG_RSA	= 63,
        XCN_OID_OIW	= 64,
        XCN_OID_OIWSEC	= 65,
        XCN_OID_OIWSEC_md4RSA	= 66,
        XCN_OID_OIWSEC_md5RSA	= 67,
        XCN_OID_OIWSEC_md4RSA2	= 68,
        XCN_OID_OIWSEC_desECB	= 69,
        XCN_OID_OIWSEC_desCBC	= 70,
        XCN_OID_OIWSEC_desOFB	= 71,
        XCN_OID_OIWSEC_desCFB	= 72,
        XCN_OID_OIWSEC_desMAC	= 73,
        XCN_OID_OIWSEC_rsaSign	= 74,
        XCN_OID_OIWSEC_dsa	= 75,
        XCN_OID_OIWSEC_shaDSA	= 76,
        XCN_OID_OIWSEC_mdc2RSA	= 77,
        XCN_OID_OIWSEC_shaRSA	= 78,
        XCN_OID_OIWSEC_dhCommMod	= 79,
        XCN_OID_OIWSEC_desEDE	= 80,
        XCN_OID_OIWSEC_sha	= 81,
        XCN_OID_OIWSEC_mdc2	= 82,
        XCN_OID_OIWSEC_dsaComm	= 83,
        XCN_OID_OIWSEC_dsaCommSHA	= 84,
        XCN_OID_OIWSEC_rsaXchg	= 85,
        XCN_OID_OIWSEC_keyHashSeal	= 86,
        XCN_OID_OIWSEC_md2RSASign	= 87,
        XCN_OID_OIWSEC_md5RSASign	= 88,
        XCN_OID_OIWSEC_sha1	= 89,
        XCN_OID_OIWSEC_dsaSHA1	= 90,
        XCN_OID_OIWSEC_dsaCommSHA1	= 91,
        XCN_OID_OIWSEC_sha1RSASign	= 92,
        XCN_OID_OIWDIR	= 93,
        XCN_OID_OIWDIR_CRPT	= 94,
        XCN_OID_OIWDIR_HASH	= 95,
        XCN_OID_OIWDIR_SIGN	= 96,
        XCN_OID_OIWDIR_md2	= 97,
        XCN_OID_OIWDIR_md2RSA	= 98,
        XCN_OID_INFOSEC	= 99,
        XCN_OID_INFOSEC_sdnsSignature	= 100,
        XCN_OID_INFOSEC_mosaicSignature	= 101,
        XCN_OID_INFOSEC_sdnsConfidentiality	= 102,
        XCN_OID_INFOSEC_mosaicConfidentiality	= 103,
        XCN_OID_INFOSEC_sdnsIntegrity	= 104,
        XCN_OID_INFOSEC_mosaicIntegrity	= 105,
        XCN_OID_INFOSEC_sdnsTokenProtection	= 106,
        XCN_OID_INFOSEC_mosaicTokenProtection	= 107,
        XCN_OID_INFOSEC_sdnsKeyManagement	= 108,
        XCN_OID_INFOSEC_mosaicKeyManagement	= 109,
        XCN_OID_INFOSEC_sdnsKMandSig	= 110,
        XCN_OID_INFOSEC_mosaicKMandSig	= 111,
        XCN_OID_INFOSEC_SuiteASignature	= 112,
        XCN_OID_INFOSEC_SuiteAConfidentiality	= 113,
        XCN_OID_INFOSEC_SuiteAIntegrity	= 114,
        XCN_OID_INFOSEC_SuiteATokenProtection	= 115,
        XCN_OID_INFOSEC_SuiteAKeyManagement	= 116,
        XCN_OID_INFOSEC_SuiteAKMandSig	= 117,
        XCN_OID_INFOSEC_mosaicUpdatedSig	= 118,
        XCN_OID_INFOSEC_mosaicKMandUpdSig	= 119,
        XCN_OID_INFOSEC_mosaicUpdatedInteg	= 120,
        XCN_OID_COMMON_NAME	= 121,
        XCN_OID_SUR_NAME	= 122,
        XCN_OID_DEVICE_SERIAL_NUMBER	= 123,
        XCN_OID_COUNTRY_NAME	= 124,
        XCN_OID_LOCALITY_NAME	= 125,
        XCN_OID_STATE_OR_PROVINCE_NAME	= 126,
        XCN_OID_STREET_ADDRESS	= 127,
        XCN_OID_ORGANIZATION_NAME	= 128,
        XCN_OID_ORGANIZATIONAL_UNIT_NAME	= 129,
        XCN_OID_TITLE	= 130,
        XCN_OID_DESCRIPTION	= 131,
        XCN_OID_SEARCH_GUIDE	= 132,
        XCN_OID_BUSINESS_CATEGORY	= 133,
        XCN_OID_POSTAL_ADDRESS	= 134,
        XCN_OID_POSTAL_CODE	= 135,
        XCN_OID_POST_OFFICE_BOX	= 136,
        XCN_OID_PHYSICAL_DELIVERY_OFFICE_NAME	= 137,
        XCN_OID_TELEPHONE_NUMBER	= 138,
        XCN_OID_TELEX_NUMBER	= 139,
        XCN_OID_TELETEXT_TERMINAL_IDENTIFIER	= 140,
        XCN_OID_FACSIMILE_TELEPHONE_NUMBER	= 141,
        XCN_OID_X21_ADDRESS	= 142,
        XCN_OID_INTERNATIONAL_ISDN_NUMBER	= 143,
        XCN_OID_REGISTERED_ADDRESS	= 144,
        XCN_OID_DESTINATION_INDICATOR	= 145,
        XCN_OID_PREFERRED_DELIVERY_METHOD	= 146,
        XCN_OID_PRESENTATION_ADDRESS	= 147,
        XCN_OID_SUPPORTED_APPLICATION_CONTEXT	= 148,
        XCN_OID_MEMBER	= 149,
        XCN_OID_OWNER	= 150,
        XCN_OID_ROLE_OCCUPANT	= 151,
        XCN_OID_SEE_ALSO	= 152,
        XCN_OID_USER_PASSWORD	= 153,
        XCN_OID_USER_CERTIFICATE	= 154,
        XCN_OID_CA_CERTIFICATE	= 155,
        XCN_OID_AUTHORITY_REVOCATION_LIST	= 156,
        XCN_OID_CERTIFICATE_REVOCATION_LIST	= 157,
        XCN_OID_CROSS_CERTIFICATE_PAIR	= 158,
        XCN_OID_GIVEN_NAME	= 159,
        XCN_OID_INITIALS	= 160,
        XCN_OID_DN_QUALIFIER	= 161,
        XCN_OID_DOMAIN_COMPONENT	= 162,
        XCN_OID_PKCS_12_FRIENDLY_NAME_ATTR	= 163,
        XCN_OID_PKCS_12_LOCAL_KEY_ID	= 164,
        XCN_OID_PKCS_12_KEY_PROVIDER_NAME_ATTR	= 165,
        XCN_OID_LOCAL_MACHINE_KEYSET	= 166,
        XCN_OID_PKCS_12_EXTENDED_ATTRIBUTES	= 167,
        XCN_OID_KEYID_RDN	= 168,
        XCN_OID_AUTHORITY_KEY_IDENTIFIER	= 169,
        XCN_OID_KEY_ATTRIBUTES	= 170,
        XCN_OID_CERT_POLICIES_95	= 171,
        XCN_OID_KEY_USAGE_RESTRICTION	= 172,
        XCN_OID_SUBJECT_ALT_NAME	= 173,
        XCN_OID_ISSUER_ALT_NAME	= 174,
        XCN_OID_BASIC_CONSTRAINTS	= 175,
        XCN_OID_KEY_USAGE	= 176,
        XCN_OID_PRIVATEKEY_USAGE_PERIOD	= 177,
        XCN_OID_BASIC_CONSTRAINTS2	= 178,
        XCN_OID_CERT_POLICIES	= 179,
        XCN_OID_ANY_CERT_POLICY	= 180,
        XCN_OID_AUTHORITY_KEY_IDENTIFIER2	= 181,
        XCN_OID_SUBJECT_KEY_IDENTIFIER	= 182,
        XCN_OID_SUBJECT_ALT_NAME2	= 183,
        XCN_OID_ISSUER_ALT_NAME2	= 184,
        XCN_OID_CRL_REASON_CODE	= 185,
        XCN_OID_REASON_CODE_HOLD	= 186,
        XCN_OID_CRL_DIST_POINTS	= 187,
        XCN_OID_ENHANCED_KEY_USAGE	= 188,
        XCN_OID_CRL_NUMBER	= 189,
        XCN_OID_DELTA_CRL_INDICATOR	= 190,
        XCN_OID_ISSUING_DIST_POINT	= 191,
        XCN_OID_FRESHEST_CRL	= 192,
        XCN_OID_NAME_CONSTRAINTS	= 193,
        XCN_OID_POLICY_MAPPINGS	= 194,
        XCN_OID_LEGACY_POLICY_MAPPINGS	= 195,
        XCN_OID_POLICY_CONSTRAINTS	= 196,
        XCN_OID_RENEWAL_CERTIFICATE	= 197,
        XCN_OID_ENROLLMENT_NAME_VALUE_PAIR	= 198,
        XCN_OID_ENROLLMENT_CSP_PROVIDER	= 199,
        XCN_OID_OS_VERSION	= 200,
        XCN_OID_ENROLLMENT_AGENT	= 201,
        XCN_OID_PKIX	= 202,
        XCN_OID_PKIX_PE	= 203,
        XCN_OID_AUTHORITY_INFO_ACCESS	= 204,
        XCN_OID_BIOMETRIC_EXT	= 205,
        XCN_OID_LOGOTYPE_EXT	= 206,
        XCN_OID_CERT_EXTENSIONS	= 207,
        XCN_OID_NEXT_UPDATE_LOCATION	= 208,
        XCN_OID_REMOVE_CERTIFICATE	= 209,
        XCN_OID_CROSS_CERT_DIST_POINTS	= 210,
        XCN_OID_CTL	= 211,
        XCN_OID_SORTED_CTL	= 212,
        XCN_OID_SERIALIZED	= 213,
        XCN_OID_NT_PRINCIPAL_NAME	= 214,
        XCN_OID_PRODUCT_UPDATE	= 215,
        XCN_OID_ANY_APPLICATION_POLICY	= 216,
        XCN_OID_AUTO_ENROLL_CTL_USAGE	= 217,
        XCN_OID_ENROLL_CERTTYPE_EXTENSION	= 218,
        XCN_OID_CERT_MANIFOLD	= 219,
        XCN_OID_CERTSRV_CA_VERSION	= 220,
        XCN_OID_CERTSRV_PREVIOUS_CERT_HASH	= 221,
        XCN_OID_CRL_VIRTUAL_BASE	= 222,
        XCN_OID_CRL_NEXT_PUBLISH	= 223,
        XCN_OID_KP_CA_EXCHANGE	= 224,
        XCN_OID_KP_KEY_RECOVERY_AGENT	= 225,
        XCN_OID_CERTIFICATE_TEMPLATE	= 226,
        XCN_OID_ENTERPRISE_OID_ROOT	= 227,
        XCN_OID_RDN_DUMMY_SIGNER	= 228,
        XCN_OID_APPLICATION_CERT_POLICIES	= 229,
        XCN_OID_APPLICATION_POLICY_MAPPINGS	= 230,
        XCN_OID_APPLICATION_POLICY_CONSTRAINTS	= 231,
        XCN_OID_ARCHIVED_KEY_ATTR	= 232,
        XCN_OID_CRL_SELF_CDP	= 233,
        XCN_OID_REQUIRE_CERT_CHAIN_POLICY	= 234,
        XCN_OID_ARCHIVED_KEY_CERT_HASH	= 235,
        XCN_OID_ISSUED_CERT_HASH	= 236,
        XCN_OID_DS_EMAIL_REPLICATION	= 237,
        XCN_OID_REQUEST_CLIENT_INFO	= 238,
        XCN_OID_ENCRYPTED_KEY_HASH	= 239,
        XCN_OID_CERTSRV_CROSSCA_VERSION	= 240,
        XCN_OID_NTDS_REPLICATION	= 241,
        XCN_OID_SUBJECT_DIR_ATTRS	= 242,
        XCN_OID_PKIX_KP	= 243,
        XCN_OID_PKIX_KP_SERVER_AUTH	= 244,
        XCN_OID_PKIX_KP_CLIENT_AUTH	= 245,
        XCN_OID_PKIX_KP_CODE_SIGNING	= 246,
        XCN_OID_PKIX_KP_EMAIL_PROTECTION	= 247,
        XCN_OID_PKIX_KP_IPSEC_END_SYSTEM	= 248,
        XCN_OID_PKIX_KP_IPSEC_TUNNEL	= 249,
        XCN_OID_PKIX_KP_IPSEC_USER	= 250,
        XCN_OID_PKIX_KP_TIMESTAMP_SIGNING	= 251,
        XCN_OID_PKIX_KP_OCSP_SIGNING	= 252,
        XCN_OID_PKIX_OCSP_NOCHECK	= 253,
        XCN_OID_IPSEC_KP_IKE_INTERMEDIATE	= 254,
        XCN_OID_KP_CTL_USAGE_SIGNING	= 255,
        XCN_OID_KP_TIME_STAMP_SIGNING	= 256,
        XCN_OID_SERVER_GATED_CRYPTO	= 257,
        XCN_OID_SGC_NETSCAPE	= 258,
        XCN_OID_KP_EFS	= 259,
        XCN_OID_EFS_RECOVERY	= 260,
        XCN_OID_WHQL_CRYPTO	= 261,
        XCN_OID_NT5_CRYPTO	= 262,
        XCN_OID_OEM_WHQL_CRYPTO	= 263,
        XCN_OID_EMBEDDED_NT_CRYPTO	= 264,
        XCN_OID_ROOT_LIST_SIGNER	= 265,
        XCN_OID_KP_QUALIFIED_SUBORDINATION	= 266,
        XCN_OID_KP_KEY_RECOVERY	= 267,
        XCN_OID_KP_DOCUMENT_SIGNING	= 268,
        XCN_OID_KP_LIFETIME_SIGNING	= 269,
        XCN_OID_KP_MOBILE_DEVICE_SOFTWARE	= 270,
        XCN_OID_KP_SMART_DISPLAY	= 271,
        XCN_OID_KP_CSP_SIGNATURE	= 272,
        XCN_OID_DRM	= 273,
        XCN_OID_DRM_INDIVIDUALIZATION	= 274,
        XCN_OID_LICENSES	= 275,
        XCN_OID_LICENSE_SERVER	= 276,
        XCN_OID_KP_SMARTCARD_LOGON	= 277,
        XCN_OID_YESNO_TRUST_ATTR	= 278,
        XCN_OID_PKIX_POLICY_QUALIFIER_CPS	= 279,
        XCN_OID_PKIX_POLICY_QUALIFIER_USERNOTICE	= 280,
        XCN_OID_CERT_POLICIES_95_QUALIFIER1	= 281,
        XCN_OID_PKIX_ACC_DESCR	= 282,
        XCN_OID_PKIX_OCSP	= 283,
        XCN_OID_PKIX_CA_ISSUERS	= 284,
        XCN_OID_VERISIGN_PRIVATE_6_9	= 285,
        XCN_OID_VERISIGN_ONSITE_JURISDICTION_HASH	= 286,
        XCN_OID_VERISIGN_BITSTRING_6_13	= 287,
        XCN_OID_VERISIGN_ISS_STRONG_CRYPTO	= 288,
        XCN_OID_NETSCAPE	= 289,
        XCN_OID_NETSCAPE_CERT_EXTENSION	= 290,
        XCN_OID_NETSCAPE_CERT_TYPE	= 291,
        XCN_OID_NETSCAPE_BASE_URL	= 292,
        XCN_OID_NETSCAPE_REVOCATION_URL	= 293,
        XCN_OID_NETSCAPE_CA_REVOCATION_URL	= 294,
        XCN_OID_NETSCAPE_CERT_RENEWAL_URL	= 295,
        XCN_OID_NETSCAPE_CA_POLICY_URL	= 296,
        XCN_OID_NETSCAPE_SSL_SERVER_NAME	= 297,
        XCN_OID_NETSCAPE_COMMENT	= 298,
        XCN_OID_NETSCAPE_DATA_TYPE	= 299,
        XCN_OID_NETSCAPE_CERT_SEQUENCE	= 300,
        XCN_OID_CT_PKI_DATA	= 301,
        XCN_OID_CT_PKI_RESPONSE	= 302,
        XCN_OID_PKIX_NO_SIGNATURE	= 303,
        XCN_OID_CMC	= 304,
        XCN_OID_CMC_STATUS_INFO	= 305,
        XCN_OID_CMC_IDENTIFICATION	= 306,
        XCN_OID_CMC_IDENTITY_PROOF	= 307,
        XCN_OID_CMC_DATA_RETURN	= 308,
        XCN_OID_CMC_TRANSACTION_ID	= 309,
        XCN_OID_CMC_SENDER_NONCE	= 310,
        XCN_OID_CMC_RECIPIENT_NONCE	= 311,
        XCN_OID_CMC_ADD_EXTENSIONS	= 312,
        XCN_OID_CMC_ENCRYPTED_POP	= 313,
        XCN_OID_CMC_DECRYPTED_POP	= 314,
        XCN_OID_CMC_LRA_POP_WITNESS	= 315,
        XCN_OID_CMC_GET_CERT	= 316,
        XCN_OID_CMC_GET_CRL	= 317,
        XCN_OID_CMC_REVOKE_REQUEST	= 318,
        XCN_OID_CMC_REG_INFO	= 319,
        XCN_OID_CMC_RESPONSE_INFO	= 320,
        XCN_OID_CMC_QUERY_PENDING	= 321,
        XCN_OID_CMC_ID_POP_LINK_RANDOM	= 322,
        XCN_OID_CMC_ID_POP_LINK_WITNESS	= 323,
        XCN_OID_CMC_ID_CONFIRM_CERT_ACCEPTANCE	= 324,
        XCN_OID_CMC_ADD_ATTRIBUTES	= 325,
        XCN_OID_LOYALTY_OTHER_LOGOTYPE	= 326,
        XCN_OID_BACKGROUND_OTHER_LOGOTYPE	= 327,
        XCN_OID_PKIX_OCSP_BASIC_SIGNED_RESPONSE	= 328,
        XCN_OID_PKCS_7_DATA	= 329,
        XCN_OID_PKCS_7_SIGNED	= 330,
        XCN_OID_PKCS_7_ENVELOPED	= 331,
        XCN_OID_PKCS_7_SIGNEDANDENVELOPED	= 332,
        XCN_OID_PKCS_7_DIGESTED	= 333,
        XCN_OID_PKCS_7_ENCRYPTED	= 334,
        XCN_OID_PKCS_9_CONTENT_TYPE	= 335,
        XCN_OID_PKCS_9_MESSAGE_DIGEST	= 336,
        XCN_OID_CERT_PROP_ID_PREFIX	= 337,
        XCN_OID_CERT_KEY_IDENTIFIER_PROP_ID	= 338,
        XCN_OID_CERT_ISSUER_SERIAL_NUMBER_MD5_HASH_PROP_ID	= 339,
        XCN_OID_CERT_SUBJECT_NAME_MD5_HASH_PROP_ID	= 340,
        XCN_OID_CERT_MD5_HASH_PROP_ID	= 341,
        XCN_OID_RSA_SHA256RSA	= 342,
        XCN_OID_RSA_SHA384RSA	= 343,
        XCN_OID_RSA_SHA512RSA	= 344,
        XCN_OID_NIST_sha256	= 345,
        XCN_OID_NIST_sha384	= 346,
        XCN_OID_NIST_sha512	= 347,
        XCN_OID_RSA_MGF1	= 348,
        XCN_OID_ECC_PUBLIC_KEY	= 349,
        XCN_OID_RSA_SSA_PSS	= 353,
        XCN_OID_ECDSA_SHA1	= 354,
        XCN_OID_ECDSA_SPECIFIED	= 354
    } 	CERTENROLL_OBJECTID;

typedef 
enum WebSecurityLevel
    {
        LevelUnsafe	= 0,
        LevelSafe	= 1
    } 	WebSecurityLevel;

#define	CERTENROLL_INDEX_BASE	( 0 )

typedef 
enum EncodingType
    {
        XCN_CRYPT_STRING_BASE64HEADER	= 0,
        XCN_CRYPT_STRING_BASE64	= 0x1,
        XCN_CRYPT_STRING_BINARY	= 0x2,
        XCN_CRYPT_STRING_BASE64REQUESTHEADER	= 0x3,
        XCN_CRYPT_STRING_HEX	= 0x4,
        XCN_CRYPT_STRING_HEXASCII	= 0x5,
        XCN_CRYPT_STRING_BASE64_ANY	= 0x6,
        XCN_CRYPT_STRING_ANY	= 0x7,
        XCN_CRYPT_STRING_HEX_ANY	= 0x8,
        XCN_CRYPT_STRING_BASE64X509CRLHEADER	= 0x9,
        XCN_CRYPT_STRING_HEXADDR	= 0xa,
        XCN_CRYPT_STRING_HEXASCIIADDR	= 0xb,
        XCN_CRYPT_STRING_HEXRAW	= 0xc,
        XCN_CRYPT_STRING_HASHDATA	= 0x10000000,
        XCN_CRYPT_STRING_STRICT	= 0x20000000,
        XCN_CRYPT_STRING_NOCRLF	= 0x40000000,
        XCN_CRYPT_STRING_NOCR	= 0x80000000
    } 	EncodingType;

typedef 
enum PFXExportOptions
    {
        PFXExportEEOnly	= 0,
        PFXExportChainNoRoot	= 1,
        PFXExportChainWithRoot	= 2
    } 	PFXExportOptions;

typedef 
enum ObjectIdGroupId
    {
        XCN_CRYPT_ANY_GROUP_ID	= 0,
        XCN_CRYPT_HASH_ALG_OID_GROUP_ID	= 1,
        XCN_CRYPT_ENCRYPT_ALG_OID_GROUP_ID	= 2,
        XCN_CRYPT_PUBKEY_ALG_OID_GROUP_ID	= 3,
        XCN_CRYPT_SIGN_ALG_OID_GROUP_ID	= 4,
        XCN_CRYPT_RDN_ATTR_OID_GROUP_ID	= 5,
        XCN_CRYPT_EXT_OR_ATTR_OID_GROUP_ID	= 6,
        XCN_CRYPT_ENHKEY_USAGE_OID_GROUP_ID	= 7,
        XCN_CRYPT_POLICY_OID_GROUP_ID	= 8,
        XCN_CRYPT_TEMPLATE_OID_GROUP_ID	= 9,
        XCN_CRYPT_LAST_OID_GROUP_ID	= 10,
        XCN_CRYPT_FIRST_ALG_OID_GROUP_ID	= 1,
        XCN_CRYPT_LAST_ALG_OID_GROUP_ID	= 4,
        XCN_CRYPT_GROUP_ID_MASK	= 0xffff,
        XCN_CRYPT_OID_PREFER_CNG_ALGID_FLAG	= 0x40000000,
        XCN_CRYPT_OID_DISABLE_SEARCH_DS_FLAG	= 0x80000000,
        XCN_CRYPT_OID_INFO_OID_GROUP_BIT_LEN_MASK	= 0xfff0000,
        XCN_CRYPT_OID_INFO_OID_GROUP_BIT_LEN_SHIFT	= 16,
        XCN_CRYPT_KEY_LENGTH_MASK	= 0xfff0000
    } 	ObjectIdGroupId;

typedef 
enum ObjectIdPublicKeyFlags
    {
        XCN_CRYPT_OID_INFO_PUBKEY_ANY	= 0,
        XCN_CRYPT_OID_INFO_PUBKEY_SIGN_KEY_FLAG	= 0x80000000,
        XCN_CRYPT_OID_INFO_PUBKEY_ENCRYPT_KEY_FLAG	= 0x40000000
    } 	ObjectIdPublicKeyFlags;

typedef 
enum AlgorithmFlags
    {
        AlgorithmFlagsNone	= 0,
        AlgorithmFlagsWrap	= 0x1
    } 	AlgorithmFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0000_v0_0_s_ifspec;

#ifndef __IObjectId_INTERFACE_DEFINED__
#define __IObjectId_INTERFACE_DEFINED__

/* interface IObjectId */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjectId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab300-217d-11da-b2a4-000e7bbb2b09")
    IObjectId : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeFromName( 
            /* [in] */ CERTENROLL_OBJECTID Name) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeFromValue( 
            /* [in] */ __RPC__in BSTR strValue) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeFromAlgorithmName( 
            /* [in] */ ObjectIdGroupId GroupId,
            /* [in] */ ObjectIdPublicKeyFlags KeyFlags,
            /* [in] */ AlgorithmFlags AlgFlags,
            /* [in] */ __RPC__in BSTR strAlgorithmName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__out CERTENROLL_OBJECTID *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FriendlyName( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAlgorithmName( 
            /* [in] */ ObjectIdGroupId GroupId,
            /* [in] */ ObjectIdPublicKeyFlags KeyFlags,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrAlgorithmName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectId * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IObjectId * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IObjectId * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IObjectId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectId * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromName )( 
            __RPC__in IObjectId * This,
            /* [in] */ CERTENROLL_OBJECTID Name);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromValue )( 
            __RPC__in IObjectId * This,
            /* [in] */ __RPC__in BSTR strValue);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromAlgorithmName )( 
            __RPC__in IObjectId * This,
            /* [in] */ ObjectIdGroupId GroupId,
            /* [in] */ ObjectIdPublicKeyFlags KeyFlags,
            /* [in] */ AlgorithmFlags AlgFlags,
            /* [in] */ __RPC__in BSTR strAlgorithmName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IObjectId * This,
            /* [retval][out] */ __RPC__out CERTENROLL_OBJECTID *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            __RPC__in IObjectId * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )( 
            __RPC__in IObjectId * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __RPC__in IObjectId * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetAlgorithmName )( 
            __RPC__in IObjectId * This,
            /* [in] */ ObjectIdGroupId GroupId,
            /* [in] */ ObjectIdPublicKeyFlags KeyFlags,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrAlgorithmName);
        
        END_INTERFACE
    } IObjectIdVtbl;

    interface IObjectId
    {
        CONST_VTBL struct IObjectIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectId_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectId_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectId_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectId_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectId_InitializeFromName(This,Name)	\
    ( (This)->lpVtbl -> InitializeFromName(This,Name) ) 

#define IObjectId_InitializeFromValue(This,strValue)	\
    ( (This)->lpVtbl -> InitializeFromValue(This,strValue) ) 

#define IObjectId_InitializeFromAlgorithmName(This,GroupId,KeyFlags,AlgFlags,strAlgorithmName)	\
    ( (This)->lpVtbl -> InitializeFromAlgorithmName(This,GroupId,KeyFlags,AlgFlags,strAlgorithmName) ) 

#define IObjectId_get_Name(This,pValue)	\
    ( (This)->lpVtbl -> get_Name(This,pValue) ) 

#define IObjectId_get_FriendlyName(This,pValue)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) ) 

#define IObjectId_put_FriendlyName(This,Value)	\
    ( (This)->lpVtbl -> put_FriendlyName(This,Value) ) 

#define IObjectId_get_Value(This,pValue)	\
    ( (This)->lpVtbl -> get_Value(This,pValue) ) 

#define IObjectId_GetAlgorithmName(This,GroupId,KeyFlags,pstrAlgorithmName)	\
    ( (This)->lpVtbl -> GetAlgorithmName(This,GroupId,KeyFlags,pstrAlgorithmName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectId_INTERFACE_DEFINED__ */


#ifndef __IObjectIds_INTERFACE_DEFINED__
#define __IObjectIds_INTERFACE_DEFINED__

/* interface IObjectIds */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjectIds;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab301-217d-11da-b2a4-000e7bbb2b09")
    IObjectIds : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **pVal) = 0;
        
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][custom] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IObjectId *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRange( 
            /* [in] */ __RPC__in_opt IObjectIds *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectIdsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectIds * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectIds * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectIds * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IObjectIds * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IObjectIds * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IObjectIds * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectIds * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IObjectIds * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **pVal);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IObjectIds * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IObjectIds * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id][custom] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IObjectIds * This,
            /* [in] */ __RPC__in_opt IObjectId *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IObjectIds * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IObjectIds * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddRange )( 
            __RPC__in IObjectIds * This,
            /* [in] */ __RPC__in_opt IObjectIds *pValue);
        
        END_INTERFACE
    } IObjectIdsVtbl;

    interface IObjectIds
    {
        CONST_VTBL struct IObjectIdsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectIds_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectIds_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectIds_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectIds_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectIds_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectIds_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectIds_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectIds_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IObjectIds_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IObjectIds_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IObjectIds_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IObjectIds_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IObjectIds_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IObjectIds_AddRange(This,pValue)	\
    ( (This)->lpVtbl -> AddRange(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectIds_INTERFACE_DEFINED__ */


#ifndef __IBinaryConverter_INTERFACE_DEFINED__
#define __IBinaryConverter_INTERFACE_DEFINED__

/* interface IBinaryConverter */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBinaryConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab302-217d-11da-b2a4-000e7bbb2b09")
    IBinaryConverter : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StringToString( 
            /* [in] */ __RPC__in BSTR strEncodedIn,
            /* [in] */ EncodingType EncodingIn,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE VariantByteArrayToString( 
            /* [in] */ __RPC__in VARIANT *pvarByteArray,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StringToVariantByteArray( 
            /* [in] */ __RPC__in BSTR strEncoded,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__out VARIANT *pvarByteArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBinaryConverterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBinaryConverter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBinaryConverter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBinaryConverter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IBinaryConverter * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IBinaryConverter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IBinaryConverter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBinaryConverter * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *StringToString )( 
            __RPC__in IBinaryConverter * This,
            /* [in] */ __RPC__in BSTR strEncodedIn,
            /* [in] */ EncodingType EncodingIn,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *VariantByteArrayToString )( 
            __RPC__in IBinaryConverter * This,
            /* [in] */ __RPC__in VARIANT *pvarByteArray,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *StringToVariantByteArray )( 
            __RPC__in IBinaryConverter * This,
            /* [in] */ __RPC__in BSTR strEncoded,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__out VARIANT *pvarByteArray);
        
        END_INTERFACE
    } IBinaryConverterVtbl;

    interface IBinaryConverter
    {
        CONST_VTBL struct IBinaryConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBinaryConverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBinaryConverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBinaryConverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBinaryConverter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBinaryConverter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBinaryConverter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBinaryConverter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBinaryConverter_StringToString(This,strEncodedIn,EncodingIn,Encoding,pstrEncoded)	\
    ( (This)->lpVtbl -> StringToString(This,strEncodedIn,EncodingIn,Encoding,pstrEncoded) ) 

#define IBinaryConverter_VariantByteArrayToString(This,pvarByteArray,Encoding,pstrEncoded)	\
    ( (This)->lpVtbl -> VariantByteArrayToString(This,pvarByteArray,Encoding,pstrEncoded) ) 

#define IBinaryConverter_StringToVariantByteArray(This,strEncoded,Encoding,pvarByteArray)	\
    ( (This)->lpVtbl -> StringToVariantByteArray(This,strEncoded,Encoding,pvarByteArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBinaryConverter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0003 */
/* [local] */ 

typedef 
enum X500NameFlags
    {
        XCN_CERT_NAME_STR_NONE	= 0,
        XCN_CERT_SIMPLE_NAME_STR	= 1,
        XCN_CERT_OID_NAME_STR	= 2,
        XCN_CERT_X500_NAME_STR	= 3,
        XCN_CERT_XML_NAME_STR	= 4,
        XCN_CERT_NAME_STR_SEMICOLON_FLAG	= 0x40000000,
        XCN_CERT_NAME_STR_NO_PLUS_FLAG	= 0x20000000,
        XCN_CERT_NAME_STR_NO_QUOTING_FLAG	= 0x10000000,
        XCN_CERT_NAME_STR_CRLF_FLAG	= 0x8000000,
        XCN_CERT_NAME_STR_COMMA_FLAG	= 0x4000000,
        XCN_CERT_NAME_STR_REVERSE_FLAG	= 0x2000000,
        XCN_CERT_NAME_STR_FORWARD_FLAG	= 0x1000000,
        XCN_CERT_NAME_STR_DISABLE_IE4_UTF8_FLAG	= 0x10000,
        XCN_CERT_NAME_STR_ENABLE_T61_UNICODE_FLAG	= 0x20000,
        XCN_CERT_NAME_STR_ENABLE_UTF8_UNICODE_FLAG	= 0x40000,
        XCN_CERT_NAME_STR_FORCE_UTF8_DIR_STR_FLAG	= 0x80000,
        XCN_CERT_NAME_STR_DISABLE_UTF8_DIR_STR_FLAG	= 0x100000,
        XCN_CERT_NAME_STR_ENABLE_PUNYCODE_FLAG	= 0x200000
    } 	X500NameFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0003_v0_0_s_ifspec;

#ifndef __IX500DistinguishedName_INTERFACE_DEFINED__
#define __IX500DistinguishedName_INTERFACE_DEFINED__

/* interface IX500DistinguishedName */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX500DistinguishedName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab303-217d-11da-b2a4-000e7bbb2b09")
    IX500DistinguishedName : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ __RPC__in BSTR strEncodedName,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64,
            /* [defaultvalue][in] */ X500NameFlags NameFlags = XCN_CERT_NAME_STR_NONE) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Encode( 
            /* [in] */ __RPC__in BSTR strName,
            /* [defaultvalue][in] */ X500NameFlags NameFlags = XCN_CERT_NAME_STR_NONE) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncodedName( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX500DistinguishedNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX500DistinguishedName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX500DistinguishedName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX500DistinguishedName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX500DistinguishedName * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX500DistinguishedName * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX500DistinguishedName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX500DistinguishedName * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            __RPC__in IX500DistinguishedName * This,
            /* [in] */ __RPC__in BSTR strEncodedName,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X500NameFlags NameFlags);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX500DistinguishedName * This,
            /* [in] */ __RPC__in BSTR strName,
            /* [defaultvalue][in] */ X500NameFlags NameFlags);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IX500DistinguishedName * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedName )( 
            __RPC__in IX500DistinguishedName * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX500DistinguishedNameVtbl;

    interface IX500DistinguishedName
    {
        CONST_VTBL struct IX500DistinguishedNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX500DistinguishedName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX500DistinguishedName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX500DistinguishedName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX500DistinguishedName_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX500DistinguishedName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX500DistinguishedName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX500DistinguishedName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX500DistinguishedName_Decode(This,strEncodedName,Encoding,NameFlags)	\
    ( (This)->lpVtbl -> Decode(This,strEncodedName,Encoding,NameFlags) ) 

#define IX500DistinguishedName_Encode(This,strName,NameFlags)	\
    ( (This)->lpVtbl -> Encode(This,strName,NameFlags) ) 

#define IX500DistinguishedName_get_Name(This,pValue)	\
    ( (This)->lpVtbl -> get_Name(This,pValue) ) 

#define IX500DistinguishedName_get_EncodedName(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_EncodedName(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX500DistinguishedName_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0004 */
/* [local] */ 

typedef 
enum X509CertificateEnrollmentContext
    {
        ContextUser	= 0x1,
        ContextMachine	= 0x2,
        ContextAdministratorForceMachine	= 0x3
    } 	X509CertificateEnrollmentContext;

typedef 
enum EnrollmentEnrollStatus
    {
        Enrolled	= 0x1,
        EnrollPended	= 0x2,
        EnrollUIDeferredEnrollmentRequired	= 0x4,
        EnrollError	= 0x10,
        EnrollUnknown	= 0x20,
        EnrollSkipped	= 0x40,
        EnrollDenied	= 0x100
    } 	EnrollmentEnrollStatus;

typedef 
enum EnrollmentSelectionStatus
    {
        SelectedNo	= 0,
        SelectedYes	= 1
    } 	EnrollmentSelectionStatus;

typedef 
enum EnrollmentDisplayStatus
    {
        DisplayNo	= 0,
        DisplayYes	= 1
    } 	EnrollmentDisplayStatus;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0004_v0_0_s_ifspec;

#ifndef __IX509EnrollmentStatus_INTERFACE_DEFINED__
#define __IX509EnrollmentStatus_INTERFACE_DEFINED__

/* interface IX509EnrollmentStatus */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509EnrollmentStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab304-217d-11da-b2a4-000e7bbb2b09")
    IX509EnrollmentStatus : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AppendText( 
            /* [in] */ __RPC__in BSTR strText) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Selected( 
            /* [retval][out] */ __RPC__out EnrollmentSelectionStatus *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Selected( 
            /* [in] */ EnrollmentSelectionStatus Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Display( 
            /* [retval][out] */ __RPC__out EnrollmentDisplayStatus *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Display( 
            /* [in] */ EnrollmentDisplayStatus Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ __RPC__out EnrollmentEnrollStatus *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ EnrollmentEnrollStatus Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Error( 
            /* [retval][out] */ __RPC__out HRESULT *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Error( 
            /* [in] */ HRESULT Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ErrorText( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509EnrollmentStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509EnrollmentStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509EnrollmentStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509EnrollmentStatus * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *AppendText )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ __RPC__in BSTR strText);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Selected )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [retval][out] */ __RPC__out EnrollmentSelectionStatus *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Selected )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ EnrollmentSelectionStatus Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Display )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [retval][out] */ __RPC__out EnrollmentDisplayStatus *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Display )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ EnrollmentDisplayStatus Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [retval][out] */ __RPC__out EnrollmentEnrollStatus *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ EnrollmentEnrollStatus Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Error )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [retval][out] */ __RPC__out HRESULT *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Error )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [in] */ HRESULT Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorText )( 
            __RPC__in IX509EnrollmentStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509EnrollmentStatusVtbl;

    interface IX509EnrollmentStatus
    {
        CONST_VTBL struct IX509EnrollmentStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509EnrollmentStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509EnrollmentStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509EnrollmentStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509EnrollmentStatus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509EnrollmentStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509EnrollmentStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509EnrollmentStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509EnrollmentStatus_AppendText(This,strText)	\
    ( (This)->lpVtbl -> AppendText(This,strText) ) 

#define IX509EnrollmentStatus_get_Text(This,pValue)	\
    ( (This)->lpVtbl -> get_Text(This,pValue) ) 

#define IX509EnrollmentStatus_put_Text(This,Value)	\
    ( (This)->lpVtbl -> put_Text(This,Value) ) 

#define IX509EnrollmentStatus_get_Selected(This,pValue)	\
    ( (This)->lpVtbl -> get_Selected(This,pValue) ) 

#define IX509EnrollmentStatus_put_Selected(This,Value)	\
    ( (This)->lpVtbl -> put_Selected(This,Value) ) 

#define IX509EnrollmentStatus_get_Display(This,pValue)	\
    ( (This)->lpVtbl -> get_Display(This,pValue) ) 

#define IX509EnrollmentStatus_put_Display(This,Value)	\
    ( (This)->lpVtbl -> put_Display(This,Value) ) 

#define IX509EnrollmentStatus_get_Status(This,pValue)	\
    ( (This)->lpVtbl -> get_Status(This,pValue) ) 

#define IX509EnrollmentStatus_put_Status(This,Value)	\
    ( (This)->lpVtbl -> put_Status(This,Value) ) 

#define IX509EnrollmentStatus_get_Error(This,pValue)	\
    ( (This)->lpVtbl -> get_Error(This,pValue) ) 

#define IX509EnrollmentStatus_put_Error(This,Value)	\
    ( (This)->lpVtbl -> put_Error(This,Value) ) 

#define IX509EnrollmentStatus_get_ErrorText(This,pValue)	\
    ( (This)->lpVtbl -> get_ErrorText(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509EnrollmentStatus_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0005 */
/* [local] */ 

typedef 
enum X509ProviderType
    {
        XCN_PROV_NONE	= 0,
        XCN_PROV_RSA_FULL	= 1,
        XCN_PROV_RSA_SIG	= 2,
        XCN_PROV_DSS	= 3,
        XCN_PROV_FORTEZZA	= 4,
        XCN_PROV_MS_EXCHANGE	= 5,
        XCN_PROV_SSL	= 6,
        XCN_PROV_RSA_SCHANNEL	= 12,
        XCN_PROV_DSS_DH	= 13,
        XCN_PROV_EC_ECDSA_SIG	= 14,
        XCN_PROV_EC_ECNRA_SIG	= 15,
        XCN_PROV_EC_ECDSA_FULL	= 16,
        XCN_PROV_EC_ECNRA_FULL	= 17,
        XCN_PROV_DH_SCHANNEL	= 18,
        XCN_PROV_SPYRUS_LYNKS	= 20,
        XCN_PROV_RNG	= 21,
        XCN_PROV_INTEL_SEC	= 22,
        XCN_PROV_REPLACE_OWF	= 23,
        XCN_PROV_RSA_AES	= 24
    } 	X509ProviderType;

// XCN_BCRYPT_SIGNATURE_INTERFACE: RSA, DSA, ECDSA_P* signature
// XCN_BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE: RSA encryption
// XCN_BCRYPT_CIPHER_INTERFACE: RC2, RC4, DES, 3DES, AES symmetric encryption
// XCN_BCRYPT_HASH_INTERFACE: MD2, MD4, SHA1, SHA256, SHA384, SHA512 MAC, HMAC Hash
// XCN_BCRYPT_SECRET_AGREEMENT_INTERFACE: DH, ECDH_P* key agreement
// XCN_BCRYPT_RNG_INTERFACE: RNG
typedef 
enum AlgorithmType
    {
        XCN_BCRYPT_UNKNOWN_INTERFACE	= 0,
        XCN_BCRYPT_SIGNATURE_INTERFACE	= 0x5,
        XCN_BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE	= 0x3,
        XCN_BCRYPT_CIPHER_INTERFACE	= 0x1,
        XCN_BCRYPT_HASH_INTERFACE	= 0x2,
        XCN_BCRYPT_SECRET_AGREEMENT_INTERFACE	= 0x4,
        XCN_BCRYPT_RNG_INTERFACE	= 0x6
    } 	AlgorithmType;

typedef 
enum AlgorithmOperationFlags
    {
        XCN_NCRYPT_NO_OPERATION	= 0,
        XCN_NCRYPT_CIPHER_OPERATION	= 0x1,
        XCN_NCRYPT_HASH_OPERATION	= 0x2,
        XCN_NCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION	= 0x4,
        XCN_NCRYPT_SECRET_AGREEMENT_OPERATION	= 0x8,
        XCN_NCRYPT_SIGNATURE_OPERATION	= 0x10,
        XCN_NCRYPT_RNG_OPERATION	= 0x20,
        XCN_NCRYPT_ANY_ASYMMETRIC_OPERATION	= ( ( 0x4 | 0x8 )  | 0x10 ) ,
        XCN_NCRYPT_PREFER_SIGNATURE_ONLY_OPERATION	= 0x200000,
        XCN_NCRYPT_PREFER_NON_SIGNATURE_OPERATION	= 0x400000,
        XCN_NCRYPT_EXACT_MATCH_OPERATION	= 0x800000,
        XCN_NCRYPT_PREFERENCE_MASK_OPERATION	= 0xe00000
    } 	AlgorithmOperationFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0005_v0_0_s_ifspec;

#ifndef __ICspAlgorithm_INTERFACE_DEFINED__
#define __ICspAlgorithm_INTERFACE_DEFINED__

/* interface ICspAlgorithm */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICspAlgorithm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab305-217d-11da-b2a4-000e7bbb2b09")
    ICspAlgorithm : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE GetAlgorithmOid( 
            /* [in] */ LONG Length,
            /* [in] */ AlgorithmFlags AlgFlags,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultLength( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_IncrementLength( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LongName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Valid( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_MaxLength( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_MinLength( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out AlgorithmType *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Operations( 
            /* [retval][out] */ __RPC__out AlgorithmOperationFlags *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICspAlgorithmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICspAlgorithm * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICspAlgorithm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICspAlgorithm * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICspAlgorithm * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICspAlgorithm * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICspAlgorithm * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICspAlgorithm * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *GetAlgorithmOid )( 
            __RPC__in ICspAlgorithm * This,
            /* [in] */ LONG Length,
            /* [in] */ AlgorithmFlags AlgFlags,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultLength )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncrementLength )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LongName )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Valid )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxLength )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinLength )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__out AlgorithmType *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Operations )( 
            __RPC__in ICspAlgorithm * This,
            /* [retval][out] */ __RPC__out AlgorithmOperationFlags *pValue);
        
        END_INTERFACE
    } ICspAlgorithmVtbl;

    interface ICspAlgorithm
    {
        CONST_VTBL struct ICspAlgorithmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICspAlgorithm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICspAlgorithm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICspAlgorithm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICspAlgorithm_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICspAlgorithm_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICspAlgorithm_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICspAlgorithm_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICspAlgorithm_GetAlgorithmOid(This,Length,AlgFlags,ppValue)	\
    ( (This)->lpVtbl -> GetAlgorithmOid(This,Length,AlgFlags,ppValue) ) 

#define ICspAlgorithm_get_DefaultLength(This,pValue)	\
    ( (This)->lpVtbl -> get_DefaultLength(This,pValue) ) 

#define ICspAlgorithm_get_IncrementLength(This,pValue)	\
    ( (This)->lpVtbl -> get_IncrementLength(This,pValue) ) 

#define ICspAlgorithm_get_LongName(This,pValue)	\
    ( (This)->lpVtbl -> get_LongName(This,pValue) ) 

#define ICspAlgorithm_get_Valid(This,pValue)	\
    ( (This)->lpVtbl -> get_Valid(This,pValue) ) 

#define ICspAlgorithm_get_MaxLength(This,pValue)	\
    ( (This)->lpVtbl -> get_MaxLength(This,pValue) ) 

#define ICspAlgorithm_get_MinLength(This,pValue)	\
    ( (This)->lpVtbl -> get_MinLength(This,pValue) ) 

#define ICspAlgorithm_get_Name(This,pValue)	\
    ( (This)->lpVtbl -> get_Name(This,pValue) ) 

#define ICspAlgorithm_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define ICspAlgorithm_get_Operations(This,pValue)	\
    ( (This)->lpVtbl -> get_Operations(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICspAlgorithm_INTERFACE_DEFINED__ */


#ifndef __ICspAlgorithms_INTERFACE_DEFINED__
#define __ICspAlgorithms_INTERFACE_DEFINED__

/* interface ICspAlgorithms */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICspAlgorithms;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab306-217d-11da-b2a4-000e7bbb2b09")
    ICspAlgorithms : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithm **pVal) = 0;
        
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][custom] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICspAlgorithm *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByName( 
            /* [in] */ __RPC__in BSTR strName,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithm **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IndexByObjectId( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [retval][out] */ __RPC__out LONG *pIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICspAlgorithmsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICspAlgorithms * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICspAlgorithms * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICspAlgorithms * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICspAlgorithms * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithm **pVal);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ICspAlgorithms * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ICspAlgorithms * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id][custom] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ __RPC__in_opt ICspAlgorithm *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICspAlgorithms * This);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByName )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ __RPC__in BSTR strName,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithm **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IndexByObjectId )( 
            __RPC__in ICspAlgorithms * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [retval][out] */ __RPC__out LONG *pIndex);
        
        END_INTERFACE
    } ICspAlgorithmsVtbl;

    interface ICspAlgorithms
    {
        CONST_VTBL struct ICspAlgorithmsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICspAlgorithms_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICspAlgorithms_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICspAlgorithms_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICspAlgorithms_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICspAlgorithms_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICspAlgorithms_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICspAlgorithms_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICspAlgorithms_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ICspAlgorithms_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICspAlgorithms_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ICspAlgorithms_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICspAlgorithms_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICspAlgorithms_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICspAlgorithms_get_ItemByName(This,strName,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByName(This,strName,ppValue) ) 

#define ICspAlgorithms_get_IndexByObjectId(This,pObjectId,pIndex)	\
    ( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICspAlgorithms_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0007 */
/* [local] */ 

typedef 
enum X509KeySpec
    {
        XCN_AT_NONE	= 0,
        XCN_AT_KEYEXCHANGE	= 1,
        XCN_AT_SIGNATURE	= 2
    } 	X509KeySpec;





extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0007_v0_0_s_ifspec;

#ifndef __ICspInformation_INTERFACE_DEFINED__
#define __ICspInformation_INTERFACE_DEFINED__

/* interface ICspInformation */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICspInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab307-217d-11da-b2a4-000e7bbb2b09")
    ICspInformation : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeFromName( 
            /* [in] */ __RPC__in BSTR strName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromType( 
            /* [in] */ X509ProviderType Type,
            /* [in] */ __RPC__in_opt IObjectId *pAlgorithm,
            /* [in] */ VARIANT_BOOL MachineContext) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_CspAlgorithms( 
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithms **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasHardwareRandomNumberGenerator( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsHardwareDevice( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsRemovable( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsSoftwareDevice( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Valid( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxKeyContainerNameLength( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out X509ProviderType *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_KeySpec( 
            /* [retval][out] */ __RPC__out X509KeySpec *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsSmartCard( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultSecurityDescriptor( 
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_LegacyCsp( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCspStatusFromOperations( 
            /* [in] */ __RPC__in_opt IObjectId *pAlgorithm,
            /* [in] */ AlgorithmOperationFlags Operations,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICspInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICspInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICspInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICspInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICspInformation * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICspInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICspInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICspInformation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromName )( 
            __RPC__in ICspInformation * This,
            /* [in] */ __RPC__in BSTR strName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromType )( 
            __RPC__in ICspInformation * This,
            /* [in] */ X509ProviderType Type,
            /* [in] */ __RPC__in_opt IObjectId *pAlgorithm,
            /* [in] */ VARIANT_BOOL MachineContext);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspAlgorithms )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithms **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasHardwareRandomNumberGenerator )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsHardwareDevice )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRemovable )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSoftwareDevice )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Valid )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxKeyContainerNameLength )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out X509ProviderType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out X509KeySpec *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSmartCard )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSecurityDescriptor )( 
            __RPC__in ICspInformation * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )( 
            __RPC__in ICspInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetCspStatusFromOperations )( 
            __RPC__in ICspInformation * This,
            /* [in] */ __RPC__in_opt IObjectId *pAlgorithm,
            /* [in] */ AlgorithmOperationFlags Operations,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue);
        
        END_INTERFACE
    } ICspInformationVtbl;

    interface ICspInformation
    {
        CONST_VTBL struct ICspInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICspInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICspInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICspInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICspInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICspInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICspInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICspInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICspInformation_InitializeFromName(This,strName)	\
    ( (This)->lpVtbl -> InitializeFromName(This,strName) ) 

#define ICspInformation_InitializeFromType(This,Type,pAlgorithm,MachineContext)	\
    ( (This)->lpVtbl -> InitializeFromType(This,Type,pAlgorithm,MachineContext) ) 

#define ICspInformation_get_CspAlgorithms(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspAlgorithms(This,ppValue) ) 

#define ICspInformation_get_HasHardwareRandomNumberGenerator(This,pValue)	\
    ( (This)->lpVtbl -> get_HasHardwareRandomNumberGenerator(This,pValue) ) 

#define ICspInformation_get_IsHardwareDevice(This,pValue)	\
    ( (This)->lpVtbl -> get_IsHardwareDevice(This,pValue) ) 

#define ICspInformation_get_IsRemovable(This,pValue)	\
    ( (This)->lpVtbl -> get_IsRemovable(This,pValue) ) 

#define ICspInformation_get_IsSoftwareDevice(This,pValue)	\
    ( (This)->lpVtbl -> get_IsSoftwareDevice(This,pValue) ) 

#define ICspInformation_get_Valid(This,pValue)	\
    ( (This)->lpVtbl -> get_Valid(This,pValue) ) 

#define ICspInformation_get_MaxKeyContainerNameLength(This,pValue)	\
    ( (This)->lpVtbl -> get_MaxKeyContainerNameLength(This,pValue) ) 

#define ICspInformation_get_Name(This,pValue)	\
    ( (This)->lpVtbl -> get_Name(This,pValue) ) 

#define ICspInformation_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define ICspInformation_get_Version(This,pValue)	\
    ( (This)->lpVtbl -> get_Version(This,pValue) ) 

#define ICspInformation_get_KeySpec(This,pValue)	\
    ( (This)->lpVtbl -> get_KeySpec(This,pValue) ) 

#define ICspInformation_get_IsSmartCard(This,pValue)	\
    ( (This)->lpVtbl -> get_IsSmartCard(This,pValue) ) 

#define ICspInformation_GetDefaultSecurityDescriptor(This,MachineContext,pValue)	\
    ( (This)->lpVtbl -> GetDefaultSecurityDescriptor(This,MachineContext,pValue) ) 

#define ICspInformation_get_LegacyCsp(This,pValue)	\
    ( (This)->lpVtbl -> get_LegacyCsp(This,pValue) ) 

#define ICspInformation_GetCspStatusFromOperations(This,pAlgorithm,Operations,ppValue)	\
    ( (This)->lpVtbl -> GetCspStatusFromOperations(This,pAlgorithm,Operations,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICspInformation_INTERFACE_DEFINED__ */


#ifndef __ICspInformations_INTERFACE_DEFINED__
#define __ICspInformations_INTERFACE_DEFINED__

/* interface ICspInformations */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICspInformations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab308-217d-11da-b2a4-000e7bbb2b09")
    ICspInformations : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformation **pVal) = 0;
        
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][custom] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICspInformation *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE AddAvailableCsps( void) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByName( 
            /* [in] */ __RPC__in BSTR strName,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformation **ppCspInformation) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE GetCspStatusFromProviderName( 
            /* [in] */ __RPC__in BSTR strProviderName,
            /* [in] */ X509KeySpec LegacyKeySpec,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE GetCspStatusesFromOperations( 
            /* [in] */ AlgorithmOperationFlags Operations,
            /* [in] */ __RPC__in_opt ICspInformation *pCspInformation,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEncryptionCspAlgorithms( 
            /* [in] */ __RPC__in_opt ICspInformation *pCspInformation,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithms **ppValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHashAlgorithms( 
            /* [in] */ __RPC__in_opt ICspInformation *pCspInformation,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICspInformationsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICspInformations * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICspInformations * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICspInformations * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICspInformations * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICspInformations * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICspInformations * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICspInformations * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ICspInformations * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformation **pVal);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ICspInformations * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ICspInformations * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id][custom] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICspInformations * This,
            /* [in] */ __RPC__in_opt ICspInformation *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ICspInformations * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICspInformations * This);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *AddAvailableCsps )( 
            __RPC__in ICspInformations * This);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByName )( 
            __RPC__in ICspInformations * This,
            /* [in] */ __RPC__in BSTR strName,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformation **ppCspInformation);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *GetCspStatusFromProviderName )( 
            __RPC__in ICspInformations * This,
            /* [in] */ __RPC__in BSTR strProviderName,
            /* [in] */ X509KeySpec LegacyKeySpec,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *GetCspStatusesFromOperations )( 
            __RPC__in ICspInformations * This,
            /* [in] */ AlgorithmOperationFlags Operations,
            /* [in] */ __RPC__in_opt ICspInformation *pCspInformation,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionCspAlgorithms )( 
            __RPC__in ICspInformations * This,
            /* [in] */ __RPC__in_opt ICspInformation *pCspInformation,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithms **ppValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetHashAlgorithms )( 
            __RPC__in ICspInformations * This,
            /* [in] */ __RPC__in_opt ICspInformation *pCspInformation,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        END_INTERFACE
    } ICspInformationsVtbl;

    interface ICspInformations
    {
        CONST_VTBL struct ICspInformationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICspInformations_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICspInformations_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICspInformations_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICspInformations_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICspInformations_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICspInformations_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICspInformations_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICspInformations_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ICspInformations_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICspInformations_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ICspInformations_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICspInformations_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICspInformations_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICspInformations_AddAvailableCsps(This)	\
    ( (This)->lpVtbl -> AddAvailableCsps(This) ) 

#define ICspInformations_get_ItemByName(This,strName,ppCspInformation)	\
    ( (This)->lpVtbl -> get_ItemByName(This,strName,ppCspInformation) ) 

#define ICspInformations_GetCspStatusFromProviderName(This,strProviderName,LegacyKeySpec,ppValue)	\
    ( (This)->lpVtbl -> GetCspStatusFromProviderName(This,strProviderName,LegacyKeySpec,ppValue) ) 

#define ICspInformations_GetCspStatusesFromOperations(This,Operations,pCspInformation,ppValue)	\
    ( (This)->lpVtbl -> GetCspStatusesFromOperations(This,Operations,pCspInformation,ppValue) ) 

#define ICspInformations_GetEncryptionCspAlgorithms(This,pCspInformation,ppValue)	\
    ( (This)->lpVtbl -> GetEncryptionCspAlgorithms(This,pCspInformation,ppValue) ) 

#define ICspInformations_GetHashAlgorithms(This,pCspInformation,ppValue)	\
    ( (This)->lpVtbl -> GetHashAlgorithms(This,pCspInformation,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICspInformations_INTERFACE_DEFINED__ */


#ifndef __ICspStatus_INTERFACE_DEFINED__
#define __ICspStatus_INTERFACE_DEFINED__

/* interface ICspStatus */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICspStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab309-217d-11da-b2a4-000e7bbb2b09")
    ICspStatus : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt ICspInformation *pCsp,
            /* [in] */ __RPC__in_opt ICspAlgorithm *pAlgorithm) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Ordinal( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Ordinal( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_CspAlgorithm( 
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithm **ppValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_CspInformation( 
            /* [retval][out] */ __RPC__deref_out_opt ICspInformation **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnrollmentStatus( 
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentStatus **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICspStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICspStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICspStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICspStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICspStatus * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICspStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICspStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICspStatus * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICspStatus * This,
            /* [in] */ __RPC__in_opt ICspInformation *pCsp,
            /* [in] */ __RPC__in_opt ICspAlgorithm *pAlgorithm);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ordinal )( 
            __RPC__in ICspStatus * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Ordinal )( 
            __RPC__in ICspStatus * This,
            /* [in] */ LONG Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspAlgorithm )( 
            __RPC__in ICspStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspAlgorithm **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformation )( 
            __RPC__in ICspStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformation **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentStatus )( 
            __RPC__in ICspStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            __RPC__in ICspStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICspStatusVtbl;

    interface ICspStatus
    {
        CONST_VTBL struct ICspStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICspStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICspStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICspStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICspStatus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICspStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICspStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICspStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICspStatus_Initialize(This,pCsp,pAlgorithm)	\
    ( (This)->lpVtbl -> Initialize(This,pCsp,pAlgorithm) ) 

#define ICspStatus_get_Ordinal(This,pValue)	\
    ( (This)->lpVtbl -> get_Ordinal(This,pValue) ) 

#define ICspStatus_put_Ordinal(This,Value)	\
    ( (This)->lpVtbl -> put_Ordinal(This,Value) ) 

#define ICspStatus_get_CspAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspAlgorithm(This,ppValue) ) 

#define ICspStatus_get_CspInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformation(This,ppValue) ) 

#define ICspStatus_get_EnrollmentStatus(This,ppValue)	\
    ( (This)->lpVtbl -> get_EnrollmentStatus(This,ppValue) ) 

#define ICspStatus_get_DisplayName(This,pValue)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICspStatus_INTERFACE_DEFINED__ */


#ifndef __ICspStatuses_INTERFACE_DEFINED__
#define __ICspStatuses_INTERFACE_DEFINED__

/* interface ICspStatuses */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICspStatuses;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab30a-217d-11da-b2a4-000e7bbb2b09")
    ICspStatuses : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **pVal) = 0;
        
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][custom] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICspStatus *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][custom][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByName( 
            /* [in] */ __RPC__in BSTR strCspName,
            /* [in] */ __RPC__in BSTR strAlgorithmName,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByOrdinal( 
            /* [in] */ LONG Ordinal,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByOperations( 
            /* [in] */ __RPC__in BSTR strCspName,
            /* [in] */ __RPC__in BSTR strAlgorithmName,
            /* [in] */ AlgorithmOperationFlags Operations,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByProvider( 
            /* [in] */ __RPC__in_opt ICspStatus *pCspStatus,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICspStatusesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICspStatuses * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICspStatuses * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICspStatuses * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICspStatuses * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **pVal);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ICspStatuses * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ICspStatuses * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id][custom] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ __RPC__in_opt ICspStatus *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICspStatuses * This);
        
        /* [helpstring][custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByName )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ __RPC__in BSTR strCspName,
            /* [in] */ __RPC__in BSTR strAlgorithmName,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByOrdinal )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ LONG Ordinal,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByOperations )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ __RPC__in BSTR strCspName,
            /* [in] */ __RPC__in BSTR strAlgorithmName,
            /* [in] */ AlgorithmOperationFlags Operations,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByProvider )( 
            __RPC__in ICspStatuses * This,
            /* [in] */ __RPC__in_opt ICspStatus *pCspStatus,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue);
        
        END_INTERFACE
    } ICspStatusesVtbl;

    interface ICspStatuses
    {
        CONST_VTBL struct ICspStatusesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICspStatuses_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICspStatuses_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICspStatuses_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICspStatuses_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICspStatuses_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICspStatuses_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICspStatuses_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICspStatuses_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ICspStatuses_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICspStatuses_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ICspStatuses_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICspStatuses_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICspStatuses_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICspStatuses_get_ItemByName(This,strCspName,strAlgorithmName,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByName(This,strCspName,strAlgorithmName,ppValue) ) 

#define ICspStatuses_get_ItemByOrdinal(This,Ordinal,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByOrdinal(This,Ordinal,ppValue) ) 

#define ICspStatuses_get_ItemByOperations(This,strCspName,strAlgorithmName,Operations,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByOperations(This,strCspName,strAlgorithmName,Operations,ppValue) ) 

#define ICspStatuses_get_ItemByProvider(This,pCspStatus,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByProvider(This,pCspStatus,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICspStatuses_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0011 */
/* [local] */ 

typedef 
enum KeyIdentifierHashAlgorithm
    {
        SKIHashDefault	= 0,
        SKIHashSha1	= 1,
        SKIHashCapiSha1	= 2
    } 	KeyIdentifierHashAlgorithm;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0011_v0_0_s_ifspec;

#ifndef __IX509PublicKey_INTERFACE_DEFINED__
#define __IX509PublicKey_INTERFACE_DEFINED__

/* interface IX509PublicKey */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509PublicKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab30b-217d-11da-b2a4-000e7bbb2b09")
    IX509PublicKey : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ __RPC__in BSTR strEncodedKey,
            /* [in] */ __RPC__in BSTR strEncodedParameters,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromEncodedPublicKeyInfo( 
            /* [in] */ __RPC__in BSTR strEncodedPublicKeyInfo,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Algorithm( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncodedKey( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncodedParameters( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComputeKeyIdentifier( 
            /* [in] */ KeyIdentifierHashAlgorithm Algorithm,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509PublicKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509PublicKey * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509PublicKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509PublicKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509PublicKey * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509PublicKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509PublicKey * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509PublicKey * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509PublicKey * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ __RPC__in BSTR strEncodedKey,
            /* [in] */ __RPC__in BSTR strEncodedParameters,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromEncodedPublicKeyInfo )( 
            __RPC__in IX509PublicKey * This,
            /* [in] */ __RPC__in BSTR strEncodedPublicKeyInfo,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            __RPC__in IX509PublicKey * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            __RPC__in IX509PublicKey * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedKey )( 
            __RPC__in IX509PublicKey * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedParameters )( 
            __RPC__in IX509PublicKey * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ComputeKeyIdentifier )( 
            __RPC__in IX509PublicKey * This,
            /* [in] */ KeyIdentifierHashAlgorithm Algorithm,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509PublicKeyVtbl;

    interface IX509PublicKey
    {
        CONST_VTBL struct IX509PublicKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509PublicKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509PublicKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509PublicKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509PublicKey_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509PublicKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509PublicKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509PublicKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509PublicKey_Initialize(This,pObjectId,strEncodedKey,strEncodedParameters,Encoding)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,strEncodedKey,strEncodedParameters,Encoding) ) 

#define IX509PublicKey_InitializeFromEncodedPublicKeyInfo(This,strEncodedPublicKeyInfo,Encoding)	\
    ( (This)->lpVtbl -> InitializeFromEncodedPublicKeyInfo(This,strEncodedPublicKeyInfo,Encoding) ) 

#define IX509PublicKey_get_Algorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_Algorithm(This,ppValue) ) 

#define IX509PublicKey_get_Length(This,pValue)	\
    ( (This)->lpVtbl -> get_Length(This,pValue) ) 

#define IX509PublicKey_get_EncodedKey(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_EncodedKey(This,Encoding,pValue) ) 

#define IX509PublicKey_get_EncodedParameters(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_EncodedParameters(This,Encoding,pValue) ) 

#define IX509PublicKey_ComputeKeyIdentifier(This,Algorithm,Encoding,pValue)	\
    ( (This)->lpVtbl -> ComputeKeyIdentifier(This,Algorithm,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509PublicKey_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0012 */
/* [local] */ 

typedef 
enum X509PrivateKeyExportFlags
    {
        XCN_NCRYPT_ALLOW_EXPORT_NONE	= 0,
        XCN_NCRYPT_ALLOW_EXPORT_FLAG	= 0x1,
        XCN_NCRYPT_ALLOW_PLAINTEXT_EXPORT_FLAG	= 0x2,
        XCN_NCRYPT_ALLOW_ARCHIVING_FLAG	= 0x4,
        XCN_NCRYPT_ALLOW_PLAINTEXT_ARCHIVING_FLAG	= 0x8
    } 	X509PrivateKeyExportFlags;

typedef 
enum X509PrivateKeyUsageFlags
    {
        XCN_NCRYPT_ALLOW_USAGES_NONE	= 0,
        XCN_NCRYPT_ALLOW_DECRYPT_FLAG	= 0x1,
        XCN_NCRYPT_ALLOW_SIGNING_FLAG	= 0x2,
        XCN_NCRYPT_ALLOW_KEY_AGREEMENT_FLAG	= 0x4,
        XCN_NCRYPT_ALLOW_ALL_USAGES	= 0xffffff
    } 	X509PrivateKeyUsageFlags;

typedef 
enum X509PrivateKeyProtection
    {
        XCN_NCRYPT_UI_NO_PROTECTION_FLAG	= 0,
        XCN_NCRYPT_UI_PROTECT_KEY_FLAG	= 0x1,
        XCN_NCRYPT_UI_FORCE_HIGH_PROTECTION_FLAG	= 0x2
    } 	X509PrivateKeyProtection;

typedef 
enum X509PrivateKeyVerify
    {
        VerifyNone	= 0,
        VerifySilent	= 1,
        VerifySmartCardNone	= 2,
        VerifySmartCardSilent	= 3,
        VerifyAllowUI	= 4
    } 	X509PrivateKeyVerify;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0012_v0_0_s_ifspec;

#ifndef __IX509PrivateKey_INTERFACE_DEFINED__
#define __IX509PrivateKey_INTERFACE_DEFINED__

/* interface IX509PrivateKey */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509PrivateKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab30c-217d-11da-b2a4-000e7bbb2b09")
    IX509PrivateKey : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Open( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Create( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Verify( 
            /* [in] */ X509PrivateKeyVerify VerifyType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Import( 
            /* [in] */ __RPC__in BSTR strExportType,
            /* [in] */ __RPC__in BSTR strEncodedKey,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Export( 
            /* [in] */ __RPC__in BSTR strExportType,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrEncodedKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExportPublicKey( 
            /* [retval][out] */ __RPC__deref_out_opt IX509PublicKey **ppPublicKey) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_ContainerName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_ContainerName( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContainerNamePrefix( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ContainerNamePrefix( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReaderName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReaderName( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_CspInformations( 
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_CspInformations( 
            /* [in] */ __RPC__in_opt ICspInformations *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_CspStatus( 
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_CspStatus( 
            /* [in] */ __RPC__in_opt ICspStatus *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderName( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderType( 
            /* [retval][out] */ __RPC__out X509ProviderType *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderType( 
            /* [in] */ X509ProviderType Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_LegacyCsp( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_LegacyCsp( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Algorithm( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_Algorithm( 
            /* [in] */ __RPC__in_opt IObjectId *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_KeySpec( 
            /* [retval][out] */ __RPC__out X509KeySpec *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_KeySpec( 
            /* [in] */ X509KeySpec Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_Length( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_ExportPolicy( 
            /* [retval][out] */ __RPC__out X509PrivateKeyExportFlags *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_ExportPolicy( 
            /* [in] */ X509PrivateKeyExportFlags Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_KeyUsage( 
            /* [retval][out] */ __RPC__out X509PrivateKeyUsageFlags *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_KeyUsage( 
            /* [in] */ X509PrivateKeyUsageFlags Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_KeyProtection( 
            /* [retval][out] */ __RPC__out X509PrivateKeyProtection *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_KeyProtection( 
            /* [in] */ X509PrivateKeyProtection Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_MachineContext( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_MachineContext( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SecurityDescriptor( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SecurityDescriptor( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Certificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Certificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UniqueContainerName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Opened( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultContainer( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Existing( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_Existing( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Silent( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Silent( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ParentWindow( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UIContextMessage( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UIContextMessage( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Pin( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FriendlyName( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509PrivateKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509PrivateKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509PrivateKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509PrivateKey * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509PrivateKey * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            __RPC__in IX509PrivateKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in IX509PrivateKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IX509PrivateKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            __RPC__in IX509PrivateKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *Verify )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ X509PrivateKeyVerify VerifyType);
        
        HRESULT ( STDMETHODCALLTYPE *Import )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR strExportType,
            /* [in] */ __RPC__in BSTR strEncodedKey,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        HRESULT ( STDMETHODCALLTYPE *Export )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR strExportType,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrEncodedKey);
        
        HRESULT ( STDMETHODCALLTYPE *ExportPublicKey )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PublicKey **ppPublicKey);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerName )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerName )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerNamePrefix )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerNamePrefix )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReaderName )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReaderName )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspStatus )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatus **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspStatus )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in_opt ICspStatus *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderName )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out X509ProviderType *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderType )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ X509ProviderType Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LegacyCsp )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Algorithm )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out X509KeySpec *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeySpec )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ X509KeySpec Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Length )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ LONG Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExportPolicy )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out X509PrivateKeyExportFlags *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExportPolicy )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ X509PrivateKeyExportFlags Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyUsage )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out X509PrivateKeyUsageFlags *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyUsage )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ X509PrivateKeyUsageFlags Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyProtection )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out X509PrivateKeyProtection *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyProtection )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ X509PrivateKeyProtection Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MachineContext )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MachineContext )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityDescriptor )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SecurityDescriptor )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            __RPC__in IX509PrivateKey * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            __RPC__in IX509PrivateKey * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Opened )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultContainer )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Existing )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Existing )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Pin )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IX509PrivateKey * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            __RPC__in IX509PrivateKey * This,
            /* [in] */ __RPC__in BSTR Value);
        
        END_INTERFACE
    } IX509PrivateKeyVtbl;

    interface IX509PrivateKey
    {
        CONST_VTBL struct IX509PrivateKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509PrivateKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509PrivateKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509PrivateKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509PrivateKey_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509PrivateKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509PrivateKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509PrivateKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509PrivateKey_Open(This)	\
    ( (This)->lpVtbl -> Open(This) ) 

#define IX509PrivateKey_Create(This)	\
    ( (This)->lpVtbl -> Create(This) ) 

#define IX509PrivateKey_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IX509PrivateKey_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IX509PrivateKey_Verify(This,VerifyType)	\
    ( (This)->lpVtbl -> Verify(This,VerifyType) ) 

#define IX509PrivateKey_Import(This,strExportType,strEncodedKey,Encoding)	\
    ( (This)->lpVtbl -> Import(This,strExportType,strEncodedKey,Encoding) ) 

#define IX509PrivateKey_Export(This,strExportType,Encoding,pstrEncodedKey)	\
    ( (This)->lpVtbl -> Export(This,strExportType,Encoding,pstrEncodedKey) ) 

#define IX509PrivateKey_ExportPublicKey(This,ppPublicKey)	\
    ( (This)->lpVtbl -> ExportPublicKey(This,ppPublicKey) ) 

#define IX509PrivateKey_get_ContainerName(This,pValue)	\
    ( (This)->lpVtbl -> get_ContainerName(This,pValue) ) 

#define IX509PrivateKey_put_ContainerName(This,Value)	\
    ( (This)->lpVtbl -> put_ContainerName(This,Value) ) 

#define IX509PrivateKey_get_ContainerNamePrefix(This,pValue)	\
    ( (This)->lpVtbl -> get_ContainerNamePrefix(This,pValue) ) 

#define IX509PrivateKey_put_ContainerNamePrefix(This,Value)	\
    ( (This)->lpVtbl -> put_ContainerNamePrefix(This,Value) ) 

#define IX509PrivateKey_get_ReaderName(This,pValue)	\
    ( (This)->lpVtbl -> get_ReaderName(This,pValue) ) 

#define IX509PrivateKey_put_ReaderName(This,Value)	\
    ( (This)->lpVtbl -> put_ReaderName(This,Value) ) 

#define IX509PrivateKey_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509PrivateKey_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509PrivateKey_get_CspStatus(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspStatus(This,ppValue) ) 

#define IX509PrivateKey_put_CspStatus(This,pValue)	\
    ( (This)->lpVtbl -> put_CspStatus(This,pValue) ) 

#define IX509PrivateKey_get_ProviderName(This,pValue)	\
    ( (This)->lpVtbl -> get_ProviderName(This,pValue) ) 

#define IX509PrivateKey_put_ProviderName(This,Value)	\
    ( (This)->lpVtbl -> put_ProviderName(This,Value) ) 

#define IX509PrivateKey_get_ProviderType(This,pValue)	\
    ( (This)->lpVtbl -> get_ProviderType(This,pValue) ) 

#define IX509PrivateKey_put_ProviderType(This,Value)	\
    ( (This)->lpVtbl -> put_ProviderType(This,Value) ) 

#define IX509PrivateKey_get_LegacyCsp(This,pValue)	\
    ( (This)->lpVtbl -> get_LegacyCsp(This,pValue) ) 

#define IX509PrivateKey_put_LegacyCsp(This,Value)	\
    ( (This)->lpVtbl -> put_LegacyCsp(This,Value) ) 

#define IX509PrivateKey_get_Algorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_Algorithm(This,ppValue) ) 

#define IX509PrivateKey_put_Algorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_Algorithm(This,pValue) ) 

#define IX509PrivateKey_get_KeySpec(This,pValue)	\
    ( (This)->lpVtbl -> get_KeySpec(This,pValue) ) 

#define IX509PrivateKey_put_KeySpec(This,Value)	\
    ( (This)->lpVtbl -> put_KeySpec(This,Value) ) 

#define IX509PrivateKey_get_Length(This,pValue)	\
    ( (This)->lpVtbl -> get_Length(This,pValue) ) 

#define IX509PrivateKey_put_Length(This,Value)	\
    ( (This)->lpVtbl -> put_Length(This,Value) ) 

#define IX509PrivateKey_get_ExportPolicy(This,pValue)	\
    ( (This)->lpVtbl -> get_ExportPolicy(This,pValue) ) 

#define IX509PrivateKey_put_ExportPolicy(This,Value)	\
    ( (This)->lpVtbl -> put_ExportPolicy(This,Value) ) 

#define IX509PrivateKey_get_KeyUsage(This,pValue)	\
    ( (This)->lpVtbl -> get_KeyUsage(This,pValue) ) 

#define IX509PrivateKey_put_KeyUsage(This,Value)	\
    ( (This)->lpVtbl -> put_KeyUsage(This,Value) ) 

#define IX509PrivateKey_get_KeyProtection(This,pValue)	\
    ( (This)->lpVtbl -> get_KeyProtection(This,pValue) ) 

#define IX509PrivateKey_put_KeyProtection(This,Value)	\
    ( (This)->lpVtbl -> put_KeyProtection(This,Value) ) 

#define IX509PrivateKey_get_MachineContext(This,pValue)	\
    ( (This)->lpVtbl -> get_MachineContext(This,pValue) ) 

#define IX509PrivateKey_put_MachineContext(This,Value)	\
    ( (This)->lpVtbl -> put_MachineContext(This,Value) ) 

#define IX509PrivateKey_get_SecurityDescriptor(This,pValue)	\
    ( (This)->lpVtbl -> get_SecurityDescriptor(This,pValue) ) 

#define IX509PrivateKey_put_SecurityDescriptor(This,Value)	\
    ( (This)->lpVtbl -> put_SecurityDescriptor(This,Value) ) 

#define IX509PrivateKey_get_Certificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) ) 

#define IX509PrivateKey_put_Certificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_Certificate(This,Encoding,Value) ) 

#define IX509PrivateKey_get_UniqueContainerName(This,pValue)	\
    ( (This)->lpVtbl -> get_UniqueContainerName(This,pValue) ) 

#define IX509PrivateKey_get_Opened(This,pValue)	\
    ( (This)->lpVtbl -> get_Opened(This,pValue) ) 

#define IX509PrivateKey_get_DefaultContainer(This,pValue)	\
    ( (This)->lpVtbl -> get_DefaultContainer(This,pValue) ) 

#define IX509PrivateKey_get_Existing(This,pValue)	\
    ( (This)->lpVtbl -> get_Existing(This,pValue) ) 

#define IX509PrivateKey_put_Existing(This,Value)	\
    ( (This)->lpVtbl -> put_Existing(This,Value) ) 

#define IX509PrivateKey_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509PrivateKey_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509PrivateKey_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509PrivateKey_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509PrivateKey_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509PrivateKey_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509PrivateKey_put_Pin(This,Value)	\
    ( (This)->lpVtbl -> put_Pin(This,Value) ) 

#define IX509PrivateKey_get_FriendlyName(This,pValue)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) ) 

#define IX509PrivateKey_put_FriendlyName(This,Value)	\
    ( (This)->lpVtbl -> put_FriendlyName(This,Value) ) 

#define IX509PrivateKey_get_Description(This,pValue)	\
    ( (This)->lpVtbl -> get_Description(This,pValue) ) 

#define IX509PrivateKey_put_Description(This,Value)	\
    ( (This)->lpVtbl -> put_Description(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509PrivateKey_INTERFACE_DEFINED__ */


#ifndef __IX509Extension_INTERFACE_DEFINED__
#define __IX509Extension_INTERFACE_DEFINED__

/* interface IX509Extension */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509Extension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab30d-217d-11da-b2a4-000e7bbb2b09")
    IX509Extension : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawData( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Critical( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_Critical( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509Extension * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509Extension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509Extension * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509Extension * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509Extension * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509Extension * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509Extension * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509Extension * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509Extension * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509Extension * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509Extension * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509Extension * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } IX509ExtensionVtbl;

    interface IX509Extension
    {
        CONST_VTBL struct IX509ExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509Extension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509Extension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509Extension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509Extension_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509Extension_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509Extension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509Extension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509Extension_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509Extension_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509Extension_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509Extension_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509Extension_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509Extension_INTERFACE_DEFINED__ */


#ifndef __IX509Extensions_INTERFACE_DEFINED__
#define __IX509Extensions_INTERFACE_DEFINED__

/* interface IX509Extensions */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509Extensions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab30e-217d-11da-b2a4-000e7bbb2b09")
    IX509Extensions : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extension **pVal) = 0;
        
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][custom] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IX509Extension *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IndexByObjectId( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [retval][out] */ __RPC__out LONG *pIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRange( 
            /* [in] */ __RPC__in_opt IX509Extensions *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509Extensions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509Extensions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509Extensions * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509Extensions * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extension **pVal);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IX509Extensions * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IX509Extensions * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id][custom] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ __RPC__in_opt IX509Extension *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IX509Extensions * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IndexByObjectId )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [retval][out] */ __RPC__out LONG *pIndex);
        
        HRESULT ( STDMETHODCALLTYPE *AddRange )( 
            __RPC__in IX509Extensions * This,
            /* [in] */ __RPC__in_opt IX509Extensions *pValue);
        
        END_INTERFACE
    } IX509ExtensionsVtbl;

    interface IX509Extensions
    {
        CONST_VTBL struct IX509ExtensionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509Extensions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509Extensions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509Extensions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509Extensions_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509Extensions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509Extensions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509Extensions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509Extensions_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IX509Extensions_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IX509Extensions_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IX509Extensions_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IX509Extensions_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IX509Extensions_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IX509Extensions_get_IndexByObjectId(This,pObjectId,pIndex)	\
    ( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) ) 

#define IX509Extensions_AddRange(This,pValue)	\
    ( (This)->lpVtbl -> AddRange(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509Extensions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0015 */
/* [local] */ 

typedef 
enum X509KeyUsageFlags
    {
        XCN_CERT_NO_KEY_USAGE	= 0,
        XCN_CERT_DIGITAL_SIGNATURE_KEY_USAGE	= 0x80,
        XCN_CERT_NON_REPUDIATION_KEY_USAGE	= 0x40,
        XCN_CERT_KEY_ENCIPHERMENT_KEY_USAGE	= 0x20,
        XCN_CERT_DATA_ENCIPHERMENT_KEY_USAGE	= 0x10,
        XCN_CERT_KEY_AGREEMENT_KEY_USAGE	= 0x8,
        XCN_CERT_KEY_CERT_SIGN_KEY_USAGE	= 0x4,
        XCN_CERT_OFFLINE_CRL_SIGN_KEY_USAGE	= 0x2,
        XCN_CERT_CRL_SIGN_KEY_USAGE	= 0x2,
        XCN_CERT_ENCIPHER_ONLY_KEY_USAGE	= 0x1,
        XCN_CERT_DECIPHER_ONLY_KEY_USAGE	= ( 0x80 << 8 ) 
    } 	X509KeyUsageFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0015_v0_0_s_ifspec;

#ifndef __IX509ExtensionKeyUsage_INTERFACE_DEFINED__
#define __IX509ExtensionKeyUsage_INTERFACE_DEFINED__

/* interface IX509ExtensionKeyUsage */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionKeyUsage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab30f-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionKeyUsage : public IX509Extension
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ X509KeyUsageFlags UsageFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_KeyUsage( 
            /* [retval][out] */ __RPC__out X509KeyUsageFlags *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionKeyUsageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionKeyUsage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionKeyUsage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionKeyUsage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ X509KeyUsageFlags UsageFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyUsage )( 
            __RPC__in IX509ExtensionKeyUsage * This,
            /* [retval][out] */ __RPC__out X509KeyUsageFlags *pValue);
        
        END_INTERFACE
    } IX509ExtensionKeyUsageVtbl;

    interface IX509ExtensionKeyUsage
    {
        CONST_VTBL struct IX509ExtensionKeyUsageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionKeyUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionKeyUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionKeyUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionKeyUsage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionKeyUsage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionKeyUsage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionKeyUsage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionKeyUsage_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionKeyUsage_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionKeyUsage_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionKeyUsage_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionKeyUsage_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionKeyUsage_InitializeEncode(This,UsageFlags)	\
    ( (This)->lpVtbl -> InitializeEncode(This,UsageFlags) ) 

#define IX509ExtensionKeyUsage_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionKeyUsage_get_KeyUsage(This,pValue)	\
    ( (This)->lpVtbl -> get_KeyUsage(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionKeyUsage_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionEnhancedKeyUsage_INTERFACE_DEFINED__
#define __IX509ExtensionEnhancedKeyUsage_INTERFACE_DEFINED__

/* interface IX509ExtensionEnhancedKeyUsage */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionEnhancedKeyUsage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab310-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionEnhancedKeyUsage : public IX509Extension
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt IObjectIds *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnhancedKeyUsage( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionEnhancedKeyUsageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionEnhancedKeyUsage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ __RPC__in_opt IObjectIds *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsage )( 
            __RPC__in IX509ExtensionEnhancedKeyUsage * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        END_INTERFACE
    } IX509ExtensionEnhancedKeyUsageVtbl;

    interface IX509ExtensionEnhancedKeyUsage
    {
        CONST_VTBL struct IX509ExtensionEnhancedKeyUsageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionEnhancedKeyUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionEnhancedKeyUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionEnhancedKeyUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionEnhancedKeyUsage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionEnhancedKeyUsage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionEnhancedKeyUsage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionEnhancedKeyUsage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionEnhancedKeyUsage_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionEnhancedKeyUsage_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionEnhancedKeyUsage_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionEnhancedKeyUsage_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionEnhancedKeyUsage_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionEnhancedKeyUsage_InitializeEncode(This,pValue)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) ) 

#define IX509ExtensionEnhancedKeyUsage_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionEnhancedKeyUsage_get_EnhancedKeyUsage(This,ppValue)	\
    ( (This)->lpVtbl -> get_EnhancedKeyUsage(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionEnhancedKeyUsage_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionTemplateName_INTERFACE_DEFINED__
#define __IX509ExtensionTemplateName_INTERFACE_DEFINED__

/* interface IX509ExtensionTemplateName */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionTemplateName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab311-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionTemplateName : public IX509Extension
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TemplateName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionTemplateNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionTemplateName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionTemplateName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionTemplateName * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateName )( 
            __RPC__in IX509ExtensionTemplateName * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509ExtensionTemplateNameVtbl;

    interface IX509ExtensionTemplateName
    {
        CONST_VTBL struct IX509ExtensionTemplateNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionTemplateName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionTemplateName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionTemplateName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionTemplateName_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionTemplateName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionTemplateName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionTemplateName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionTemplateName_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionTemplateName_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionTemplateName_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionTemplateName_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionTemplateName_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionTemplateName_InitializeEncode(This,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeEncode(This,strTemplateName) ) 

#define IX509ExtensionTemplateName_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionTemplateName_get_TemplateName(This,pValue)	\
    ( (This)->lpVtbl -> get_TemplateName(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionTemplateName_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionTemplate_INTERFACE_DEFINED__
#define __IX509ExtensionTemplate_INTERFACE_DEFINED__

/* interface IX509ExtensionTemplate */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionTemplate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab312-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionTemplate : public IX509Extension
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt IObjectId *pTemplateOid,
            /* [in] */ LONG MajorVersion,
            /* [in] */ LONG MinorVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TemplateOid( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MajorVersion( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MinorVersion( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionTemplateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionTemplate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionTemplate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionTemplate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ __RPC__in_opt IObjectId *pTemplateOid,
            /* [in] */ LONG MajorVersion,
            /* [in] */ LONG MinorVersion);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateOid )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            __RPC__in IX509ExtensionTemplate * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        END_INTERFACE
    } IX509ExtensionTemplateVtbl;

    interface IX509ExtensionTemplate
    {
        CONST_VTBL struct IX509ExtensionTemplateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionTemplate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionTemplate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionTemplate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionTemplate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionTemplate_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionTemplate_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionTemplate_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionTemplate_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionTemplate_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionTemplate_InitializeEncode(This,pTemplateOid,MajorVersion,MinorVersion)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pTemplateOid,MajorVersion,MinorVersion) ) 

#define IX509ExtensionTemplate_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionTemplate_get_TemplateOid(This,ppValue)	\
    ( (This)->lpVtbl -> get_TemplateOid(This,ppValue) ) 

#define IX509ExtensionTemplate_get_MajorVersion(This,pValue)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pValue) ) 

#define IX509ExtensionTemplate_get_MinorVersion(This,pValue)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionTemplate_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0019 */
/* [local] */ 

typedef 
enum AlternativeNameType
    {
        XCN_CERT_ALT_NAME_UNKNOWN	= 0,
        XCN_CERT_ALT_NAME_OTHER_NAME	= 1,
        XCN_CERT_ALT_NAME_RFC822_NAME	= 2,
        XCN_CERT_ALT_NAME_DNS_NAME	= 3,
        XCN_CERT_ALT_NAME_DIRECTORY_NAME	= 5,
        XCN_CERT_ALT_NAME_URL	= 7,
        XCN_CERT_ALT_NAME_IP_ADDRESS	= 8,
        XCN_CERT_ALT_NAME_REGISTERED_ID	= 9,
        XCN_CERT_ALT_NAME_GUID	= 10,
        XCN_CERT_ALT_NAME_USER_PRINCIPLE_NAME	= 11
    } 	AlternativeNameType;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0019_v0_0_s_ifspec;

#ifndef __IAlternativeName_INTERFACE_DEFINED__
#define __IAlternativeName_INTERFACE_DEFINED__

/* interface IAlternativeName */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAlternativeName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab313-217d-11da-b2a4-000e7bbb2b09")
    IAlternativeName : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromString( 
            /* [in] */ AlternativeNameType Type,
            /* [in] */ __RPC__in BSTR strValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromRawData( 
            /* [in] */ AlternativeNameType Type,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRawData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromOtherName( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRawData,
            /* [in] */ VARIANT_BOOL ToBeWrapped) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out AlternativeNameType *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StrValue( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawData( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAlternativeNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAlternativeName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAlternativeName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAlternativeName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IAlternativeName * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IAlternativeName * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IAlternativeName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAlternativeName * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromString )( 
            __RPC__in IAlternativeName * This,
            /* [in] */ AlternativeNameType Type,
            /* [in] */ __RPC__in BSTR strValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromRawData )( 
            __RPC__in IAlternativeName * This,
            /* [in] */ AlternativeNameType Type,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRawData);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromOtherName )( 
            __RPC__in IAlternativeName * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRawData,
            /* [in] */ VARIANT_BOOL ToBeWrapped);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IAlternativeName * This,
            /* [retval][out] */ __RPC__out AlternativeNameType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrValue )( 
            __RPC__in IAlternativeName * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IAlternativeName * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IAlternativeName * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IAlternativeNameVtbl;

    interface IAlternativeName
    {
        CONST_VTBL struct IAlternativeNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAlternativeName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAlternativeName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAlternativeName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAlternativeName_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAlternativeName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAlternativeName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAlternativeName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAlternativeName_InitializeFromString(This,Type,strValue)	\
    ( (This)->lpVtbl -> InitializeFromString(This,Type,strValue) ) 

#define IAlternativeName_InitializeFromRawData(This,Type,Encoding,strRawData)	\
    ( (This)->lpVtbl -> InitializeFromRawData(This,Type,Encoding,strRawData) ) 

#define IAlternativeName_InitializeFromOtherName(This,pObjectId,Encoding,strRawData,ToBeWrapped)	\
    ( (This)->lpVtbl -> InitializeFromOtherName(This,pObjectId,Encoding,strRawData,ToBeWrapped) ) 

#define IAlternativeName_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IAlternativeName_get_StrValue(This,pValue)	\
    ( (This)->lpVtbl -> get_StrValue(This,pValue) ) 

#define IAlternativeName_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IAlternativeName_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAlternativeName_INTERFACE_DEFINED__ */


#ifndef __IAlternativeNames_INTERFACE_DEFINED__
#define __IAlternativeNames_INTERFACE_DEFINED__

/* interface IAlternativeNames */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAlternativeNames;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab314-217d-11da-b2a4-000e7bbb2b09")
    IAlternativeNames : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IAlternativeName **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IAlternativeName *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAlternativeNamesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAlternativeNames * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAlternativeNames * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAlternativeNames * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IAlternativeNames * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IAlternativeNames * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IAlternativeNames * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAlternativeNames * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IAlternativeNames * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IAlternativeName **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IAlternativeNames * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IAlternativeNames * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IAlternativeNames * This,
            /* [in] */ __RPC__in_opt IAlternativeName *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IAlternativeNames * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IAlternativeNames * This);
        
        END_INTERFACE
    } IAlternativeNamesVtbl;

    interface IAlternativeNames
    {
        CONST_VTBL struct IAlternativeNamesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAlternativeNames_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAlternativeNames_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAlternativeNames_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAlternativeNames_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAlternativeNames_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAlternativeNames_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAlternativeNames_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAlternativeNames_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IAlternativeNames_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IAlternativeNames_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IAlternativeNames_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IAlternativeNames_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IAlternativeNames_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAlternativeNames_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionAlternativeNames_INTERFACE_DEFINED__
#define __IX509ExtensionAlternativeNames_INTERFACE_DEFINED__

/* interface IX509ExtensionAlternativeNames */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionAlternativeNames;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab315-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionAlternativeNames : public IX509Extension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt IAlternativeNames *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AlternativeNames( 
            /* [retval][out] */ __RPC__deref_out_opt IAlternativeNames **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionAlternativeNamesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionAlternativeNames * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionAlternativeNames * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionAlternativeNames * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ __RPC__in_opt IAlternativeNames *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternativeNames )( 
            __RPC__in IX509ExtensionAlternativeNames * This,
            /* [retval][out] */ __RPC__deref_out_opt IAlternativeNames **ppValue);
        
        END_INTERFACE
    } IX509ExtensionAlternativeNamesVtbl;

    interface IX509ExtensionAlternativeNames
    {
        CONST_VTBL struct IX509ExtensionAlternativeNamesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionAlternativeNames_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionAlternativeNames_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionAlternativeNames_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionAlternativeNames_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionAlternativeNames_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionAlternativeNames_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionAlternativeNames_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionAlternativeNames_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionAlternativeNames_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionAlternativeNames_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionAlternativeNames_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionAlternativeNames_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionAlternativeNames_InitializeEncode(This,pValue)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) ) 

#define IX509ExtensionAlternativeNames_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionAlternativeNames_get_AlternativeNames(This,ppValue)	\
    ( (This)->lpVtbl -> get_AlternativeNames(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionAlternativeNames_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionBasicConstraints_INTERFACE_DEFINED__
#define __IX509ExtensionBasicConstraints_INTERFACE_DEFINED__

/* interface IX509ExtensionBasicConstraints */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionBasicConstraints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab316-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionBasicConstraints : public IX509Extension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ VARIANT_BOOL IsCA,
            /* [in] */ LONG PathLenConstraint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsCA( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PathLenConstraint( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionBasicConstraintsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionBasicConstraints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionBasicConstraints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionBasicConstraints * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ VARIANT_BOOL IsCA,
            /* [in] */ LONG PathLenConstraint);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCA )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PathLenConstraint )( 
            __RPC__in IX509ExtensionBasicConstraints * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        END_INTERFACE
    } IX509ExtensionBasicConstraintsVtbl;

    interface IX509ExtensionBasicConstraints
    {
        CONST_VTBL struct IX509ExtensionBasicConstraintsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionBasicConstraints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionBasicConstraints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionBasicConstraints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionBasicConstraints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionBasicConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionBasicConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionBasicConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionBasicConstraints_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionBasicConstraints_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionBasicConstraints_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionBasicConstraints_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionBasicConstraints_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionBasicConstraints_InitializeEncode(This,IsCA,PathLenConstraint)	\
    ( (This)->lpVtbl -> InitializeEncode(This,IsCA,PathLenConstraint) ) 

#define IX509ExtensionBasicConstraints_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionBasicConstraints_get_IsCA(This,pValue)	\
    ( (This)->lpVtbl -> get_IsCA(This,pValue) ) 

#define IX509ExtensionBasicConstraints_get_PathLenConstraint(This,pValue)	\
    ( (This)->lpVtbl -> get_PathLenConstraint(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionBasicConstraints_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionSubjectKeyIdentifier_INTERFACE_DEFINED__
#define __IX509ExtensionSubjectKeyIdentifier_INTERFACE_DEFINED__

/* interface IX509ExtensionSubjectKeyIdentifier */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionSubjectKeyIdentifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab317-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionSubjectKeyIdentifier : public IX509Extension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strKeyIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SubjectKeyIdentifier( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionSubjectKeyIdentifierVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionSubjectKeyIdentifier * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strKeyIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubjectKeyIdentifier )( 
            __RPC__in IX509ExtensionSubjectKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509ExtensionSubjectKeyIdentifierVtbl;

    interface IX509ExtensionSubjectKeyIdentifier
    {
        CONST_VTBL struct IX509ExtensionSubjectKeyIdentifierVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionSubjectKeyIdentifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionSubjectKeyIdentifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionSubjectKeyIdentifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionSubjectKeyIdentifier_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionSubjectKeyIdentifier_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionSubjectKeyIdentifier_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionSubjectKeyIdentifier_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionSubjectKeyIdentifier_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionSubjectKeyIdentifier_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionSubjectKeyIdentifier_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionSubjectKeyIdentifier_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionSubjectKeyIdentifier_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionSubjectKeyIdentifier_InitializeEncode(This,Encoding,strKeyIdentifier)	\
    ( (This)->lpVtbl -> InitializeEncode(This,Encoding,strKeyIdentifier) ) 

#define IX509ExtensionSubjectKeyIdentifier_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionSubjectKeyIdentifier_get_SubjectKeyIdentifier(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_SubjectKeyIdentifier(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionSubjectKeyIdentifier_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionAuthorityKeyIdentifier_INTERFACE_DEFINED__
#define __IX509ExtensionAuthorityKeyIdentifier_INTERFACE_DEFINED__

/* interface IX509ExtensionAuthorityKeyIdentifier */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionAuthorityKeyIdentifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab318-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionAuthorityKeyIdentifier : public IX509Extension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strKeyIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AuthorityKeyIdentifier( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionAuthorityKeyIdentifierVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionAuthorityKeyIdentifier * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strKeyIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthorityKeyIdentifier )( 
            __RPC__in IX509ExtensionAuthorityKeyIdentifier * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509ExtensionAuthorityKeyIdentifierVtbl;

    interface IX509ExtensionAuthorityKeyIdentifier
    {
        CONST_VTBL struct IX509ExtensionAuthorityKeyIdentifierVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionAuthorityKeyIdentifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionAuthorityKeyIdentifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionAuthorityKeyIdentifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionAuthorityKeyIdentifier_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionAuthorityKeyIdentifier_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionAuthorityKeyIdentifier_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionAuthorityKeyIdentifier_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionAuthorityKeyIdentifier_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionAuthorityKeyIdentifier_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionAuthorityKeyIdentifier_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionAuthorityKeyIdentifier_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionAuthorityKeyIdentifier_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionAuthorityKeyIdentifier_InitializeEncode(This,Encoding,strKeyIdentifier)	\
    ( (This)->lpVtbl -> InitializeEncode(This,Encoding,strKeyIdentifier) ) 

#define IX509ExtensionAuthorityKeyIdentifier_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionAuthorityKeyIdentifier_get_AuthorityKeyIdentifier(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_AuthorityKeyIdentifier(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionAuthorityKeyIdentifier_INTERFACE_DEFINED__ */


#ifndef __ISmimeCapability_INTERFACE_DEFINED__
#define __ISmimeCapability_INTERFACE_DEFINED__

/* interface ISmimeCapability */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmimeCapability;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab319-217d-11da-b2a4-000e7bbb2b09")
    ISmimeCapability : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ LONG BitCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BitCount( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISmimeCapabilityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISmimeCapability * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISmimeCapability * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISmimeCapability * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ISmimeCapability * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ISmimeCapability * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ISmimeCapability * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmimeCapability * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ISmimeCapability * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ LONG BitCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in ISmimeCapability * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitCount )( 
            __RPC__in ISmimeCapability * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        END_INTERFACE
    } ISmimeCapabilityVtbl;

    interface ISmimeCapability
    {
        CONST_VTBL struct ISmimeCapabilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmimeCapability_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmimeCapability_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmimeCapability_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmimeCapability_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmimeCapability_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmimeCapability_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmimeCapability_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmimeCapability_Initialize(This,pObjectId,BitCount)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,BitCount) ) 

#define ISmimeCapability_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define ISmimeCapability_get_BitCount(This,pValue)	\
    ( (This)->lpVtbl -> get_BitCount(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmimeCapability_INTERFACE_DEFINED__ */


#ifndef __ISmimeCapabilities_INTERFACE_DEFINED__
#define __ISmimeCapabilities_INTERFACE_DEFINED__

/* interface ISmimeCapabilities */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmimeCapabilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab31a-217d-11da-b2a4-000e7bbb2b09")
    ISmimeCapabilities : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ISmimeCapability **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ISmimeCapability *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFromCsp( 
            /* [in] */ __RPC__in_opt ICspInformation *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddAvailableSmimeCapabilities( 
            /* [in] */ VARIANT_BOOL MachineContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISmimeCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISmimeCapabilities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISmimeCapabilities * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ISmimeCapabilities * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmimeCapabilities * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ISmimeCapability **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ISmimeCapabilities * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ISmimeCapabilities * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ __RPC__in_opt ISmimeCapability *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ISmimeCapabilities * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddFromCsp )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ __RPC__in_opt ICspInformation *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AddAvailableSmimeCapabilities )( 
            __RPC__in ISmimeCapabilities * This,
            /* [in] */ VARIANT_BOOL MachineContext);
        
        END_INTERFACE
    } ISmimeCapabilitiesVtbl;

    interface ISmimeCapabilities
    {
        CONST_VTBL struct ISmimeCapabilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmimeCapabilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmimeCapabilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmimeCapabilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmimeCapabilities_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmimeCapabilities_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmimeCapabilities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmimeCapabilities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmimeCapabilities_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ISmimeCapabilities_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ISmimeCapabilities_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ISmimeCapabilities_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ISmimeCapabilities_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ISmimeCapabilities_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmimeCapabilities_AddFromCsp(This,pValue)	\
    ( (This)->lpVtbl -> AddFromCsp(This,pValue) ) 

#define ISmimeCapabilities_AddAvailableSmimeCapabilities(This,MachineContext)	\
    ( (This)->lpVtbl -> AddAvailableSmimeCapabilities(This,MachineContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmimeCapabilities_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionSmimeCapabilities_INTERFACE_DEFINED__
#define __IX509ExtensionSmimeCapabilities_INTERFACE_DEFINED__

/* interface IX509ExtensionSmimeCapabilities */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionSmimeCapabilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab31b-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionSmimeCapabilities : public IX509Extension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt ISmimeCapabilities *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SmimeCapabilities( 
            /* [retval][out] */ __RPC__deref_out_opt ISmimeCapabilities **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionSmimeCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionSmimeCapabilities * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ __RPC__in_opt ISmimeCapabilities *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )( 
            __RPC__in IX509ExtensionSmimeCapabilities * This,
            /* [retval][out] */ __RPC__deref_out_opt ISmimeCapabilities **ppValue);
        
        END_INTERFACE
    } IX509ExtensionSmimeCapabilitiesVtbl;

    interface IX509ExtensionSmimeCapabilities
    {
        CONST_VTBL struct IX509ExtensionSmimeCapabilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionSmimeCapabilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionSmimeCapabilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionSmimeCapabilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionSmimeCapabilities_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionSmimeCapabilities_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionSmimeCapabilities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionSmimeCapabilities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionSmimeCapabilities_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionSmimeCapabilities_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionSmimeCapabilities_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionSmimeCapabilities_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionSmimeCapabilities_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionSmimeCapabilities_InitializeEncode(This,pValue)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) ) 

#define IX509ExtensionSmimeCapabilities_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionSmimeCapabilities_get_SmimeCapabilities(This,ppValue)	\
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionSmimeCapabilities_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0028 */
/* [local] */ 

typedef 
enum PolicyQualifierType
    {
        PolicyQualifierTypeUnknown	= 0,
        PolicyQualifierTypeUrl	= 1,
        PolicyQualifierTypeUserNotice	= 2,
        PolicyQualifierTypeFlags	= 3
    } 	PolicyQualifierType;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0028_v0_0_s_ifspec;

#ifndef __IPolicyQualifier_INTERFACE_DEFINED__
#define __IPolicyQualifier_INTERFACE_DEFINED__

/* interface IPolicyQualifier */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPolicyQualifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab31c-217d-11da-b2a4-000e7bbb2b09")
    IPolicyQualifier : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in BSTR strQualifier,
            /* [in] */ PolicyQualifierType Type) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Qualifier( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out PolicyQualifierType *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawData( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPolicyQualifierVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPolicyQualifier * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPolicyQualifier * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPolicyQualifier * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IPolicyQualifier * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IPolicyQualifier * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IPolicyQualifier * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPolicyQualifier * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IPolicyQualifier * This,
            /* [in] */ __RPC__in BSTR strQualifier,
            /* [in] */ PolicyQualifierType Type);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IPolicyQualifier * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Qualifier )( 
            __RPC__in IPolicyQualifier * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IPolicyQualifier * This,
            /* [retval][out] */ __RPC__out PolicyQualifierType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IPolicyQualifier * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IPolicyQualifierVtbl;

    interface IPolicyQualifier
    {
        CONST_VTBL struct IPolicyQualifierVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPolicyQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPolicyQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPolicyQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPolicyQualifier_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPolicyQualifier_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPolicyQualifier_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPolicyQualifier_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPolicyQualifier_InitializeEncode(This,strQualifier,Type)	\
    ( (This)->lpVtbl -> InitializeEncode(This,strQualifier,Type) ) 

#define IPolicyQualifier_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IPolicyQualifier_get_Qualifier(This,pValue)	\
    ( (This)->lpVtbl -> get_Qualifier(This,pValue) ) 

#define IPolicyQualifier_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IPolicyQualifier_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPolicyQualifier_INTERFACE_DEFINED__ */


#ifndef __IPolicyQualifiers_INTERFACE_DEFINED__
#define __IPolicyQualifiers_INTERFACE_DEFINED__

/* interface IPolicyQualifiers */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPolicyQualifiers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab31d-217d-11da-b2a4-000e7bbb2b09")
    IPolicyQualifiers : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IPolicyQualifier **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IPolicyQualifier *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPolicyQualifiersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPolicyQualifiers * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPolicyQualifiers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPolicyQualifiers * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IPolicyQualifiers * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IPolicyQualifiers * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IPolicyQualifiers * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPolicyQualifiers * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IPolicyQualifiers * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IPolicyQualifier **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IPolicyQualifiers * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IPolicyQualifiers * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IPolicyQualifiers * This,
            /* [in] */ __RPC__in_opt IPolicyQualifier *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IPolicyQualifiers * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IPolicyQualifiers * This);
        
        END_INTERFACE
    } IPolicyQualifiersVtbl;

    interface IPolicyQualifiers
    {
        CONST_VTBL struct IPolicyQualifiersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPolicyQualifiers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPolicyQualifiers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPolicyQualifiers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPolicyQualifiers_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPolicyQualifiers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPolicyQualifiers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPolicyQualifiers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPolicyQualifiers_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IPolicyQualifiers_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IPolicyQualifiers_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IPolicyQualifiers_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IPolicyQualifiers_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IPolicyQualifiers_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPolicyQualifiers_INTERFACE_DEFINED__ */


#ifndef __ICertificatePolicy_INTERFACE_DEFINED__
#define __ICertificatePolicy_INTERFACE_DEFINED__

/* interface ICertificatePolicy */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertificatePolicy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab31e-217d-11da-b2a4-000e7bbb2b09")
    ICertificatePolicy : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IObjectId *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PolicyQualifiers( 
            /* [retval][out] */ __RPC__deref_out_opt IPolicyQualifiers **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificatePolicyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertificatePolicy * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertificatePolicy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertificatePolicy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertificatePolicy * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertificatePolicy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertificatePolicy * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificatePolicy * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertificatePolicy * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in ICertificatePolicy * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyQualifiers )( 
            __RPC__in ICertificatePolicy * This,
            /* [retval][out] */ __RPC__deref_out_opt IPolicyQualifiers **ppValue);
        
        END_INTERFACE
    } ICertificatePolicyVtbl;

    interface ICertificatePolicy
    {
        CONST_VTBL struct ICertificatePolicyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificatePolicy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificatePolicy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificatePolicy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificatePolicy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificatePolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificatePolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificatePolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificatePolicy_Initialize(This,pValue)	\
    ( (This)->lpVtbl -> Initialize(This,pValue) ) 

#define ICertificatePolicy_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define ICertificatePolicy_get_PolicyQualifiers(This,ppValue)	\
    ( (This)->lpVtbl -> get_PolicyQualifiers(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificatePolicy_INTERFACE_DEFINED__ */


#ifndef __ICertificatePolicies_INTERFACE_DEFINED__
#define __ICertificatePolicies_INTERFACE_DEFINED__

/* interface ICertificatePolicies */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertificatePolicies;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab31f-217d-11da-b2a4-000e7bbb2b09")
    ICertificatePolicies : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICertificatePolicy **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICertificatePolicy *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificatePoliciesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertificatePolicies * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertificatePolicies * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertificatePolicies * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertificatePolicies * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertificatePolicies * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertificatePolicies * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificatePolicies * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ICertificatePolicies * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICertificatePolicy **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ICertificatePolicies * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ICertificatePolicies * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICertificatePolicies * This,
            /* [in] */ __RPC__in_opt ICertificatePolicy *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ICertificatePolicies * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICertificatePolicies * This);
        
        END_INTERFACE
    } ICertificatePoliciesVtbl;

    interface ICertificatePolicies
    {
        CONST_VTBL struct ICertificatePoliciesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificatePolicies_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificatePolicies_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificatePolicies_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificatePolicies_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificatePolicies_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificatePolicies_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificatePolicies_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificatePolicies_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ICertificatePolicies_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICertificatePolicies_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ICertificatePolicies_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICertificatePolicies_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICertificatePolicies_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificatePolicies_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionCertificatePolicies_INTERFACE_DEFINED__
#define __IX509ExtensionCertificatePolicies_INTERFACE_DEFINED__

/* interface IX509ExtensionCertificatePolicies */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionCertificatePolicies;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab320-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionCertificatePolicies : public IX509Extension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt ICertificatePolicies *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Policies( 
            /* [retval][out] */ __RPC__deref_out_opt ICertificatePolicies **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionCertificatePoliciesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionCertificatePolicies * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionCertificatePolicies * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionCertificatePolicies * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ __RPC__in_opt ICertificatePolicies *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Policies )( 
            __RPC__in IX509ExtensionCertificatePolicies * This,
            /* [retval][out] */ __RPC__deref_out_opt ICertificatePolicies **ppValue);
        
        END_INTERFACE
    } IX509ExtensionCertificatePoliciesVtbl;

    interface IX509ExtensionCertificatePolicies
    {
        CONST_VTBL struct IX509ExtensionCertificatePoliciesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionCertificatePolicies_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionCertificatePolicies_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionCertificatePolicies_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionCertificatePolicies_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionCertificatePolicies_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionCertificatePolicies_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionCertificatePolicies_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionCertificatePolicies_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionCertificatePolicies_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionCertificatePolicies_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionCertificatePolicies_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionCertificatePolicies_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionCertificatePolicies_InitializeEncode(This,pValue)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) ) 

#define IX509ExtensionCertificatePolicies_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionCertificatePolicies_get_Policies(This,ppValue)	\
    ( (This)->lpVtbl -> get_Policies(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionCertificatePolicies_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionMSApplicationPolicies_INTERFACE_DEFINED__
#define __IX509ExtensionMSApplicationPolicies_INTERFACE_DEFINED__

/* interface IX509ExtensionMSApplicationPolicies */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionMSApplicationPolicies;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab321-217d-11da-b2a4-000e7bbb2b09")
    IX509ExtensionMSApplicationPolicies : public IX509Extension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt ICertificatePolicies *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Policies( 
            /* [retval][out] */ __RPC__deref_out_opt ICertificatePolicies **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionMSApplicationPoliciesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionMSApplicationPolicies * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ __RPC__in_opt ICertificatePolicies *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Policies )( 
            __RPC__in IX509ExtensionMSApplicationPolicies * This,
            /* [retval][out] */ __RPC__deref_out_opt ICertificatePolicies **ppValue);
        
        END_INTERFACE
    } IX509ExtensionMSApplicationPoliciesVtbl;

    interface IX509ExtensionMSApplicationPolicies
    {
        CONST_VTBL struct IX509ExtensionMSApplicationPoliciesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionMSApplicationPolicies_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509ExtensionMSApplicationPolicies_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509ExtensionMSApplicationPolicies_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509ExtensionMSApplicationPolicies_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509ExtensionMSApplicationPolicies_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509ExtensionMSApplicationPolicies_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509ExtensionMSApplicationPolicies_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509ExtensionMSApplicationPolicies_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509ExtensionMSApplicationPolicies_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509ExtensionMSApplicationPolicies_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define IX509ExtensionMSApplicationPolicies_get_Critical(This,pValue)	\
    ( (This)->lpVtbl -> get_Critical(This,pValue) ) 

#define IX509ExtensionMSApplicationPolicies_put_Critical(This,Value)	\
    ( (This)->lpVtbl -> put_Critical(This,Value) ) 


#define IX509ExtensionMSApplicationPolicies_InitializeEncode(This,pValue)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pValue) ) 

#define IX509ExtensionMSApplicationPolicies_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509ExtensionMSApplicationPolicies_get_Policies(This,ppValue)	\
    ( (This)->lpVtbl -> get_Policies(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionMSApplicationPolicies_INTERFACE_DEFINED__ */


#ifndef __IX509Attribute_INTERFACE_DEFINED__
#define __IX509Attribute_INTERFACE_DEFINED__

/* interface IX509Attribute */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509Attribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab322-217d-11da-b2a4-000e7bbb2b09")
    IX509Attribute : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawData( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509Attribute * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509Attribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509Attribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509Attribute * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509Attribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509Attribute * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509Attribute * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509Attribute * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509Attribute * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509Attribute * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509AttributeVtbl;

    interface IX509Attribute
    {
        CONST_VTBL struct IX509AttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509Attribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509Attribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509Attribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509Attribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509Attribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509Attribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509Attribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509Attribute_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509Attribute_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509Attribute_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509Attribute_INTERFACE_DEFINED__ */


#ifndef __IX509Attributes_INTERFACE_DEFINED__
#define __IX509Attributes_INTERFACE_DEFINED__

/* interface IX509Attributes */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509Attributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab323-217d-11da-b2a4-000e7bbb2b09")
    IX509Attributes : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509Attribute **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IX509Attribute *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509Attributes * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509Attributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509Attributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509Attributes * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509Attributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509Attributes * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509Attributes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IX509Attributes * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509Attribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IX509Attributes * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IX509Attributes * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IX509Attributes * This,
            /* [in] */ __RPC__in_opt IX509Attribute *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IX509Attributes * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IX509Attributes * This);
        
        END_INTERFACE
    } IX509AttributesVtbl;

    interface IX509Attributes
    {
        CONST_VTBL struct IX509AttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509Attributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509Attributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509Attributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509Attributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509Attributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509Attributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509Attributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509Attributes_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IX509Attributes_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IX509Attributes_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IX509Attributes_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IX509Attributes_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IX509Attributes_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509Attributes_INTERFACE_DEFINED__ */


#ifndef __IX509AttributeExtensions_INTERFACE_DEFINED__
#define __IX509AttributeExtensions_INTERFACE_DEFINED__

/* interface IX509AttributeExtensions */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509AttributeExtensions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab324-217d-11da-b2a4-000e7bbb2b09")
    IX509AttributeExtensions : public IX509Attribute
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt IX509Extensions *pExtensions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_X509Extensions( 
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeExtensionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509AttributeExtensions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509AttributeExtensions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509AttributeExtensions * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [in] */ __RPC__in_opt IX509Extensions *pExtensions);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            __RPC__in IX509AttributeExtensions * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue);
        
        END_INTERFACE
    } IX509AttributeExtensionsVtbl;

    interface IX509AttributeExtensions
    {
        CONST_VTBL struct IX509AttributeExtensionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509AttributeExtensions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509AttributeExtensions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509AttributeExtensions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509AttributeExtensions_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509AttributeExtensions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509AttributeExtensions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509AttributeExtensions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509AttributeExtensions_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509AttributeExtensions_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509AttributeExtensions_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509AttributeExtensions_InitializeEncode(This,pExtensions)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pExtensions) ) 

#define IX509AttributeExtensions_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509AttributeExtensions_get_X509Extensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509AttributeExtensions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0037 */
/* [local] */ 

typedef 
enum RequestClientInfoClientId
    {
        ClientIdNone	= 0,
        ClientIdXEnroll2003	= 1,
        ClientIdAutoEnroll2003	= 2,
        ClientIdWizard2003	= 3,
        ClientIdCertReq2003	= 4,
        ClientIdDefaultRequest	= 5,
        ClientIdAutoEnroll	= 6,
        ClientIdRequestWizard	= 7,
        ClientIdEOBO	= 8,
        ClientIdCertReq	= 9,
        ClientIdTest	= 10,
        ClientIdUserStart	= 1000
    } 	RequestClientInfoClientId;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0037_v0_0_s_ifspec;

#ifndef __IX509AttributeClientId_INTERFACE_DEFINED__
#define __IX509AttributeClientId_INTERFACE_DEFINED__

/* interface IX509AttributeClientId */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509AttributeClientId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab325-217d-11da-b2a4-000e7bbb2b09")
    IX509AttributeClientId : public IX509Attribute
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ RequestClientInfoClientId ClientId,
            /* [in] */ __RPC__in BSTR strMachineDnsName,
            /* [in] */ __RPC__in BSTR strUserSamName,
            /* [in] */ __RPC__in BSTR strProcessName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ClientId( 
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MachineDnsName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UserSamName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProcessName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeClientIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509AttributeClientId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509AttributeClientId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509AttributeClientId * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509AttributeClientId * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509AttributeClientId * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509AttributeClientId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509AttributeClientId * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509AttributeClientId * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509AttributeClientId * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509AttributeClientId * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509AttributeClientId * This,
            /* [in] */ RequestClientInfoClientId ClientId,
            /* [in] */ __RPC__in BSTR strMachineDnsName,
            /* [in] */ __RPC__in BSTR strUserSamName,
            /* [in] */ __RPC__in BSTR strProcessName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509AttributeClientId * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509AttributeClientId * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MachineDnsName )( 
            __RPC__in IX509AttributeClientId * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSamName )( 
            __RPC__in IX509AttributeClientId * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessName )( 
            __RPC__in IX509AttributeClientId * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509AttributeClientIdVtbl;

    interface IX509AttributeClientId
    {
        CONST_VTBL struct IX509AttributeClientIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509AttributeClientId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509AttributeClientId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509AttributeClientId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509AttributeClientId_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509AttributeClientId_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509AttributeClientId_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509AttributeClientId_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509AttributeClientId_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509AttributeClientId_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509AttributeClientId_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509AttributeClientId_InitializeEncode(This,ClientId,strMachineDnsName,strUserSamName,strProcessName)	\
    ( (This)->lpVtbl -> InitializeEncode(This,ClientId,strMachineDnsName,strUserSamName,strProcessName) ) 

#define IX509AttributeClientId_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509AttributeClientId_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509AttributeClientId_get_MachineDnsName(This,pValue)	\
    ( (This)->lpVtbl -> get_MachineDnsName(This,pValue) ) 

#define IX509AttributeClientId_get_UserSamName(This,pValue)	\
    ( (This)->lpVtbl -> get_UserSamName(This,pValue) ) 

#define IX509AttributeClientId_get_ProcessName(This,pValue)	\
    ( (This)->lpVtbl -> get_ProcessName(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509AttributeClientId_INTERFACE_DEFINED__ */


#ifndef __IX509AttributeRenewalCertificate_INTERFACE_DEFINED__
#define __IX509AttributeRenewalCertificate_INTERFACE_DEFINED__

/* interface IX509AttributeRenewalCertificate */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509AttributeRenewalCertificate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab326-217d-11da-b2a4-000e7bbb2b09")
    IX509AttributeRenewalCertificate : public IX509Attribute
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCert) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RenewalCertificate( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeRenewalCertificateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509AttributeRenewalCertificate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509AttributeRenewalCertificate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509AttributeRenewalCertificate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCert);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509AttributeRenewalCertificate * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509AttributeRenewalCertificateVtbl;

    interface IX509AttributeRenewalCertificate
    {
        CONST_VTBL struct IX509AttributeRenewalCertificateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509AttributeRenewalCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509AttributeRenewalCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509AttributeRenewalCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509AttributeRenewalCertificate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509AttributeRenewalCertificate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509AttributeRenewalCertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509AttributeRenewalCertificate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509AttributeRenewalCertificate_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509AttributeRenewalCertificate_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509AttributeRenewalCertificate_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509AttributeRenewalCertificate_InitializeEncode(This,Encoding,strCert)	\
    ( (This)->lpVtbl -> InitializeEncode(This,Encoding,strCert) ) 

#define IX509AttributeRenewalCertificate_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509AttributeRenewalCertificate_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509AttributeRenewalCertificate_INTERFACE_DEFINED__ */


#ifndef __IX509AttributeArchiveKey_INTERFACE_DEFINED__
#define __IX509AttributeArchiveKey_INTERFACE_DEFINED__

/* interface IX509AttributeArchiveKey */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509AttributeArchiveKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab327-217d-11da-b2a4-000e7bbb2b09")
    IX509AttributeArchiveKey : public IX509Attribute
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in_opt IX509PrivateKey *pKey,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCAXCert,
            /* [in] */ __RPC__in_opt IObjectId *pAlgorithm,
            /* [in] */ LONG EncryptionStrength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncryptedKeyBlob( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncryptionAlgorithm( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncryptionStrength( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeArchiveKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509AttributeArchiveKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509AttributeArchiveKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509AttributeArchiveKey * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pKey,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCAXCert,
            /* [in] */ __RPC__in_opt IObjectId *pAlgorithm,
            /* [in] */ LONG EncryptionStrength);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyBlob )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )( 
            __RPC__in IX509AttributeArchiveKey * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        END_INTERFACE
    } IX509AttributeArchiveKeyVtbl;

    interface IX509AttributeArchiveKey
    {
        CONST_VTBL struct IX509AttributeArchiveKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509AttributeArchiveKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509AttributeArchiveKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509AttributeArchiveKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509AttributeArchiveKey_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509AttributeArchiveKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509AttributeArchiveKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509AttributeArchiveKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509AttributeArchiveKey_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509AttributeArchiveKey_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509AttributeArchiveKey_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509AttributeArchiveKey_InitializeEncode(This,pKey,Encoding,strCAXCert,pAlgorithm,EncryptionStrength)	\
    ( (This)->lpVtbl -> InitializeEncode(This,pKey,Encoding,strCAXCert,pAlgorithm,EncryptionStrength) ) 

#define IX509AttributeArchiveKey_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509AttributeArchiveKey_get_EncryptedKeyBlob(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_EncryptedKeyBlob(This,Encoding,pValue) ) 

#define IX509AttributeArchiveKey_get_EncryptionAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) ) 

#define IX509AttributeArchiveKey_get_EncryptionStrength(This,pValue)	\
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509AttributeArchiveKey_INTERFACE_DEFINED__ */


#ifndef __IX509AttributeArchiveKeyHash_INTERFACE_DEFINED__
#define __IX509AttributeArchiveKeyHash_INTERFACE_DEFINED__

/* interface IX509AttributeArchiveKeyHash */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509AttributeArchiveKeyHash;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab328-217d-11da-b2a4-000e7bbb2b09")
    IX509AttributeArchiveKeyHash : public IX509Attribute
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncodeFromEncryptedKeyBlob( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncryptedKeyBlob) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncryptedKeyHashBlob( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeArchiveKeyHashVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509AttributeArchiveKeyHash * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509AttributeArchiveKeyHash * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509AttributeArchiveKeyHash * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncodeFromEncryptedKeyBlob )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncryptedKeyBlob);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyHashBlob )( 
            __RPC__in IX509AttributeArchiveKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509AttributeArchiveKeyHashVtbl;

    interface IX509AttributeArchiveKeyHash
    {
        CONST_VTBL struct IX509AttributeArchiveKeyHashVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509AttributeArchiveKeyHash_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509AttributeArchiveKeyHash_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509AttributeArchiveKeyHash_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509AttributeArchiveKeyHash_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509AttributeArchiveKeyHash_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509AttributeArchiveKeyHash_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509AttributeArchiveKeyHash_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509AttributeArchiveKeyHash_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509AttributeArchiveKeyHash_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509AttributeArchiveKeyHash_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509AttributeArchiveKeyHash_InitializeEncodeFromEncryptedKeyBlob(This,Encoding,strEncryptedKeyBlob)	\
    ( (This)->lpVtbl -> InitializeEncodeFromEncryptedKeyBlob(This,Encoding,strEncryptedKeyBlob) ) 

#define IX509AttributeArchiveKeyHash_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509AttributeArchiveKeyHash_get_EncryptedKeyHashBlob(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_EncryptedKeyHashBlob(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509AttributeArchiveKeyHash_INTERFACE_DEFINED__ */


#ifndef __IX509AttributeOSVersion_INTERFACE_DEFINED__
#define __IX509AttributeOSVersion_INTERFACE_DEFINED__

/* interface IX509AttributeOSVersion */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509AttributeOSVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab32a-217d-11da-b2a4-000e7bbb2b09")
    IX509AttributeOSVersion : public IX509Attribute
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ __RPC__in BSTR strOSVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OSVersion( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeOSVersionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509AttributeOSVersion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509AttributeOSVersion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509AttributeOSVersion * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [in] */ __RPC__in BSTR strOSVersion);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OSVersion )( 
            __RPC__in IX509AttributeOSVersion * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509AttributeOSVersionVtbl;

    interface IX509AttributeOSVersion
    {
        CONST_VTBL struct IX509AttributeOSVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509AttributeOSVersion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509AttributeOSVersion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509AttributeOSVersion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509AttributeOSVersion_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509AttributeOSVersion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509AttributeOSVersion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509AttributeOSVersion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509AttributeOSVersion_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509AttributeOSVersion_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509AttributeOSVersion_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509AttributeOSVersion_InitializeEncode(This,strOSVersion)	\
    ( (This)->lpVtbl -> InitializeEncode(This,strOSVersion) ) 

#define IX509AttributeOSVersion_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509AttributeOSVersion_get_OSVersion(This,pValue)	\
    ( (This)->lpVtbl -> get_OSVersion(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509AttributeOSVersion_INTERFACE_DEFINED__ */


#ifndef __IX509AttributeCspProvider_INTERFACE_DEFINED__
#define __IX509AttributeCspProvider_INTERFACE_DEFINED__

/* interface IX509AttributeCspProvider */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509AttributeCspProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab32b-217d-11da-b2a4-000e7bbb2b09")
    IX509AttributeCspProvider : public IX509Attribute
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ X509KeySpec KeySpec,
            /* [in] */ __RPC__in BSTR strProviderName,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strSignature) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_KeySpec( 
            /* [retval][out] */ __RPC__out X509KeySpec *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Signature( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509AttributeCspProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509AttributeCspProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509AttributeCspProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509AttributeCspProvider * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ X509KeySpec KeySpec,
            /* [in] */ __RPC__in BSTR strProviderName,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strSignature);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [retval][out] */ __RPC__out X509KeySpec *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            __RPC__in IX509AttributeCspProvider * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509AttributeCspProviderVtbl;

    interface IX509AttributeCspProvider
    {
        CONST_VTBL struct IX509AttributeCspProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509AttributeCspProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509AttributeCspProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509AttributeCspProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509AttributeCspProvider_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509AttributeCspProvider_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509AttributeCspProvider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509AttributeCspProvider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509AttributeCspProvider_Initialize(This,pObjectId,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) ) 

#define IX509AttributeCspProvider_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define IX509AttributeCspProvider_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509AttributeCspProvider_InitializeEncode(This,KeySpec,strProviderName,Encoding,strSignature)	\
    ( (This)->lpVtbl -> InitializeEncode(This,KeySpec,strProviderName,Encoding,strSignature) ) 

#define IX509AttributeCspProvider_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define IX509AttributeCspProvider_get_KeySpec(This,pValue)	\
    ( (This)->lpVtbl -> get_KeySpec(This,pValue) ) 

#define IX509AttributeCspProvider_get_ProviderName(This,pValue)	\
    ( (This)->lpVtbl -> get_ProviderName(This,pValue) ) 

#define IX509AttributeCspProvider_get_Signature(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509AttributeCspProvider_INTERFACE_DEFINED__ */


#ifndef __ICryptAttribute_INTERFACE_DEFINED__
#define __ICryptAttribute_INTERFACE_DEFINED__

/* interface ICryptAttribute */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICryptAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab32c-217d-11da-b2a4-000e7bbb2b09")
    ICryptAttribute : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromObjectId( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromValues( 
            /* [in] */ __RPC__in_opt IX509Attributes *pAttributes) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Values( 
            /* [retval][out] */ __RPC__deref_out_opt IX509Attributes **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICryptAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICryptAttribute * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICryptAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICryptAttribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICryptAttribute * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICryptAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICryptAttribute * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICryptAttribute * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromObjectId )( 
            __RPC__in ICryptAttribute * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromValues )( 
            __RPC__in ICryptAttribute * This,
            /* [in] */ __RPC__in_opt IX509Attributes *pAttributes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            __RPC__in ICryptAttribute * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Values )( 
            __RPC__in ICryptAttribute * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Attributes **ppValue);
        
        END_INTERFACE
    } ICryptAttributeVtbl;

    interface ICryptAttribute
    {
        CONST_VTBL struct ICryptAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICryptAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICryptAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICryptAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICryptAttribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICryptAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICryptAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICryptAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICryptAttribute_InitializeFromObjectId(This,pObjectId)	\
    ( (This)->lpVtbl -> InitializeFromObjectId(This,pObjectId) ) 

#define ICryptAttribute_InitializeFromValues(This,pAttributes)	\
    ( (This)->lpVtbl -> InitializeFromValues(This,pAttributes) ) 

#define ICryptAttribute_get_ObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_ObjectId(This,ppValue) ) 

#define ICryptAttribute_get_Values(This,ppValue)	\
    ( (This)->lpVtbl -> get_Values(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICryptAttribute_INTERFACE_DEFINED__ */


#ifndef __ICryptAttributes_INTERFACE_DEFINED__
#define __ICryptAttributes_INTERFACE_DEFINED__

/* interface ICryptAttributes */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICryptAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab32d-217d-11da-b2a4-000e7bbb2b09")
    ICryptAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttribute **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICryptAttribute *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IndexByObjectId( 
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [retval][out] */ __RPC__out LONG *pIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRange( 
            /* [in] */ __RPC__in_opt ICryptAttributes *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICryptAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICryptAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICryptAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICryptAttributes * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICryptAttributes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ICryptAttributes * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ICryptAttributes * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ __RPC__in_opt ICryptAttribute *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICryptAttributes * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IndexByObjectId )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ __RPC__in_opt IObjectId *pObjectId,
            /* [retval][out] */ __RPC__out LONG *pIndex);
        
        HRESULT ( STDMETHODCALLTYPE *AddRange )( 
            __RPC__in ICryptAttributes * This,
            /* [in] */ __RPC__in_opt ICryptAttributes *pValue);
        
        END_INTERFACE
    } ICryptAttributesVtbl;

    interface ICryptAttributes
    {
        CONST_VTBL struct ICryptAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICryptAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICryptAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICryptAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICryptAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICryptAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICryptAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICryptAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICryptAttributes_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ICryptAttributes_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICryptAttributes_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ICryptAttributes_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICryptAttributes_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICryptAttributes_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICryptAttributes_get_IndexByObjectId(This,pObjectId,pIndex)	\
    ( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) ) 

#define ICryptAttributes_AddRange(This,pValue)	\
    ( (This)->lpVtbl -> AddRange(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICryptAttributes_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0045 */
/* [local] */ 

typedef 
enum CERTENROLL_PROPERTYID
    {
        XCN_PROPERTYID_NONE	= 0,
        XCN_CERT_KEY_PROV_HANDLE_PROP_ID	= 1,
        XCN_CERT_KEY_PROV_INFO_PROP_ID	= 2,
        XCN_CERT_SHA1_HASH_PROP_ID	= 3,
        XCN_CERT_MD5_HASH_PROP_ID	= 4,
        XCN_CERT_HASH_PROP_ID	= 3,
        XCN_CERT_KEY_CONTEXT_PROP_ID	= 5,
        XCN_CERT_KEY_SPEC_PROP_ID	= 6,
        XCN_CERT_IE30_RESERVED_PROP_ID	= 7,
        XCN_CERT_PUBKEY_HASH_RESERVED_PROP_ID	= 8,
        XCN_CERT_ENHKEY_USAGE_PROP_ID	= 9,
        XCN_CERT_CTL_USAGE_PROP_ID	= 9,
        XCN_CERT_NEXT_UPDATE_LOCATION_PROP_ID	= 10,
        XCN_CERT_FRIENDLY_NAME_PROP_ID	= 11,
        XCN_CERT_PVK_FILE_PROP_ID	= 12,
        XCN_CERT_DESCRIPTION_PROP_ID	= 13,
        XCN_CERT_ACCESS_STATE_PROP_ID	= 14,
        XCN_CERT_SIGNATURE_HASH_PROP_ID	= 15,
        XCN_CERT_SMART_CARD_DATA_PROP_ID	= 16,
        XCN_CERT_EFS_PROP_ID	= 17,
        XCN_CERT_FORTEZZA_DATA_PROP_ID	= 18,
        XCN_CERT_ARCHIVED_PROP_ID	= 19,
        XCN_CERT_KEY_IDENTIFIER_PROP_ID	= 20,
        XCN_CERT_AUTO_ENROLL_PROP_ID	= 21,
        XCN_CERT_PUBKEY_ALG_PARA_PROP_ID	= 22,
        XCN_CERT_CROSS_CERT_DIST_POINTS_PROP_ID	= 23,
        XCN_CERT_ISSUER_PUBLIC_KEY_MD5_HASH_PROP_ID	= 24,
        XCN_CERT_SUBJECT_PUBLIC_KEY_MD5_HASH_PROP_ID	= 25,
        XCN_CERT_ENROLLMENT_PROP_ID	= 26,
        XCN_CERT_DATE_STAMP_PROP_ID	= 27,
        XCN_CERT_ISSUER_SERIAL_NUMBER_MD5_HASH_PROP_ID	= 28,
        XCN_CERT_SUBJECT_NAME_MD5_HASH_PROP_ID	= 29,
        XCN_CERT_EXTENDED_ERROR_INFO_PROP_ID	= 30,
        XCN_CERT_RENEWAL_PROP_ID	= 64,
        XCN_CERT_ARCHIVED_KEY_HASH_PROP_ID	= 65,
        XCN_CERT_AUTO_ENROLL_RETRY_PROP_ID	= 66,
        XCN_CERT_AIA_URL_RETRIEVED_PROP_ID	= 67,
        XCN_CERT_AUTHORITY_INFO_ACCESS_PROP_ID	= 68,
        XCN_CERT_BACKED_UP_PROP_ID	= 69,
        XCN_CERT_OCSP_RESPONSE_PROP_ID	= 70,
        XCN_CERT_REQUEST_ORIGINATOR_PROP_ID	= 71,
        XCN_CERT_SOURCE_LOCATION_PROP_ID	= 72,
        XCN_CERT_SOURCE_URL_PROP_ID	= 73,
        XCN_CERT_NEW_KEY_PROP_ID	= 74,
        XCN_CERT_OCSP_CACHE_PREFIX_PROP_ID	= 75,
        XCN_CERT_SMART_CARD_ROOT_INFO_PROP_ID	= 76,
        XCN_CERT_NO_AUTO_EXPIRE_CHECK_PROP_ID	= 77,
        XCN_CERT_NCRYPT_KEY_HANDLE_PROP_ID	= 78,
        XCN_CERT_HCRYPTPROV_OR_NCRYPT_KEY_HANDLE_PROP_ID	= 79,
        XCN_CERT_SUBJECT_INFO_ACCESS_PROP_ID	= 80,
        XCN_CERT_CA_OCSP_AUTHORITY_INFO_ACCESS_PROP_ID	= 81,
        XCN_CERT_CA_DISABLE_CRL_PROP_ID	= 82,
        XCN_CERT_ROOT_PROGRAM_CERT_POLICIES_PROP_ID	= 83,
        XCN_CERT_ROOT_PROGRAM_NAME_CONSTRAINTS_PROP_ID	= 84,
        XCN_CERT_SUBJECT_OCSP_AUTHORITY_INFO_ACCESS_PROP_ID	= 85,
        XCN_CERT_SUBJECT_DISABLE_CRL_PROP_ID	= 86,
        XCN_CERT_CEP_PROP_ID	= 87,
        XCN_CERT_SIGN_HASH_CNG_ALG_PROP_ID	= 89,
        XCN_CERT_SCARD_PIN_ID_PROP_ID	= 90,
        XCN_CERT_SCARD_PIN_INFO_PROP_ID	= 91,
        XCN_CERT_SUBJECT_PUB_KEY_BIT_LENGTH_PROP_ID	= 92,
        XCN_CERT_PUB_KEY_CNG_ALG_BIT_LENGTH_PROP_ID	= 93,
        XCN_CERT_ISSUER_PUB_KEY_BIT_LENGTH_PROP_ID	= 94,
        XCN_CERT_ISSUER_CHAIN_SIGN_HASH_CNG_ALG_PROP_ID	= 95,
        XCN_CERT_ISSUER_CHAIN_PUB_KEY_CNG_ALG_BIT_LENGTH_PROP_ID	= 96,
        XCN_CERT_NO_EXPIRE_NOTIFICATION_PROP_ID	= 97,
        XCN_CERT_AUTH_ROOT_SHA256_HASH_PROP_ID	= 98,
        XCN_CERT_NCRYPT_KEY_HANDLE_TRANSFER_PROP_ID	= 99,
        XCN_CERT_HCRYPTPROV_TRANSFER_PROP_ID	= 100,
        XCN_CERT_SMART_CARD_READER_PROP_ID	= 101,
        XCN_CERT_SEND_AS_TRUSTED_ISSUER_PROP_ID	= 102,
        XCN_CERT_KEY_REPAIR_ATTEMPTED_PROP_ID	= 103,
        XCN_CERT_DISALLOWED_FILETIME_PROP_ID	= 104,
        XCN_CERT_ROOT_PROGRAM_CHAIN_POLICIES_PROP_ID	= 105,
        XCN_CERT_SMART_CARD_READER_NON_REMOVABLE_PROP_ID	= 106,
        XCN_CERT_FIRST_RESERVED_PROP_ID	= 107,
        XCN_CERT_LAST_RESERVED_PROP_ID	= 0x7fff,
        XCN_CERT_FIRST_USER_PROP_ID	= 0x8000,
        XCN_CERT_LAST_USER_PROP_ID	= 0xffff,
        XCN_CERT_STORE_LOCALIZED_NAME_PROP_ID	= 0x1000
    } 	CERTENROLL_PROPERTYID;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0045_v0_0_s_ifspec;

#ifndef __ICertProperty_INTERFACE_DEFINED__
#define __ICertProperty_INTERFACE_DEFINED__

/* interface ICertProperty */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab32e-217d-11da-b2a4-000e7bbb2b09")
    ICertProperty : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromCertificate( 
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PropertyId( 
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PropertyId( 
            /* [in] */ CERTENROLL_PROPERTYID Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawData( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromCertificate( 
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValueOnCertificate( 
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertProperty * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertProperty * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertProperty * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertProperty * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertProperty * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertProperty * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertProperty * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertProperty * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertProperty * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertProperty * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertProperty * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        END_INTERFACE
    } ICertPropertyVtbl;

    interface ICertProperty
    {
        CONST_VTBL struct ICertPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertProperty_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertProperty_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertProperty_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertProperty_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertProperty_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertProperty_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertProperty_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertProperty_INTERFACE_DEFINED__ */


#ifndef __ICertProperties_INTERFACE_DEFINED__
#define __ICertProperties_INTERFACE_DEFINED__

/* interface ICertProperties */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab32f-217d-11da-b2a4-000e7bbb2b09")
    ICertProperties : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICertProperty **pVal) = 0;
        
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][custom] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICertProperty *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromCertificate( 
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertProperties * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertProperties * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertProperties * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ICertProperties * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICertProperty **pVal);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ICertProperties * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ICertProperties * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id][custom] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICertProperties * This,
            /* [in] */ __RPC__in_opt ICertProperty *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ICertProperties * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICertProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertProperties * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        END_INTERFACE
    } ICertPropertiesVtbl;

    interface ICertProperties
    {
        CONST_VTBL struct ICertPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertProperties_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertProperties_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ICertProperties_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICertProperties_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ICertProperties_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICertProperties_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICertProperties_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICertProperties_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertProperties_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyFriendlyName_INTERFACE_DEFINED__
#define __ICertPropertyFriendlyName_INTERFACE_DEFINED__

/* interface ICertPropertyFriendlyName */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyFriendlyName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab330-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyFriendlyName : public ICertProperty
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in BSTR strFriendlyName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyFriendlyNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyFriendlyName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyFriendlyName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyFriendlyName * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [in] */ __RPC__in BSTR strFriendlyName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            __RPC__in ICertPropertyFriendlyName * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertyFriendlyNameVtbl;

    interface ICertPropertyFriendlyName
    {
        CONST_VTBL struct ICertPropertyFriendlyNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyFriendlyName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyFriendlyName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyFriendlyName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyFriendlyName_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyFriendlyName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyFriendlyName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyFriendlyName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyFriendlyName_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyFriendlyName_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyFriendlyName_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyFriendlyName_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyFriendlyName_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyFriendlyName_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyFriendlyName_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyFriendlyName_Initialize(This,strFriendlyName)	\
    ( (This)->lpVtbl -> Initialize(This,strFriendlyName) ) 

#define ICertPropertyFriendlyName_get_FriendlyName(This,pValue)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyFriendlyName_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyDescription_INTERFACE_DEFINED__
#define __ICertPropertyDescription_INTERFACE_DEFINED__

/* interface ICertPropertyDescription */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyDescription;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab331-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyDescription : public ICertProperty
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in BSTR strDescription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyDescriptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyDescription * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyDescription * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyDescription * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyDescription * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyDescription * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyDescription * This,
            /* [in] */ __RPC__in BSTR strDescription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in ICertPropertyDescription * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertyDescriptionVtbl;

    interface ICertPropertyDescription
    {
        CONST_VTBL struct ICertPropertyDescriptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyDescription_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyDescription_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyDescription_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyDescription_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyDescription_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyDescription_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyDescription_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyDescription_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyDescription_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyDescription_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyDescription_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyDescription_Initialize(This,strDescription)	\
    ( (This)->lpVtbl -> Initialize(This,strDescription) ) 

#define ICertPropertyDescription_get_Description(This,pValue)	\
    ( (This)->lpVtbl -> get_Description(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyDescription_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyAutoEnroll_INTERFACE_DEFINED__
#define __ICertPropertyAutoEnroll_INTERFACE_DEFINED__

/* interface ICertPropertyAutoEnroll */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyAutoEnroll;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab332-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyAutoEnroll : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TemplateName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyAutoEnrollVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyAutoEnroll * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyAutoEnroll * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyAutoEnroll * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateName )( 
            __RPC__in ICertPropertyAutoEnroll * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertyAutoEnrollVtbl;

    interface ICertPropertyAutoEnroll
    {
        CONST_VTBL struct ICertPropertyAutoEnrollVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyAutoEnroll_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyAutoEnroll_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyAutoEnroll_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyAutoEnroll_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyAutoEnroll_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyAutoEnroll_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyAutoEnroll_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyAutoEnroll_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyAutoEnroll_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyAutoEnroll_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyAutoEnroll_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyAutoEnroll_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyAutoEnroll_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyAutoEnroll_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyAutoEnroll_Initialize(This,strTemplateName)	\
    ( (This)->lpVtbl -> Initialize(This,strTemplateName) ) 

#define ICertPropertyAutoEnroll_get_TemplateName(This,pValue)	\
    ( (This)->lpVtbl -> get_TemplateName(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyAutoEnroll_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyRequestOriginator_INTERFACE_DEFINED__
#define __ICertPropertyRequestOriginator_INTERFACE_DEFINED__

/* interface ICertPropertyRequestOriginator */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyRequestOriginator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab333-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyRequestOriginator : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in BSTR strRequestOriginator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromLocalRequestOriginator( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RequestOriginator( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyRequestOriginatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyRequestOriginator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyRequestOriginator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyRequestOriginator * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [in] */ __RPC__in BSTR strRequestOriginator);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromLocalRequestOriginator )( 
            __RPC__in ICertPropertyRequestOriginator * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestOriginator )( 
            __RPC__in ICertPropertyRequestOriginator * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertyRequestOriginatorVtbl;

    interface ICertPropertyRequestOriginator
    {
        CONST_VTBL struct ICertPropertyRequestOriginatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyRequestOriginator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyRequestOriginator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyRequestOriginator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyRequestOriginator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyRequestOriginator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyRequestOriginator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyRequestOriginator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyRequestOriginator_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyRequestOriginator_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyRequestOriginator_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyRequestOriginator_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyRequestOriginator_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyRequestOriginator_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyRequestOriginator_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyRequestOriginator_Initialize(This,strRequestOriginator)	\
    ( (This)->lpVtbl -> Initialize(This,strRequestOriginator) ) 

#define ICertPropertyRequestOriginator_InitializeFromLocalRequestOriginator(This)	\
    ( (This)->lpVtbl -> InitializeFromLocalRequestOriginator(This) ) 

#define ICertPropertyRequestOriginator_get_RequestOriginator(This,pValue)	\
    ( (This)->lpVtbl -> get_RequestOriginator(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyRequestOriginator_INTERFACE_DEFINED__ */


#ifndef __ICertPropertySHA1Hash_INTERFACE_DEFINED__
#define __ICertPropertySHA1Hash_INTERFACE_DEFINED__

/* interface ICertPropertySHA1Hash */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertySHA1Hash;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab334-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertySHA1Hash : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRenewalValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SHA1Hash( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertySHA1HashVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertySHA1Hash * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertySHA1Hash * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertySHA1Hash * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRenewalValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SHA1Hash )( 
            __RPC__in ICertPropertySHA1Hash * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertySHA1HashVtbl;

    interface ICertPropertySHA1Hash
    {
        CONST_VTBL struct ICertPropertySHA1HashVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertySHA1Hash_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertySHA1Hash_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertySHA1Hash_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertySHA1Hash_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertySHA1Hash_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertySHA1Hash_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertySHA1Hash_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertySHA1Hash_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertySHA1Hash_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertySHA1Hash_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertySHA1Hash_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertySHA1Hash_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertySHA1Hash_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertySHA1Hash_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertySHA1Hash_Initialize(This,Encoding,strRenewalValue)	\
    ( (This)->lpVtbl -> Initialize(This,Encoding,strRenewalValue) ) 

#define ICertPropertySHA1Hash_get_SHA1Hash(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_SHA1Hash(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertySHA1Hash_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyKeyProvInfo_INTERFACE_DEFINED__
#define __ICertPropertyKeyProvInfo_INTERFACE_DEFINED__

/* interface ICertPropertyKeyProvInfo */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyKeyProvInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab336-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyKeyProvInfo : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IX509PrivateKey *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PrivateKey( 
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyKeyProvInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyKeyProvInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyKeyProvInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyKeyProvInfo * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            __RPC__in ICertPropertyKeyProvInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue);
        
        END_INTERFACE
    } ICertPropertyKeyProvInfoVtbl;

    interface ICertPropertyKeyProvInfo
    {
        CONST_VTBL struct ICertPropertyKeyProvInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyKeyProvInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyKeyProvInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyKeyProvInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyKeyProvInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyKeyProvInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyKeyProvInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyKeyProvInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyKeyProvInfo_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyKeyProvInfo_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyKeyProvInfo_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyKeyProvInfo_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyKeyProvInfo_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyKeyProvInfo_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyKeyProvInfo_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyKeyProvInfo_Initialize(This,pValue)	\
    ( (This)->lpVtbl -> Initialize(This,pValue) ) 

#define ICertPropertyKeyProvInfo_get_PrivateKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyKeyProvInfo_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyArchived_INTERFACE_DEFINED__
#define __ICertPropertyArchived_INTERFACE_DEFINED__

/* interface ICertPropertyArchived */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyArchived;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab337-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyArchived : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ VARIANT_BOOL ArchivedValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Archived( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyArchivedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyArchived * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyArchived * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyArchived * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyArchived * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyArchived * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyArchived * This,
            /* [in] */ VARIANT_BOOL ArchivedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Archived )( 
            __RPC__in ICertPropertyArchived * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        END_INTERFACE
    } ICertPropertyArchivedVtbl;

    interface ICertPropertyArchived
    {
        CONST_VTBL struct ICertPropertyArchivedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyArchived_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyArchived_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyArchived_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyArchived_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyArchived_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyArchived_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyArchived_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyArchived_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyArchived_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyArchived_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyArchived_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyArchived_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyArchived_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyArchived_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyArchived_Initialize(This,ArchivedValue)	\
    ( (This)->lpVtbl -> Initialize(This,ArchivedValue) ) 

#define ICertPropertyArchived_get_Archived(This,pValue)	\
    ( (This)->lpVtbl -> get_Archived(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyArchived_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyBackedUp_INTERFACE_DEFINED__
#define __ICertPropertyBackedUp_INTERFACE_DEFINED__

/* interface ICertPropertyBackedUp */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyBackedUp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab338-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyBackedUp : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromCurrentTime( 
            /* [in] */ VARIANT_BOOL BackedUpValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ VARIANT_BOOL BackedUpValue,
            /* [in] */ DATE Date) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackedUpValue( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackedUpTime( 
            /* [retval][out] */ __RPC__out DATE *pDate) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyBackedUpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyBackedUp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyBackedUp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyBackedUp * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCurrentTime )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ VARIANT_BOOL BackedUpValue);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [in] */ VARIANT_BOOL BackedUpValue,
            /* [in] */ DATE Date);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackedUpValue )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackedUpTime )( 
            __RPC__in ICertPropertyBackedUp * This,
            /* [retval][out] */ __RPC__out DATE *pDate);
        
        END_INTERFACE
    } ICertPropertyBackedUpVtbl;

    interface ICertPropertyBackedUp
    {
        CONST_VTBL struct ICertPropertyBackedUpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyBackedUp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyBackedUp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyBackedUp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyBackedUp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyBackedUp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyBackedUp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyBackedUp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyBackedUp_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyBackedUp_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyBackedUp_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyBackedUp_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyBackedUp_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyBackedUp_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyBackedUp_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyBackedUp_InitializeFromCurrentTime(This,BackedUpValue)	\
    ( (This)->lpVtbl -> InitializeFromCurrentTime(This,BackedUpValue) ) 

#define ICertPropertyBackedUp_Initialize(This,BackedUpValue,Date)	\
    ( (This)->lpVtbl -> Initialize(This,BackedUpValue,Date) ) 

#define ICertPropertyBackedUp_get_BackedUpValue(This,pValue)	\
    ( (This)->lpVtbl -> get_BackedUpValue(This,pValue) ) 

#define ICertPropertyBackedUp_get_BackedUpTime(This,pDate)	\
    ( (This)->lpVtbl -> get_BackedUpTime(This,pDate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyBackedUp_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyEnrollment_INTERFACE_DEFINED__
#define __ICertPropertyEnrollment_INTERFACE_DEFINED__

/* interface ICertPropertyEnrollment */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyEnrollment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab339-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyEnrollment : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ LONG RequestId,
            /* [in] */ __RPC__in BSTR strCADnsName,
            /* [in] */ __RPC__in BSTR strCAName,
            /* [defaultvalue][in] */ __RPC__in BSTR strFriendlyName = 0) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RequestId( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CADnsName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CAName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyEnrollmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyEnrollment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyEnrollment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyEnrollment * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [in] */ LONG RequestId,
            /* [in] */ __RPC__in BSTR strCADnsName,
            /* [in] */ __RPC__in BSTR strCAName,
            /* [defaultvalue][in] */ __RPC__in BSTR strFriendlyName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestId )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CADnsName )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CAName )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            __RPC__in ICertPropertyEnrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertyEnrollmentVtbl;

    interface ICertPropertyEnrollment
    {
        CONST_VTBL struct ICertPropertyEnrollmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyEnrollment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyEnrollment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyEnrollment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyEnrollment_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyEnrollment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyEnrollment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyEnrollment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyEnrollment_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyEnrollment_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyEnrollment_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyEnrollment_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyEnrollment_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyEnrollment_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyEnrollment_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyEnrollment_Initialize(This,RequestId,strCADnsName,strCAName,strFriendlyName)	\
    ( (This)->lpVtbl -> Initialize(This,RequestId,strCADnsName,strCAName,strFriendlyName) ) 

#define ICertPropertyEnrollment_get_RequestId(This,pValue)	\
    ( (This)->lpVtbl -> get_RequestId(This,pValue) ) 

#define ICertPropertyEnrollment_get_CADnsName(This,pValue)	\
    ( (This)->lpVtbl -> get_CADnsName(This,pValue) ) 

#define ICertPropertyEnrollment_get_CAName(This,pValue)	\
    ( (This)->lpVtbl -> get_CAName(This,pValue) ) 

#define ICertPropertyEnrollment_get_FriendlyName(This,pValue)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyEnrollment_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyRenewal_INTERFACE_DEFINED__
#define __ICertPropertyRenewal_INTERFACE_DEFINED__

/* interface ICertPropertyRenewal */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyRenewal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab33a-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyRenewal : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRenewalValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromCertificateHash( 
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Renewal( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyRenewalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyRenewal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyRenewal * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyRenewal * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strRenewalValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificateHash )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Renewal )( 
            __RPC__in ICertPropertyRenewal * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertyRenewalVtbl;

    interface ICertPropertyRenewal
    {
        CONST_VTBL struct ICertPropertyRenewalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyRenewal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyRenewal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyRenewal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyRenewal_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyRenewal_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyRenewal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyRenewal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyRenewal_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyRenewal_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyRenewal_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyRenewal_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyRenewal_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyRenewal_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyRenewal_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyRenewal_Initialize(This,Encoding,strRenewalValue)	\
    ( (This)->lpVtbl -> Initialize(This,Encoding,strRenewalValue) ) 

#define ICertPropertyRenewal_InitializeFromCertificateHash(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificateHash(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyRenewal_get_Renewal(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Renewal(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyRenewal_INTERFACE_DEFINED__ */


#ifndef __ICertPropertyArchivedKeyHash_INTERFACE_DEFINED__
#define __ICertPropertyArchivedKeyHash_INTERFACE_DEFINED__

/* interface ICertPropertyArchivedKeyHash */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyArchivedKeyHash;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab33b-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyArchivedKeyHash : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strArchivedKeyHashValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ArchivedKeyHash( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyArchivedKeyHashVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyArchivedKeyHash * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyArchivedKeyHash * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyArchivedKeyHash * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strArchivedKeyHashValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchivedKeyHash )( 
            __RPC__in ICertPropertyArchivedKeyHash * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } ICertPropertyArchivedKeyHashVtbl;

    interface ICertPropertyArchivedKeyHash
    {
        CONST_VTBL struct ICertPropertyArchivedKeyHashVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyArchivedKeyHash_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyArchivedKeyHash_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyArchivedKeyHash_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyArchivedKeyHash_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyArchivedKeyHash_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyArchivedKeyHash_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyArchivedKeyHash_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyArchivedKeyHash_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyArchivedKeyHash_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyArchivedKeyHash_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyArchivedKeyHash_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyArchivedKeyHash_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyArchivedKeyHash_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyArchivedKeyHash_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyArchivedKeyHash_Initialize(This,Encoding,strArchivedKeyHashValue)	\
    ( (This)->lpVtbl -> Initialize(This,Encoding,strArchivedKeyHashValue) ) 

#define ICertPropertyArchivedKeyHash_get_ArchivedKeyHash(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_ArchivedKeyHash(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyArchivedKeyHash_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0058 */
/* [local] */ 

typedef 
enum EnrollmentPolicyServerPropertyFlags
    {
        DefaultNone	= 0,
        DefaultPolicyServer	= 0x1
    } 	EnrollmentPolicyServerPropertyFlags;

typedef 
enum PolicyServerUrlFlags
    {
        PsfNone	= 0,
        PsfLocationGroupPolicy	= 1,
        PsfLocationRegistry	= 2,
        PsfUseClientId	= 4,
        PsfAutoEnrollmentEnabled	= 16,
        PsfAllowUnTrustedCA	= 32
    } 	PolicyServerUrlFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0058_v0_0_s_ifspec;

#ifndef __ICertPropertyEnrollmentPolicyServer_INTERFACE_DEFINED__
#define __ICertPropertyEnrollmentPolicyServer_INTERFACE_DEFINED__

/* interface ICertPropertyEnrollmentPolicyServer */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertPropertyEnrollmentPolicyServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab34a-217d-11da-b2a4-000e7bbb2b09")
    ICertPropertyEnrollmentPolicyServer : public ICertProperty
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ EnrollmentPolicyServerPropertyFlags PropertyFlags,
            /* [in] */ X509EnrollmentAuthFlags AuthFlags,
            /* [in] */ X509EnrollmentAuthFlags EnrollmentServerAuthFlags,
            /* [in] */ PolicyServerUrlFlags UrlFlags,
            /* [in] */ __RPC__in BSTR strRequestId,
            /* [in] */ __RPC__in BSTR strUrl,
            /* [in] */ __RPC__in BSTR strId,
            /* [in] */ __RPC__in BSTR strEnrollmentServerUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPolicyServerUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPolicyServerId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnrollmentServerUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRequestIdString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyFlags( 
            /* [retval][out] */ __RPC__out EnrollmentPolicyServerPropertyFlags *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUrlFlags( 
            /* [retval][out] */ __RPC__out PolicyServerUrlFlags *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAuthentication( 
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnrollmentServerAuthentication( 
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertPropertyEnrollmentPolicyServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertPropertyEnrollmentPolicyServer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strEncodedData);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out CERTENROLL_PROPERTYID *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyId )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ CERTENROLL_PROPERTYID Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromCertificate )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *SetValueOnCertificate )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [in] */ EnrollmentPolicyServerPropertyFlags PropertyFlags,
            /* [in] */ X509EnrollmentAuthFlags AuthFlags,
            /* [in] */ X509EnrollmentAuthFlags EnrollmentServerAuthFlags,
            /* [in] */ PolicyServerUrlFlags UrlFlags,
            /* [in] */ __RPC__in BSTR strRequestId,
            /* [in] */ __RPC__in BSTR strUrl,
            /* [in] */ __RPC__in BSTR strId,
            /* [in] */ __RPC__in BSTR strEnrollmentServerUrl);
        
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerUrl )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerId )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnrollmentServerUrl )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetRequestIdString )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyFlags )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out EnrollmentPolicyServerPropertyFlags *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetUrlFlags )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out PolicyServerUrlFlags *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetAuthentication )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnrollmentServerAuthentication )( 
            __RPC__in ICertPropertyEnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue);
        
        END_INTERFACE
    } ICertPropertyEnrollmentPolicyServerVtbl;

    interface ICertPropertyEnrollmentPolicyServer
    {
        CONST_VTBL struct ICertPropertyEnrollmentPolicyServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertPropertyEnrollmentPolicyServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertPropertyEnrollmentPolicyServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertPropertyEnrollmentPolicyServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertPropertyEnrollmentPolicyServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertPropertyEnrollmentPolicyServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertPropertyEnrollmentPolicyServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertPropertyEnrollmentPolicyServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertPropertyEnrollmentPolicyServer_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyEnrollmentPolicyServer_InitializeDecode(This,Encoding,strEncodedData)	\
    ( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) ) 

#define ICertPropertyEnrollmentPolicyServer_get_PropertyId(This,pValue)	\
    ( (This)->lpVtbl -> get_PropertyId(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_put_PropertyId(This,Value)	\
    ( (This)->lpVtbl -> put_PropertyId(This,Value) ) 

#define ICertPropertyEnrollmentPolicyServer_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) ) 

#define ICertPropertyEnrollmentPolicyServer_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)	\
    ( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) ) 


#define ICertPropertyEnrollmentPolicyServer_Initialize(This,PropertyFlags,AuthFlags,EnrollmentServerAuthFlags,UrlFlags,strRequestId,strUrl,strId,strEnrollmentServerUrl)	\
    ( (This)->lpVtbl -> Initialize(This,PropertyFlags,AuthFlags,EnrollmentServerAuthFlags,UrlFlags,strRequestId,strUrl,strId,strEnrollmentServerUrl) ) 

#define ICertPropertyEnrollmentPolicyServer_GetPolicyServerUrl(This,pValue)	\
    ( (This)->lpVtbl -> GetPolicyServerUrl(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_GetPolicyServerId(This,pValue)	\
    ( (This)->lpVtbl -> GetPolicyServerId(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_GetEnrollmentServerUrl(This,pValue)	\
    ( (This)->lpVtbl -> GetEnrollmentServerUrl(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_GetRequestIdString(This,pValue)	\
    ( (This)->lpVtbl -> GetRequestIdString(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_GetPropertyFlags(This,pValue)	\
    ( (This)->lpVtbl -> GetPropertyFlags(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_GetUrlFlags(This,pValue)	\
    ( (This)->lpVtbl -> GetUrlFlags(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_GetAuthentication(This,pValue)	\
    ( (This)->lpVtbl -> GetAuthentication(This,pValue) ) 

#define ICertPropertyEnrollmentPolicyServer_GetEnrollmentServerAuthentication(This,pValue)	\
    ( (This)->lpVtbl -> GetEnrollmentServerAuthentication(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertPropertyEnrollmentPolicyServer_INTERFACE_DEFINED__ */


#ifndef __IX509SignatureInformation_INTERFACE_DEFINED__
#define __IX509SignatureInformation_INTERFACE_DEFINED__

/* interface IX509SignatureInformation */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509SignatureInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab33c-217d-11da-b2a4-000e7bbb2b09")
    IX509SignatureInformation : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HashAlgorithm( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HashAlgorithm( 
            /* [in] */ __RPC__in_opt IObjectId *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PublicKeyAlgorithm( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PublicKeyAlgorithm( 
            /* [in] */ __RPC__in_opt IObjectId *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parameters( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Parameters( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AlternateSignatureAlgorithm( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AlternateSignatureAlgorithm( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AlternateSignatureAlgorithmSet( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NullSigned( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NullSigned( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSignatureAlgorithm( 
            /* [in] */ VARIANT_BOOL Pkcs7Signature,
            /* [in] */ VARIANT_BOOL SignatureKey,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultValues( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509SignatureInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509SignatureInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509SignatureInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509SignatureInformation * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509SignatureInformation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509SignatureInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKeyAlgorithm )( 
            __RPC__in IX509SignatureInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PublicKeyAlgorithm )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parameters )( 
            __RPC__in IX509SignatureInformation * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Parameters )( 
            __RPC__in IX509SignatureInformation * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509SignatureInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithmSet )( 
            __RPC__in IX509SignatureInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            __RPC__in IX509SignatureInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NullSigned )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ VARIANT_BOOL Value);
        
        HRESULT ( STDMETHODCALLTYPE *GetSignatureAlgorithm )( 
            __RPC__in IX509SignatureInformation * This,
            /* [in] */ VARIANT_BOOL Pkcs7Signature,
            /* [in] */ VARIANT_BOOL SignatureKey,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultValues )( 
            __RPC__in IX509SignatureInformation * This);
        
        END_INTERFACE
    } IX509SignatureInformationVtbl;

    interface IX509SignatureInformation
    {
        CONST_VTBL struct IX509SignatureInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509SignatureInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509SignatureInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509SignatureInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509SignatureInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509SignatureInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509SignatureInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509SignatureInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509SignatureInformation_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509SignatureInformation_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509SignatureInformation_get_PublicKeyAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_PublicKeyAlgorithm(This,ppValue) ) 

#define IX509SignatureInformation_put_PublicKeyAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_PublicKeyAlgorithm(This,pValue) ) 

#define IX509SignatureInformation_get_Parameters(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Parameters(This,Encoding,pValue) ) 

#define IX509SignatureInformation_put_Parameters(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_Parameters(This,Encoding,Value) ) 

#define IX509SignatureInformation_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509SignatureInformation_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509SignatureInformation_get_AlternateSignatureAlgorithmSet(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithmSet(This,pValue) ) 

#define IX509SignatureInformation_get_NullSigned(This,pValue)	\
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) ) 

#define IX509SignatureInformation_put_NullSigned(This,Value)	\
    ( (This)->lpVtbl -> put_NullSigned(This,Value) ) 

#define IX509SignatureInformation_GetSignatureAlgorithm(This,Pkcs7Signature,SignatureKey,ppValue)	\
    ( (This)->lpVtbl -> GetSignatureAlgorithm(This,Pkcs7Signature,SignatureKey,ppValue) ) 

#define IX509SignatureInformation_SetDefaultValues(This)	\
    ( (This)->lpVtbl -> SetDefaultValues(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509SignatureInformation_INTERFACE_DEFINED__ */


#ifndef __ISignerCertificate_INTERFACE_DEFINED__
#define __ISignerCertificate_INTERFACE_DEFINED__

/* interface ISignerCertificate */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISignerCertificate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab33d-217d-11da-b2a4-000e7bbb2b09")
    ISignerCertificate : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ X509PrivateKeyVerify VerifyType,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertifcate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Certificate( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PrivateKey( 
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Silent( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Silent( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ParentWindow( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UIContextMessage( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UIContextMessage( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Pin( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SignatureInformation( 
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignerCertificateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISignerCertificate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISignerCertificate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ISignerCertificate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignerCertificate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ VARIANT_BOOL MachineContext,
            /* [in] */ X509PrivateKeyVerify VerifyType,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strCertifcate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            __RPC__in ISignerCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in ISignerCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in ISignerCertificate * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in ISignerCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Pin )( 
            __RPC__in ISignerCertificate * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            __RPC__in ISignerCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        
        END_INTERFACE
    } ISignerCertificateVtbl;

    interface ISignerCertificate
    {
        CONST_VTBL struct ISignerCertificateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignerCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignerCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignerCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignerCertificate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISignerCertificate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISignerCertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISignerCertificate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISignerCertificate_Initialize(This,MachineContext,VerifyType,Encoding,strCertifcate)	\
    ( (This)->lpVtbl -> Initialize(This,MachineContext,VerifyType,Encoding,strCertifcate) ) 

#define ISignerCertificate_get_Certificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) ) 

#define ISignerCertificate_get_PrivateKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) ) 

#define ISignerCertificate_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define ISignerCertificate_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define ISignerCertificate_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define ISignerCertificate_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define ISignerCertificate_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define ISignerCertificate_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define ISignerCertificate_put_Pin(This,Value)	\
    ( (This)->lpVtbl -> put_Pin(This,Value) ) 

#define ISignerCertificate_get_SignatureInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignerCertificate_INTERFACE_DEFINED__ */


#ifndef __ISignerCertificates_INTERFACE_DEFINED__
#define __ISignerCertificates_INTERFACE_DEFINED__

/* interface ISignerCertificates */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISignerCertificates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab33e-217d-11da-b2a4-000e7bbb2b09")
    ISignerCertificates : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **pVal) = 0;
        
        virtual /* [helpstring][id][propget][custom] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][custom] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ISignerCertificate *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ __RPC__in_opt ISignerCertificate *pSignerCert,
            /* [retval][out] */ __RPC__out LONG *piSignerCert) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignerCertificatesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISignerCertificates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISignerCertificates * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISignerCertificates * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ISignerCertificates * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ISignerCertificates * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ISignerCertificates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignerCertificates * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ISignerCertificates * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **pVal);
        
        /* [helpstring][id][propget][custom] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ISignerCertificates * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ISignerCertificates * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id][custom] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ISignerCertificates * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ISignerCertificates * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ISignerCertificates * This);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            __RPC__in ISignerCertificates * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pSignerCert,
            /* [retval][out] */ __RPC__out LONG *piSignerCert);
        
        END_INTERFACE
    } ISignerCertificatesVtbl;

    interface ISignerCertificates
    {
        CONST_VTBL struct ISignerCertificatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignerCertificates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignerCertificates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignerCertificates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignerCertificates_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISignerCertificates_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISignerCertificates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISignerCertificates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISignerCertificates_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ISignerCertificates_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ISignerCertificates_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ISignerCertificates_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ISignerCertificates_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ISignerCertificates_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISignerCertificates_Find(This,pSignerCert,piSignerCert)	\
    ( (This)->lpVtbl -> Find(This,pSignerCert,piSignerCert) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignerCertificates_INTERFACE_DEFINED__ */


#ifndef __IX509NameValuePair_INTERFACE_DEFINED__
#define __IX509NameValuePair_INTERFACE_DEFINED__

/* interface IX509NameValuePair */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509NameValuePair;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab33f-217d-11da-b2a4-000e7bbb2b09")
    IX509NameValuePair : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in BSTR strName,
            /* [in] */ __RPC__in BSTR strValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509NameValuePairVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509NameValuePair * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509NameValuePair * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509NameValuePair * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509NameValuePair * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509NameValuePair * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509NameValuePair * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509NameValuePair * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509NameValuePair * This,
            /* [in] */ __RPC__in BSTR strName,
            /* [in] */ __RPC__in BSTR strValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __RPC__in IX509NameValuePair * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IX509NameValuePair * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509NameValuePairVtbl;

    interface IX509NameValuePair
    {
        CONST_VTBL struct IX509NameValuePairVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509NameValuePair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509NameValuePair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509NameValuePair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509NameValuePair_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509NameValuePair_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509NameValuePair_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509NameValuePair_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509NameValuePair_Initialize(This,strName,strValue)	\
    ( (This)->lpVtbl -> Initialize(This,strName,strValue) ) 

#define IX509NameValuePair_get_Value(This,pValue)	\
    ( (This)->lpVtbl -> get_Value(This,pValue) ) 

#define IX509NameValuePair_get_Name(This,pValue)	\
    ( (This)->lpVtbl -> get_Name(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509NameValuePair_INTERFACE_DEFINED__ */


#ifndef __IX509NameValuePairs_INTERFACE_DEFINED__
#define __IX509NameValuePairs_INTERFACE_DEFINED__

/* interface IX509NameValuePairs */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509NameValuePairs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab340-217d-11da-b2a4-000e7bbb2b09")
    IX509NameValuePairs : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePair **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IX509NameValuePair *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509NameValuePairsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509NameValuePairs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509NameValuePairs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509NameValuePairs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509NameValuePairs * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509NameValuePairs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509NameValuePairs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509NameValuePairs * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IX509NameValuePairs * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePair **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IX509NameValuePairs * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IX509NameValuePairs * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IX509NameValuePairs * This,
            /* [in] */ __RPC__in_opt IX509NameValuePair *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IX509NameValuePairs * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IX509NameValuePairs * This);
        
        END_INTERFACE
    } IX509NameValuePairsVtbl;

    interface IX509NameValuePairs
    {
        CONST_VTBL struct IX509NameValuePairsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509NameValuePairs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509NameValuePairs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509NameValuePairs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509NameValuePairs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509NameValuePairs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509NameValuePairs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509NameValuePairs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509NameValuePairs_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IX509NameValuePairs_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IX509NameValuePairs_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IX509NameValuePairs_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IX509NameValuePairs_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IX509NameValuePairs_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509NameValuePairs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0064 */
/* [local] */ 

typedef 
enum EnrollmentTemplateProperty
    {
        TemplatePropCommonName	= 1,
        TemplatePropFriendlyName	= 2,
        TemplatePropEKUs	= 3,
        TemplatePropCryptoProviders	= 4,
        TemplatePropMajorRevision	= 5,
        TemplatePropDescription	= 6,
        TemplatePropKeySpec	= 7,
        TemplatePropSchemaVersion	= 8,
        TemplatePropMinorRevision	= 9,
        TemplatePropRASignatureCount	= 10,
        TemplatePropMinimumKeySize	= 11,
        TemplatePropOID	= 12,
        TemplatePropSupersede	= 13,
        TemplatePropRACertificatePolicies	= 14,
        TemplatePropRAEKUs	= 15,
        TemplatePropCertificatePolicies	= 16,
        TemplatePropV1ApplicationPolicy	= 17,
        TemplatePropAsymmetricAlgorithm	= 18,
        TemplatePropKeySecurityDescriptor	= 19,
        TemplatePropSymmetricAlgorithm	= 20,
        TemplatePropSymmetricKeyLength	= 21,
        TemplatePropHashAlgorithm	= 22,
        TemplatePropKeyUsage	= 23,
        TemplatePropEnrollmentFlags	= 24,
        TemplatePropSubjectNameFlags	= 25,
        TemplatePropPrivateKeyFlags	= 26,
        TemplatePropGeneralFlags	= 27,
        TemplatePropSecurityDescriptor	= 28,
        TemplatePropExtensions	= 29,
        TemplatePropValidityPeriod	= 30,
        TemplatePropRenewalPeriod	= 31
    } 	EnrollmentTemplateProperty;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0064_v0_0_s_ifspec;

#ifndef __IX509CertificateTemplate_INTERFACE_DEFINED__
#define __IX509CertificateTemplate_INTERFACE_DEFINED__

/* interface IX509CertificateTemplate */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateTemplate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54244A13-555A-4e22-896D-1B0E52F76406")
    IX509CertificateTemplate : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ enum EnrollmentTemplateProperty property,
            /* [retval][out] */ __RPC__out VARIANT *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateTemplateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateTemplate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateTemplate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateTemplate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateTemplate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateTemplate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateTemplate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateTemplate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            __RPC__in IX509CertificateTemplate * This,
            /* [in] */ enum EnrollmentTemplateProperty property,
            /* [retval][out] */ __RPC__out VARIANT *pValue);
        
        END_INTERFACE
    } IX509CertificateTemplateVtbl;

    interface IX509CertificateTemplate
    {
        CONST_VTBL struct IX509CertificateTemplateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateTemplate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateTemplate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateTemplate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateTemplate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateTemplate_get_Property(This,property,pValue)	\
    ( (This)->lpVtbl -> get_Property(This,property,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateTemplate_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateTemplates_INTERFACE_DEFINED__
#define __IX509CertificateTemplates_INTERFACE_DEFINED__

/* interface IX509CertificateTemplates */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateTemplates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13b79003-2181-11da-b2a4-000e7bbb2b09")
    IX509CertificateTemplates : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ItemByName( 
            /* [in] */ __RPC__in BSTR bstrName,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ItemByOid( 
            /* [in] */ __RPC__in_opt IObjectId *pOid,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateTemplatesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateTemplates * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateTemplates * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateTemplates * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IX509CertificateTemplates * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByName )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ __RPC__in BSTR bstrName,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByOid )( 
            __RPC__in IX509CertificateTemplates * This,
            /* [in] */ __RPC__in_opt IObjectId *pOid,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppValue);
        
        END_INTERFACE
    } IX509CertificateTemplatesVtbl;

    interface IX509CertificateTemplates
    {
        CONST_VTBL struct IX509CertificateTemplatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateTemplates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateTemplates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateTemplates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateTemplates_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateTemplates_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateTemplates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateTemplates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateTemplates_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IX509CertificateTemplates_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IX509CertificateTemplates_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IX509CertificateTemplates_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IX509CertificateTemplates_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IX509CertificateTemplates_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IX509CertificateTemplates_get_ItemByName(This,bstrName,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByName(This,bstrName,ppValue) ) 

#define IX509CertificateTemplates_get_ItemByOid(This,pOid,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByOid(This,pOid,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateTemplates_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0066 */
/* [local] */ 

typedef 
enum CommitTemplateFlags
    {
        CommitFlagSaveTemplateGenerateOID	= 1,
        CommitFlagSaveTemplateUseCurrentOID	= 2,
        CommitFlagSaveTemplateOverwrite	= 3,
        CommitFlagDeleteTemplate	= 4
    } 	CommitTemplateFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0066_v0_0_s_ifspec;

#ifndef __IX509CertificateTemplateWritable_INTERFACE_DEFINED__
#define __IX509CertificateTemplateWritable_INTERFACE_DEFINED__

/* interface IX509CertificateTemplateWritable */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateTemplateWritable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F49466A7-395A-4e9e-B6E7-32B331600DC0")
    IX509CertificateTemplateWritable : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( 
            /* [in] */ CommitTemplateFlags commitFlags,
            /* [in] */ __RPC__in BSTR strServerContext) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ enum EnrollmentTemplateProperty property,
            /* [retval][out] */ __RPC__out VARIANT *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ enum EnrollmentTemplateProperty property,
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Template( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateTemplateWritableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateTemplateWritable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateTemplateWritable * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateTemplateWritable * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [in] */ CommitTemplateFlags commitFlags,
            /* [in] */ __RPC__in BSTR strServerContext);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [in] */ enum EnrollmentTemplateProperty property,
            /* [retval][out] */ __RPC__out VARIANT *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Property )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [in] */ enum EnrollmentTemplateProperty property,
            /* [in] */ VARIANT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Template )( 
            __RPC__in IX509CertificateTemplateWritable * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppValue);
        
        END_INTERFACE
    } IX509CertificateTemplateWritableVtbl;

    interface IX509CertificateTemplateWritable
    {
        CONST_VTBL struct IX509CertificateTemplateWritableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateTemplateWritable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateTemplateWritable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateTemplateWritable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateTemplateWritable_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateTemplateWritable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateTemplateWritable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateTemplateWritable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateTemplateWritable_Initialize(This,pValue)	\
    ( (This)->lpVtbl -> Initialize(This,pValue) ) 

#define IX509CertificateTemplateWritable_Commit(This,commitFlags,strServerContext)	\
    ( (This)->lpVtbl -> Commit(This,commitFlags,strServerContext) ) 

#define IX509CertificateTemplateWritable_get_Property(This,property,pValue)	\
    ( (This)->lpVtbl -> get_Property(This,property,pValue) ) 

#define IX509CertificateTemplateWritable_put_Property(This,property,value)	\
    ( (This)->lpVtbl -> put_Property(This,property,value) ) 

#define IX509CertificateTemplateWritable_get_Template(This,ppValue)	\
    ( (This)->lpVtbl -> get_Template(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateTemplateWritable_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0067 */
/* [local] */ 

typedef 
enum EnrollmentCAProperty
    {
        CAPropCommonName	= 1,
        CAPropDistinguishedName	= 2,
        CAPropSanitizedName	= 3,
        CAPropSanitizedShortName	= 4,
        CAPropDNSName	= 5,
        CAPropCertificateTypes	= 6,
        CAPropCertificate	= 7,
        CAPropDescription	= 8,
        CAPropWebServers	= 9,
        CAPropSiteName	= 10,
        CAPropSecurity	= 11,
        CAPropRenewalOnly	= 12
    } 	EnrollmentCAProperty;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0067_v0_0_s_ifspec;

#ifndef __ICertificationAuthority_INTERFACE_DEFINED__
#define __ICertificationAuthority_INTERFACE_DEFINED__

/* interface ICertificationAuthority */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertificationAuthority;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("835D1F61-1E95-4bc8-B4D3-976C42B968F7")
    ICertificationAuthority : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ enum EnrollmentCAProperty property,
            /* [retval][out] */ __RPC__out VARIANT *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificationAuthorityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertificationAuthority * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertificationAuthority * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertificationAuthority * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertificationAuthority * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertificationAuthority * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertificationAuthority * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificationAuthority * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            __RPC__in ICertificationAuthority * This,
            /* [in] */ enum EnrollmentCAProperty property,
            /* [retval][out] */ __RPC__out VARIANT *pValue);
        
        END_INTERFACE
    } ICertificationAuthorityVtbl;

    interface ICertificationAuthority
    {
        CONST_VTBL struct ICertificationAuthorityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificationAuthority_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificationAuthority_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificationAuthority_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificationAuthority_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificationAuthority_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificationAuthority_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificationAuthority_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificationAuthority_get_Property(This,property,pValue)	\
    ( (This)->lpVtbl -> get_Property(This,property,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificationAuthority_INTERFACE_DEFINED__ */


#ifndef __ICertificationAuthorities_INTERFACE_DEFINED__
#define __ICertificationAuthorities_INTERFACE_DEFINED__

/* interface ICertificationAuthorities */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertificationAuthorities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13b79005-2181-11da-b2a4-000e7bbb2b09")
    ICertificationAuthorities : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthority **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICertificationAuthority *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComputeSiteCosts( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ItemByName( 
            /* [in] */ __RPC__in BSTR strName,
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthority **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificationAuthoritiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertificationAuthorities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertificationAuthorities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertificationAuthorities * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertificationAuthorities * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertificationAuthorities * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertificationAuthorities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificationAuthorities * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in ICertificationAuthorities * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthority **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in ICertificationAuthorities * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in ICertificationAuthorities * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICertificationAuthorities * This,
            /* [in] */ __RPC__in_opt ICertificationAuthority *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in ICertificationAuthorities * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICertificationAuthorities * This);
        
        HRESULT ( STDMETHODCALLTYPE *ComputeSiteCosts )( 
            __RPC__in ICertificationAuthorities * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByName )( 
            __RPC__in ICertificationAuthorities * This,
            /* [in] */ __RPC__in BSTR strName,
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthority **ppValue);
        
        END_INTERFACE
    } ICertificationAuthoritiesVtbl;

    interface ICertificationAuthorities
    {
        CONST_VTBL struct ICertificationAuthoritiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificationAuthorities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificationAuthorities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificationAuthorities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificationAuthorities_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificationAuthorities_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificationAuthorities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificationAuthorities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificationAuthorities_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define ICertificationAuthorities_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICertificationAuthorities_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define ICertificationAuthorities_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICertificationAuthorities_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICertificationAuthorities_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICertificationAuthorities_ComputeSiteCosts(This)	\
    ( (This)->lpVtbl -> ComputeSiteCosts(This) ) 

#define ICertificationAuthorities_get_ItemByName(This,strName,ppValue)	\
    ( (This)->lpVtbl -> get_ItemByName(This,strName,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificationAuthorities_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0069 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_certenroll_0000_0069_0001
    {
        LoadOptionDefault	= 0,
        LoadOptionCacheOnly	= 1,
        LoadOptionReload	= 2,
        LoadOptionRegisterForADChanges	= 4
    } 	X509EnrollmentPolicyLoadOption;


enum EnrollmentPolicyFlags
    {
        DisableGroupPolicyList	= 0x2,
        DisableUserServerList	= 0x4
    } ;
typedef 
enum PolicyServerUrlPropertyID
    {
        PsPolicyID	= 0,
        PsFriendlyName	= 1
    } 	PolicyServerUrlPropertyID;

typedef 
enum X509EnrollmentPolicyExportFlags
    {
        ExportTemplates	= 0x1,
        ExportOIDs	= 0x2,
        ExportCAs	= 0x4
    } 	X509EnrollmentPolicyExportFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0069_v0_0_s_ifspec;

#ifndef __IX509EnrollmentPolicyServer_INTERFACE_DEFINED__
#define __IX509EnrollmentPolicyServer_INTERFACE_DEFINED__

/* interface IX509EnrollmentPolicyServer */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509EnrollmentPolicyServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13b79026-2181-11da-b2a4-000e7bbb2b09")
    IX509EnrollmentPolicyServer : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in BSTR bstrPolicyServerUrl,
            /* [in] */ __RPC__in BSTR bstrPolicyServerId,
            /* [in] */ X509EnrollmentAuthFlags authFlags,
            /* [in] */ VARIANT_BOOL fIsUnTrusted,
            /* [in] */ X509CertificateEnrollmentContext context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadPolicy( 
            /* [in] */ X509EnrollmentPolicyLoadOption option) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTemplates( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplates **pTemplates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCAsForTemplate( 
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate,
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthorities **ppCAs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCAs( 
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthorities **ppCAs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Validate( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCustomOids( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppObjectIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextUpdateTime( 
            /* [retval][out] */ __RPC__out DATE *pDate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastUpdateTime( 
            /* [retval][out] */ __RPC__out DATE *pDate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPolicyServerUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPolicyServerId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFriendlyName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsDefaultCEP( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUseClientId( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllowUnTrustedCA( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachePath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCacheDir( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAuthFlags( 
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCredential( 
            /* [in] */ LONG hWndParent,
            /* [in] */ X509EnrollmentAuthFlags flag,
            /* [in] */ __RPC__in BSTR strCredential,
            /* [in] */ __RPC__in BSTR strPassword) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryChanges( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeImport( 
            /* [in] */ VARIANT val) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Export( 
            /* [in] */ X509EnrollmentPolicyExportFlags exportFlags,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Cost( 
            /* [retval][out] */ __RPC__out DWORD *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Cost( 
            /* [in] */ DWORD value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509EnrollmentPolicyServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509EnrollmentPolicyServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509EnrollmentPolicyServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509EnrollmentPolicyServer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ __RPC__in BSTR bstrPolicyServerUrl,
            /* [in] */ __RPC__in BSTR bstrPolicyServerId,
            /* [in] */ X509EnrollmentAuthFlags authFlags,
            /* [in] */ VARIANT_BOOL fIsUnTrusted,
            /* [in] */ X509CertificateEnrollmentContext context);
        
        HRESULT ( STDMETHODCALLTYPE *LoadPolicy )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ X509EnrollmentPolicyLoadOption option);
        
        HRESULT ( STDMETHODCALLTYPE *GetTemplates )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplates **pTemplates);
        
        HRESULT ( STDMETHODCALLTYPE *GetCAsForTemplate )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate,
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthorities **ppCAs);
        
        HRESULT ( STDMETHODCALLTYPE *GetCAs )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt ICertificationAuthorities **ppCAs);
        
        HRESULT ( STDMETHODCALLTYPE *Validate )( 
            __RPC__in IX509EnrollmentPolicyServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCustomOids )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppObjectIds);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextUpdateTime )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out DATE *pDate);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastUpdateTime )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out DATE *pDate);
        
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerUrl )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetPolicyServerId )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsDefaultCEP )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetUseClientId )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetAllowUnTrustedCA )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachePath )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetCacheDir )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetAuthFlags )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetCredential )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ LONG hWndParent,
            /* [in] */ X509EnrollmentAuthFlags flag,
            /* [in] */ __RPC__in BSTR strCredential,
            /* [in] */ __RPC__in BSTR strPassword);
        
        HRESULT ( STDMETHODCALLTYPE *QueryChanges )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeImport )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ VARIANT val);
        
        HRESULT ( STDMETHODCALLTYPE *Export )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ X509EnrollmentPolicyExportFlags exportFlags,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cost )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [retval][out] */ __RPC__out DWORD *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Cost )( 
            __RPC__in IX509EnrollmentPolicyServer * This,
            /* [in] */ DWORD value);
        
        END_INTERFACE
    } IX509EnrollmentPolicyServerVtbl;

    interface IX509EnrollmentPolicyServer
    {
        CONST_VTBL struct IX509EnrollmentPolicyServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509EnrollmentPolicyServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509EnrollmentPolicyServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509EnrollmentPolicyServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509EnrollmentPolicyServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509EnrollmentPolicyServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509EnrollmentPolicyServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509EnrollmentPolicyServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509EnrollmentPolicyServer_Initialize(This,bstrPolicyServerUrl,bstrPolicyServerId,authFlags,fIsUnTrusted,context)	\
    ( (This)->lpVtbl -> Initialize(This,bstrPolicyServerUrl,bstrPolicyServerId,authFlags,fIsUnTrusted,context) ) 

#define IX509EnrollmentPolicyServer_LoadPolicy(This,option)	\
    ( (This)->lpVtbl -> LoadPolicy(This,option) ) 

#define IX509EnrollmentPolicyServer_GetTemplates(This,pTemplates)	\
    ( (This)->lpVtbl -> GetTemplates(This,pTemplates) ) 

#define IX509EnrollmentPolicyServer_GetCAsForTemplate(This,pTemplate,ppCAs)	\
    ( (This)->lpVtbl -> GetCAsForTemplate(This,pTemplate,ppCAs) ) 

#define IX509EnrollmentPolicyServer_GetCAs(This,ppCAs)	\
    ( (This)->lpVtbl -> GetCAs(This,ppCAs) ) 

#define IX509EnrollmentPolicyServer_Validate(This)	\
    ( (This)->lpVtbl -> Validate(This) ) 

#define IX509EnrollmentPolicyServer_GetCustomOids(This,ppObjectIds)	\
    ( (This)->lpVtbl -> GetCustomOids(This,ppObjectIds) ) 

#define IX509EnrollmentPolicyServer_GetNextUpdateTime(This,pDate)	\
    ( (This)->lpVtbl -> GetNextUpdateTime(This,pDate) ) 

#define IX509EnrollmentPolicyServer_GetLastUpdateTime(This,pDate)	\
    ( (This)->lpVtbl -> GetLastUpdateTime(This,pDate) ) 

#define IX509EnrollmentPolicyServer_GetPolicyServerUrl(This,pValue)	\
    ( (This)->lpVtbl -> GetPolicyServerUrl(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetPolicyServerId(This,pValue)	\
    ( (This)->lpVtbl -> GetPolicyServerId(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetFriendlyName(This,pValue)	\
    ( (This)->lpVtbl -> GetFriendlyName(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetIsDefaultCEP(This,pValue)	\
    ( (This)->lpVtbl -> GetIsDefaultCEP(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetUseClientId(This,pValue)	\
    ( (This)->lpVtbl -> GetUseClientId(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetAllowUnTrustedCA(This,pValue)	\
    ( (This)->lpVtbl -> GetAllowUnTrustedCA(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetCachePath(This,pValue)	\
    ( (This)->lpVtbl -> GetCachePath(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetCacheDir(This,pValue)	\
    ( (This)->lpVtbl -> GetCacheDir(This,pValue) ) 

#define IX509EnrollmentPolicyServer_GetAuthFlags(This,pValue)	\
    ( (This)->lpVtbl -> GetAuthFlags(This,pValue) ) 

#define IX509EnrollmentPolicyServer_SetCredential(This,hWndParent,flag,strCredential,strPassword)	\
    ( (This)->lpVtbl -> SetCredential(This,hWndParent,flag,strCredential,strPassword) ) 

#define IX509EnrollmentPolicyServer_QueryChanges(This,pValue)	\
    ( (This)->lpVtbl -> QueryChanges(This,pValue) ) 

#define IX509EnrollmentPolicyServer_InitializeImport(This,val)	\
    ( (This)->lpVtbl -> InitializeImport(This,val) ) 

#define IX509EnrollmentPolicyServer_Export(This,exportFlags,pVal)	\
    ( (This)->lpVtbl -> Export(This,exportFlags,pVal) ) 

#define IX509EnrollmentPolicyServer_get_Cost(This,pValue)	\
    ( (This)->lpVtbl -> get_Cost(This,pValue) ) 

#define IX509EnrollmentPolicyServer_put_Cost(This,value)	\
    ( (This)->lpVtbl -> put_Cost(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509EnrollmentPolicyServer_INTERFACE_DEFINED__ */


#ifndef __IX509PolicyServerUrl_INTERFACE_DEFINED__
#define __IX509PolicyServerUrl_INTERFACE_DEFINED__

/* interface IX509PolicyServerUrl */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509PolicyServerUrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("884e204a-217d-11da-b2a4-000e7bbb2b09")
    IX509PolicyServerUrl : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ X509CertificateEnrollmentContext context) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *ppValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ __RPC__in BSTR pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Default( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Default( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ __RPC__out PolicyServerUrlFlags *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Flags( 
            /* [in] */ PolicyServerUrlFlags Flags) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AuthFlags( 
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AuthFlags( 
            /* [in] */ X509EnrollmentAuthFlags Flags) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Cost( 
            /* [retval][out] */ __RPC__out DWORD *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Cost( 
            /* [in] */ DWORD value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStringProperty( 
            /* [in] */ PolicyServerUrlPropertyID propertyId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *ppValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStringProperty( 
            /* [in] */ PolicyServerUrlPropertyID propertyId,
            /* [in] */ __RPC__in BSTR pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateRegistry( 
            /* [in] */ X509CertificateEnrollmentContext context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromRegistry( 
            /* [in] */ X509CertificateEnrollmentContext context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509PolicyServerUrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509PolicyServerUrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509PolicyServerUrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509PolicyServerUrl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ X509CertificateEnrollmentContext context);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Url )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ __RPC__in BSTR pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Default )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Default )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [retval][out] */ __RPC__out PolicyServerUrlFlags *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ PolicyServerUrlFlags Flags);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [retval][out] */ __RPC__out X509EnrollmentAuthFlags *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AuthFlags )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ X509EnrollmentAuthFlags Flags);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cost )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [retval][out] */ __RPC__out DWORD *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Cost )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ DWORD value);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ PolicyServerUrlPropertyID propertyId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *ppValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetStringProperty )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ PolicyServerUrlPropertyID propertyId,
            /* [in] */ __RPC__in BSTR pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateRegistry )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ X509CertificateEnrollmentContext context);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromRegistry )( 
            __RPC__in IX509PolicyServerUrl * This,
            /* [in] */ X509CertificateEnrollmentContext context);
        
        END_INTERFACE
    } IX509PolicyServerUrlVtbl;

    interface IX509PolicyServerUrl
    {
        CONST_VTBL struct IX509PolicyServerUrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509PolicyServerUrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509PolicyServerUrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509PolicyServerUrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509PolicyServerUrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509PolicyServerUrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509PolicyServerUrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509PolicyServerUrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509PolicyServerUrl_Initialize(This,context)	\
    ( (This)->lpVtbl -> Initialize(This,context) ) 

#define IX509PolicyServerUrl_get_Url(This,ppValue)	\
    ( (This)->lpVtbl -> get_Url(This,ppValue) ) 

#define IX509PolicyServerUrl_put_Url(This,pValue)	\
    ( (This)->lpVtbl -> put_Url(This,pValue) ) 

#define IX509PolicyServerUrl_get_Default(This,pValue)	\
    ( (This)->lpVtbl -> get_Default(This,pValue) ) 

#define IX509PolicyServerUrl_put_Default(This,value)	\
    ( (This)->lpVtbl -> put_Default(This,value) ) 

#define IX509PolicyServerUrl_get_Flags(This,pValue)	\
    ( (This)->lpVtbl -> get_Flags(This,pValue) ) 

#define IX509PolicyServerUrl_put_Flags(This,Flags)	\
    ( (This)->lpVtbl -> put_Flags(This,Flags) ) 

#define IX509PolicyServerUrl_get_AuthFlags(This,pValue)	\
    ( (This)->lpVtbl -> get_AuthFlags(This,pValue) ) 

#define IX509PolicyServerUrl_put_AuthFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_AuthFlags(This,Flags) ) 

#define IX509PolicyServerUrl_get_Cost(This,pValue)	\
    ( (This)->lpVtbl -> get_Cost(This,pValue) ) 

#define IX509PolicyServerUrl_put_Cost(This,value)	\
    ( (This)->lpVtbl -> put_Cost(This,value) ) 

#define IX509PolicyServerUrl_GetStringProperty(This,propertyId,ppValue)	\
    ( (This)->lpVtbl -> GetStringProperty(This,propertyId,ppValue) ) 

#define IX509PolicyServerUrl_SetStringProperty(This,propertyId,pValue)	\
    ( (This)->lpVtbl -> SetStringProperty(This,propertyId,pValue) ) 

#define IX509PolicyServerUrl_UpdateRegistry(This,context)	\
    ( (This)->lpVtbl -> UpdateRegistry(This,context) ) 

#define IX509PolicyServerUrl_RemoveFromRegistry(This,context)	\
    ( (This)->lpVtbl -> RemoveFromRegistry(This,context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509PolicyServerUrl_INTERFACE_DEFINED__ */


#ifndef __IX509PolicyServerListManager_INTERFACE_DEFINED__
#define __IX509PolicyServerListManager_INTERFACE_DEFINED__

/* interface IX509PolicyServerListManager */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509PolicyServerListManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("884e204b-217d-11da-b2a4-000e7bbb2b09")
    IX509PolicyServerListManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemByIndex( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509PolicyServerUrl **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IX509PolicyServerUrl *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ PolicyServerUrlFlags Flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509PolicyServerListManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509PolicyServerListManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509PolicyServerListManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509PolicyServerListManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByIndex )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt IX509PolicyServerUrl **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [retval][out] */ __RPC__deref_out_opt LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [in] */ __RPC__in_opt IX509PolicyServerUrl *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [in] */ LONG Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in IX509PolicyServerListManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509PolicyServerListManager * This,
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ PolicyServerUrlFlags Flags);
        
        END_INTERFACE
    } IX509PolicyServerListManagerVtbl;

    interface IX509PolicyServerListManager
    {
        CONST_VTBL struct IX509PolicyServerListManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509PolicyServerListManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509PolicyServerListManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509PolicyServerListManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509PolicyServerListManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509PolicyServerListManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509PolicyServerListManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509PolicyServerListManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509PolicyServerListManager_get_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) ) 

#define IX509PolicyServerListManager_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IX509PolicyServerListManager_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IX509PolicyServerListManager_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IX509PolicyServerListManager_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IX509PolicyServerListManager_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IX509PolicyServerListManager_Initialize(This,context,Flags)	\
    ( (This)->lpVtbl -> Initialize(This,context,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509PolicyServerListManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0072 */
/* [local] */ 

typedef 
enum X509RequestType
    {
        TypeAny	= 0,
        TypePkcs10	= 1,
        TypePkcs7	= 2,
        TypeCmc	= 3,
        TypeCertificate	= 4
    } 	X509RequestType;

typedef 
enum X509RequestInheritOptions
    {
        InheritDefault	= 0,
        InheritNewDefaultKey	= 0x1,
        InheritNewSimilarKey	= 0x2,
        InheritPrivateKey	= 0x3,
        InheritPublicKey	= 0x4,
        InheritKeyMask	= 0xf,
        InheritNone	= 0x10,
        InheritRenewalCertificateFlag	= 0x20,
        InheritTemplateFlag	= 0x40,
        InheritSubjectFlag	= 0x80,
        InheritExtensionsFlag	= 0x100,
        InheritSubjectAltNameFlag	= 0x200,
        InheritValidityPeriodFlag	= 0x400,
        InheritReserved80000000	= 0x80000000
    } 	X509RequestInheritOptions;

typedef 
enum InnerRequestLevel
    {
        LevelInnermost	= 0,
        LevelNext	= 1
    } 	InnerRequestLevel;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0072_v0_0_s_ifspec;

#ifndef __IX509CertificateRequest_INTERFACE_DEFINED__
#define __IX509CertificateRequest_INTERFACE_DEFINED__

/* interface IX509CertificateRequest */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab341-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequest : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ X509CertificateEnrollmentContext Context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetForEncode( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInnerRequest( 
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out X509RequestType *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnrollmentContext( 
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Silent( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Silent( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ParentWindow( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UIContextMessage( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UIContextMessage( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuppressDefaults( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuppressDefaults( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RenewalCertificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RenewalCertificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_ClientId( 
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_ClientId( 
            /* [in] */ RequestClientInfoClientId Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CspInformations( 
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CspInformations( 
            /* [in] */ __RPC__in_opt ICspInformations *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_HashAlgorithm( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_HashAlgorithm( 
            /* [in] */ __RPC__in_opt IObjectId *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AlternateSignatureAlgorithm( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AlternateSignatureAlgorithm( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawData( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequest * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequest * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequest * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequest * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequest * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequest * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequest * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509CertificateRequestVtbl;

    interface IX509CertificateRequest
    {
        CONST_VTBL struct IX509CertificateRequestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequest_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequest_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequest_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequest_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequest_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequest_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequest_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequest_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequest_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequest_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequest_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequest_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequest_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequest_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequest_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequest_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequest_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequest_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequest_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequest_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequest_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequest_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequest_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequest_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequest_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequest_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequest_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0073 */
/* [local] */ 

typedef 
enum Pkcs10AllowedSignatureTypes
    {
        AllowedKeySignature	= 0x1,
        AllowedNullSignature	= 0x2
    } 	Pkcs10AllowedSignatureTypes;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0073_v0_0_s_ifspec;

#ifndef __IX509CertificateRequestPkcs10_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs10_INTERFACE_DEFINED__

/* interface IX509CertificateRequestPkcs10 */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestPkcs10;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab342-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestPkcs10 : public IX509CertificateRequest
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplateName( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeFromPrivateKey( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromPublicKey( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey,
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromCertificate( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions = InheritDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckSignature( 
            /* [defaultvalue][in] */ Pkcs10AllowedSignatureTypes AllowedSignatureTypes = AllowedKeySignature) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSmartCard( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TemplateObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PublicKey( 
            /* [retval][out] */ __RPC__deref_out_opt IX509PublicKey **ppValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_PrivateKey( 
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NullSigned( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReuseKey( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OldCertificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CspStatuses( 
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_SmimeCapabilities( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_SmimeCapabilities( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SignatureInformation( 
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_KeyContainerNamePrefix( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_KeyContainerNamePrefix( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CryptAttributes( 
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_X509Extensions( 
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CriticalExtensions( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuppressOids( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawDataToBeSigned( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Signature( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCspStatuses( 
            /* [in] */ X509KeySpec KeySpec,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppCspStatuses) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestPkcs10Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestPkcs10 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestPkcs10 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestPkcs10 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestPkcs10 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestPkcs10 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [defaultvalue][in] */ Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKey )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PublicKey **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )( 
            __RPC__in IX509CertificateRequestPkcs10 * This,
            /* [in] */ X509KeySpec KeySpec,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        
        END_INTERFACE
    } IX509CertificateRequestPkcs10Vtbl;

    interface IX509CertificateRequestPkcs10
    {
        CONST_VTBL struct IX509CertificateRequestPkcs10Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestPkcs10_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestPkcs10_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestPkcs10_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestPkcs10_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestPkcs10_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestPkcs10_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestPkcs10_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestPkcs10_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestPkcs10_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestPkcs10_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestPkcs10_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestPkcs10_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestPkcs10_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestPkcs10_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) ) 

#define IX509CertificateRequestPkcs10_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) ) 

#define IX509CertificateRequestPkcs10_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestPkcs10_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestPkcs10_CheckSignature(This,AllowedSignatureTypes)	\
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) ) 

#define IX509CertificateRequestPkcs10_IsSmartCard(This,pValue)	\
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_TemplateObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_PublicKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_PrivateKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_NullSigned(This,pValue)	\
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_ReuseKey(This,pValue)	\
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_OldCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10_get_Subject(This,ppValue)	\
    ( (This)->lpVtbl -> get_Subject(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_put_Subject(This,pValue)	\
    ( (This)->lpVtbl -> put_Subject(This,pValue) ) 

#define IX509CertificateRequestPkcs10_get_CspStatuses(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_SmimeCapabilities(This,pValue)	\
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_SmimeCapabilities(This,Value)	\
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_SignatureInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_KeyContainerNamePrefix(This,pValue)	\
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) ) 

#define IX509CertificateRequestPkcs10_put_KeyContainerNamePrefix(This,Value)	\
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) ) 

#define IX509CertificateRequestPkcs10_get_CryptAttributes(This,ppValue)	\
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_X509Extensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_CriticalExtensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_SuppressOids(This,ppValue)	\
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) ) 

#define IX509CertificateRequestPkcs10_get_RawDataToBeSigned(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10_get_Signature(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10_GetCspStatuses(This,KeySpec,ppCspStatuses)	\
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestPkcs10_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateRequestPkcs10V2_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs10V2_INTERFACE_DEFINED__

/* interface IX509CertificateRequestPkcs10V2 */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestPkcs10V2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab35b-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestPkcs10V2 : public IX509CertificateRequestPkcs10
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplate( 
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromPrivateKeyTemplate( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromPublicKeyTemplate( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PolicyServer( 
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Template( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestPkcs10V2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestPkcs10V2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [defaultvalue][in] */ Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKey )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PublicKey **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509KeySpec KeySpec,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKeyTemplate )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKeyTemplate )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Template )( 
            __RPC__in IX509CertificateRequestPkcs10V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        
        END_INTERFACE
    } IX509CertificateRequestPkcs10V2Vtbl;

    interface IX509CertificateRequestPkcs10V2
    {
        CONST_VTBL struct IX509CertificateRequestPkcs10V2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestPkcs10V2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestPkcs10V2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestPkcs10V2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestPkcs10V2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestPkcs10V2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestPkcs10V2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestPkcs10V2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestPkcs10V2_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestPkcs10V2_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestPkcs10V2_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestPkcs10V2_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestPkcs10V2_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestPkcs10V2_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) ) 

#define IX509CertificateRequestPkcs10V2_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) ) 

#define IX509CertificateRequestPkcs10V2_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestPkcs10V2_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestPkcs10V2_CheckSignature(This,AllowedSignatureTypes)	\
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) ) 

#define IX509CertificateRequestPkcs10V2_IsSmartCard(This,pValue)	\
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_TemplateObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_PublicKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_PrivateKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_NullSigned(This,pValue)	\
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_ReuseKey(This,pValue)	\
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_OldCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_Subject(This,ppValue)	\
    ( (This)->lpVtbl -> get_Subject(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_put_Subject(This,pValue)	\
    ( (This)->lpVtbl -> put_Subject(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_CspStatuses(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_SmimeCapabilities(This,pValue)	\
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_SmimeCapabilities(This,Value)	\
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_SignatureInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_KeyContainerNamePrefix(This,pValue)	\
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) ) 

#define IX509CertificateRequestPkcs10V2_put_KeyContainerNamePrefix(This,Value)	\
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) ) 

#define IX509CertificateRequestPkcs10V2_get_CryptAttributes(This,ppValue)	\
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_X509Extensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_CriticalExtensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_SuppressOids(This,ppValue)	\
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) ) 

#define IX509CertificateRequestPkcs10V2_get_RawDataToBeSigned(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10V2_get_Signature(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs10V2_GetCspStatuses(This,KeySpec,ppCspStatuses)	\
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) ) 


#define IX509CertificateRequestPkcs10V2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestPkcs10V2_InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestPkcs10V2_InitializeFromPublicKeyTemplate(This,Context,pPublicKey,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromPublicKeyTemplate(This,Context,pPublicKey,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestPkcs10V2_get_PolicyServer(This,ppPolicyServer)	\
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) ) 

#define IX509CertificateRequestPkcs10V2_get_Template(This,ppTemplate)	\
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestPkcs10V2_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateRequestCertificate_INTERFACE_DEFINED__
#define __IX509CertificateRequestCertificate_INTERFACE_DEFINED__

/* interface IX509CertificateRequestCertificate */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestCertificate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab343-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestCertificate : public IX509CertificateRequestPkcs10
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CheckPublicKeySignature( 
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Issuer( 
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Issuer( 
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NotBefore( 
            /* [retval][out] */ __RPC__out DATE *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NotBefore( 
            /* [in] */ DATE Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NotAfter( 
            /* [retval][out] */ __RPC__out DATE *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NotAfter( 
            /* [in] */ DATE Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SerialNumber( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SignerCertificate( 
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SignerCertificate( 
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestCertificateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestCertificate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestCertificate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestCertificate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestCertificate * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestCertificate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKey )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PublicKey **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ X509KeySpec KeySpec,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        
        HRESULT ( STDMETHODCALLTYPE *CheckPublicKeySignature )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Issuer )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Issuer )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotBefore )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out DATE *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotBefore )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ DATE Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotAfter )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__out DATE *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotAfter )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ DATE Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SerialNumber )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCertificate * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue);
        
        END_INTERFACE
    } IX509CertificateRequestCertificateVtbl;

    interface IX509CertificateRequestCertificate
    {
        CONST_VTBL struct IX509CertificateRequestCertificateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestCertificate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestCertificate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestCertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestCertificate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestCertificate_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestCertificate_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestCertificate_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestCertificate_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestCertificate_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestCertificate_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestCertificate_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestCertificate_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestCertificate_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestCertificate_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestCertificate_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestCertificate_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestCertificate_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestCertificate_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestCertificate_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestCertificate_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) ) 

#define IX509CertificateRequestCertificate_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) ) 

#define IX509CertificateRequestCertificate_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestCertificate_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestCertificate_CheckSignature(This,AllowedSignatureTypes)	\
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) ) 

#define IX509CertificateRequestCertificate_IsSmartCard(This,pValue)	\
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_TemplateObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_PublicKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_PrivateKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_NullSigned(This,pValue)	\
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_ReuseKey(This,pValue)	\
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_OldCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate_get_Subject(This,ppValue)	\
    ( (This)->lpVtbl -> get_Subject(This,ppValue) ) 

#define IX509CertificateRequestCertificate_put_Subject(This,pValue)	\
    ( (This)->lpVtbl -> put_Subject(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_CspStatuses(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_SmimeCapabilities(This,pValue)	\
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_SmimeCapabilities(This,Value)	\
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) ) 

#define IX509CertificateRequestCertificate_get_SignatureInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_KeyContainerNamePrefix(This,pValue)	\
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_KeyContainerNamePrefix(This,Value)	\
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) ) 

#define IX509CertificateRequestCertificate_get_CryptAttributes(This,ppValue)	\
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_X509Extensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_CriticalExtensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_SuppressOids(This,ppValue)	\
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) ) 

#define IX509CertificateRequestCertificate_get_RawDataToBeSigned(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate_get_Signature(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate_GetCspStatuses(This,KeySpec,ppCspStatuses)	\
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) ) 


#define IX509CertificateRequestCertificate_CheckPublicKeySignature(This,pPublicKey)	\
    ( (This)->lpVtbl -> CheckPublicKeySignature(This,pPublicKey) ) 

#define IX509CertificateRequestCertificate_get_Issuer(This,ppValue)	\
    ( (This)->lpVtbl -> get_Issuer(This,ppValue) ) 

#define IX509CertificateRequestCertificate_put_Issuer(This,pValue)	\
    ( (This)->lpVtbl -> put_Issuer(This,pValue) ) 

#define IX509CertificateRequestCertificate_get_NotBefore(This,pValue)	\
    ( (This)->lpVtbl -> get_NotBefore(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_NotBefore(This,Value)	\
    ( (This)->lpVtbl -> put_NotBefore(This,Value) ) 

#define IX509CertificateRequestCertificate_get_NotAfter(This,pValue)	\
    ( (This)->lpVtbl -> get_NotAfter(This,pValue) ) 

#define IX509CertificateRequestCertificate_put_NotAfter(This,Value)	\
    ( (This)->lpVtbl -> put_NotAfter(This,Value) ) 

#define IX509CertificateRequestCertificate_get_SerialNumber(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate_put_SerialNumber(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_SerialNumber(This,Encoding,Value) ) 

#define IX509CertificateRequestCertificate_get_SignerCertificate(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) ) 

#define IX509CertificateRequestCertificate_put_SignerCertificate(This,pValue)	\
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestCertificate_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateRequestCertificate2_INTERFACE_DEFINED__
#define __IX509CertificateRequestCertificate2_INTERFACE_DEFINED__

/* interface IX509CertificateRequestCertificate2 */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestCertificate2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab35a-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestCertificate2 : public IX509CertificateRequestCertificate
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplate( 
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromPrivateKeyTemplate( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PolicyServer( 
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Template( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestCertificate2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestCertificate2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestCertificate2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestCertificate2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestCertificate2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestCertificate2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        
        HRESULT ( STDMETHODCALLTYPE *IsSmartCard )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKey )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PublicKey **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509PrivateKey **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509KeySpec KeySpec,
            /* [retval][out] */ __RPC__deref_out_opt ICspStatuses **ppCspStatuses);
        
        HRESULT ( STDMETHODCALLTYPE *CheckPublicKeySignature )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in_opt IX509PublicKey *pPublicKey);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Issuer )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX500DistinguishedName **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Issuer )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in_opt IX500DistinguishedName *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotBefore )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out DATE *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotBefore )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ DATE Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotAfter )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__out DATE *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotAfter )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ DATE Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SerialNumber )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKeyTemplate )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in_opt IX509PrivateKey *pPrivateKey,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Template )( 
            __RPC__in IX509CertificateRequestCertificate2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        
        END_INTERFACE
    } IX509CertificateRequestCertificate2Vtbl;

    interface IX509CertificateRequestCertificate2
    {
        CONST_VTBL struct IX509CertificateRequestCertificate2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestCertificate2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestCertificate2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestCertificate2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestCertificate2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestCertificate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestCertificate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestCertificate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestCertificate2_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestCertificate2_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestCertificate2_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestCertificate2_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate2_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestCertificate2_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestCertificate2_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestCertificate2_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) ) 

#define IX509CertificateRequestCertificate2_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) ) 

#define IX509CertificateRequestCertificate2_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestCertificate2_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestCertificate2_CheckSignature(This,AllowedSignatureTypes)	\
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) ) 

#define IX509CertificateRequestCertificate2_IsSmartCard(This,pValue)	\
    ( (This)->lpVtbl -> IsSmartCard(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_TemplateObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_PublicKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PublicKey(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_PrivateKey(This,ppValue)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_NullSigned(This,pValue)	\
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_ReuseKey(This,pValue)	\
    ( (This)->lpVtbl -> get_ReuseKey(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_OldCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate2_get_Subject(This,ppValue)	\
    ( (This)->lpVtbl -> get_Subject(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_put_Subject(This,pValue)	\
    ( (This)->lpVtbl -> put_Subject(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_CspStatuses(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspStatuses(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_SmimeCapabilities(This,pValue)	\
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_SmimeCapabilities(This,Value)	\
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_SignatureInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_KeyContainerNamePrefix(This,pValue)	\
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_KeyContainerNamePrefix(This,Value)	\
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_CryptAttributes(This,ppValue)	\
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_X509Extensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_CriticalExtensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_SuppressOids(This,ppValue)	\
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_get_RawDataToBeSigned(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate2_get_Signature(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate2_GetCspStatuses(This,KeySpec,ppCspStatuses)	\
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) ) 


#define IX509CertificateRequestCertificate2_CheckPublicKeySignature(This,pPublicKey)	\
    ( (This)->lpVtbl -> CheckPublicKeySignature(This,pPublicKey) ) 

#define IX509CertificateRequestCertificate2_get_Issuer(This,ppValue)	\
    ( (This)->lpVtbl -> get_Issuer(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_put_Issuer(This,pValue)	\
    ( (This)->lpVtbl -> put_Issuer(This,pValue) ) 

#define IX509CertificateRequestCertificate2_get_NotBefore(This,pValue)	\
    ( (This)->lpVtbl -> get_NotBefore(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_NotBefore(This,Value)	\
    ( (This)->lpVtbl -> put_NotBefore(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_NotAfter(This,pValue)	\
    ( (This)->lpVtbl -> get_NotAfter(This,pValue) ) 

#define IX509CertificateRequestCertificate2_put_NotAfter(This,Value)	\
    ( (This)->lpVtbl -> put_NotAfter(This,Value) ) 

#define IX509CertificateRequestCertificate2_get_SerialNumber(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,Encoding,pValue) ) 

#define IX509CertificateRequestCertificate2_put_SerialNumber(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_SerialNumber(This,Encoding,Value) ) 

#define IX509CertificateRequestCertificate2_get_SignerCertificate(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) ) 

#define IX509CertificateRequestCertificate2_put_SignerCertificate(This,pValue)	\
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) ) 


#define IX509CertificateRequestCertificate2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestCertificate2_InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestCertificate2_get_PolicyServer(This,ppPolicyServer)	\
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) ) 

#define IX509CertificateRequestCertificate2_get_Template(This,ppTemplate)	\
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestCertificate2_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateRequestPkcs7_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs7_INTERFACE_DEFINED__

/* interface IX509CertificateRequestPkcs7 */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestPkcs7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab344-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestPkcs7 : public IX509CertificateRequest
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplateName( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromCertificate( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ VARIANT_BOOL RenewalRequest,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions = InheritDefault) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeFromInnerRequest( 
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDecode( 
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding = XCN_CRYPT_STRING_BASE64) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_RequesterName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_RequesterName( 
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_SignerCertificate( 
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_SignerCertificate( 
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestPkcs7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestPkcs7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestPkcs7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestPkcs7 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestPkcs7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestPkcs7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ VARIANT_BOOL RenewalRequest,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequesterName )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequesterName )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7 * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue);
        
        END_INTERFACE
    } IX509CertificateRequestPkcs7Vtbl;

    interface IX509CertificateRequestPkcs7
    {
        CONST_VTBL struct IX509CertificateRequestPkcs7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestPkcs7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestPkcs7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestPkcs7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestPkcs7_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestPkcs7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestPkcs7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestPkcs7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestPkcs7_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestPkcs7_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestPkcs7_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestPkcs7_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestPkcs7_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestPkcs7_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestPkcs7_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestPkcs7_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestPkcs7_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestPkcs7_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestPkcs7_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestPkcs7_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestPkcs7_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestPkcs7_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestPkcs7_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs7_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestPkcs7_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestPkcs7_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestPkcs7_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestPkcs7_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestPkcs7_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestPkcs7_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs7_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs7_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestPkcs7_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestPkcs7_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestPkcs7_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestPkcs7_InitializeFromInnerRequest(This,pInnerRequest)	\
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) ) 

#define IX509CertificateRequestPkcs7_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestPkcs7_get_RequesterName(This,pValue)	\
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) ) 

#define IX509CertificateRequestPkcs7_put_RequesterName(This,Value)	\
    ( (This)->lpVtbl -> put_RequesterName(This,Value) ) 

#define IX509CertificateRequestPkcs7_get_SignerCertificate(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) ) 

#define IX509CertificateRequestPkcs7_put_SignerCertificate(This,pValue)	\
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestPkcs7_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateRequestPkcs7V2_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs7V2_INTERFACE_DEFINED__

/* interface IX509CertificateRequestPkcs7V2 */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestPkcs7V2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab35c-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestPkcs7V2 : public IX509CertificateRequestPkcs7
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplate( 
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PolicyServer( 
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Template( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckCertificateSignature( 
            /* [in] */ VARIANT_BOOL ValidateCertificateChain) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestPkcs7V2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestPkcs7V2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ VARIANT_BOOL RenewalRequest,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequesterName )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequesterName )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Template )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        
        HRESULT ( STDMETHODCALLTYPE *CheckCertificateSignature )( 
            __RPC__in IX509CertificateRequestPkcs7V2 * This,
            /* [in] */ VARIANT_BOOL ValidateCertificateChain);
        
        END_INTERFACE
    } IX509CertificateRequestPkcs7V2Vtbl;

    interface IX509CertificateRequestPkcs7V2
    {
        CONST_VTBL struct IX509CertificateRequestPkcs7V2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestPkcs7V2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestPkcs7V2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestPkcs7V2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestPkcs7V2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestPkcs7V2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestPkcs7V2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestPkcs7V2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestPkcs7V2_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestPkcs7V2_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestPkcs7V2_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestPkcs7V2_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestPkcs7V2_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestPkcs7V2_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestPkcs7V2_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestPkcs7V2_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestPkcs7V2_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestPkcs7V2_InitializeFromInnerRequest(This,pInnerRequest)	\
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) ) 

#define IX509CertificateRequestPkcs7V2_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestPkcs7V2_get_RequesterName(This,pValue)	\
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) ) 

#define IX509CertificateRequestPkcs7V2_put_RequesterName(This,Value)	\
    ( (This)->lpVtbl -> put_RequesterName(This,Value) ) 

#define IX509CertificateRequestPkcs7V2_get_SignerCertificate(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) ) 

#define IX509CertificateRequestPkcs7V2_put_SignerCertificate(This,pValue)	\
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) ) 


#define IX509CertificateRequestPkcs7V2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestPkcs7V2_get_PolicyServer(This,ppPolicyServer)	\
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) ) 

#define IX509CertificateRequestPkcs7V2_get_Template(This,ppTemplate)	\
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) ) 

#define IX509CertificateRequestPkcs7V2_CheckCertificateSignature(This,ValidateCertificateChain)	\
    ( (This)->lpVtbl -> CheckCertificateSignature(This,ValidateCertificateChain) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestPkcs7V2_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateRequestCmc_INTERFACE_DEFINED__
#define __IX509CertificateRequestCmc_INTERFACE_DEFINED__

/* interface IX509CertificateRequestCmc */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestCmc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab345-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestCmc : public IX509CertificateRequestPkcs7
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromInnerRequestTemplateName( 
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest,
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TemplateObjectId( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NullSigned( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CryptAttributes( 
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NameValuePairs( 
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePairs **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_X509Extensions( 
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CriticalExtensions( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuppressOids( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TransactionId( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TransactionId( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SenderNonce( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SenderNonce( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SignatureInformation( 
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ArchivePrivateKey( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ArchivePrivateKey( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_KeyArchivalCertificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_KeyArchivalCertificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_EncryptionAlgorithm( 
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_EncryptionAlgorithm( 
            /* [in] */ __RPC__in_opt IObjectId *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncryptionStrength( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EncryptionStrength( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncryptedKeyHash( 
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_SignerCertificates( 
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificates **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestCmcVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestCmc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestCmc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestCmc * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestCmc * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestCmc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ VARIANT_BOOL RenewalRequest,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequesterName )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequesterName )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequestTemplateName )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePairs **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionId )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionId )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SenderNonce )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SenderNonce )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchivePrivateKey )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchivePrivateKey )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyArchivalCertificate )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyArchivalCertificate )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionStrength )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyHash )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificates )( 
            __RPC__in IX509CertificateRequestCmc * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificates **ppValue);
        
        END_INTERFACE
    } IX509CertificateRequestCmcVtbl;

    interface IX509CertificateRequestCmc
    {
        CONST_VTBL struct IX509CertificateRequestCmcVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestCmc_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestCmc_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestCmc_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestCmc_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestCmc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestCmc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestCmc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestCmc_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestCmc_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestCmc_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestCmc_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestCmc_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestCmc_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestCmc_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestCmc_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestCmc_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestCmc_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestCmc_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestCmc_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestCmc_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestCmc_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestCmc_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestCmc_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestCmc_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestCmc_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestCmc_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestCmc_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestCmc_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCmc_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCmc_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestCmc_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestCmc_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestCmc_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestCmc_InitializeFromInnerRequest(This,pInnerRequest)	\
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) ) 

#define IX509CertificateRequestCmc_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestCmc_get_RequesterName(This,pValue)	\
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) ) 

#define IX509CertificateRequestCmc_put_RequesterName(This,Value)	\
    ( (This)->lpVtbl -> put_RequesterName(This,Value) ) 

#define IX509CertificateRequestCmc_get_SignerCertificate(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) ) 

#define IX509CertificateRequestCmc_put_SignerCertificate(This,pValue)	\
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) ) 


#define IX509CertificateRequestCmc_InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName) ) 

#define IX509CertificateRequestCmc_get_TemplateObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) ) 

#define IX509CertificateRequestCmc_get_NullSigned(This,pValue)	\
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) ) 

#define IX509CertificateRequestCmc_get_CryptAttributes(This,ppValue)	\
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) ) 

#define IX509CertificateRequestCmc_get_NameValuePairs(This,ppValue)	\
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) ) 

#define IX509CertificateRequestCmc_get_X509Extensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) ) 

#define IX509CertificateRequestCmc_get_CriticalExtensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) ) 

#define IX509CertificateRequestCmc_get_SuppressOids(This,ppValue)	\
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) ) 

#define IX509CertificateRequestCmc_get_TransactionId(This,pValue)	\
    ( (This)->lpVtbl -> get_TransactionId(This,pValue) ) 

#define IX509CertificateRequestCmc_put_TransactionId(This,Value)	\
    ( (This)->lpVtbl -> put_TransactionId(This,Value) ) 

#define IX509CertificateRequestCmc_get_SenderNonce(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_SenderNonce(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc_put_SenderNonce(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_SenderNonce(This,Encoding,Value) ) 

#define IX509CertificateRequestCmc_get_SignatureInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) ) 

#define IX509CertificateRequestCmc_get_ArchivePrivateKey(This,pValue)	\
    ( (This)->lpVtbl -> get_ArchivePrivateKey(This,pValue) ) 

#define IX509CertificateRequestCmc_put_ArchivePrivateKey(This,Value)	\
    ( (This)->lpVtbl -> put_ArchivePrivateKey(This,Value) ) 

#define IX509CertificateRequestCmc_get_KeyArchivalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_KeyArchivalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc_put_KeyArchivalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_KeyArchivalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestCmc_get_EncryptionAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestCmc_put_EncryptionAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCmc_get_EncryptionStrength(This,pValue)	\
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) ) 

#define IX509CertificateRequestCmc_put_EncryptionStrength(This,Value)	\
    ( (This)->lpVtbl -> put_EncryptionStrength(This,Value) ) 

#define IX509CertificateRequestCmc_get_EncryptedKeyHash(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_EncryptedKeyHash(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc_get_SignerCertificates(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificates(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestCmc_INTERFACE_DEFINED__ */


#ifndef __IX509CertificateRequestCmc2_INTERFACE_DEFINED__
#define __IX509CertificateRequestCmc2_INTERFACE_DEFINED__

/* interface IX509CertificateRequestCmc2 */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509CertificateRequestCmc2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab35d-217d-11da-b2a4-000e7bbb2b09")
    IX509CertificateRequestCmc2 : public IX509CertificateRequestCmc
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplate( 
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromInnerRequestTemplate( 
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PolicyServer( 
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Template( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckSignature( 
            /* [defaultvalue][in] */ Pkcs10AllowedSignatureTypes AllowedSignatureTypes = AllowedKeySignature) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckCertificateSignature( 
            /* [in] */ __RPC__in_opt ISignerCertificate *pSignerCertificate,
            /* [in] */ VARIANT_BOOL ValidateCertificateChain) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509CertificateRequestCmc2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509CertificateRequestCmc2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509CertificateRequestCmc2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509CertificateRequestCmc2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in IX509CertificateRequestCmc2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            __RPC__in IX509CertificateRequestCmc2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ InnerRequestLevel Level,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out X509RequestType *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out RequestClientInfoClientId *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ RequestClientInfoClientId Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICspInformations **ppValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt ICspInformations *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ VARIANT_BOOL RenewalRequest,
            /* [in] */ __RPC__in BSTR strCertificate,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [defaultvalue][in] */ X509RequestInheritOptions InheritOptions);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequest )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in BSTR strEncodedData,
            /* [defaultvalue][in] */ EncodingType Encoding);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequesterName )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequesterName )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificate **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequestTemplateName )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ICryptAttributes **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePairs **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509Extensions **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectIds **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionId )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionId )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SenderNonce )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SenderNonce )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509SignatureInformation **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArchivePrivateKey )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArchivePrivateKey )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyArchivalCertificate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyArchivalCertificate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR Value);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IObjectId **ppValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionAlgorithm )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt IObjectId *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionStrength )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionStrength )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptedKeyHash )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignerCertificates )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt ISignerCertificates **ppValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromInnerRequestTemplate )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pInnerRequest,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Template )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        
        HRESULT ( STDMETHODCALLTYPE *CheckSignature )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [defaultvalue][in] */ Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
        
        HRESULT ( STDMETHODCALLTYPE *CheckCertificateSignature )( 
            __RPC__in IX509CertificateRequestCmc2 * This,
            /* [in] */ __RPC__in_opt ISignerCertificate *pSignerCertificate,
            /* [in] */ VARIANT_BOOL ValidateCertificateChain);
        
        END_INTERFACE
    } IX509CertificateRequestCmc2Vtbl;

    interface IX509CertificateRequestCmc2
    {
        CONST_VTBL struct IX509CertificateRequestCmc2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509CertificateRequestCmc2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509CertificateRequestCmc2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509CertificateRequestCmc2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509CertificateRequestCmc2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509CertificateRequestCmc2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509CertificateRequestCmc2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509CertificateRequestCmc2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509CertificateRequestCmc2_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509CertificateRequestCmc2_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define IX509CertificateRequestCmc2_ResetForEncode(This)	\
    ( (This)->lpVtbl -> ResetForEncode(This) ) 

#define IX509CertificateRequestCmc2_GetInnerRequest(This,Level,ppValue)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) ) 

#define IX509CertificateRequestCmc2_get_Type(This,pValue)	\
    ( (This)->lpVtbl -> get_Type(This,pValue) ) 

#define IX509CertificateRequestCmc2_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509CertificateRequestCmc2_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509CertificateRequestCmc2_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509CertificateRequestCmc2_get_UIContextMessage(This,pValue)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_UIContextMessage(This,Value)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,Value) ) 

#define IX509CertificateRequestCmc2_get_SuppressDefaults(This,pValue)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_SuppressDefaults(This,Value)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,Value) ) 

#define IX509CertificateRequestCmc2_get_RenewalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc2_put_RenewalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestCmc2_get_ClientId(This,pValue)	\
    ( (This)->lpVtbl -> get_ClientId(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_ClientId(This,Value)	\
    ( (This)->lpVtbl -> put_ClientId(This,Value) ) 

#define IX509CertificateRequestCmc2_get_CspInformations(This,ppValue)	\
    ( (This)->lpVtbl -> get_CspInformations(This,ppValue) ) 

#define IX509CertificateRequestCmc2_put_CspInformations(This,pValue)	\
    ( (This)->lpVtbl -> put_CspInformations(This,pValue) ) 

#define IX509CertificateRequestCmc2_get_HashAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestCmc2_put_HashAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCmc2_get_AlternateSignatureAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_AlternateSignatureAlgorithm(This,Value)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) ) 

#define IX509CertificateRequestCmc2_get_RawData(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) ) 


#define IX509CertificateRequestCmc2_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509CertificateRequestCmc2_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) ) 

#define IX509CertificateRequestCmc2_InitializeFromInnerRequest(This,pInnerRequest)	\
    ( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) ) 

#define IX509CertificateRequestCmc2_InitializeDecode(This,strEncodedData,Encoding)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) ) 

#define IX509CertificateRequestCmc2_get_RequesterName(This,pValue)	\
    ( (This)->lpVtbl -> get_RequesterName(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_RequesterName(This,Value)	\
    ( (This)->lpVtbl -> put_RequesterName(This,Value) ) 

#define IX509CertificateRequestCmc2_get_SignerCertificate(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) ) 

#define IX509CertificateRequestCmc2_put_SignerCertificate(This,pValue)	\
    ( (This)->lpVtbl -> put_SignerCertificate(This,pValue) ) 


#define IX509CertificateRequestCmc2_InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName) ) 

#define IX509CertificateRequestCmc2_get_TemplateObjectId(This,ppValue)	\
    ( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) ) 

#define IX509CertificateRequestCmc2_get_NullSigned(This,pValue)	\
    ( (This)->lpVtbl -> get_NullSigned(This,pValue) ) 

#define IX509CertificateRequestCmc2_get_CryptAttributes(This,ppValue)	\
    ( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) ) 

#define IX509CertificateRequestCmc2_get_NameValuePairs(This,ppValue)	\
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) ) 

#define IX509CertificateRequestCmc2_get_X509Extensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,ppValue) ) 

#define IX509CertificateRequestCmc2_get_CriticalExtensions(This,ppValue)	\
    ( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) ) 

#define IX509CertificateRequestCmc2_get_SuppressOids(This,ppValue)	\
    ( (This)->lpVtbl -> get_SuppressOids(This,ppValue) ) 

#define IX509CertificateRequestCmc2_get_TransactionId(This,pValue)	\
    ( (This)->lpVtbl -> get_TransactionId(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_TransactionId(This,Value)	\
    ( (This)->lpVtbl -> put_TransactionId(This,Value) ) 

#define IX509CertificateRequestCmc2_get_SenderNonce(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_SenderNonce(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc2_put_SenderNonce(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_SenderNonce(This,Encoding,Value) ) 

#define IX509CertificateRequestCmc2_get_SignatureInformation(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) ) 

#define IX509CertificateRequestCmc2_get_ArchivePrivateKey(This,pValue)	\
    ( (This)->lpVtbl -> get_ArchivePrivateKey(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_ArchivePrivateKey(This,Value)	\
    ( (This)->lpVtbl -> put_ArchivePrivateKey(This,Value) ) 

#define IX509CertificateRequestCmc2_get_KeyArchivalCertificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_KeyArchivalCertificate(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc2_put_KeyArchivalCertificate(This,Encoding,Value)	\
    ( (This)->lpVtbl -> put_KeyArchivalCertificate(This,Encoding,Value) ) 

#define IX509CertificateRequestCmc2_get_EncryptionAlgorithm(This,ppValue)	\
    ( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) ) 

#define IX509CertificateRequestCmc2_put_EncryptionAlgorithm(This,pValue)	\
    ( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) ) 

#define IX509CertificateRequestCmc2_get_EncryptionStrength(This,pValue)	\
    ( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) ) 

#define IX509CertificateRequestCmc2_put_EncryptionStrength(This,Value)	\
    ( (This)->lpVtbl -> put_EncryptionStrength(This,Value) ) 

#define IX509CertificateRequestCmc2_get_EncryptedKeyHash(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_EncryptedKeyHash(This,Encoding,pValue) ) 

#define IX509CertificateRequestCmc2_get_SignerCertificates(This,ppValue)	\
    ( (This)->lpVtbl -> get_SignerCertificates(This,ppValue) ) 


#define IX509CertificateRequestCmc2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestCmc2_InitializeFromInnerRequestTemplate(This,pInnerRequest,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromInnerRequestTemplate(This,pInnerRequest,pPolicyServer,pTemplate) ) 

#define IX509CertificateRequestCmc2_get_PolicyServer(This,ppPolicyServer)	\
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) ) 

#define IX509CertificateRequestCmc2_get_Template(This,ppTemplate)	\
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) ) 

#define IX509CertificateRequestCmc2_CheckSignature(This,AllowedSignatureTypes)	\
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) ) 

#define IX509CertificateRequestCmc2_CheckCertificateSignature(This,pSignerCertificate,ValidateCertificateChain)	\
    ( (This)->lpVtbl -> CheckCertificateSignature(This,pSignerCertificate,ValidateCertificateChain) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509CertificateRequestCmc2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0081 */
/* [local] */ 

typedef 
enum InstallResponseRestrictionFlags
    {
        AllowNone	= 0,
        AllowNoOutstandingRequest	= 0x1,
        AllowUntrustedCertificate	= 0x2,
        AllowUntrustedRoot	= 0x4
    } 	InstallResponseRestrictionFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0081_v0_0_s_ifspec;

#ifndef __IX509Enrollment_INTERFACE_DEFINED__
#define __IX509Enrollment_INTERFACE_DEFINED__

/* interface IX509Enrollment */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509Enrollment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab346-217d-11da-b2a4-000e7bbb2b09")
    IX509Enrollment : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ X509CertificateEnrollmentContext Context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplateName( 
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InitializeFromRequest( 
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pRequest) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE CreateRequest( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enroll( void) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InstallResponse( 
            /* [in] */ InstallResponseRestrictionFlags Restrictions,
            /* [in] */ __RPC__in BSTR strResponse,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strPassword) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePFX( 
            /* [in] */ __RPC__in BSTR strPassword,
            /* [in] */ PFXExportOptions ExportOptions,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Request( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Silent( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Silent( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ParentWindow( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NameValuePairs( 
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePairs **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnrollmentContext( 
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentStatus **ppValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Certificate( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Response( 
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_CertificateFriendlyName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_CertificateFriendlyName( 
            /* [in] */ __RPC__in BSTR strValue) = 0;
        
        virtual /* [custom][propget] */ HRESULT STDMETHODCALLTYPE get_CertificateDescription( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
        virtual /* [custom][propput] */ HRESULT STDMETHODCALLTYPE put_CertificateDescription( 
            /* [in] */ __RPC__in BSTR strValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RequestId( 
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CAConfigString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509EnrollmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509Enrollment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509Enrollment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509Enrollment * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509Enrollment * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromRequest )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pRequest);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *CreateRequest )( 
            __RPC__in IX509Enrollment * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *Enroll )( 
            __RPC__in IX509Enrollment * This);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InstallResponse )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ InstallResponseRestrictionFlags Restrictions,
            /* [in] */ __RPC__in BSTR strResponse,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strPassword);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePFX )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ __RPC__in BSTR strPassword,
            /* [in] */ PFXExportOptions ExportOptions,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Request )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePairs **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            __RPC__in IX509Enrollment * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Response )( 
            __RPC__in IX509Enrollment * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CertificateFriendlyName )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CertificateFriendlyName )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ __RPC__in BSTR strValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CertificateDescription )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CertificateDescription )( 
            __RPC__in IX509Enrollment * This,
            /* [in] */ __RPC__in BSTR strValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestId )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CAConfigString )( 
            __RPC__in IX509Enrollment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509EnrollmentVtbl;

    interface IX509Enrollment
    {
        CONST_VTBL struct IX509EnrollmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509Enrollment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509Enrollment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509Enrollment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509Enrollment_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509Enrollment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509Enrollment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509Enrollment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509Enrollment_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509Enrollment_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509Enrollment_InitializeFromRequest(This,pRequest)	\
    ( (This)->lpVtbl -> InitializeFromRequest(This,pRequest) ) 

#define IX509Enrollment_CreateRequest(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> CreateRequest(This,Encoding,pValue) ) 

#define IX509Enrollment_Enroll(This)	\
    ( (This)->lpVtbl -> Enroll(This) ) 

#define IX509Enrollment_InstallResponse(This,Restrictions,strResponse,Encoding,strPassword)	\
    ( (This)->lpVtbl -> InstallResponse(This,Restrictions,strResponse,Encoding,strPassword) ) 

#define IX509Enrollment_CreatePFX(This,strPassword,ExportOptions,Encoding,pValue)	\
    ( (This)->lpVtbl -> CreatePFX(This,strPassword,ExportOptions,Encoding,pValue) ) 

#define IX509Enrollment_get_Request(This,pValue)	\
    ( (This)->lpVtbl -> get_Request(This,pValue) ) 

#define IX509Enrollment_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509Enrollment_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509Enrollment_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509Enrollment_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509Enrollment_get_NameValuePairs(This,ppValue)	\
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) ) 

#define IX509Enrollment_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509Enrollment_get_Status(This,ppValue)	\
    ( (This)->lpVtbl -> get_Status(This,ppValue) ) 

#define IX509Enrollment_get_Certificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) ) 

#define IX509Enrollment_get_Response(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Response(This,Encoding,pValue) ) 

#define IX509Enrollment_get_CertificateFriendlyName(This,pValue)	\
    ( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) ) 

#define IX509Enrollment_put_CertificateFriendlyName(This,strValue)	\
    ( (This)->lpVtbl -> put_CertificateFriendlyName(This,strValue) ) 

#define IX509Enrollment_get_CertificateDescription(This,pValue)	\
    ( (This)->lpVtbl -> get_CertificateDescription(This,pValue) ) 

#define IX509Enrollment_put_CertificateDescription(This,strValue)	\
    ( (This)->lpVtbl -> put_CertificateDescription(This,strValue) ) 

#define IX509Enrollment_get_RequestId(This,pValue)	\
    ( (This)->lpVtbl -> get_RequestId(This,pValue) ) 

#define IX509Enrollment_get_CAConfigString(This,pValue)	\
    ( (This)->lpVtbl -> get_CAConfigString(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509Enrollment_INTERFACE_DEFINED__ */


#ifndef __IX509Enrollment2_INTERFACE_DEFINED__
#define __IX509Enrollment2_INTERFACE_DEFINED__

/* interface IX509Enrollment2 */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509Enrollment2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab350-217d-11da-b2a4-000e7bbb2b09")
    IX509Enrollment2 : public IX509Enrollment
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromTemplate( 
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE InstallResponse2( 
            /* [in] */ InstallResponseRestrictionFlags Restrictions,
            /* [in] */ __RPC__in BSTR strResponse,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strPassword,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerUrl,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerID,
            /* [in] */ PolicyServerUrlFlags EnrollmentPolicyServerFlags,
            /* [in] */ X509EnrollmentAuthFlags authFlags) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PolicyServer( 
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Template( 
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RequestIdString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509Enrollment2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509Enrollment2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509Enrollment2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509Enrollment2 * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509Enrollment2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ X509CertificateEnrollmentContext Context,
            /* [in] */ __RPC__in BSTR strTemplateName);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromRequest )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ __RPC__in_opt IX509CertificateRequest *pRequest);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *CreateRequest )( 
            __RPC__in IX509Enrollment2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *Enroll )( 
            __RPC__in IX509Enrollment2 * This);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InstallResponse )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ InstallResponseRestrictionFlags Restrictions,
            /* [in] */ __RPC__in BSTR strResponse,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strPassword);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePFX )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ __RPC__in BSTR strPassword,
            /* [in] */ PFXExportOptions ExportOptions,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Request )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateRequest **pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ LONG Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509NameValuePairs **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__out X509CertificateEnrollmentContext *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentStatus **ppValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            __RPC__in IX509Enrollment2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Response )( 
            __RPC__in IX509Enrollment2 * This,
            /* [defaultvalue][in] */ EncodingType Encoding,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CertificateFriendlyName )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CertificateFriendlyName )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ __RPC__in BSTR strValue);
        
        /* [custom][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CertificateDescription )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        /* [custom][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CertificateDescription )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ __RPC__in BSTR strValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestId )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CAConfigString )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplate )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ X509CertificateEnrollmentContext context,
            /* [in] */ __RPC__in_opt IX509EnrollmentPolicyServer *pPolicyServer,
            /* [in] */ __RPC__in_opt IX509CertificateTemplate *pTemplate);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *InstallResponse2 )( 
            __RPC__in IX509Enrollment2 * This,
            /* [in] */ InstallResponseRestrictionFlags Restrictions,
            /* [in] */ __RPC__in BSTR strResponse,
            /* [in] */ EncodingType Encoding,
            /* [in] */ __RPC__in BSTR strPassword,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerUrl,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerID,
            /* [in] */ PolicyServerUrlFlags EnrollmentPolicyServerFlags,
            /* [in] */ X509EnrollmentAuthFlags authFlags);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyServer )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentPolicyServer **ppPolicyServer);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Template )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IX509CertificateTemplate **ppTemplate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestIdString )( 
            __RPC__in IX509Enrollment2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pValue);
        
        END_INTERFACE
    } IX509Enrollment2Vtbl;

    interface IX509Enrollment2
    {
        CONST_VTBL struct IX509Enrollment2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509Enrollment2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509Enrollment2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509Enrollment2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509Enrollment2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509Enrollment2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509Enrollment2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509Enrollment2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509Enrollment2_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#define IX509Enrollment2_InitializeFromTemplateName(This,Context,strTemplateName)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) ) 

#define IX509Enrollment2_InitializeFromRequest(This,pRequest)	\
    ( (This)->lpVtbl -> InitializeFromRequest(This,pRequest) ) 

#define IX509Enrollment2_CreateRequest(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> CreateRequest(This,Encoding,pValue) ) 

#define IX509Enrollment2_Enroll(This)	\
    ( (This)->lpVtbl -> Enroll(This) ) 

#define IX509Enrollment2_InstallResponse(This,Restrictions,strResponse,Encoding,strPassword)	\
    ( (This)->lpVtbl -> InstallResponse(This,Restrictions,strResponse,Encoding,strPassword) ) 

#define IX509Enrollment2_CreatePFX(This,strPassword,ExportOptions,Encoding,pValue)	\
    ( (This)->lpVtbl -> CreatePFX(This,strPassword,ExportOptions,Encoding,pValue) ) 

#define IX509Enrollment2_get_Request(This,pValue)	\
    ( (This)->lpVtbl -> get_Request(This,pValue) ) 

#define IX509Enrollment2_get_Silent(This,pValue)	\
    ( (This)->lpVtbl -> get_Silent(This,pValue) ) 

#define IX509Enrollment2_put_Silent(This,Value)	\
    ( (This)->lpVtbl -> put_Silent(This,Value) ) 

#define IX509Enrollment2_get_ParentWindow(This,pValue)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pValue) ) 

#define IX509Enrollment2_put_ParentWindow(This,Value)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,Value) ) 

#define IX509Enrollment2_get_NameValuePairs(This,ppValue)	\
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) ) 

#define IX509Enrollment2_get_EnrollmentContext(This,pValue)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) ) 

#define IX509Enrollment2_get_Status(This,ppValue)	\
    ( (This)->lpVtbl -> get_Status(This,ppValue) ) 

#define IX509Enrollment2_get_Certificate(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) ) 

#define IX509Enrollment2_get_Response(This,Encoding,pValue)	\
    ( (This)->lpVtbl -> get_Response(This,Encoding,pValue) ) 

#define IX509Enrollment2_get_CertificateFriendlyName(This,pValue)	\
    ( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) ) 

#define IX509Enrollment2_put_CertificateFriendlyName(This,strValue)	\
    ( (This)->lpVtbl -> put_CertificateFriendlyName(This,strValue) ) 

#define IX509Enrollment2_get_CertificateDescription(This,pValue)	\
    ( (This)->lpVtbl -> get_CertificateDescription(This,pValue) ) 

#define IX509Enrollment2_put_CertificateDescription(This,strValue)	\
    ( (This)->lpVtbl -> put_CertificateDescription(This,strValue) ) 

#define IX509Enrollment2_get_RequestId(This,pValue)	\
    ( (This)->lpVtbl -> get_RequestId(This,pValue) ) 

#define IX509Enrollment2_get_CAConfigString(This,pValue)	\
    ( (This)->lpVtbl -> get_CAConfigString(This,pValue) ) 


#define IX509Enrollment2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)	\
    ( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) ) 

#define IX509Enrollment2_InstallResponse2(This,Restrictions,strResponse,Encoding,strPassword,strEnrollmentPolicyServerUrl,strEnrollmentPolicyServerID,EnrollmentPolicyServerFlags,authFlags)	\
    ( (This)->lpVtbl -> InstallResponse2(This,Restrictions,strResponse,Encoding,strPassword,strEnrollmentPolicyServerUrl,strEnrollmentPolicyServerID,EnrollmentPolicyServerFlags,authFlags) ) 

#define IX509Enrollment2_get_PolicyServer(This,ppPolicyServer)	\
    ( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) ) 

#define IX509Enrollment2_get_Template(This,ppTemplate)	\
    ( (This)->lpVtbl -> get_Template(This,ppTemplate) ) 

#define IX509Enrollment2_get_RequestIdString(This,pValue)	\
    ( (This)->lpVtbl -> get_RequestIdString(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509Enrollment2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenroll_0000_0083 */
/* [local] */ 

typedef 
enum WebEnrollmentFlags
    {
        EnrollPrompt	= 0x1
    } 	WebEnrollmentFlags;



extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0083_v0_0_s_ifspec;

#ifndef __IX509EnrollmentHelper_INTERFACE_DEFINED__
#define __IX509EnrollmentHelper_INTERFACE_DEFINED__

/* interface IX509EnrollmentHelper */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509EnrollmentHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab351-217d-11da-b2a4-000e7bbb2b09")
    IX509EnrollmentHelper : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE AddPolicyServer( 
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerURI,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyID,
            /* [in] */ PolicyServerUrlFlags EnrollmentPolicyServerFlags,
            /* [in] */ X509EnrollmentAuthFlags authFlags,
            /* [in] */ __RPC__in BSTR strCredential,
            /* [in] */ __RPC__in BSTR strPassword) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE AddEnrollmentServer( 
            /* [in] */ __RPC__in BSTR strEnrollmentServerURI,
            /* [in] */ X509EnrollmentAuthFlags authFlags,
            /* [in] */ __RPC__in BSTR strCredential,
            /* [in] */ __RPC__in BSTR strPassword) = 0;
        
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE Enroll( 
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerURI,
            /* [in] */ __RPC__in BSTR strTemplateName,
            /* [in] */ EncodingType Encoding,
            /* [in] */ WebEnrollmentFlags enrollFlags,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrCertificate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ X509CertificateEnrollmentContext Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509EnrollmentHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509EnrollmentHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509EnrollmentHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509EnrollmentHelper * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *AddPolicyServer )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerURI,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyID,
            /* [in] */ PolicyServerUrlFlags EnrollmentPolicyServerFlags,
            /* [in] */ X509EnrollmentAuthFlags authFlags,
            /* [in] */ __RPC__in BSTR strCredential,
            /* [in] */ __RPC__in BSTR strPassword);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *AddEnrollmentServer )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [in] */ __RPC__in BSTR strEnrollmentServerURI,
            /* [in] */ X509EnrollmentAuthFlags authFlags,
            /* [in] */ __RPC__in BSTR strCredential,
            /* [in] */ __RPC__in BSTR strPassword);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *Enroll )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [in] */ __RPC__in BSTR strEnrollmentPolicyServerURI,
            /* [in] */ __RPC__in BSTR strTemplateName,
            /* [in] */ EncodingType Encoding,
            /* [in] */ WebEnrollmentFlags enrollFlags,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrCertificate);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IX509EnrollmentHelper * This,
            /* [in] */ X509CertificateEnrollmentContext Context);
        
        END_INTERFACE
    } IX509EnrollmentHelperVtbl;

    interface IX509EnrollmentHelper
    {
        CONST_VTBL struct IX509EnrollmentHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509EnrollmentHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509EnrollmentHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509EnrollmentHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509EnrollmentHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509EnrollmentHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509EnrollmentHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509EnrollmentHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509EnrollmentHelper_AddPolicyServer(This,strEnrollmentPolicyServerURI,strEnrollmentPolicyID,EnrollmentPolicyServerFlags,authFlags,strCredential,strPassword)	\
    ( (This)->lpVtbl -> AddPolicyServer(This,strEnrollmentPolicyServerURI,strEnrollmentPolicyID,EnrollmentPolicyServerFlags,authFlags,strCredential,strPassword) ) 

#define IX509EnrollmentHelper_AddEnrollmentServer(This,strEnrollmentServerURI,authFlags,strCredential,strPassword)	\
    ( (This)->lpVtbl -> AddEnrollmentServer(This,strEnrollmentServerURI,authFlags,strCredential,strPassword) ) 

#define IX509EnrollmentHelper_Enroll(This,strEnrollmentPolicyServerURI,strTemplateName,Encoding,enrollFlags,pstrCertificate)	\
    ( (This)->lpVtbl -> Enroll(This,strEnrollmentPolicyServerURI,strTemplateName,Encoding,enrollFlags,pstrCertificate) ) 

#define IX509EnrollmentHelper_Initialize(This,Context)	\
    ( (This)->lpVtbl -> Initialize(This,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509EnrollmentHelper_INTERFACE_DEFINED__ */


#ifndef __IX509EnrollmentWebClassFactory_INTERFACE_DEFINED__
#define __IX509EnrollmentWebClassFactory_INTERFACE_DEFINED__

/* interface IX509EnrollmentWebClassFactory */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509EnrollmentWebClassFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab349-217d-11da-b2a4-000e7bbb2b09")
    IX509EnrollmentWebClassFactory : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ __RPC__in BSTR strProgID,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppIUnknown) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509EnrollmentWebClassFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509EnrollmentWebClassFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509EnrollmentWebClassFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509EnrollmentWebClassFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509EnrollmentWebClassFactory * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509EnrollmentWebClassFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509EnrollmentWebClassFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509EnrollmentWebClassFactory * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            __RPC__in IX509EnrollmentWebClassFactory * This,
            /* [in] */ __RPC__in BSTR strProgID,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppIUnknown);
        
        END_INTERFACE
    } IX509EnrollmentWebClassFactoryVtbl;

    interface IX509EnrollmentWebClassFactory
    {
        CONST_VTBL struct IX509EnrollmentWebClassFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509EnrollmentWebClassFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509EnrollmentWebClassFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509EnrollmentWebClassFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509EnrollmentWebClassFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509EnrollmentWebClassFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509EnrollmentWebClassFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509EnrollmentWebClassFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509EnrollmentWebClassFactory_CreateObject(This,strProgID,ppIUnknown)	\
    ( (This)->lpVtbl -> CreateObject(This,strProgID,ppIUnknown) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509EnrollmentWebClassFactory_INTERFACE_DEFINED__ */


#ifndef __IX509MachineEnrollmentFactory_INTERFACE_DEFINED__
#define __IX509MachineEnrollmentFactory_INTERFACE_DEFINED__

/* interface IX509MachineEnrollmentFactory */
/* [helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509MachineEnrollmentFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("728ab352-217d-11da-b2a4-000e7bbb2b09")
    IX509MachineEnrollmentFactory : public IDispatch
    {
    public:
        virtual /* [custom] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ __RPC__in BSTR strProgID,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentHelper **ppIHelper) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509MachineEnrollmentFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IX509MachineEnrollmentFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IX509MachineEnrollmentFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IX509MachineEnrollmentFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IX509MachineEnrollmentFactory * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IX509MachineEnrollmentFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IX509MachineEnrollmentFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509MachineEnrollmentFactory * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [custom] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            __RPC__in IX509MachineEnrollmentFactory * This,
            /* [in] */ __RPC__in BSTR strProgID,
            /* [retval][out] */ __RPC__deref_out_opt IX509EnrollmentHelper **ppIHelper);
        
        END_INTERFACE
    } IX509MachineEnrollmentFactoryVtbl;

    interface IX509MachineEnrollmentFactory
    {
        CONST_VTBL struct IX509MachineEnrollmentFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509MachineEnrollmentFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IX509MachineEnrollmentFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IX509MachineEnrollmentFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IX509MachineEnrollmentFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IX509MachineEnrollmentFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IX509MachineEnrollmentFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IX509MachineEnrollmentFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IX509MachineEnrollmentFactory_CreateObject(This,strProgID,ppIHelper)	\
    ( (This)->lpVtbl -> CreateObject(This,strProgID,ppIHelper) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509MachineEnrollmentFactory_INTERFACE_DEFINED__ */



#ifndef __CERTENROLLLib_LIBRARY_DEFINED__
#define __CERTENROLLLib_LIBRARY_DEFINED__

/* library CERTENROLLLib */
/* [helpstring][version][uuid] */ 

typedef 
enum X509CertificateTemplateGeneralFlag
    {
        GeneralMachineType	= 0x40,
        GeneralCA	= 0x80,
        GeneralCrossCA	= 0x800,
        GeneralDefault	= 0x10000,
        GeneralModified	= 0x20000,
        GeneralDonotPersist	= 0x1000
    } 	X509CertificateTemplateGeneralFlag;

typedef 
enum X509CertificateTemplateEnrollmentFlag
    {
        EnrollmentIncludeSymmetricAlgorithms	= 0x1,
        EnrollmentPendAllRequests	= 0x2,
        EnrollmentPublishToKRAContainer	= 0x4,
        EnrollmentPublishToDS	= 0x8,
        EnrollmentAutoEnrollmentCheckUserDSCertificate	= 0x10,
        EnrollmentAutoEnrollment	= 0x20,
        EnrollmentDomainAuthenticationNotRequired	= 0x80,
        EnrollmentPreviousApprovalValidateReenrollment	= 0x40,
        EnrollmentUserInteractionRequired	= 0x100,
        EnrollmentAddTemplateName	= 0x200,
        EnrollmentRemoveInvalidCertificateFromPersonalStore	= 0x400,
        EnrollmentAllowEnrollOnBehalfOf	= 0x800,
        EnrollmentAddOCSPNoCheck	= 0x1000,
        EnrollmentReuseKeyOnFullSmartCard	= 0x2000,
        EnrollmentNoRevocationInfoInCerts	= 0x4000,
        EnrollmentIncludeBasicConstraintsForEECerts	= 0x8000,
        EnrollmentPreviousApprovalKeyBasedValidateReenrollment	= 0x10000,
        EnrollmentCertificateIssuancePoliciesFromRequest	= 0x20000
    } 	X509CertificateTemplateEnrollmentFlag;

typedef 
enum X509CertificateTemplateSubjectNameFlag
    {
        SubjectNameEnrolleeSupplies	= 0x1,
        SubjectNameRequireDirectoryPath	= 0x80000000,
        SubjectNameRequireCommonName	= 0x40000000,
        SubjectNameRequireEmail	= 0x20000000,
        SubjectNameRequireDNS	= 0x10000000,
        SubjectNameAndAlternativeNameOldCertSupplies	= 0x8,
        SubjectAlternativeNameEnrolleeSupplies	= 0x10000,
        SubjectAlternativeNameRequireDirectoryGUID	= 0x1000000,
        SubjectAlternativeNameRequireUPN	= 0x2000000,
        SubjectAlternativeNameRequireEmail	= 0x4000000,
        SubjectAlternativeNameRequireSPN	= 0x800000,
        SubjectAlternativeNameRequireDNS	= 0x8000000,
        SubjectAlternativeNameRequireDomainDNS	= 0x400000
    } 	X509CertificateTemplateSubjectNameFlag;

typedef 
enum X509CertificateTemplatePrivateKeyFlag
    {
        PrivateKeyRequireArchival	= 0x1,
        PrivateKeyExportable	= 0x10,
        PrivateKeyRequireStrongKeyProtection	= 0x20,
        PrivateKeyRequireAlternateSignatureAlgorithm	= 0x40,
        PrivateKeyRequireSameKeyRenewal	= 0x80,
        PrivateKeyUseLegacyProvider	= 0x100,
        PrivateKeyServerVersionMask	= 0xf0000,
        PrivateKeyServerVersionShift	= 16,
        PrivateKeyClientVersionMask	= 0xf000000,
        PrivateKeyClientVersionShift	= 24
    } 	X509CertificateTemplatePrivateKeyFlag;


EXTERN_C const IID LIBID_CERTENROLLLib;

EXTERN_C const CLSID CLSID_CObjectId;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2000-217d-11da-b2a4-000e7bbb2b09")
CObjectId;
#endif

EXTERN_C const CLSID CLSID_CObjectIds;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2001-217d-11da-b2a4-000e7bbb2b09")
CObjectIds;
#endif

EXTERN_C const CLSID CLSID_CBinaryConverter;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2002-217d-11da-b2a4-000e7bbb2b09")
CBinaryConverter;
#endif

EXTERN_C const CLSID CLSID_CX500DistinguishedName;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2003-217d-11da-b2a4-000e7bbb2b09")
CX500DistinguishedName;
#endif

EXTERN_C const CLSID CLSID_CCspInformation;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2007-217d-11da-b2a4-000e7bbb2b09")
CCspInformation;
#endif

EXTERN_C const CLSID CLSID_CCspInformations;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2008-217d-11da-b2a4-000e7bbb2b09")
CCspInformations;
#endif

EXTERN_C const CLSID CLSID_CCspStatus;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2009-217d-11da-b2a4-000e7bbb2b09")
CCspStatus;
#endif

EXTERN_C const CLSID CLSID_CX509PublicKey;

#ifdef __cplusplus

class DECLSPEC_UUID("884e200b-217d-11da-b2a4-000e7bbb2b09")
CX509PublicKey;
#endif

EXTERN_C const CLSID CLSID_CX509PrivateKey;

#ifdef __cplusplus

class DECLSPEC_UUID("884e200c-217d-11da-b2a4-000e7bbb2b09")
CX509PrivateKey;
#endif

EXTERN_C const CLSID CLSID_CX509Extension;

#ifdef __cplusplus

class DECLSPEC_UUID("884e200d-217d-11da-b2a4-000e7bbb2b09")
CX509Extension;
#endif

EXTERN_C const CLSID CLSID_CX509Extensions;

#ifdef __cplusplus

class DECLSPEC_UUID("884e200e-217d-11da-b2a4-000e7bbb2b09")
CX509Extensions;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionKeyUsage;

#ifdef __cplusplus

class DECLSPEC_UUID("884e200f-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionKeyUsage;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionEnhancedKeyUsage;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2010-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionEnhancedKeyUsage;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionTemplateName;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2011-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionTemplateName;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionTemplate;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2012-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionTemplate;
#endif

EXTERN_C const CLSID CLSID_CAlternativeName;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2013-217d-11da-b2a4-000e7bbb2b09")
CAlternativeName;
#endif

EXTERN_C const CLSID CLSID_CAlternativeNames;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2014-217d-11da-b2a4-000e7bbb2b09")
CAlternativeNames;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionAlternativeNames;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2015-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionAlternativeNames;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionBasicConstraints;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2016-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionBasicConstraints;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionSubjectKeyIdentifier;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2017-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionSubjectKeyIdentifier;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionAuthorityKeyIdentifier;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2018-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionAuthorityKeyIdentifier;
#endif

EXTERN_C const CLSID CLSID_CSmimeCapability;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2019-217d-11da-b2a4-000e7bbb2b09")
CSmimeCapability;
#endif

EXTERN_C const CLSID CLSID_CSmimeCapabilities;

#ifdef __cplusplus

class DECLSPEC_UUID("884e201a-217d-11da-b2a4-000e7bbb2b09")
CSmimeCapabilities;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionSmimeCapabilities;

#ifdef __cplusplus

class DECLSPEC_UUID("884e201b-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionSmimeCapabilities;
#endif

EXTERN_C const CLSID CLSID_CPolicyQualifier;

#ifdef __cplusplus

class DECLSPEC_UUID("884e201c-217d-11da-b2a4-000e7bbb2b09")
CPolicyQualifier;
#endif

EXTERN_C const CLSID CLSID_CPolicyQualifiers;

#ifdef __cplusplus

class DECLSPEC_UUID("884e201d-217d-11da-b2a4-000e7bbb2b09")
CPolicyQualifiers;
#endif

EXTERN_C const CLSID CLSID_CCertificatePolicy;

#ifdef __cplusplus

class DECLSPEC_UUID("884e201e-217d-11da-b2a4-000e7bbb2b09")
CCertificatePolicy;
#endif

EXTERN_C const CLSID CLSID_CCertificatePolicies;

#ifdef __cplusplus

class DECLSPEC_UUID("884e201f-217d-11da-b2a4-000e7bbb2b09")
CCertificatePolicies;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionCertificatePolicies;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2020-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionCertificatePolicies;
#endif

EXTERN_C const CLSID CLSID_CX509ExtensionMSApplicationPolicies;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2021-217d-11da-b2a4-000e7bbb2b09")
CX509ExtensionMSApplicationPolicies;
#endif

EXTERN_C const CLSID CLSID_CX509Attribute;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2022-217d-11da-b2a4-000e7bbb2b09")
CX509Attribute;
#endif

EXTERN_C const CLSID CLSID_CX509Attributes;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2023-217d-11da-b2a4-000e7bbb2b09")
CX509Attributes;
#endif

EXTERN_C const CLSID CLSID_CX509AttributeExtensions;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2024-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeExtensions;
#endif

EXTERN_C const CLSID CLSID_CX509AttributeClientId;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2025-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeClientId;
#endif

EXTERN_C const CLSID CLSID_CX509AttributeRenewalCertificate;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2026-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeRenewalCertificate;
#endif

EXTERN_C const CLSID CLSID_CX509AttributeArchiveKey;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2027-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeArchiveKey;
#endif

EXTERN_C const CLSID CLSID_CX509AttributeArchiveKeyHash;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2028-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeArchiveKeyHash;
#endif

EXTERN_C const CLSID CLSID_CX509AttributeOSVersion;

#ifdef __cplusplus

class DECLSPEC_UUID("884e202a-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeOSVersion;
#endif

EXTERN_C const CLSID CLSID_CX509AttributeCspProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("884e202b-217d-11da-b2a4-000e7bbb2b09")
CX509AttributeCspProvider;
#endif

EXTERN_C const CLSID CLSID_CCryptAttribute;

#ifdef __cplusplus

class DECLSPEC_UUID("884e202c-217d-11da-b2a4-000e7bbb2b09")
CCryptAttribute;
#endif

EXTERN_C const CLSID CLSID_CCryptAttributes;

#ifdef __cplusplus

class DECLSPEC_UUID("884e202d-217d-11da-b2a4-000e7bbb2b09")
CCryptAttributes;
#endif

EXTERN_C const CLSID CLSID_CCertProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("884e202e-217d-11da-b2a4-000e7bbb2b09")
CCertProperty;
#endif

EXTERN_C const CLSID CLSID_CCertProperties;

#ifdef __cplusplus

class DECLSPEC_UUID("884e202f-217d-11da-b2a4-000e7bbb2b09")
CCertProperties;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyFriendlyName;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2030-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyFriendlyName;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyDescription;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2031-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyDescription;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyAutoEnroll;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2032-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyAutoEnroll;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyRequestOriginator;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2033-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyRequestOriginator;
#endif

EXTERN_C const CLSID CLSID_CCertPropertySHA1Hash;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2034-217d-11da-b2a4-000e7bbb2b09")
CCertPropertySHA1Hash;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyKeyProvInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2036-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyKeyProvInfo;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyArchived;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2037-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyArchived;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyBackedUp;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2038-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyBackedUp;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyEnrollment;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2039-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyEnrollment;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyRenewal;

#ifdef __cplusplus

class DECLSPEC_UUID("884e203a-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyRenewal;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyArchivedKeyHash;

#ifdef __cplusplus

class DECLSPEC_UUID("884e203b-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyArchivedKeyHash;
#endif

EXTERN_C const CLSID CLSID_CCertPropertyEnrollmentPolicyServer;

#ifdef __cplusplus

class DECLSPEC_UUID("884e204c-217d-11da-b2a4-000e7bbb2b09")
CCertPropertyEnrollmentPolicyServer;
#endif

EXTERN_C const CLSID CLSID_CSignerCertificate;

#ifdef __cplusplus

class DECLSPEC_UUID("884e203d-217d-11da-b2a4-000e7bbb2b09")
CSignerCertificate;
#endif

EXTERN_C const CLSID CLSID_CX509NameValuePair;

#ifdef __cplusplus

class DECLSPEC_UUID("884e203f-217d-11da-b2a4-000e7bbb2b09")
CX509NameValuePair;
#endif

EXTERN_C const CLSID CLSID_CX509CertificateRequestPkcs10;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2042-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestPkcs10;
#endif

EXTERN_C const CLSID CLSID_CX509CertificateRequestCertificate;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2043-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestCertificate;
#endif

EXTERN_C const CLSID CLSID_CX509CertificateRequestPkcs7;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2044-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestPkcs7;
#endif

EXTERN_C const CLSID CLSID_CX509CertificateRequestCmc;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2045-217d-11da-b2a4-000e7bbb2b09")
CX509CertificateRequestCmc;
#endif

EXTERN_C const CLSID CLSID_CX509Enrollment;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2046-217d-11da-b2a4-000e7bbb2b09")
CX509Enrollment;
#endif

EXTERN_C const CLSID CLSID_CX509EnrollmentWebClassFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2049-217d-11da-b2a4-000e7bbb2b09")
CX509EnrollmentWebClassFactory;
#endif

EXTERN_C const CLSID CLSID_CX509EnrollmentHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2050-217d-11da-b2a4-000e7bbb2b09")
CX509EnrollmentHelper;
#endif

EXTERN_C const CLSID CLSID_CX509MachineEnrollmentFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("884e2051-217d-11da-b2a4-000e7bbb2b09")
CX509MachineEnrollmentFactory;
#endif

EXTERN_C const CLSID CLSID_CX509EnrollmentPolicyActiveDirectory;

#ifdef __cplusplus

class DECLSPEC_UUID("91f39027-217f-11da-b2a4-000e7bbb2b09")
CX509EnrollmentPolicyActiveDirectory;
#endif

EXTERN_C const CLSID CLSID_CX509EnrollmentPolicyWebService;

#ifdef __cplusplus

class DECLSPEC_UUID("91f39028-217f-11da-b2a4-000e7bbb2b09")
CX509EnrollmentPolicyWebService;
#endif

EXTERN_C const CLSID CLSID_CX509PolicyServerListManager;

#ifdef __cplusplus

class DECLSPEC_UUID("91f39029-217f-11da-b2a4-000e7bbb2b09")
CX509PolicyServerListManager;
#endif

EXTERN_C const CLSID CLSID_CX509PolicyServerUrl;

#ifdef __cplusplus

class DECLSPEC_UUID("91f3902a-217f-11da-b2a4-000e7bbb2b09")
CX509PolicyServerUrl;
#endif

EXTERN_C const CLSID CLSID_CX509CertificateTemplateADWritable;

#ifdef __cplusplus

class DECLSPEC_UUID("8336E323-2E6A-4a04-937C-548F681839B3")
CX509CertificateTemplateADWritable;
#endif
#endif /* __CERTENROLLLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_certenroll_0000_0087 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0087_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


