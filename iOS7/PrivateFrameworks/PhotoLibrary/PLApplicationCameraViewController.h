/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLCameraViewController.h>

#import "PLAssetContainerListChangeObserver-Protocol.h"
#import "PLAssetContainerObserver-Protocol.h"
#import "PLCameraPreviewWellImageChangeObserver-Protocol.h"
#import "PLPhotoBrowserControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<PLAlbumProtocol>, PLCameraImageWellView, PLKeepDaemonAliveAssertion, UIToolbar, UIViewController;

@interface PLApplicationCameraViewController : PLCameraViewController <PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLCameraPreviewWellImageChangeObserver, UINavigationControllerDelegate, PLPhotoBrowserControllerDelegate>
{
    PLCameraImageWellView *_photosButton;
    id _previewButtonAction;
    id _doneButtonAction;
    NSDictionary *_configuration;
    id <PLApplicationCameraViewControllerDelegate> _delegate;
    _Bool _usesSessionAlbum;
    double _sessionStartTime;
    NSObject<OS_dispatch_queue> *_photoStreamDispatchQueue;
    PLKeepDaemonAliveAssertion *_keepDaemonAliveAssertion;
    _Bool _isReadyToTest;
    long long _testPictureCounter;
    long long _testPicturesReceivedCounter;
    double _testPictureRepeatDelay;
    _Bool __shouldShowCameraRoll;
    _Bool __dismissingCameraRoll;
    _Bool __dismissingCameraRollForSuspension;
    _Bool __shouldRetryDismissal;
    _Bool __handlesVolumeButtons;
    _Bool __ignoringVolumeButtons;
    struct NSObject *_cameraAlbum;
    UIToolbar *_bottomButtonBar;
    UIViewController *__cameraRollViewController;
}

@property(nonatomic, setter=_setIgnoringVolumeButtons:) _Bool _ignoringVolumeButtons; // @synthesize _ignoringVolumeButtons=__ignoringVolumeButtons;
@property(nonatomic, setter=_setHandlesVolumeButtons:) _Bool _handlesVolumeButtons; // @synthesize _handlesVolumeButtons=__handlesVolumeButtons;
@property(readonly, nonatomic) UIViewController *_cameraRollViewController; // @synthesize _cameraRollViewController=__cameraRollViewController;
@property(readonly, nonatomic) _Bool _shouldRetryDismissal; // @synthesize _shouldRetryDismissal=__shouldRetryDismissal;
@property(nonatomic, getter=_isDismissingCameraRollForSuspension, setter=_setDismissingCameraRollForSuspension:) _Bool _dismissingCameraRollForSuspension; // @synthesize _dismissingCameraRollForSuspension=__dismissingCameraRollForSuspension;
@property(nonatomic, getter=_isDismissingCameraRoll, setter=_setDismissingCameraRoll:) _Bool _dismissingCameraRoll; // @synthesize _dismissingCameraRoll=__dismissingCameraRoll;
@property(nonatomic, setter=_setShouldShowCameraRoll:) _Bool _shouldShowCameraRoll; // @synthesize _shouldShowCameraRoll=__shouldShowCameraRoll;
@property(readonly, nonatomic) UIToolbar *bottomButtonBar; // @synthesize bottomButtonBar=_bottomButtonBar;
@property(nonatomic) id <PLApplicationCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) id previewButtonAction; // @synthesize previewButtonAction=_previewButtonAction;
- (void)_setCameraAlbum:(struct NSObject *)arg1;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *cameraAlbum; // @synthesize cameraAlbum=_cameraAlbum;
@property(nonatomic) double testPictureRepeatDelay; // @synthesize testPictureRepeatDelay=_testPictureRepeatDelay;
@property(nonatomic) long long testPictureCounter; // @synthesize testPictureCounter=_testPictureCounter;
- (void)setUsesSessionAlbum:(_Bool)arg1;
- (void)preferencesDidChange;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_setWantsVolumeButtonEvents:(_Bool)arg1;
- (void)_updateVolumeButtonEventsAbility;
- (void)dismissCameraRollAnimated:(_Bool)arg1 forSuspension:(_Bool)arg2;
- (void)dismissCameraRoll:(id)arg1;
- (id)_currentPhotoBrowser;
- (struct NSObject *)_cameraAlbum;
- (void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2;
- (void)_refreshCameraUIForAlbumChange;
- (void)assetContainerDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_libraryDidChange:(id)arg1;
- (void)_handleVolumeButtonUp;
- (void)_handleVolumeButtonDown;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (_Bool)_shouldResumeTorch;
- (id)_dictionaryFromPackedArray:(id)arg1;
- (id)_packedArrayFromDictionary:(id)arg1;
- (void)_saveConfiguration;
- (void)_applyConfiguration;
- (void)_defaultCameraDevice:(id *)arg1 cameraMode:(id *)arg2;
- (_Bool)_shouldResetMode:(id)arg1;
- (void)prepareForDefaultImageSnapshot;
- (void)animateBlurForSuspension;
- (_Bool)shouldAnimateBlurForSuspension;
- (void)stopCameraPreviewAnimated:(_Bool)arg1;
- (void)_startCameraPreviewWithPreviewStartedBlock:(id)arg1;
- (_Bool)showingCameraPreview;
- (id)cameraButtonBar;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(struct NSObject *)arg2;
- (id)newAlbumNavigationControllerForAlbum:(struct NSObject *)arg1;
- (_Bool)_cameraIsRunning;
- (void)cleanupForCameraEnd;
- (void)setupForCameraStart;
- (void)_kickoffCameraControllerPreview;
- (void)cameraViewFinishedTakingPicture:(id)arg1;
- (void)takePicture;
- (void)startPictureTest;
- (void)_startPictureTestAfterSeconds:(double)arg1;
- (void)testSetAutofocusDisabled:(_Bool)arg1;
- (void)testSetHDROn:(_Bool)arg1;
- (void)cameraViewDidFinishUnblurringForPreview:(id)arg1;
- (void)cameraViewFinishedSuspensionBlur:(id)arg1;
- (_Bool)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)presentCameraRollAboveCameraView:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_applyAutorotationCorrectingTransformForOrientation:(long long)arg1;
- (struct CGAffineTransform)_autorotationCorrectingTransformFromOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_getRotationContentSettings:(CDStruct_ebaa735e *)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareForSuspension;
- (void)viewWillShowForLaunch;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithSessionID:(id)arg1 usesCameraLocationBundleID:(_Bool)arg2 startPreviewImmediately:(_Bool)arg3;
- (id)initWithSessionID:(id)arg1 startPreviewImmediately:(_Bool)arg2;

@end

