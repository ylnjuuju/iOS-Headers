/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SSDownloadManagerObserver-Protocol.h"

@class MPMediaPlaylist, MPMediaQuery, NSArray, NSString;

@interface MPGeniusMix : NSObject <SSDownloadManagerObserver, NSCoding, NSCopying>
{
    MPMediaPlaylist *_playlist;
    MPMediaQuery *_seedTracksQuery;
    NSArray *_representativeArtists;
    NSArray *_representativeImageItems;
}

+ (id)artworkImageForMediaItem:(id)arg1 scaleMode:(int)arg2;
+ (id)artworkImageForMediaItem:(id)arg1;
+ (id)artworkCacheDirectoryPath;
+ (id)mixQueue;
@property(readonly, nonatomic) MPMediaPlaylist *playlist; // @synthesize playlist=_playlist;
- (id)_representativeImageItemsWithMaxCount:(unsigned int)arg1;
- (unsigned long long)_entityArtworkCacheHashForRepresentativeItems:(id)arg1 ensureItemArtworkFilesExist:(BOOL)arg2;
- (id)_cachedRepresentativeImagePath;
- (id)_cacheDirectoryPath;
@property(readonly, nonatomic) MPMediaQuery *seedTracksQuery;
- (struct CGImage *)loadRepresentativeImageWithTileLength:(float)arg1 completionBlock:(id)arg2;
- (void)preloadRepresentativeImageWithTileLength:(float)arg1 completionBlock:(id)arg2;
- (struct CGImage *)_getAlreadyLoadedRepresentativeImageWithTileLength:(float)arg1 loadCompletionBlock:(id)arg2;
- (void)_generateMixImageWithTileLength:(float)arg1 imageDidLoadBlock:(id)arg2;
- (BOOL)_observeMixImageLoadingWithImageDidLoadBlock:(id)arg1;
- (void)_onQueueLoadRepresentativeImageWithTileLength:(float)arg1;
- (struct CGImage *)_placeholderMixImageWithTileLength:(float)arg1;
- (struct CGImage *)_placeholderImageWithTileLength:(float)arg1;
@property(readonly, nonatomic) NSArray *representativeArtists;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL isDownloading;
@property(readonly, nonatomic) BOOL isCloudMix;
@property(readonly, nonatomic) float downloadProgress;
- (void)downloadMixWithPermissionHandler:(id)arg1 completionHandler:(void)arg2;
- (BOOL)canPlayUsingNetworkType:(int)arg1;
- (void)cancelDownload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (id)initWithMPMediaPlaylist:(id)arg1;

@end

