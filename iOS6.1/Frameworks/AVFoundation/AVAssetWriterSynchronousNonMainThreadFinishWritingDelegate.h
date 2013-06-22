/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate-Protocol.h"
#import "AVAssetWriterFinishWritingHelperDelegate-Protocol.h"

@class AVWeakReference, NSObject<OS_dispatch_semaphore>;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate>
{
    NSObject<OS_dispatch_semaphore> *_finishedWritingNotificationSemaphore;
    AVWeakReference *_weakReferenceToHelper;
    AVWeakReference *_weakReferenceToSelf;
}

- (BOOL)shouldHelperPrepareInputs;
- (void)finishWritingHelperDidFail:(id)arg1;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

