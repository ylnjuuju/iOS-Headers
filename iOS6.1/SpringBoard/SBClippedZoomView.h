/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBZoomView.h"

@class SBFullscreenZoomView, UIView;

@interface SBClippedZoomView : SBZoomView
{
    SBFullscreenZoomView *_fullscreenZoomViewToClip;
    UIView *_clippingView;
}

- (void)setRoundedCorners:(int)arg1 withCornersFrame:(struct CGRect)arg2;
- (void)dealloc;
- (id)initWithClippingFrame:(struct CGRect)arg1 fullscreenZoomView:(id)arg2;

@end

