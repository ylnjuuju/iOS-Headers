/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectID;

@interface NSManagedObject : NSObject
{
    int _cd_rc;
    unsigned long _cd_stateFlags;
    id _cd_rawData;
    id _cd_entity;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    unsigned long _cd_extraFlags;
    id _cd_observationInfo;
    id *_cd_snapshots;
    unsigned long _cd_lockingInfo;
    id _cd_queueReference;
}

+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+ (void)initialize;
+ (id)allocWithZone_10_4:(struct _NSZone *)arg1;
+ (id)alloc_10_4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (char *)_transientPropertiesChangesMask__;
+ (id)_PFPlaceHolderSingleton_core;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (void)_initializeAccessorStubs;
+ (void)_initializePrimitiveAccessorStubs;
+ (BOOL)_hasOverriddenAwake;
+ (void)_release_1;
+ (void)release;
+ (id)_retain_1;
+ (id)allocWithEntity:(id)arg1;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;
+ (unsigned int)allocBatch:(id *)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;
+ (BOOL)_useFastValidationMethod;
+ (BOOL)_isGeneratedClass_1;
+ (BOOL)_isGeneratedClass;
+ (id)retain;
+ (void)_entityDeallocated;
+ (id)_PFPlaceHolderSingleton;
+ (Class)classForEntity:(id)arg1;
+ (CDStruct_c4c2dd08 *)_PFMOClassFactoryData;
- (BOOL)hasChanges;
- (id)changedValuesForCurrentEvent;
- (unsigned int)faultingState;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)hasPersistentChangedValues;
- (id)changedValues;
- (id)committedValuesForKeys:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForDelete:(id *)arg1;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)didSave;
- (void)willSave;
- (void)prepareForDeletion;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)didChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)didAccessValueForKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (id)observationInfo;
- (void)setObservationInfo:(id)arg1;
- (BOOL)hasFaultForRelationshipNamed:(id)arg1;
- (BOOL)isFault;
- (BOOL)isDeleted;
- (BOOL)isUpdated;
- (BOOL)isInserted;
- (id)objectID;
- (id)entity;
- (id)managedObjectContext;
- (id)init;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)description;
- (id)_descriptionValues;
- (void)dealloc;
- (void)finalize;
- (int)_batch_release__;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)didRefresh:(BOOL)arg1;
- (void)willRefresh:(BOOL)arg1;
- (void)didFireFault;
- (void)willFireFault;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(BOOL)arg2;
- (id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (void)diffOrderedSets:(id)arg1:(id)arg2:(id *)arg3:(id *)arg4:(id *)arg5:(id *)arg6:(id *)arg7;
- (BOOL)_isKindOfEntity:(id)arg1;
- (BOOL)_validateValue:(id *)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned int)arg4 error:(id *)arg5;
- (BOOL)_validateForSave:(id *)arg1;
- (BOOL)_validatePropertiesWithError:(id *)arg1;
- (id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id *)arg2;
- (void)_prepropagateDeleteForMerge;
- (void)_propagateDelete;
- (void)_propagateDelete:(BOOL)arg1;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned int)arg3 onSet:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (BOOL)_isValidRelationshipDestination__;
- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (id)_implicitObservationInfo;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (void)_clearRawPropertiesWithHint:(struct _NSRange)arg1;
- (id)_changedTransientProperties__;
- (id)_newCommittedSnapshotValues;
- (id)_transientProperties__;
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_persistentProperties__;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_allProperties__;
- (id)_newSnapshotForUndo__;
- (id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2;
- (id)_newNestedSaveChangedValuesForParent:(id)arg1;
- (id)_newChangedValuesForRefresh__;
- (id)_newPropertiesForRetainedTypes:(unsigned int *)arg1 andCopiedTypes:(unsigned int *)arg2 preserveFaults:(BOOL)arg3;
- (id)_referenceQueue__;
- (id)_faultHandler__;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned int)arg1 newValue:(id)arg2;
- (void)_setOriginalSnapshot__:(id)arg1;
- (id)_originalSnapshot__;
- (void)_setObjectID__:(id)arg1;
- (void)_setVersionReference__:(unsigned int)arg1;
- (unsigned int)_versionReference__;
- (id)_changedValuesForCurrentEvent;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (id)_reservedCurrentEventSnapshot;
- (void)_setLastSnapshot__:(id)arg1;
- (id)_lastSnapshot__;
- (unsigned int)_stateFlags;
- (void)_setUnprocessedUpdate__:(BOOL)arg1;
- (BOOL)_isUnprocessedUpdate__;
- (void)_setUnprocessedInsertion__:(BOOL)arg1;
- (BOOL)_isUnprocessedInsertion__;
- (void)_setUnprocessedDeletion__:(BOOL)arg1;
- (BOOL)_isUnprocessedDeletion__;
- (void)_setPendingUpdate__:(BOOL)arg1;
- (BOOL)_isPendingUpdate__;
- (void)_setPendingInsertion__:(BOOL)arg1;
- (BOOL)_isPendingInsertion__;
- (void)_setPendingDeletion__:(BOOL)arg1;
- (BOOL)_isPendingDeletion__;
- (void)_setHasRetainedStoreResources__:(BOOL)arg1;
- (BOOL)_hasRetainedStoreResources__;
- (void)_setSuppressingKVO__:(BOOL)arg1;
- (BOOL)_isSuppressingKVO__;
- (void)_setSuppressingChangeNotifications__:(BOOL)arg1;
- (BOOL)_isSuppressingChangeNotifications__;
- (void)_clearAllChanges__;
- (void)_clearUnprocessedChanges__;
- (BOOL)_hasUnprocessedChanges__;
- (void)_clearPendingChanges__;
- (BOOL)_hasPendingChanges;
- (BOOL)_hasAnyObservers__;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long)arg3 flags:(long)arg4;
- (id)_genericValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (BOOL)implementsSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void *)methodForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)_defaultValidation:(id *)arg1 error:(id *)arg2;

@end

