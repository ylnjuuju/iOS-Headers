/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/ICCameraFolder.h>

@class NSString;

@interface PTPCameraFolder : ICCameraFolder
{
    void *_ptpCameraFolderProperties;
    NSString *_path;
}

@property(retain) NSString *path; // @synthesize path=_path;
- (id)description;
- (void)enumerateContent;
- (BOOL)hasDCIMParent;
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)arg1 addUsedObjectIDs:(id)arg2 numFoldersCreated:(int *)arg3;
- (id)folderForObjectHandle:(unsigned long)arg1;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (void)refreshInfo;
- (BOOL)deleteItemFromCamera:(id)arg1;
@property(copy) id info;
@property(readonly) unsigned long objHandle;
@property(readonly) unsigned long storageID;
@property(readonly) unsigned int type;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned int)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6;

@end

