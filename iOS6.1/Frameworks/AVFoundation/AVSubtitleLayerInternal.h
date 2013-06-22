/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVPlayer, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVSubtitleLayerInternal : NSObject
{
    AVPlayer *player;
    struct OpaqueFigSubtitleRenderer *renderer;
    NSDictionary *currentSubtitleSample;
    BOOL currentSubtitleSampleIsForced;
    BOOL nonForcedSubtitleDisplayEnabled;
    BOOL shouldObservePlayer;
    BOOL isObservingPlayer;
    BOOL hasPlayerToObserve;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL isPresentationLayer;
    BOOL isOverscanSubtitleSupportEnabled;
}

@end

