/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSObject<UIScrollViewDelegate>, UIScrollView;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate>
{
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_performScrollRectRequest:(id)arg1;
- (void)_performNextScrollRequest;
- (void)_performContentOffsetRequest:(id)arg1;
- (void)_finishActiveScrollRequest;
- (void)_addScrollRequest:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)scrollFrameToVisible:(struct CGRect)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)detachFromScrollView;
- (void)attachToScrollView:(id)arg1;
- (void)dealloc;

@end

