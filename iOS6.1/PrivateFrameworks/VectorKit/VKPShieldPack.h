/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

@interface VKPShieldPack : PBCodable
{
    NSMutableArray *_atlas;
    NSMutableArray *_shields;
}

@property(retain, nonatomic) NSMutableArray *shields; // @synthesize shields=_shields;
@property(retain, nonatomic) NSMutableArray *atlas; // @synthesize atlas=_atlas;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shieldsAtIndex:(unsigned int)arg1;
- (unsigned int)shieldsCount;
- (void)addShields:(id)arg1;
- (void)clearShields;
- (id)atlasAtIndex:(unsigned int)arg1;
- (unsigned int)atlasCount;
- (void)addAtlas:(id)arg1;
- (void)clearAtlas;
- (void)dealloc;

@end

