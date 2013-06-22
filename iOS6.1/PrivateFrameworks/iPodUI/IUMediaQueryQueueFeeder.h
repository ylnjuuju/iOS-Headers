/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPQueueFeeder.h"

@class MPMediaItem, MPMediaLibraryConnectionAssertion, MPMediaQuery, MPMediaQueryShuffledItems, NSArray;

@interface IUMediaQueryQueueFeeder : MPQueueFeeder
{
    MPMediaLibraryConnectionAssertion *_connectionAssertion;
    MPMediaQueryShuffledItems *_items;
    MPMediaQuery *_query;
    NSArray *_prefixMediaItems;
    MPMediaItem *_focusedItem;
    int _ignoreShuffleTypeChangesCount;
    unsigned int _itemsChanged:1;
    unsigned int _hasPendingLibraryChanges:1;
}

+ (id)imageCache;
@property(retain, nonatomic) NSArray *prefixMediaItems; // @synthesize prefixMediaItems=_prefixMediaItems;
@property(copy, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) MPMediaItem *focusedItem; // @synthesize focusedItem=_focusedItem;
- (void)setSubsequenceFocused:(BOOL)arg1 currentItemIndex:(unsigned int)arg2;
- (unsigned int)_shuffleItemsInFeederQueryWithShuffleType:(unsigned int)arg1 initialIndex:(unsigned int)arg2;
- (BOOL)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 force:(BOOL)arg3;
- (void)_performWhileIgnoringShuffleChanges:(id)arg1;
- (unsigned int)unshuffledIndexOfAVItem:(id)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (void)_handleMediaLibraryDidChange;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_libraryDidChangeNotification:(id)arg1;
- (unsigned int)initialPlaybackQueueDepth;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (BOOL)trackChangesCanEndPlayback;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id *)arg2;
- (void)shuffleItemsWithAnchor:(unsigned int *)arg1;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (unsigned int)realShuffleType;
- (unsigned int)realRepeatType;
- (id)preferredLanguages;
- (id)pathAtIndex:(unsigned int)arg1;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (Class)itemClass;
- (id)errorResolverForItem:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (unsigned int)nonRepeatingItemCount;
- (unsigned int)itemCount;
- (void)dealloc;
- (id)init;

@end
