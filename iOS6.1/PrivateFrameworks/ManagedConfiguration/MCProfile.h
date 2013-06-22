/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSObject<OS_dispatch_queue>, NSString;

@interface MCProfile : NSObject
{
    NSString *_displayName;
    NSString *_profileDescription;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    int _version;
    NSDate *_installDate;
    NSDate *_expiryDate;
    BOOL _encrypted;
    BOOL _isLocked;
    NSString *_removalPasscode;
    BOOL _needsReboot;
    BOOL _isStub;
    NSString *_productBuildVersion;
    NSString *_productVersion;
    NSData *_profileData;
    NSDate *_removalDate;
    NSString *_localizedConsentText;
    int _trustLevel;
    BOOL _trustHasBeenEvaluated;
    NSObject<OS_dispatch_queue> *_trustEvaluationQueue;
    NSString *_signerSummary;
    NSArray *_signerCertificates;
    BOOL _signerHasBeenEvaluated;
    NSObject<OS_dispatch_queue> *_signerEvaluationQueue;
}

+ (int)_evaluateCertificateChain:(id)arg1;
+ (int)_evaluateSignerTrust:(struct __SecTrust *)arg1;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id *)arg3;
+ (id)profileWithData:(id)arg1 outError:(id *)arg2;
+ (id)signerSummaryOfData:(id)arg1 outSignerCertificates:(id *)arg2;
+ (int)evaluateTrustOfData:(id)arg1;
+ (BOOL)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(int)arg5 errorString:(id)arg6 outError:(id *)arg7;
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(int)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(int)arg7 invalidDataErrorString:(id)arg8 outError:(id *)arg9;
+ (id)profileWithDictionary:(id)arg1 fileName:(id)arg2 originalData:(id)arg3 wasEncrypted:(BOOL)arg4 allowEmptyPayload:(BOOL)arg5 outError:(id *)arg6;
+ (id)profileDictionaryFromProfileData:(id)arg1 outWasEncrypted:(char *)arg2 outError:(id *)arg3;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id *)arg4;
+ (id)missingFieldErrorWithField:(id)arg1;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)_malformedProfileError;
@property(readonly, nonatomic) NSString *localizedConsentText; // @synthesize localizedConsentText=_localizedConsentText;
@property(readonly, nonatomic) NSDate *removalDate; // @synthesize removalDate=_removalDate;
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(readonly, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly, nonatomic) BOOL isStub; // @synthesize isStub=_isStub;
@property(readonly, nonatomic) BOOL needsReboot; // @synthesize needsReboot=_needsReboot;
@property(readonly, nonatomic) NSString *removalPasscode; // @synthesize removalPasscode=_removalPasscode;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_isLocked;
@property(retain, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
- (void).cxx_destruct;
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)arg1;
- (void)evaluateSignerTrust;
@property(readonly, nonatomic) BOOL isManagedByProfileService;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSDate *earliestCertificateExpiryDate;
@property(readonly, nonatomic) NSArray *localizedPayloadSummaryByType;
- (id)description;
@property(readonly, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) BOOL isSigned;
- (id)payloadWithUUID:(id)arg1;
@property(readonly, nonatomic) NSArray *payloads;
@property(readonly, nonatomic) NSArray *installationWarnings;
@property(retain, nonatomic) NSArray *signerCertificates;
@property(retain, nonatomic) NSString *signerSummary;
@property(readonly, nonatomic) struct __SecCertificate *signerCertificate;
- (void)__evaluateSignerCertificates;
@property(readonly, nonatomic) int trustLevel;
- (BOOL)containsPayloadOfClass:(Class)arg1;
- (id)stubDictionary;
- (BOOL)writeStubToPath:(id)arg1;
- (BOOL)writeStubToDirectory:(id)arg1;
- (id)malformedProfileErrorWithError:(id)arg1;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id *)arg5;
@property(readonly, nonatomic) NSString *UUIDHashFileName;
@property(readonly, nonatomic) NSString *profileIDHashFileName;
@property(readonly, nonatomic) NSString *stubFileName;

@end

