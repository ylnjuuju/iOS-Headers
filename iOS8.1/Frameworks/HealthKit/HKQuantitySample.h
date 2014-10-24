//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

@class HKQuantity, HKQuantityType;

@interface HKQuantitySample : HKSample
{
    HKQuantity *_quantity;
}

+ (BOOL)supportsSecureCoding;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
- (void).cxx_destruct;
- (void)_setQuantity:(id)arg1;
@property(readonly) HKQuantity *quantity;
@property(readonly) HKQuantityType *quantityType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_valueDescription;
- (id)_validateConfiguration;

@end
