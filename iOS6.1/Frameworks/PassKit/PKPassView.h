/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PKPassFaceDelegate-Protocol.h"

@class NSString, PKPass, PKPassBackFaceView, PKPassColorProfile, PKPassFaceView, PKPassFrontFaceView, UIImage;

@interface PKPassView : UIView <PKPassFaceDelegate>
{
    PKPassFrontFaceView *_frontFace;
    PKPassBackFaceView *_backFace;
    PKPassFaceView *_visibleFace;
    PKPassFaceView *_otherFace;
    PKPassColorProfile *_colorProfile;
    UIImage *_cardFrontSnapshot;
    id <WLCardViewDelegate> _delegate;
    PKPass *_pass;
    int _contentMode;
    BOOL _backFaceIsTall;
    int _suppressedContent;
    UIImage *_passFrontSnapshot;
}

@property(retain, nonatomic) UIImage *passFrontSnapshot; // @synthesize passFrontSnapshot=_passFrontSnapshot;
@property(nonatomic) int suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(nonatomic) BOOL backFaceIsTall; // @synthesize backFaceIsTall=_backFaceIsTall;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) id <WLCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_flipPass:(BOOL)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)unregisterForEnterBackgroundNotification;
- (void)registerForEnterBackgroundNotification;
- (void)_updateBackFaceSuppressedContent;
- (BOOL)_visibleFaceShouldClipForCurrentViewMode:(float *)arg1;
- (int)_regionsForCurrentModes;
- (int)_frontFaceBackgroundModeForContentMode;
- (void)_applyContentMode;
- (BOOL)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(id)arg1;
- (void)passFaceFlipButtonPressed:(id)arg1;
- (void)flipPass:(BOOL)arg1;
- (void)createBackFaceIfNecessary;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)layoutSubviews;
- (void)setContentMode:(int)arg1 withDuration:(double)arg2;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL showingFront;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)item;
- (struct CGRect)frameOfVisibleFace;
- (struct CGSize)sizeOfFrontFace;
- (struct CGSize)sizeOfBackFace;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithPass:(id)arg1 content:(int)arg2;
- (id)initWithPass:(id)arg1;

@end

