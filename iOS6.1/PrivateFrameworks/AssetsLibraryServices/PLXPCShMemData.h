/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface PLXPCShMemData : NSData
{
    void *_buffer;
    unsigned long _dataLength;
    unsigned long _bufferLength;
}

- (unsigned int)length;
- (const void *)bytes;
- (id)description;
- (void)dealloc;
- (id)initWithXPCShmem:(id)arg1 length:(long long)arg2;
- (id)initWithXPCShmem:(id)arg1;

@end

