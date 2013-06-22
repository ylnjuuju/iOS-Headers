/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface PLUnreadMarkerView : UIView
{
    UIImageView *_backgroundView;
    UILabel *_labelView;
    UIActivityIndicatorView *_indicatorView;
    float _maxWidth;
    unsigned int _unreadItemsCount;
    BOOL _showsLoadingIndicator;
    int _interfaceIdiom;
}

@property(readonly) int interfaceIdiom; // @synthesize interfaceIdiom=_interfaceIdiom;
@property(nonatomic) BOOL showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) unsigned int unreadItemsCount; // @synthesize unreadItemsCount=_unreadItemsCount;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_getLabelFrame:(struct CGRect *)arg1 IndicatorFrame:(struct CGRect *)arg2;
- (void)setShowsLoadingIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithInterfaceIdiom:(int)arg1;

@end

