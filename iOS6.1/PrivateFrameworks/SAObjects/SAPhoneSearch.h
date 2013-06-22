/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface SAPhoneSearch : SABaseClientBoundCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSDate *start;
@property(copy, nonatomic) NSString *outgoingPhoneNumber;
@property(nonatomic) BOOL missed;
@property(copy, nonatomic) NSNumber *limit;
@property(copy, nonatomic) NSString *incomingPhoneNumber;
@property(copy, nonatomic) NSDate *end;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

