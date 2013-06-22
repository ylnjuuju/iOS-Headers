/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSCalendar, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<PLAssetContainer>, NSSet, PLFetchingAlbum, PLGenericAlbum, PLInFlightAssetsAlbum, PLManagedAlbum, PLManagedObjectContext, PLThumbnailManager, PLWStackedImageCache;

@interface PLPhotoLibrary : NSObject
{
    BOOL _listeningForITunesSyncing;
    BOOL _canTriggerDatabaseUpdate;
    BOOL _isTransient;
    unsigned int _pendingTransactions;
    struct __CFDictionary *_allPhotos;
    int _databaseMigrationKind;
    NSMutableArray *_transactionCompletionHandlers;
    PLThumbnailManager *_thumbnailManager;
    NSDictionary *_existingThumbnailEntries;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSMutableArray *_photoStreamAlbums;
    id _ptpDelegate;
    PLWStackedImageCache *_stackedImageCache;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    unsigned int _lastFetchedGPSCount;
    unsigned int _insertedCountSinceLastFetchedGPSCount;
    unsigned int _deletedCountSinceLastFetchedGPSCount;
    unsigned int _newlyCompleteWithGPS;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLInFlightAssetsAlbum *_inFlightAssetsAlbum;
    PLManagedObjectContext *managedObjectContext;
}

