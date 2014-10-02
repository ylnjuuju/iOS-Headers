//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3MusicLibrary, NSDictionary;

@interface ML3TrackImporter : NSObject
{
    NSDictionary *_nameOrders;
    ML3MusicLibrary *_library;
    BOOL _updateSmartPlaylists;
}

@property(nonatomic) BOOL updateSmartPlaylists; // @synthesize updateSmartPlaylists=_updateSmartPlaylists;
@property(retain, nonatomic) NSDictionary *nameOrders; // @synthesize nameOrders=_nameOrders;
- (void).cxx_destruct;
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)arg1;
- (id)_newTrackPropertiesByProcessingImportTrack:(id)arg1 insertStringsIntoSortMap:(BOOL)arg2;
- (id)_addStoreLinkForImportTrackProperties:(id)arg1;
- (id)_addGenreForImportTrackProperties:(id)arg1;
- (id)_addComposerForImportTrackProperties:(id)arg1;
- (id)_addArtistForImportTrackProperties:(id)arg1;
- (id)_addAlbumForImportTrackProperties:(id)arg1;
- (id)_addAlbumArtistForImportTrackProperties:(id)arg1;
- (BOOL)updateTrack:(id)arg1 withImportTrack:(id)arg2;
- (void)importTrack:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithMusicLibrary:(id)arg1;

@end
