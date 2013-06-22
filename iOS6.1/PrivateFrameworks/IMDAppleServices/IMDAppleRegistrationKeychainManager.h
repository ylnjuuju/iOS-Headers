/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMTimer, NSArray, NSMutableArray, NSRecursiveLock;

@interface IMDAppleRegistrationKeychainManager : NSObject
{
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;
    NSRecursiveLock *_lock;
    id _purgeCancelBlock;
    id _purgeEnqueueBlock;
    BOOL _loaded;
}

+ (id)keychainAccessGroupForVersion:(unsigned int)arg1;
+ (id)keychainAccountForVersion:(unsigned int)arg1;
+ (id)keychainServiceForVersion:(unsigned int)arg1;
+ (id)sharedInstance;
- (BOOL)removeAllRegistrations;
- (BOOL)removeRegistration:(id)arg1;
- (BOOL)addRegistration:(id)arg1;
@property(readonly, nonatomic) NSArray *registrations; // @dynamic registrations;
- (id)registrationWithServiceType:(int)arg1 registrationType:(int)arg2 value:(id)arg3;
- (void)reloadFromKeychain;
- (void)_reloadFromDictionary:(id)arg1;
- (void)_loadIfNeeded;
- (void)_setPurgeTimer;
- (void)_flush;
- (BOOL)saveToKeychain;
- (BOOL)_saveToKeychain;
- (void)systemDidFinishMigration;
- (void)dealloc;
- (id)init;

@end

