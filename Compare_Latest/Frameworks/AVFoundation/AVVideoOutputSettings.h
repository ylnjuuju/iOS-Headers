//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings
{
}

+ (id)defaultVideoOutputSettings;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)registeredOutputSettingsClasses;
+ (id)_validValuesForScalingMode;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) BOOL dimensionsAreBoundingBox;
@property(readonly, nonatomic) NSDictionary *videoCompositionProcessorProperties;
@property(readonly, nonatomic) NSDictionary *pixelTransferProperties;
@property(readonly, nonatomic) NSDictionary *videoScalingProperties;
@property(readonly, nonatomic) NSDictionary *cleanApertureDictionary;
@property(readonly, nonatomic) NSDictionary *pixelAspectRatioDictionary;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) NSDictionary *videoSettingsDictionary;
- (id)compatibleMediaTypes;
- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

