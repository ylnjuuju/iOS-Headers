/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMappedObjectStore, NSMutableDictionary, NSString;

@interface NSPersistentStoreMap : NSObject
{
    NSMappedObjectStore *_store;
    NSString *_databaseUUID;
    NSMutableDictionary *_storeMetadata;
    unsigned long long _nextPK64;
    NSMutableDictionary *_mappings;
}

+ (void)initialize;
- (id)_storeMetadataForSaving;
- (void)setMetadata:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (id)metadata;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (void)setDatabaseUUID:(id)arg1;
- (id)databaseUUID;
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
- (unsigned long long)nextPK64;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (id)handleFetchRequest:(id)arg1;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)store;
- (id)externalMapping;
- (id)configurationName;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end

