//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNFrameAnimator.h"

@class NSArray, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

__attribute__((visibility("hidden")))
@interface KNTransitionPageFlip : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving>
{
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDGLShader *_colorShader;
    TSDGLDataBuffer *_colorDataBuffer;
    TSDGLShader *_velocityShader;
    TSDGLDataBuffer *_velocityDataBuffer;
    NSArray *_colorBufferAttributes;
    NSArray *_velocityBufferAttributes;
    unsigned int _colorPositionAttributeIndex;
    unsigned int _colorTexCoordAttributeIndex;
    unsigned int _colorNormalAttributeIndex;
    unsigned int _velocityPositionAttributeIndex;
    unsigned int _velocityPrevPositionAttributeIndex;
    TSDGLShader *_quadShader;
    TSDGLDataBuffer *_quadDataBuffer;
    int _numPoints;
    BOOL _shouldDrawMotionBlur;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)renderFrameWithContext:(id)arg1;
- (void)p_drawFlipWithVelocity:(BOOL)arg1 percent:(float)arg2 texture:(id)arg3;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)update:(id)arg1 withPercent:(float)arg2 direction:(unsigned int)arg3;
- (void)createArrays:(id)arg1;
- (void)dealloc;
- (void)p_teardown;
- (id)initWithAnimationContext:(id)arg1;

@end
