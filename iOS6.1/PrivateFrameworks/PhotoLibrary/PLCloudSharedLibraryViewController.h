/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLLibraryViewController.h>

@interface PLCloudSharedLibraryViewController : PLLibraryViewController
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)indexPathForAlbum:(struct NSObject *)arg1;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)subtitleForAlbum:(struct NSObject *)arg1;
- (id)tableOffsetKey;
- (int)_cellEditStyleForAlbum:(struct NSObject *)arg1;
- (void)loadView;

@end

