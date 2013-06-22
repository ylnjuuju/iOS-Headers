/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKBrush.h>

@class GKBackgroundBrush;

@interface GKCurvedCapBackgroundBrush : GKBrush
{
    GKBackgroundBrush *_fillBackgroundBrush;
    float _additionalOffsetToCurveJoint;
    BOOL _drawBottomCurve;
}

+ (id)curvedCapBackgroundBrushWithHeaderBackground;
+ (id)curvedCapBackgroundBrushWithHeaderBackgroundForPad;
@property(nonatomic) BOOL drawBottomCurve; // @synthesize drawBottomCurve=_drawBottomCurve;
@property(nonatomic) float additionalOffsetToCurveJoint; // @synthesize additionalOffsetToCurveJoint=_additionalOffsetToCurveJoint;
@property(retain, nonatomic) GKBackgroundBrush *fillBackgroundBrush; // @synthesize fillBackgroundBrush=_fillBackgroundBrush;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (struct CGPath *)newBorderPathWithRect:(struct CGRect)arg1 radius:(float)arg2 capOffset:(float)arg3 capExtra:(float)arg4;
- (void)addFancyCurveToPath:(struct CGPath *)arg1 fromBegin:(struct CGPoint)arg2 toEnd:(struct CGPoint)arg3 capExtra:(float)arg4 curveUpward:(BOOL)arg5;
- (void)dealloc;

@end

