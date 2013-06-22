/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPViewController.h"

@class IUMusicCoverFlowController;

@interface IUCoverFlowViewController : MPViewController
{
    IUMusicCoverFlowController *_coverFlowController;
    unsigned int _swappedCoverflow:1;
}

- (BOOL)musicCoverFlowHandlePendingRotations:(id)arg1;
- (void)musicCoverFlowFlipDidEnd:(id)arg1;
@property(readonly, nonatomic) IUMusicCoverFlowController *coverFlowController; // @synthesize coverFlowController=_coverFlowController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)loadView;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)willSwapCoverFlow;
- (void)dealloc;
- (id)initWithCoverFlowController:(id)arg1;

@end

