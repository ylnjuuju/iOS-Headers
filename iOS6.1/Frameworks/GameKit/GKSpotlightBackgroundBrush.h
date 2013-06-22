/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKAbstractGradientBrush.h>

@interface GKSpotlightBackgroundBrush : GKAbstractGradientBrush
{
    struct CGPoint _spotlightCenter;
    float _spotlightScale;
}

+ (id)largeSpotlightBackgroundBrush;
+ (id)spotlightBackgroundBrush;
@property(nonatomic) float spotlightScale; // @synthesize spotlightScale=_spotlightScale;
@property(nonatomic) struct CGPoint spotlightCenter; // @synthesize spotlightCenter=_spotlightCenter;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)init;

@end

