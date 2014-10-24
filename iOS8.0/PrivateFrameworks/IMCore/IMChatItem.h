//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IMItem;

@interface IMChatItem : NSObject <NSCopying>
{
    IMItem *_item;
}

- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)_item;
- (id)_initWithItem:(id)arg1;
@property(readonly, nonatomic) BOOL canDelete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end
