/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface PUPhotosSharingProgressOverlay : UIView
{
    UIView *_progressView;
}

@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (id)grayScaleImageFromImage:(id)arg1;
- (id)screenshotImage;
- (id)statusBarWindow;
- (void)tearDownOverlay;
- (void)setupOverlay;
- (void)willRemoveSubview:(id)arg1;
- (void)addProgressView:(id)arg1 atScreenFrame:(struct CGRect)arg2;
- (id)initOverlay;

@end

