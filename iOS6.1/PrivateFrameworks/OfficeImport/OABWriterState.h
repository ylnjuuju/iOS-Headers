/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ESDContainer, NSMutableArray, NSMutableDictionary, OABWriterClient, OADColorMap, OADColorScheme, TSUPointerKeyDictionary;

@interface OABWriterState : NSObject
{
    OABWriterClient *mClient;
    ESDContainer *mDrawingGroup;
    NSMutableArray *mDrawings;
    TSUPointerKeyDictionary *mDrawableMap;
    NSMutableDictionary *mSourceDrawableIdToSourceDrawableMap;
    NSMutableArray *mConnectorsInCurrentDrawing;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
}

@property(retain) OADColorScheme *colorScheme; // @synthesize colorScheme=mColorScheme;
@property(retain) OADColorMap *colorMap; // @synthesize colorMap=mColorMap;
- (unsigned int)indexForChild:(id)arg1 parentContainer:(id)arg2;
- (void)cacheCHDChart:(id)arg1 forESDObject:(id)arg2;
- (id)connectorsInCurrentDrawing;
- (id)mappingForRGBColor:(id)arg1;
- (unsigned long)targetShapeIdForSourceDrawableId:(unsigned long)arg1;
- (unsigned long)targetShapeIdForSourceDrawable:(id)arg1;
- (id)targetObjectForSourceDrawable:(id)arg1;
- (id)sourceDrawableForSourceDrawableId:(unsigned long)arg1;
- (void)setTargetObject:(id)arg1 forSourceDrawable:(id)arg2;
- (void)addDrawing:(id)arg1;
- (id)drawingAtIndex:(unsigned int)arg1;
- (unsigned int)drawingCount;
- (void)setDrawingGroup:(id)arg1;
- (id)drawingGroup;
- (id)client;
- (void)dealloc;
- (id)initWithClient:(id)arg1;

@end

