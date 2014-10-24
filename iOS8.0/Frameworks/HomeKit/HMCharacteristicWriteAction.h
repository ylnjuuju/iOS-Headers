//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMAction.h>

#import "NSSecureCoding.h"

@class HMCharacteristic;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding>
{
    HMCharacteristic *_characteristic;
    id _targetValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)lookupActionWithInfo:(id)arg1 inArray:(id)arg2;
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)handleUpdates:(id)arg1;
- (id)serializeForAdd;
- (void)updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;
- (id)init;

@end
