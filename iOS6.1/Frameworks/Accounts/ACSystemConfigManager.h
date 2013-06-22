/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ACSystemConfigManager : NSObject
{
    struct __SCPreferences *_prefs;
    BOOL _notifyForExternalChangeOnly;
    int _applySkipCount;
}

+ (id)sharedInstance;
- (void)setCallback:(void *)arg1 withContext:(CDStruct_60d14f2d *)arg2;
- (void)setValue:(void *)arg1 forKey:(id)arg2;
- (void)unlockPrefs;
- (BOOL)lockPrefs;
- (void *)getValueForKey:(id)arg1;
- (void)synchronize;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)setCountOfAccounts:(int)arg1 withAccountTypeIdentifier:(id)arg2;
- (int)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (void)_tearDown;
- (void)_keepAlive;
- (void)dealloc;
- (id)init;

@end

