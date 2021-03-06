/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/MLLibraryOperation.h>

@class MLActiveTransaction, NSDictionary, NSUUID;

@interface MLTemplatedDatabaseOperation : MLLibraryOperation
{
    unsigned long long _type;
    NSUUID *_uuid;
    NSDictionary *_attributes;
    MLActiveTransaction *_transaction;
}

+ (id)databaseOperationForType:(unsigned long long)arg1 withTransaction:(id)arg2 library:(id)arg3;
@property(retain, nonatomic) MLActiveTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_operationTypeDescription;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithLibrary:(id)arg1 transaction:(id)arg2;

@end

