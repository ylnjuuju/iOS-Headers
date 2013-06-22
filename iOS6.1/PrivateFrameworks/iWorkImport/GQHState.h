/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GQHTableState, GQHXML, GQSDocument;

@interface GQHState : NSObject
{
    GQHXML *mHtmlDoc;
    struct CGSize mScale;
    struct __CFString *mStyleData;
    GQHTableState *mTableState;
    GQSDocument *mProcessorState;
    struct __CFDictionary *mStyleIndexes;
    struct __CFDictionary *mStyleNameMap;
    struct __CFArray *mImplicitStyles;
    int mColoredBackgroundLayerCount;
    int mMultiColumnedDepth;
    struct __CFArray *mGraphicPropertiesStack;
    int mParagraphCount;
    int mParagraphIndex;
    int mCachedCellStyleIndex;
    struct __CFDictionary *mCachedTableStyles;
    int mCachedTextStyleIndex;
    struct __CFDictionary *mCachedTextStyles;
    int mInlineStyleIndex;
    struct __CFDictionary *mInlineStyles;
    struct __CFDictionary *mColorStrings;
    id <GQHContext> mShapeContext;
    int mOutlineLevel;
    int mOutlineStyleType;
    int mShapeIDCounter;
    unsigned int mTextScale;
}

- (id).cxx_construct;
- (BOOL)allowInlineWrap;
- (BOOL)needAbsolutelyPositionedTables;
- (void)invalidateTextScale;
- (void)setTextScale:(unsigned int)arg1;
- (unsigned int)textScale;
- (struct __CFString *)createUniqueShapeId:(const char *)arg1;
- (void)setOutlineStyleType:(int)arg1;
- (int)outlineStyleType;
- (void)setOutlineLevel:(int)arg1;
- (int)outlineLevel;
- (BOOL)useOutline;
- (id)shapeContext;
- (BOOL)shouldMapLinkWithUrl:(struct __CFString *)arg1;
- (struct __CFString *)getColorString:(id)arg1;
- (struct __CFString *)addCachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(BOOL)arg6 baseClassString:(struct __CFString *)arg7 cssCachedStyle:(id)arg8;
- (struct __CFString *)cachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(BOOL)arg6;
- (struct __CFString *)addCacheForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id *)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6 baseClassString:(struct __CFString *)arg7 cssCachedStyle:(id)arg8;
- (struct __CFString *)cachedClassStringForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id *)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6;
- (int)paragraphIndex;
- (void)setParagraphIndex:(int)arg1;
- (int)paragraphCount;
- (void)setParagraphCount:(int)arg1;
- (void)leaveGraphicObject;
- (void)enterGraphicObject;
- (BOOL)multiColumned;
- (void)setMultiColumned:(BOOL)arg1;
- (BOOL)coloredBackground;
- (void)setColoredBackground:(BOOL)arg1;
- (void)popImplicitStyle;
- (id)implicitStyle;
- (void)pushImplicitStyle:(id)arg1;
- (struct __CFString *)cssZOrderClassForDrawableUid:(const char *)arg1;
- (struct __CFString *)cssZOrderClassForDrawable:(id)arg1;
- (BOOL)drawablesNeedCssZOrdering;
- (struct __CFString *)createStyleName:(id)arg1 type:(const char *)arg2;
- (void)addedDrawableWithBounds:(struct CGRect)arg1;
- (BOOL)finishMainHtml;
- (id)processorState;
- (id)tableState;
- (struct __CFString *)className:(id)arg1;
- (void)addCachedStyle:(struct __CFString *)arg1;
- (struct __CFString *)makeInlineStyle:(struct __CFString *)arg1 inDocument:(id)arg2;
- (struct __CFString *)makeInlineStyle:(struct __CFString *)arg1;
- (void)addStyle:(struct __CFString *)arg1 className:(struct __CFString *)arg2 srcStyle:(id)arg3;
- (struct CGSize)scale;
- (void)setScale:(struct CGSize)arg1;
- (id)htmlDoc;
- (void)dealloc;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize)arg2;
- (id)initWithState:(id)arg1;
- (id)initWithState:(id)arg1 needIndexFile:(BOOL)arg2 documentSize:(struct CGSize)arg3;
- (int)indexForStyle:(const char *)arg1;

@end

