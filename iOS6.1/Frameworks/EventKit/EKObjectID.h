/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface EKObjectID : NSObject <NSCopying, NSCoding>
{
    BOOL _temporary;
    int _entityType;
    int _rowID;
}

+ (id)objectIDWithURL:(id)arg1;
+ (id)temporaryObjectIDWithEntityType:(int)arg1;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;
+ (id)objectIDWithCADObjectID:(CDStruct_1ef3fb1f)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)URIRepresentation;
- (id)stringRepresentation;
- (id)description;
- (BOOL)isTemporary;
- (CDStruct_1ef3fb1f)CADObjectID;
- (int)rowID;
- (int)entityType;
- (id)entityName;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(BOOL)arg3;

@end

