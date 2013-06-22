/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput
{
    AVCaptureMovieFileOutputInternal *_internal;
}

+ (BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id *)arg2;
+ (BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;
+ (void)initialize;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (long)_stopRecording;
- (long)_startRecording:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleStartRecordingErrorWithDomain:(id)arg1 code:(long)arg2 info:(id)arg3;
- (long)_avErrorForDidStopRecordingReason:(id)arg1;
@property(copy, nonatomic) NSArray *metadata;
- (BOOL)sendsLastVideoPreviewFrame;
- (void)setSendsLastVideoPreviewFrame:(BOOL)arg1;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (id)outputFileURL;
- (void)resumeRecording;
- (void)pauseRecording;
- (BOOL)isRecordingPaused;
- (BOOL)isRecording;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)init;
- (BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2;

@end

