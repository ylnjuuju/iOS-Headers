/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlert.h"

@interface SBVoiceControlAlert : SBAlert
{
    struct {
        unsigned int shouldBeActivated:1;
        unsigned int isReadyToBeActivated:1;
        unsigned int hasBeenActivated:1;
    } _voiceControlFlags;
}

+ (id)pendingOrActiveAlert;
+ (void)registerForAlerts;
+ (void)unregisterForAlerts;
+ (BOOL)shouldEnterVoiceControl;
+ (BOOL)resetVoiceControlIfNecessary:(BOOL)arg1;
- (void)_resign;
- (void)_makeActive;
- (void)_prime;
- (void)_setRoutingAttributesForWiredHeadset:(BOOL)arg1;
- (id)init;
- (id)initFromWiredHeadsetButton;
- (id)initFromMenuButton;
- (void)activateWhenReady;
- (void)cancelIfNotActivated;
- (void)cancel;
- (void)dealloc;
- (void)handleHeadsetButtonUpFromActivation:(BOOL)arg1;
- (BOOL)handleMenuButtonTap;
- (double)autoDimTime;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;

@end
