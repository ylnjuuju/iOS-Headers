/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MZUniversalPlaybackPositionTransactionContext-Protocol.h"

@class MPMediaLibrary, MPMediaQuery, NSString;

@interface MPUbiquitousBookmarksTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext>
{
    MPMediaLibrary *_mediaLibrary;
    NSString *_lastSyncedDomainVersion;
    unsigned long long _lastSyncedEntityRevision;
    unsigned long long _transactionEntityRevision;
    MPMediaQuery *_itemsQuery;
}

@property(retain, nonatomic) MPMediaQuery *itemsQuery; // @synthesize itemsQuery=_itemsQuery;
@property(nonatomic) unsigned long long transactionEntityRevision; // @synthesize transactionEntityRevision=_transactionEntityRevision;
@property(nonatomic) unsigned long long lastSyncedEntityRevision; // @synthesize lastSyncedEntityRevision=_lastSyncedEntityRevision;
@property(copy, nonatomic) NSString *lastSyncedDomainVersion; // @synthesize lastSyncedDomainVersion=_lastSyncedDomainVersion;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (id)description;
- (void)dealloc;

@end

