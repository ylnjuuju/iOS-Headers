/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface OAITOrientedBounds : NSObject
{
}

+ (struct CGRect)axisParallelBoundsOfOrientedBounds:(id)arg1;
+ (id)relativeOrientedBoundsOfDrawable:(id)arg1;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect)arg3;
+ (struct CGAffineTransform)transformFromBounds:(struct CGRect)arg1 toOrientedBounds:(id)arg2;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1;
+ (id)absoluteOrientedBoundsOfDrawable:(id)arg1;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(struct CGRect)arg2;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;

@end

