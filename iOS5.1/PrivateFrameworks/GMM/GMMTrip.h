/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray, NSString;

@interface GMMTrip : PBCodable
{
    NSMutableArray *_routes;
    NSString *_tripSummary;
    BOOL _hasDetailLevel;
    int _detailLevel;
}

@property(nonatomic) BOOL hasDetailLevel; // @synthesize hasDetailLevel=_hasDetailLevel;
@property(retain, nonatomic) NSString *tripSummary; // @synthesize tripSummary=_tripSummary;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) int detailLevel; // @synthesize detailLevel=_detailLevel;
@property(readonly, nonatomic) BOOL hasTripSummary;
- (id)routeAtIndex:(unsigned int)arg1;
- (unsigned int)routesCount;
- (void)addRoute:(id)arg1;
- (void)dealloc;

@end

