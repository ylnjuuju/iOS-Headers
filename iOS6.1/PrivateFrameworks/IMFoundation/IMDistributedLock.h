/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSLocking-Protocol.h"

@class NSString;

@interface IMDistributedLock : NSObject <NSLocking>
{
}

+ (id)alloc;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
@property(readonly) NSString *name;
- (id)initWithName:(id)arg1;

@end

