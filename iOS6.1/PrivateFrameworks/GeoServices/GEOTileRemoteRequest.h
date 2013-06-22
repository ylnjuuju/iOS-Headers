/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOTileKeyList;

@interface GEOTileRemoteRequest : NSObject
{
    GEOTileKeyList *_list;
    struct __CFRunLoop *_queue;
    unsigned long long _handle;
    BOOL _movedToNetwork;
}

@property BOOL movedToNetwork; // @synthesize movedToNetwork=_movedToNetwork;
@property(readonly, nonatomic) struct __CFRunLoop *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) GEOTileKeyList *list; // @synthesize list=_list;
- (void)dealloc;
- (id)initWithList:(id)arg1 handle:(unsigned long long)arg2 queue:(struct __CFRunLoop *)arg3;

@end

