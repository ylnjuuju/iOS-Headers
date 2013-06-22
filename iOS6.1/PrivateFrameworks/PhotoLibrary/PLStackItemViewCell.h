/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, PLAlbumTextField, PLImageView, PLLabel, PLUnreadMarkerView, UIButton, UIImage, UIImageView, UIView<PLStackableImage>;

@interface PLStackItemViewCell : UIView <UITextFieldDelegate>
{
    float _previousEnabledAlpha;
    UIButton *_closeButton;
    PLLabel *_titleLabel;
    PLLabel *_subtitleLabel;
    PLAlbumTextField *_editField;
    UIImageView *_unreadBadge;
    PLUnreadMarkerView *_unreadMarkerStartView;
    UIImageView *_badgeView;
    NSString *_subtitle;
    BOOL _unreadStartMarkerShowsProgress;
    BOOL _labelIsEditable;
    float _stackedAngle;
    BOOL _labelsHidden;
    id _renameAction;
    UIImage *_badgeImage;
    float _labelsAlpha;
    id _closeAction;
    BOOL _enabled;
    BOOL _labelsShadowEnabled;
    UIView<PLStackableImage> *_sourceView;
    BOOL _ignoreEndEditing;
    BOOL _showsUnreadStartMarker;
    unsigned int _unreadStartMarkerCount;
    BOOL _showsUnreadIndicator;
    NSString *_title;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL showsUnreadIndicator; // @synthesize showsUnreadIndicator=_showsUnreadIndicator;
@property(nonatomic) unsigned int unreadStartMarkerCount; // @synthesize unreadStartMarkerCount=_unreadStartMarkerCount;
@property(nonatomic) BOOL showsUnreadStartMarker; // @synthesize showsUnreadStartMarker=_showsUnreadStartMarker;
@property(nonatomic) BOOL ignoreEndEditing; // @synthesize ignoreEndEditing=_ignoreEndEditing;
@property(retain, nonatomic) UIView<PLStackableImage> *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic, getter=isLabelShadowEnabled) BOOL labelsShadowEnabled; // @synthesize labelsShadowEnabled=_labelsShadowEnabled;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) id closeAction; // @synthesize closeAction=_closeAction;
@property(nonatomic) float labelsAlpha; // @synthesize labelsAlpha=_labelsAlpha;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(copy, nonatomic) id renameAction; // @synthesize renameAction=_renameAction;
@property(nonatomic) BOOL labelsHidden; // @synthesize labelsHidden=_labelsHidden;
@property(nonatomic) float stackedAngle; // @synthesize stackedAngle=_stackedAngle;
@property(nonatomic, getter=isLabelEditable) BOOL labelIsEditable; // @synthesize labelIsEditable=_labelIsEditable;
@property(nonatomic) BOOL unreadStartMarkerShowsProgress; // @synthesize unreadStartMarkerShowsProgress=_unreadStartMarkerShowsProgress;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void)layoutSubviews;
- (void)_getTitleFrame:(struct CGRect *)arg1 subtitleFrame:(struct CGRect *)arg2 unreadIndicatorFrame:(struct CGRect *)arg3;
@property(nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (struct _NSRange)textField:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_updateLabelsState;
@property(readonly, nonatomic) BOOL isLabelEditing;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)_handleCloseBoxTap;
@property(readonly, nonatomic) struct CGPoint closeBoxPosition;
@property(nonatomic, getter=isCloseBoxShown) BOOL showCloseBox;
- (void)setShowCloseBox:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateUnreadStartMarkerAnimated:(BOOL)arg1;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsUnreadStartMarker:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsUnreadIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBadgeImage:(id)arg1 animated:(BOOL)arg2;
- (void)_updateBadgeViewAnimated:(BOOL)arg1 forImageChange:(BOOL)arg2;
@property(readonly, nonatomic) PLImageView *imageView;
- (void)resetToInitialSizeAndAngle;
- (void)setSize:(struct CGSize)arg1 angle:(float)arg2;
@property(nonatomic) unsigned int imageIndex;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointIsInsideTitle:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

