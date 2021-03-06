//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKTileKeyMap : NSObject
{
    int _type;
    void *_map;
}

- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (int)count;
- (void)removeObjectForKey:(const struct VKTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)objectForKey:(const struct VKTileKey *)arg1;
- (id)contentsDescription;
- (id)description;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithMapType:(int)arg1;

@end

