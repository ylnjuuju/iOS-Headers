/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (double)fadeDuration;
+ (unsigned int)prefetchedTiles;
+ (BOOL)shouldDrawOnMainThread;
@property struct CGSize tileSize;
@property unsigned long levelsOfDetailBias;
@property unsigned long levelsOfDetail;
- (BOOL)_canDisplayConcurrently;
- (void)_display;
- (void)dealloc;
- (void)_dealloc;
- (void)invalidateContents;
- (void)setContents:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property float maximumTileScale;
@property struct CGColor *fillColor;
- (BOOL)queueIsEmpty;
- (void)displayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (BOOL)canDrawRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;

@end

