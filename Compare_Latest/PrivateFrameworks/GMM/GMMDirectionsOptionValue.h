/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GMMDirectionsOptionValue : PBCodable
{
    int _optionID;
    BOOL _hasValue;
    int _value;
}

@property(nonatomic) int value; // @synthesize value=_value;
@property(nonatomic) BOOL hasValue; // @synthesize hasValue=_hasValue;
@property(nonatomic) int optionID; // @synthesize optionID=_optionID;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
