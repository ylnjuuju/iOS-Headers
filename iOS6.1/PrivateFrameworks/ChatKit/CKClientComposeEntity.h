/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKEntity.h>

@class NSString;

@interface CKClientComposeEntity : CKEntity
{
    NSString *_cachedName;
    NSString *_rawAddress;
    struct __CFPhoneNumber *_phoneNumberRef;
    unsigned int _generated:1;
}

@property(copy, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
- (id)description;
- (struct __CFPhoneNumber *)phoneNumberRef;
- (id)name;
- (void)setABRecord:(void *)arg1 withIdentifier:(int)arg2;
- (void)_generateName;
- (void)_generateCachedName;
- (int)addressBookUID;
- (int)identifier;
- (int)propertyType;
- (void *)abRecord;
- (void)dealloc;
- (id)_initWithAddress:(id)arg1;
- (void)resetCaches;
- (id)originalAddress;

@end

