//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface DAResolveRecipientsRequest : NSObject
{
    NSArray *_emailAddresses;
}

- (id)emailAddresses;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithEmailAddresses:(id)arg1;

@end
