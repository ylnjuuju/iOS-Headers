/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer-Protocol.h"

@class NSMutableArray, VGLRenderState;

@interface VKRasterMapModel : VKMapTileModel <VKMapLayer>
{
    VGLRenderState *_renderState;
    NSMutableArray *_sortedTiles;
    unsigned int _mapLayer;
    BOOL _rasterViewer;
}

+ (BOOL)reloadOnStylesheetChange;
@property(nonatomic) BOOL rasterViewer; // @synthesize rasterViewer=_rasterViewer;
@property(nonatomic) unsigned int mapLayerPosition; // @synthesize mapLayerPosition=_mapLayer;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (BOOL)isShowingNoDataPlaceholders;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

