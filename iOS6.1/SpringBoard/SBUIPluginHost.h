/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBUIPluginControllerHost-Protocol.h"
#import "SBUIPluginViewController-Protocol.h"

@class SBUIPluginController;

@interface SBUIPluginHost : NSObject <SBUIPluginControllerHost, SBUIPluginViewController>
{
    SBUIPluginController *_plugin;
    BOOL _expectsFaceContact;
    BOOL _isPluginRunning;
}

@property(retain) SBUIPluginController *pluginController; // @synthesize pluginController=_plugin;
- (void)uiPlugin:(id)arg1 ignoresKeyboardAvoidance:(BOOL)arg2;
- (void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)uiPluginUserEventOccurred:(id)arg1;
- (BOOL)uiPlugin:(id)arg1 openURL:(id)arg2;
- (BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3;
- (void)uiPlugin:(id)arg1 setExpectsFaceContact:(BOOL)arg2;
- (void)_updateFaceContactForVisibilityChange:(BOOL)arg1;
- (BOOL)uiPluginExpectsFaceContact:(id)arg1;
- (void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2;
- (void)_updateExpectsFaceContactWithChangedValue:(BOOL)arg1;
- (void)uiPluginWantsSizeUpdate:(id)arg1 revealMode:(int)arg2 withBlock:(id)arg3;
- (BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 revealMode:(int)arg3 completion:(id)arg4;
- (BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
- (void)uiPluginWantsDismissal:(id)arg1 withAnimation:(BOOL)arg2;
- (BOOL)pluginSuppressesNotifications;
- (BOOL)pluginWantsScreenDimInterval:(double *)arg1;
- (BOOL)pluginWantsInterfaceOrientation:(int *)arg1;
- (BOOL)pluginHandledWiredMicButtonTap;
- (BOOL)pluginHandledMenuButtonTap;
- (BOOL)pluginHandledMenuButtonDownEvent;
- (BOOL)pluginHandledPasscodeUnlockWithCompletion:(id)arg1;
- (struct CGSize)pluginDesiredSizeForRevealMode:(int)arg1;
- (void)dismissPluginForEvent:(int)arg1;
- (void)_dismissUIPlugin:(id)arg1 animated:(BOOL)arg2;
- (void)cancelPendingPluginActivationEvent:(int)arg1;
- (void)preparePluginForActivationEvent:(int)arg1 afterInterval:(double)arg2;
- (BOOL)pluginWantsActivationEvent:(int)arg1 interval:(double *)arg2;
- (BOOL)activatePluginForEvent:(int)arg1 context:(void *)arg2;
- (BOOL)activatePluginForEvent:(int)arg1;
- (BOOL)expectsFaceContact;
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)view;
@property(readonly) BOOL isPluginRunning;
@property(readonly) BOOL isPluginVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_notePluginVisibilityDidChange;
- (void)_restoreOrientation;
- (void)_remoteLocked:(id)arg1;
- (void)_deviceBlocked:(id)arg1;
- (void)_uiLocked:(id)arg1;
- (void)_noteDeviceLockedOrBlocked;
- (void)_pluginWillUnload:(id)arg1;
- (void)_pluginDidLoad:(id)arg1;
- (void)_removeObserversForPlugin:(id)arg1;
- (BOOL)pluginSupportedAndEnabled;
- (void)dealloc;
- (id)init;

@end

