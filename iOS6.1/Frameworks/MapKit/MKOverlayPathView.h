/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKOverlayView.h>

@class NSArray, UIColor;

@interface MKOverlayPathView : MKOverlayView
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
    float _lineWidth;
    int _lineJoin;
    int _lineCap;
    float _miterLimit;
    float _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath *_path;
}

- (void)dealloc;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(float)arg2 inContext:(struct CGContext *)arg3;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(float)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(float)arg2;
@property(copy) NSArray *lineDashPattern;
- (void)invalidatePath;
@property struct CGPath *path;
- (void)createPath;
- (id)initWithOverlay:(id)arg1;
@property float lineDashPhase;
@property float miterLimit;
@property int lineCap;
@property int lineJoin;
@property float lineWidth;
@property(retain) UIColor *strokeColor;
@property(retain) UIColor *fillColor;

@end

