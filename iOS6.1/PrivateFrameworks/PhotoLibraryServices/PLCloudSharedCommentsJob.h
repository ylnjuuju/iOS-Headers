/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob
{
    NSArray *_msASComments;
    int _jobType;
    NSString *_albumGUID;
    NSString *_assetGUID;
    NSString *_commentGUID;
    NSDictionary *_mstreamdInfoDictionary;
}

+ (id)directoryPathForInFlightComments:(BOOL)arg1;
+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;
+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
+ (void)deleteSharedCommentFromServer:(id)arg1;
+ (void)publishCommentToServer:(id)arg1;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(retain, nonatomic) NSString *commentGUID; // @synthesize commentGUID=_commentGUID;
@property(retain, nonatomic) NSString *assetGUID; // @synthesize assetGUID=_assetGUID;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(nonatomic) int jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSArray *msASComments; // @synthesize msASComments=_msASComments;
- (void)executeDeleteCommentFromServer;
- (void)executePublishCommentToServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;
- (void)run;
- (int)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;

@end

