/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface UICGPointKey : NSObject <NSCopying>
{
    struct CGPoint _point;
}

+ (id)pointKeyWithPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

