/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMessageIterationFilter-Protocol.h"

@class NSIndexSet;

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter>
{
    NSIndexSet *_mailboxes;
}

- (BOOL)filterMessageWithStatement:(struct sqlite3_stmt *)arg1;
- (void)dealloc;
- (id)initWithMailboxes:(id)arg1;

@end
