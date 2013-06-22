/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQWrapPointGenerator-Protocol.h"

@class GQDRoot, GQDSStylesheet, GQPProcessor, GQSTable, GQZArchive;

@interface GQSDocument : NSObject <GQWrapPointGenerator>
{
    GQPProcessor *mProcessor;
    GQDRoot *mRoot;
    struct __CFURL *mBundleUrl;
    GQZArchive *mArchive;
    id <GQUOutputBundle> mOutputBundle;
    struct __CFArray *mObjectStack;
    id mGeneratorState;
    GQSTable *mTableState;
    Class mCurrentDrawablesGenerator;
    Class mCurrentTableGenerator;
    id <GQWrapPointGenerator> mCurrentWrapPointGenerator;
    BOOL mMustRegisterDrawables;
    BOOL mGeneratorBeginWasCalled;
    BOOL mShouldStreamTables;
    BOOL mDoExternalTextWrap;
    BOOL mGeneratingThumbnail;
    BOOL mThumbnailGenerationDone;
    unsigned int mTextScale;
    set_ac3beeb4 *mWrapPoints;
    struct __CFDictionary *mBundleResourceUriMap;
    GQDSStylesheet *mStylesheet;
    BOOL mIsReadingStorageAttachments;
    struct __CFString *mFilename;
}

- (struct __CFString *)filename;
- (BOOL)isReadingStorageAttachments;
- (void)setIsReadingStorageAttachments:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)setCurrentWrapPointGenerator:(id)arg1;
- (id)currentWrapPointGenerator;
- (struct __CFString *)uriForBundleResource:(struct __CFString *)arg1 ofType:(struct __CFString *)arg2;
- (void)clearWrapPoints;
- (vector_8a2ced25 *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const set_ac3beeb4 *)wrapPoints;
- (void)addWrapPoint:(id)arg1;
- (void)setThumbnailGenerationDone:(BOOL)arg1;
- (BOOL)isThumbnailGenerationDone;
- (void)setGeneratingThumbnail:(BOOL)arg1;
- (BOOL)isGeneratingThumbnail;
- (void)setGeneratorBeginWasCalled;
- (BOOL)generatorBeginWasCalled;
- (void)setDoExternalTextWrap:(BOOL)arg1;
- (BOOL)doExternalTextWrap;
- (void)setShouldStreamTables:(BOOL)arg1;
- (BOOL)shouldStreamTables;
- (void)setMustRegisterDrawables:(BOOL)arg1;
- (BOOL)mustRegisterDrawables;
- (void)setCurrentTableGenerator:(Class)arg1;
- (Class)currentTableGenerator;
- (void)setCurrentDrawablesGenerator:(Class)arg1;
- (Class)currentDrawablesGenerator;
- (void)setGeneratorState:(id)arg1;
- (id)generatorState;
- (void)setTableState:(id)arg1;
- (id)tableState;
- (int)objectStackDepth;
- (void)pushObject:(id)arg1;
- (id)popRetainedObject;
- (id)topObjectOfClass:(Class)arg1;
- (id)peekObject;
- (id)outputBundle;
- (struct __CFURL *)createUriToDocumentBundleResource:(struct __CFString *)arg1;
- (id)root;
- (id)processor;
- (void)dealloc;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4 filename:(struct __CFString *)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(struct __CFURL *)arg3 archive:(id)arg4 outputBundle:(id)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3 filename:(struct __CFString *)arg4;

@end

