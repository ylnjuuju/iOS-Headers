/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface IMDAppleIDNotificationCenter : NSObject
{
    NSMutableArray *_availableNotifications;
    NSMutableArray *_usageNotifications;
}

+ (id)sharedInstance;
- (void)removeNotificationsForSession:(id)arg1;
- (void)addUsageNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(int)arg5;
- (void)addAvailableNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(int)arg5;
- (void)_noteNewUsageNotification:(id)arg1;
- (void)_noteNewAvailableNotification:(id)arg1;
- (void)_processUsageNotifications;
- (void)_processAvailableNotifications;
- (void)_postUsageNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5;
- (void)_postAvailableNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5;
- (void)dealloc;
- (id)init;

@end

