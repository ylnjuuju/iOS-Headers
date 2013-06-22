/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSCoding>
{
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isDurationBased;
- (id)duration;
- (id)end;
- (id)start;
- (void)dealloc;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithStart:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;

@end

