/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPAction.h>

@class NSDictionary, NSMutableDictionary, NSObject<MPActionableSupport>, NSString;

@interface MPTransitionAction : MPAction
{
    NSString *_transitionID;
    double _transitionDuration;
    NSMutableDictionary *_transitionAttributes;
    NSObject<MPActionableSupport> *_transitionDestination;
}

+ (id)transitionAction;
@property(retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination; // @synthesize transitionDestination=_transitionDestination;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(copy, nonatomic) NSString *transitionID; // @synthesize transitionID=_transitionID;
@property(copy, nonatomic) NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
- (void)configureTarget;
- (void)setAction:(id)arg1;
- (id)transitionAttributeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

