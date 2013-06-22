/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface CKProgressBar : UIView
{
    UIImageView *_well;
    UIImageView *_fill;
    float _progressValue;
}

+ (float)_minFillWidth;
+ (float)defaultHeight;
@property(nonatomic) float progressValue; // @synthesize progressValue=_progressValue;
- (void)_stopAnimating;
- (void)_setupFillFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

