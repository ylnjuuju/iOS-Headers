/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

@interface CIStarShineGenerator : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputRadius;
    NSNumber *inputCrossScale;
    NSNumber *inputCrossAngle;
    NSNumber *inputCrossOpacity;
    NSNumber *inputCrossWidth;
    NSNumber *inputEpsilon;
}

+ (id)customAttributes;
@property(retain) NSNumber *inputCrossOpacity; // @synthesize inputCrossOpacity;
@property(retain) NSNumber *inputCrossWidth; // @synthesize inputCrossWidth;
@property(retain) NSNumber *inputCrossScale; // @synthesize inputCrossScale;
@property(retain) NSNumber *inputCrossAngle; // @synthesize inputCrossAngle;
@property(retain) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property(retain) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain) CIColor *inputColor; // @synthesize inputColor;
@property(retain) CIVector *inputCenter; // @synthesize inputCenter;
- (id)outputImage;
- (id)_kernel;
- (void)setDefaults;

@end

