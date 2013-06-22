/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIApplication.h"

#import "UIApplicationDelegate-Protocol.h"

@class UIWindow;

@interface SUApplication : UIApplication <UIApplicationDelegate>
{
    BOOL _terminateOnNextSuspend;
    UIWindow *_window;
}

- (void)_teardownUI;
- (void)_setupUI;
- (void)_exitIfStoreNotAvailable;
- (void)_exitForStoreNotAvailable;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (double)defaultImageSnapshotExpiration;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)applicationSuspend:(struct __GSEvent *)arg1 settings:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)_runScriptTestWithOptions:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)runTestInvocation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

