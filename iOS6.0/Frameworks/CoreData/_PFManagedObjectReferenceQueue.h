/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject
{
    int _cd_rc;
    int _spinLock;
    int _flags;
    int _signalRunloop;
    NSManagedObjectContext *_context;
    struct __CFArray *_queue;
    struct __CFRunLoopObserver *_rlObserver;
}

- (BOOL)_queueBatchForDealloc:(struct __CFArray *)arg1;
- (BOOL)_queueForDealloc:(id)arg1;
- (BOOL)_signal;
- (BOOL)_GC_queueForDealloc:(id)arg1;
- (void)_processReferenceQueue:(BOOL)arg1;
- (int)_queueCount;
- (void)_contextDidDealloc;
- (void)finalize;
- (void)dealloc;
- (void)_unregisterRunloopObservers;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (void)release;
- (id)retain;
- (id)initForContext:(id)arg1;

@end
