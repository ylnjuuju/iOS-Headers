/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSDictionary, NSMutableArray, NSString;

@interface PLLocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    BOOL _isEnabled;
    BOOL _isUpdating;
    BOOL _isHeadingEnabled;
}

+ (id)sharedInstance;
+ (void)setUsesEffectiveBundleIdentifier:(BOOL)arg1;
+ (BOOL)usesEffectiveBundleIdentifier;
- (void)_albumsChanged:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_updatePendingAssets;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(BOOL)arg3;
- (BOOL)_addLocationToAsset:(id)arg1;
- (id)locationString;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(BOOL)arg2;
- (id)location;
- (void)_stopUpdating;
- (void)_startUpdating;
- (void)setHeadingEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_applicationStateChanged:(id)arg1;
- (void)_updateLocationRunState;
- (void)dealloc;
- (id)init;

@end

