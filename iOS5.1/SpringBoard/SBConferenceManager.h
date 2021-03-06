/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CNFConferenceController;

@interface SBConferenceManager : NSObject
{
    CNFConferenceController *_conferenceController;
    unsigned int _chatState;
}

+ (id)sharedInstance;
+ (void)initialize;
- (id)init;
@property(readonly) CNFConferenceController *conferenceController;
- (BOOL)videoConferenceInvitationExists;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)inConference;
- (BOOL)canStartConference;
- (void)dealloc;
- (void)_handleInvitation:(id)arg1;
- (void)_conferenceStateChanged:(id)arg1;
- (void)endConference;
- (id)currentCallRemoteUserId;
- (id)currentCallStatusDisplayString;
- (void)_conferenceAvailabilityChanged:(id)arg1;
- (void)_conferenceCapabilityChanged:(id)arg1;
- (void)updateStatusBar;
- (void)_updateStatusBar;
@property(readonly) unsigned int chatState; // @synthesize chatState=_chatState;

@end

