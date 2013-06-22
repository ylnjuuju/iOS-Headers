/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MMCSAsset-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSCoding, NSCopying>
{
    NSData *_masterAssetHash;
    NSDictionary *_metadata;
    NSString *_path;
    NSURL *_MMCSURL;
    NSData *_fileData;
    NSError *_error;
    NSString *_type;
    NSData *_fileHash;
    unsigned long long _protocolFileSize;
    NSString *_MMCSAccessHeader;
    NSDate *_MMCSAccessHeaderTimeStamp;
    NSString *_MMCSReceipt;
    NSString *_GUID;
    NSString *_assetCollectionGUID;
    NSDate *_batchCreationDate;
    NSDate *_photoCreationDate;
    id <NSCoding> _userInfo;
}

+ (id)assetWithAsset:(id)arg1;
+ (id)asset;
+ (id)MSASPAssetFromProtocolDictionary:(id)arg1;
@property(retain, nonatomic) id <NSCoding> userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *photoCreationDate; // @synthesize photoCreationDate=_photoCreationDate;
@property(retain, nonatomic) NSDate *batchCreationDate; // @synthesize batchCreationDate=_batchCreationDate;
@property(retain, nonatomic) NSString *assetCollectionGUID; // @synthesize assetCollectionGUID=_assetCollectionGUID;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSString *MMCSReceipt; // @synthesize MMCSReceipt=_MMCSReceipt;
@property(retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp; // @synthesize MMCSAccessHeaderTimeStamp=_MMCSAccessHeaderTimeStamp;
@property(retain, nonatomic) NSString *MMCSAccessHeader; // @synthesize MMCSAccessHeader=_MMCSAccessHeader;
@property(nonatomic) unsigned long long MMCSItemSize; // @synthesize MMCSItemSize=_protocolFileSize;
@property(retain, nonatomic) NSData *MMCSHash; // @synthesize MMCSHash=_fileHash;
@property(retain, nonatomic) NSString *MMCSUTI; // @synthesize MMCSUTI=_type;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSURL *MMCSURL; // @synthesize MMCSURL=_MMCSURL;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSData *masterAssetHash; // @synthesize masterAssetHash=_masterAssetHash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)metadataValueForKey:(id)arg1;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)_fileSizeOnDisk;
- (void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2;
- (int)MMCSOpenNewFileDescriptor;
@property(nonatomic) unsigned long long MMCSItemID;
@property(nonatomic) unsigned long MMCSItemFlags;
- (unsigned long long)_fileSize;
- (id)description;
- (id)init;
- (id)initWithGUID:(id)arg1;
@property(retain, nonatomic) NSError *MMCSError;
@property(nonatomic) unsigned long long protocolFileSize;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSData *fileHash;
- (id)MSASPProtocolDictionary;

@end

