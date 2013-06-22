/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

#import "PLCameraButtonBarSubviewProtocol-Protocol.h"

@class UIImage, UIImageView;

@interface PLCameraVideoSwitch : UIControl <PLCameraButtonBarSubviewProtocol>
{
    UIImageView *_wellImageView;
    UIImageView *_handleImageView;
    UIImageView *_cameraImageView;
    UIImageView *_videoImageView;
    int _buttonBarStyle;
    UIImage *_wellImage;
    UIImage *_handleImage;
    UIImage *_handleDownImage;
    UIImage *_cameraImage;
    UIImage *_cameraLandscapeImage;
    UIImage *_videoImage;
    UIImage *_videoLandscapeImage;
    float _trackOriginY;
    struct CGPoint _handleOffOrigin;
    struct CGPoint _handleOnOrigin;
    struct CGRect _hitRect;
    int _orientation;
    BOOL _watchingOrientationChanges;
    float _trackingHorizontalLocation;
    unsigned int _on:1;
    unsigned int _didLayoutViews:1;
    unsigned int _didMove:1;
    unsigned int _lockEnabled:1;
}

- (int)orientation;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_animateImageView:(id)arg1 toTransform:(struct CGAffineTransform)arg2 withImage:(id)arg3 animated:(BOOL)arg4;
- (struct CGAffineTransform)_rotationAndTranslationTransformForDeviceOrientation:(int)arg1;
- (struct CGAffineTransform)_rotationTransformForDeviceOrientation:(int)arg1;
- (struct CGAffineTransform)_transformForVideoImageForDeviceOrientation:(int)arg1;
- (struct CGAffineTransform)_transformForCameraImageForDeviceOrientation:(int)arg1;
- (struct CGAffineTransform)_transformWithTranslationOffset:(struct CGSize)arg1 deviceOrientation:(int)arg2;
- (void)_setOn:(BOOL)arg1 animationDuration:(float)arg2;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isOn) BOOL on;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)buttonBar:(id)arg1 didChangeMode:(int)arg2;
- (void)setLockEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_updateEnabledness;
- (void)_loadTallImageResourcesForButtonBarMode:(int)arg1;
- (void)_loadTrackingResources;
- (void)_loadLandscapeResources;
- (void)_loadInitialResources;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonBarStyle:(int)arg2;

@end

