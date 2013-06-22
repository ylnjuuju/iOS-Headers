/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSFileReactorProxy.h>

@interface NSFilePresenterProxy : NSFileReactorProxy
{
    BOOL _isInSuperArbiter;
    id _prewritingProcedure;
    unsigned int _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    id _postwritingProcedure;
    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
}

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;
- (BOOL)didObserveMoving;
- (void)resetMoveObserving;
- (void)beforeReacquiringFromWriterInvokeProcedure:(id)arg1;
- (id)currentWriterPurposeID;
- (BOOL)hasRelinquishedToWriter;
- (void)afterRelinquishingToWriterInvokeProcedure:(id)arg1;
- (void)forwardObservationMessageWithKind:(id)arg1 parameters:(id)arg2;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 resultHandler:(id)arg3;
- (void)updateLastEventIdentifier:(unsigned long long)arg1;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeChangeOfSubitemAtURL:(id)arg1 byWriterWithPurposeID:(id)arg2;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveByWriterWithPurposeID:(id)arg1;
- (void)observeChangeByWriterWithPurposeID:(id)arg1;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(id)arg2;
- (void)saveChangesWithCompletionHandler:(id)arg1;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(id)arg5;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 resultHandler:(id)arg4;
- (void)setInSuperarbiter;
- (void)forwardUsingMessageSender:(id)arg1;
- (void)setItemLocation:(id)arg1;
- (void)dealloc;

@end

