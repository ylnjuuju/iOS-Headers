/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@class NSObject<OS_xpc_object>;

@interface PLXPCData : NSData
{
    NSObject<OS_xpc_object> *_data;
}

- (unsigned int)length;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned int)arg2;
- (const void *)bytes;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithXPCData:(id)arg1;

@end

