//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSMutableSet, UIGestureRecognizer, UIView;

@interface MFComposeScrollView : UIScrollView
{
    UIGestureRecognizer *_singleTapGestureRecognizer;
    NSMutableSet *_disabledSubviews;
    UIView *_tappedView;
    struct CGPoint _tapLocation;
    int _scrollBlocked;
    struct _NSRange _selectedRange;
    BOOL _catchesSingleTap;
    BOOL _shouldScrollToFirstResponder;
}

@property(nonatomic) BOOL shouldScrollToFirstResponder; // @synthesize shouldScrollToFirstResponder=_shouldScrollToFirstResponder;
@property(nonatomic) struct CGPoint tapLocation; // @synthesize tapLocation=_tapLocation;
@property(retain, nonatomic) UIView *tappedView; // @synthesize tappedView=_tappedView;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)endBlockingScroll;
- (void)beginBlockingScroll;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)enableSubview:(id)arg1;
- (void)disableSubview:(id)arg1;
- (void)performDelayedTap:(BOOL)arg1;
- (void)singleTap:(id)arg1;
@property(nonatomic) BOOL catchesSingleTap;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

