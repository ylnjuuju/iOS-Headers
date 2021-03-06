/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet;

// Not exported
@interface UITapRecognizer : NSObject <NSCoding>
{
    unsigned long long _numberOfTouchesRequired;
    unsigned long long _numberOfTapsRequired;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTouches;
    int _currentNumberOfTaps;
    struct CGPoint _location;
    struct CGPoint _startPoint;
    double _allowableMovement;
    double _maximumSingleTapDuration;
    double _maximumIntervalBetweenSuccessiveTaps;
    NSMutableArray *_touches;
    id _delegate;
    unsigned int _timerOn:1;
    unsigned int _noNewTouches:1;
}

@property(nonatomic) id <UITapRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)_locationOnScreen;
@property(nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property(nonatomic) double maximumSingleTapDuration;
@property(nonatomic) double allowableMovement;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_interactionEndedTouch:(_Bool)arg1;
- (void)_beginInteraction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)_effectiveAllowableMovement;
- (void)tooSlow:(id)arg1;
- (void)startTapTimer:(double)arg1;
- (void)clearTapTimer;
- (void)_reset;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

