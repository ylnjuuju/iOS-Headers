/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding>
{
    NSMutableDictionary *_parameters;
}

- (id)_errorForStatusCode:(int)arg1;
- (id)_convertedValueForValue:(id)arg1;
- (id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2;
@property(readonly) NSDictionary *parameters;
- (id)copyQueryStringParameters;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id)arg1;
- (BOOL)start;
- (id)valueForParameter:(id)arg1;
- (void)startWithItemLookupBlock:(id)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) id <SSItemLookupRequestDelegate> delegate; // @dynamic delegate;

@end

