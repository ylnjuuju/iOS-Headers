/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;
    BOOL _flushEverything;
}

@property(nonatomic) BOOL flushEverything; // @synthesize flushEverything=_flushEverything;
- (void)dealloc;
- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 atIndex:(unsigned int)arg4;
- (unsigned int)tilesetCount;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3;
- (id)init;

@end
