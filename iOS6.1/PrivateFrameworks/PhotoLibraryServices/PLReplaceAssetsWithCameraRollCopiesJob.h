/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSPersistentStoreCoordinator, PLManagedAlbum, PLManagedObjectContext, PLPhotoLibrary;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob
{
    NSArray *_assets;
    PLManagedAlbum *_album;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) PLManagedAlbum *album; // @synthesize album=_album;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)_cameraRollAssetDerivedFromAsset:(id)arg1;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (void)run;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property(readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
- (int)daemonOperation;
- (void)dealloc;

@end

