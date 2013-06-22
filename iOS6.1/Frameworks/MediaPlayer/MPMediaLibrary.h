/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class CADisplayLink, NSDate, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, QueryCriteriaResultsCache;

@interface MPMediaLibrary : NSObject <NSCoding>
{
    id <MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
    int _libraryChangeObservers;
    NSObject<OS_dispatch_queue> *_entityCacheQueue;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    NSHashTable *_connectionAssertions;
    BOOL _disconnectAfterReleasingAssertions;
    float _connectionProgress;
    CADisplayLink *_connectionProgressDisplayLink;
    double _connectionProgressStartTime;
    int _removalReason;
    unsigned int _determinedHasMedia:1;
    unsigned int _hasMedia:1;
    unsigned int _determinedHasSongs:1;
    unsigned int _hasSongs:1;
    unsigned int _determinedHasGeniusMixes:1;
    unsigned int _hasGeniusMixes:1;
    unsigned int _determinedHasPlaylists:1;
    unsigned int _hasPlaylists:1;
    unsigned int _determinedHasComposers:1;
    unsigned int _hasComposers:1;
    unsigned int _determinedHasPodcasts:1;
    unsigned int _hasPodcasts:1;
    unsigned int _determinedHasUniversalBookmarkableItems:1;
    unsigned int _hasUniversalBookmarkableContent:1;
    unsigned int _determinedHasAudiobooks:1;
    unsigned int _hasAudiobooks:1;
    BOOL _filteringDisabled;
    BOOL _hasVideos;
    BOOL _determinedHasVideos;
    BOOL _hasMusicVideos;
    BOOL _determinedHasMusicVideos;
    BOOL _hasAudibleAudioBooks;
    BOOL _determinedHasAudibleAudioBooks;
    BOOL _hasMovies;
    BOOL _determinedHasMovies;
    BOOL _hasCompilations;
    BOOL _determinedHasCompilations;
    BOOL _hasITunesU;
    BOOL _determinedHasITunesU;
    BOOL _hasVideoITunesU;
    BOOL _determinedHasVideoITunesU;
    BOOL _hasMovieRentals;
    BOOL _determinedHasMovieRentals;
    BOOL _hasTVShows;
    BOOL _determinedHasTVShows;
    BOOL _hasVideoPodcasts;
    BOOL _determinedHasVideoPodcasts;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
}

+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(int)arg2;
+ (void)addLibraryDataProvider:(id)arg1;
+ (id)libraryDataProviders;
+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (id)mediaLibraries;
+ (id)_mediaLibraries;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (void)setLibraryServerDisabled:(BOOL)arg1;
+ (BOOL)isLibraryServerDisabled;
+ (void)endDiscoveringMediaLibraries;
+ (void)beginDiscoveringMediaLibraries;
+ (id)deviceMediaLibrary;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (id)defaultMediaLibrary;
+ (void)initialize;
- (id)libraryDataProvider;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (void)_stopConnectionProgressDisplayLink;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)_connectionProgressDisplayLinkCallback:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (id)_sanitizeQueryCriteriaForQueryCriteria:(id)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (unsigned int)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned int)_countOfItemsForQueryCriteria:(id)arg1;
- (BOOL)_hasCollectionsForQueryCriteria:(id)arg1;
- (BOOL)_hasItemsForQueryCriteria:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(id)arg5 loadValueFromDataProviderBlock:(void)arg6;
- (id)_itemsForQueryCriteria:(id)arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (id)pathForAssetURL:(id)arg1;
- (BOOL)isValidAssetURL:(id)arg1;
- (id)syncValidity;
- (float)connectionProgress;
- (void)performReadTransactionWithBlock:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2;
- (BOOL)requiresAuthentication;
- (id)preferredSubtitleLanguages;
- (id)preferredAudioLanguages;
- (BOOL)isGeniusEnabled;
- (void)updateUbiquitousValuesForTrackWithKey:(id)arg1 mediaPropertyValues:(id)arg2 timestamp:(double)arg3;
- (void)performUbiquitousDatabaseUpdateTransaction:(id)arg1;
- (id)ubiquitousBookmarkDomainVersionAnchorToken;
- (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;
- (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)arg1;
- (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2;
- (void)downloadAsset:(id)arg1 completionHandler:(id)arg2;
- (void)downloadItem:(id)arg1 completionHandler:(id)arg2;
- (BOOL)isArtworkIdenticalForItem:(id)arg1 otherItem:(id)arg2 compareRepresentativeItemArtwork:(BOOL)arg3 missingAlwaysComparesEqual:(BOOL)arg4;
- (BOOL)removePlaylist:(id)arg1;
- (BOOL)removeItems:(id)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(BOOL)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(BOOL)arg2;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (BOOL)hasVideoPodcasts;
- (BOOL)hasTVShows;
- (BOOL)hasMovieRentals;
- (BOOL)hasVideoITunesUContent;
- (BOOL)hasITunesUContent;
- (BOOL)hasCompilations;
- (BOOL)hasMovies;
- (BOOL)hasAudibleAudioBooks;
- (BOOL)hasMusicVideos;
- (BOOL)hasVideos;
- (BOOL)_checkHasContent:(char *)arg1 determined:(char *)arg2 mediaType:(int)arg3 queryHasEntitiesBlock:(id)arg4;
- (BOOL)_checkHasContent:(char *)arg1 determined:(char *)arg2 queryHasEntitiesBlock:(id)arg3;
- (BOOL)hasAudiobooks;
- (BOOL)hasComposers;
- (BOOL)hasGenres;
- (BOOL)hasUniversalBookmarkableItems;
- (BOOL)hasPodcasts;
- (BOOL)hasSongs;
- (BOOL)hasAlbums;
- (BOOL)hasArtists;
- (BOOL)hasPlaylists;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMedia;
- (BOOL)hasMediaOfType:(int)arg1;
- (BOOL)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)modificationToken;
- (id)uniqueIdentifier;
@property(nonatomic) int removalReason;
- (id)name;
- (int)status;
- (BOOL)writable;
- (long long)playlistGeneration;
- (unsigned long long)syncGenerationID;
- (unsigned long long)currentEntityRevision;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (void)endGeneratingLibraryChangeNotifications;
- (void)disconnect;
- (void)connectWithCompletionHandler:(id)arg1;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)_enabledMediaTypesDidChangeNotification:(id)arg1;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_clearCachedContentDataAndResultSets:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_clearCachedEntitiesIncludingResultSets:(BOOL)arg1 completionBlock:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSURL *protectedContentSupportStorageURL;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id)arg2;
@property(readonly, nonatomic) NSString *_syncValidity;
- (id)errorResolverForMediaItem:(id)arg1;

@end

