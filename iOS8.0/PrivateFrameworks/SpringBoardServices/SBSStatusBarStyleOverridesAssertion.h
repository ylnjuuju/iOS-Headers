//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString, SBSStatusBarStyleOverridesAssertionData;

@interface SBSStatusBarStyleOverridesAssertion : NSObject
{
    SBSStatusBarStyleOverridesAssertionData *_assertionData;
    CDUnknownBlockType _invalidationHandler;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    NSRecursiveLock *_invalidationLock;
}

+ (id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3;
+ (id)backgroundLocationAssertionForPID:(int)arg1;
@property(retain, nonatomic) NSRecursiveLock *invalidationLock; // @synthesize invalidationLock=_invalidationLock;
@property(retain, nonatomic) SBSStatusBarStyleOverridesAssertionData *assertionData; // @synthesize assertionData=_assertionData;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_callInvalidationHandler;
- (void)invalidateFromServer;
- (void)invalidate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *invalidationQueue; // @synthesize invalidationQueue=_invalidationQueue;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)acquireWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) BOOL isExclusive;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) int statusBarStyleOverrides;
- (void)dealloc;
- (id)initWithStatusBarStyleOverridesAssertionData:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3;

@end

