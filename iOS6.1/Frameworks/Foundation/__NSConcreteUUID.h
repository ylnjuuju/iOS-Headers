/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID
{
    unsigned char _uuidBytes[16];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (id)description;
- (id)UUIDString;
- (CDStruct_bd2f613f)_cfUUIDBytes;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)init;

@end

