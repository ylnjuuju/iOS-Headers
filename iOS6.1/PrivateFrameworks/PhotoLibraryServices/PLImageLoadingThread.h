/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, PLImageCache, PLPhotoLibrary;

@interface PLImageLoadingThread : NSObject
{
    BOOL _running;
    BOOL _paused;
    BOOL _canceled;
    NSMutableSet *_queues;
    NSMutableDictionary *_requestsByKey;
    NSObject<OS_dispatch_queue> *_isolation;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_highestPriorityQueue;
    NSMutableArray *_highestPriorityRequests;
    NSObject<OS_dispatch_queue> *_highPriorityQueue;
    NSMutableArray *_highPriorityRequests;
    NSObject<OS_dispatch_queue> *_normalPriorityQueue;
    NSMutableArray *_normalPriorityRequests;
    PLPhotoLibrary *_library;
    PLImageCache *_weak_cache;
}

- (void)_serviceRequest:(id)arg1;
- (void)_serviceRequestFrom:(id)arg1;
- (BOOL)_dequeueRequest:(id)arg1;
- (void)_requeueRequest:(id)arg1 oldPriority:(int)arg2;
- (void)_enqueueRequest:(id)arg1;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (id)loadImageFromSource:(id)arg1 asset:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 completion:(id)arg6;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)addImageLoadingQueue:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)cacheWasDeallocated;
- (void)_start;
- (void)dealloc;
- (id)_imageCache;
- (void)_setImageCache:(id)arg1;
- (id)initWithImageCache:(id)arg1;

@end

