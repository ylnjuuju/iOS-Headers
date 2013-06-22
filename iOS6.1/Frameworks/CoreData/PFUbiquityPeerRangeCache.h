/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSPersistentStore, NSString, PFUbiquityLocation;

@interface PFUbiquityPeerRangeCache : NSObject
{
    NSMutableDictionary *_cachedRanges;
    NSMutableDictionary *_allEntityRanges;
    NSMutableDictionary *_translatedGlobalIDs;
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSPersistentStore *_privateStore;
    BOOL _cachedStorePeerRanges;
}

+ (unsigned int)peerRangeStartForPrimaryKey:(unsigned int)arg1;
+ (int)integerFromPrimaryKeyString:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSPersistentStore *privateStore; // @synthesize privateStore=_privateStore;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSDictionary *translatedGlobalIDs; // @synthesize translatedGlobalIDs=_translatedGlobalIDs;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 error:(id *)arg2;
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id *)arg2;
- (id)createGlobalObjectIDForManagedObjectID:(id)arg1;
- (unsigned int)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned int)arg3;
- (id)cachedRangeForLocalPrimaryKey:(unsigned int)arg1 ofEntityNamed:(id)arg2;
- (id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned int)arg3;
- (BOOL)cacheSQLCorePeerRange:(id)arg1 error:(id *)arg2;
- (BOOL)refreshPeerRangeCache:(id *)arg1;
- (BOOL)cachePeerRanges:(id *)arg1;
- (void)dealloc;
- (id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalPeerID:(id)arg4;

@end

