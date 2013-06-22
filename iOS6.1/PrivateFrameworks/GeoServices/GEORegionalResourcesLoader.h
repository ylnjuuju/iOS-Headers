/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_GEORegionalResourcesRequestDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSSet, NSString;

@interface GEORegionalResourcesLoader : NSObject <_GEORegionalResourcesRequestDelegate>
{
    NSString *_targetDirectory;
    NSMutableSet *_resourceIdentifiersToLoad;
    NSMutableArray *_requests;
    BOOL _started;
    BOOL _allowsNetwork;
    NSString *_baseURLString;
    id _keyProgressHandler;
    id _listProgressHandler;
    id _completionHandler;
    id _errorHandler;
}

@property(nonatomic) BOOL allowsNetwork; // @synthesize allowsNetwork=_allowsNetwork;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFinishLoadForTileKey:(struct _GEOTileKey)arg2 resourceIdentifiers:(id)arg3;
- (void)cancelForTileKeys:(id)arg1;
- (void)startWithKeyProgressHandler:(id)arg1 listProgressHandler:(void)arg2 completionHandler:(id)arg3 errorHandler:(void)arg4;
- (void)_loadNextResource;
- (void)_handleCompletedResource:(id)arg1;
- (id)_pathForResourceIdentifier:(id)arg1;
- (void)addResourceIdentifiers:(id)arg1 forTileKeys:(id)arg2 fromList:(id)arg3;
@property(readonly, nonatomic) NSSet *tileKeyLists;
- (void)dealloc;
- (id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2;

@end

