/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;
}

+ (id)paymentWithProductIdentifier:(id)arg1;
+ (id)paymentWithProduct:(id)arg1;
@property(readonly, nonatomic) NSDictionary *requestParameters;
@property(readonly, nonatomic) NSData *requestData;
@property(readonly, nonatomic) int quantity;
@property(readonly, nonatomic) NSString *productIdentifier;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

