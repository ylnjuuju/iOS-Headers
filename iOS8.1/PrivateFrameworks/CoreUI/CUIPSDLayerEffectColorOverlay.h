//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent
{
    int _blendMode;
    float _opacity;
    CUIColor *_color;
}

@property(retain) CUIColor *color; // @synthesize color=_color;
@property float opacity; // @synthesize opacity=_opacity;
@property int blendMode; // @synthesize blendMode=_blendMode;
- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

