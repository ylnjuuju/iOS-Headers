/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _MFNetworkObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id _block;
}

- (void)execute;
- (void)dealloc;
- (id)initWithBlock:(id)arg1 queue:(void)arg2;

@end

