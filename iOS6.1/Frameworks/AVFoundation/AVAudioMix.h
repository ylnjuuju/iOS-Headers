/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInternal *_audioMix;
}

- (struct opaqueMTAudioProcessingTap *)_audioTapProcessorForTrackID:(int)arg1;
- (id)_audioVolumeCurveForTrackID:(int)arg1;
- (void)setInputParameters:(id)arg1;
@property(readonly, nonatomic) NSArray *inputParameters;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

