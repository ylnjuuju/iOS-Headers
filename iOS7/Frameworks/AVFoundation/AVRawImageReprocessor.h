/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVRawImageReprocessorInternal;

@interface AVRawImageReprocessor : NSObject
{
    AVRawImageReprocessorInternal *_internal;
}

+ (void)initialize;
- (void)handlePhotoReady:(id)arg1;
- (void)reprocessRawImageSurface:(struct __IOSurface *)arg1 andMetadata:(id)arg2 withOutputSettings:(id)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (id)init;

@end

