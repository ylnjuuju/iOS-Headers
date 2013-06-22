/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKGameTitleView.h>

@class GKCoreTextLabel, GKRatingControl, NSString;

@interface GKPurchasableGameTitleView : GKGameTitleView
{
    float _ratingStarValue;
    int _ratingCount;
    NSString *_developerName;
    GKCoreTextLabel *_developerLabel;
    GKRatingControl *_ratingControl;
    GKCoreTextLabel *_ratingLabel;
    BOOL _hideRating;
}

@property(nonatomic) BOOL hideRating; // @synthesize hideRating=_hideRating;
@property(retain, nonatomic) GKCoreTextLabel *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(retain, nonatomic) GKRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
@property(retain, nonatomic) GKCoreTextLabel *developerLabel; // @synthesize developerLabel=_developerLabel;
@property(retain, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(nonatomic) int ratingCount; // @synthesize ratingCount=_ratingCount;
@property(nonatomic) float ratingStarValue; // @synthesize ratingStarValue=_ratingStarValue;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)layoutDeveloperNameWithBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

