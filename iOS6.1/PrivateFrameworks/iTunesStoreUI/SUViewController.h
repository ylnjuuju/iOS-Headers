/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "ISOperationDelegate-Protocol.h"
#import <iTunesStoreUI/SUScriptNativeObject-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationItem, SURotationController, SUViewControllerContext, SUViewControllerScriptProperties, UIBarButtonItem;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate>
{
    SUViewControllerScriptProperties *_cachedScriptProperties;
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    SUClientInterface *_clientInterface;
    BOOL _excludeFromNavigationHistory;
    UIBarButtonItem *_exitStoreButton;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    BOOL _loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    int _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    BOOL _showsLibraryButton;
    int _transitionSafetyCount;
}

@property(nonatomic) BOOL showsLibraryButton; // @synthesize showsLibraryButton=_showsLibraryButton;
@property(nonatomic) BOOL shouldInvalidateForMemoryPurge; // @synthesize shouldInvalidateForMemoryPurge=_shouldInvalidateForMemoryPurge;
@property(nonatomic) BOOL shouldExcludeFromNavigationHistory; // @synthesize shouldExcludeFromNavigationHistory=_excludeFromNavigationHistory;
@property(readonly, nonatomic, getter=_restoredContext) SUViewControllerContext *_restoredContext; // @synthesize _restoredContext;
@property(readonly, nonatomic, getter=_pendingDialogs) NSArray *_pendingDialogs; // @synthesize _pendingDialogs;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIViewController *inputAccessoryViewController; // @synthesize inputAccessoryViewController=_inputAccessoryViewController;
@property(readonly, nonatomic) UIViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(readonly, nonatomic, getter=_isEnteringForeground) BOOL _enteringForeground; // @synthesize _enteringForeground=_isEnteringForeground;
@property(readonly, nonatomic, getter=_cachedScriptProperties) SUViewControllerScriptProperties *_cachedScriptProperties; // @synthesize _cachedScriptProperties;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_invalidateForMemoryPurge;
- (void)_reloadLibraryButton;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (void)_dialogFinishedNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)_presentFooterAnimationDidStop;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)_exitStoreButtonAction:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (id)inputAccessoryView;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)_rotationController;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)viewControllerFactory;
- (id)tabBarItem;
- (void)storePageProtocolDidChange;
- (void)setTitle:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)resetRestoredContext;
@property(readonly, nonatomic) SUNavigationItem *navigationItem; // @dynamic navigationItem;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)loadView;
- (int)interfaceOrientation;
- (id)_existingNavigationItem;
- (void)didReceiveMemoryWarning;
- (id)copyArchivableContext;
- (BOOL)_canReloadView;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (void)reload;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (id)newRotationController;
@property(readonly, nonatomic, getter=isVisibleAndFrontmost) BOOL visibleAndFrontmost;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
- (void)invalidateForMemoryPurge;
- (void)invalidate;
- (void)handleApplicationURL:(id)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)dismissAfterDialogs;
@property(readonly, nonatomic) NSString *defaultPNGName;
@property(readonly, nonatomic) double defaultPNGExpirationTime;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (void)cancelOperations;
- (id)copyChildViewControllersForReason:(int)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)initWithSection:(id)arg1;
- (id)init;

@end