+ (BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (BOOL)canSaveVideoToCameraRoll:(id)arg1;
+ (id)calculatedDisplayableIndexesForAlbum:(struct NSObject *)arg1 count:(unsigned int)arg2;
+ (void)resetSyncedAssetsDCIMDirectory;
+ (void)initializeGraphicsServices;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)iTunesSyncedFaceDataDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)iTunesSyncedAssetThumbnailsDirectory;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)simpleDCIMDirectory;
+ (id)dcimDirectory;
+ (id)dcimDirectoryURL;
+ (id)iTunesPhotosDirectory;
+ (id)photoDataMiscDirectory;
+ (id)videosPath;
+ (id)photoMetadataDirectoryURL;
+ (id)photoDataDirectory;
+ (id)photoDataDirectoryURL;
+ (id)mediaFilesDirectoryURL;
+ (BOOL)needsToBeSyncedWithiTunesBecauseFormatIDsChanged;
+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)repairSingletonObjects;
+ (BOOL)isRunningInStoreDemoMode;
+ (id)pathToAssetsToAlbumsMapping;
+ (id)crashRecoveryIndicatorFilePaths;
+ (id)migrationIndicatorFilePath;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)imageWriterIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)takingPhotoIndicatorFilePath;
+ (void)_presentSqliteCorruptionErrorDialog;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id)arg2;
+ (id)assetsDataDirectory;
+ (id)photoCloudSharingDataDirectory;
+ (id)photoStreamsDataDirectory;
+ (void)setCloudAlbumSharingEnabled:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (struct NSObject *)savedPhotosAlbum;
+ (void)_doFilesystemImportIfNeeded;
+ (BOOL)isCrashRecoveryDisabled;
+ (void)disableCrashRecovery:(BOOL)arg1;
+ (void)recoverFromCrashIfNeeded;
+ (void)enqeueRecoveryJob:(id)arg1;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (BOOL)isApplicationWildcat;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
@property(retain, nonatomic) PLManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext;
- (id)librarySizes;
- (BOOL)getPhotoCount:(unsigned int *)arg1 videoCount:(unsigned int *)arg2;
- (id)albumListForContentMode:(int)arg1;
- (id)albumsForContentMode:(int)arg1;
- (BOOL)isPhotoInSavedPhotosAlbum:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3;
- (int)priorityForFileExtension:(id)arg1;
- (BOOL)isAudioFileExtension:(id)arg1;
- (BOOL)isVideoFileExtension:(id)arg1;
- (BOOL)isNonRawImageFileExtension:(id)arg1;
- (BOOL)isRawImageFileExtension:(id)arg1;
- (BOOL)isImageFileExtension:(id)arg1;
- (void)_loadFileExtensionInformation;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(int)arg9 replacementUUID:(id)arg10 extendedInfo:(id)arg11 thumbnailsData:(struct __CFDictionary *)arg12 withUUID:(id)arg13;
- (void)modifyDCIMEntryForVideo:(id)arg1 progress:(id)arg2 previewImage:(id)arg3 thumbnailImage:(id)arg4;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2 outImageProperties:(const struct __CFDictionary **)arg3;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (void)preheatImageDataForAssets:(id)arg1 format:(int)arg2;
- (struct NSObject *)filesystemImportProgressAlbum;
- (struct NSObject *)otaRestoreProgressAlbum;
- (struct NSObject *)syncProgressAlbum;
- (struct NSObject *)iPadAllPhotosAlbumIfExists;
- (struct NSObject *)iPadAllPhotosAlbum;
- (struct NSObject *)allPhotosAlbumIfExists;
- (struct NSObject *)allPhotosAlbum;
- (unsigned int)editableAlbumCount;
- (id)editableAlbums;
- (id)syncedAlbums;
- (void)_updateWithInsertedAssetsCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)lastImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)allImportedPhotosAlbum;
- (void)recreateAlbumsFromMetadata;
- (BOOL)needsMigration;
- (id)managedObjectWithObjectID:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (void)_unloadExistingThumbnailEntries;
- (void)_loadExistingThumbnailEntries;
- (void)_removeOrphanedThumbnailEntries;
- (unsigned int)concurrencyType;
- (BOOL)isTransient;
- (void)loadDatabase;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelAfterRestoreFromiTunesBackup;
- (void)prepareDatabaseForOTAAssetsPhase;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_safeSave:(id)arg1;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (int)_orientationOfFileAtPath:(id)arg1;
- (int)_orientationAfterRotatingOrientation:(int)arg1 clockwiseByDegrees:(int)arg2 transposeCoordinatesOut:(char *)arg3;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (void)_migrationDidFinish;
- (void)_deleteObsoleteMetadataFiles;
- (id)_init;
- (id)_getGlobal:(id)arg1 userInfo:(id)arg2;
- (id)_setGlobal:(id)arg1 userInfo:(id)arg2;
- (struct NSObject *)albumFromGroupURL:(id)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (id)lastImportSessionUUID;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (struct NSObject *)allPhotoStreamPhotosAlbum;
- (void)userDeleteAssets:(id)arg1;
- (id)assetWithUUID:(id)arg1 inAlbum:(struct NSObject *)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (id)objectWithObjectID:(id)arg1;
- (unsigned int)countOfAlbumsContainingItems:(id)arg1;
- (id)_albumsContainingItems:(id)arg1;
- (struct NSObject *)eventAlbumContainingPhoto:(id)arg1;
@property(readonly, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property(readonly, nonatomic) NSArray *photoStreamAlbums;
- (void)userDeleteAlbums:(id)arg1;
@property(readonly, nonatomic) NSArray *placeAlbums;
@property(readonly, nonatomic) NSArray *faceAlbums;
@property(readonly, nonatomic) NSArray *eventAlbums;
@property(readonly, nonatomic) NSArray *wallpaperAlbums;
@property(readonly, nonatomic) NSArray *imagePickerAlbums;
@property(readonly, nonatomic) NSArray *userAlbums;
@property(readonly, nonatomic) NSArray *albums;
- (struct NSObject *)albumWithUuid:(id)arg1;
- (struct NSObject *)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (void)deleteInflightAssets:(id)arg1;
- (void)addInflightAsset:(id)arg1;
@property(readonly, nonatomic) NSObject<PLAssetContainer> *inFlightAssetsAlbum;
@property(readonly, nonatomic) NSObject<PLAssetContainer> *savedPhotosAlbum;
- (void)withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 performBlock:(id)arg3 completionHandler:(void)arg4;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2 completionHandler:(void)arg3;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 performTransaction:(id)arg3 completionHandler:(void)arg4;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2 completionHandler:(void)arg3;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2;
- (void)performBlockAndWait:(id)arg1 completionHandler:(void)arg2;
- (void)performBlock:(id)arg1 completionHandler:(void)arg2;
- (void)performBlock:(id)arg1;
- (void)addCompletionHandlerToCurrentTransaction:(id)arg1;
- (void)performTransactionAndWait:(id)arg1 completionHandler:(void)arg2;
- (void)performTransaction:(id)arg1 completionHandler:(void)arg2;
- (void)performTransactionAndWait:(id)arg1;
- (void)performTransaction:(id)arg1;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (void)deleteAllImages;
- (void)_compactThumbnailTablesIfNecessary;
- (void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)arg1;
- (BOOL)rotateCameraPhoto:(id)arg1 byDegrees:(int)arg2;
- (void)deleteImages:(id)arg1;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOneItem;
- (id)iTunesFaceImageForRecordID:(int)arg1 faceIndex:(int)arg2 size:(struct CGSize)arg3 returnLocationInImage:(struct CGRect *)arg4;
- (void)photoLibraryAvailableNotification;
- (void)photoLibraryRebuildingNotification;
- (void)photoLibraryCorruptNotification;
- (void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
- (void)_loadPhotoLibraryAfterMigration;
- (id)_iTunesPhotos;
- (void)copyAssetToCameraRoll:(id)arg1;
- (void)clientApplicationWillEnterForeground;
- (id)countOfAllPhotosAndVideos;
- (void)flushAlbums;
- (void)flushPhotoStreamAlbums;
- (void)flushDCIMAlbums;
- (BOOL)libraryIsAvailable;
- (void)_releaseThumbnailManager;
@property(readonly, nonatomic) PLThumbnailManager *thumbnailManager;
- (void)dealloc;
- (id)initWithTransientContext:(BOOL)arg1;
- (id)init;
- (void)testForRecoveryInBackground;

@end

