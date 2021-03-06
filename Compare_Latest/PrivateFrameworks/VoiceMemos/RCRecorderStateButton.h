//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CALayer, UIColor;

@interface RCRecorderStateButton : UIButton
{
    UIColor *_outerColor;
    CALayer *_innerLayer;
    UIColor *_innerColor;
    BOOL _realEnabledState;
    BOOL _isForceDisabled;
    int _AVCaptureState;
}

@property(nonatomic) BOOL isForceDisabled; // @synthesize isForceDisabled=_isForceDisabled;
@property(nonatomic) int AVCaptureState; // @synthesize AVCaptureState=_AVCaptureState;
- (void).cxx_destruct;
- (void)_drawOuterCircle;
- (float)_currentStateInnerDrawingAlpha;
- (float)_currentStateTopLevelDrawingAlpha;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

