//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSSet, TNChartSelection, TNSheetSelection, TSTTableSelection, TSURetainedPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TNUIState : NSObject <NSCopying>
{
    TSURetainedPointerKeyDictionary *mSheetUIStates;
    TSURetainedPointerKeyDictionary *mEditModeSheetUIStates;
    BOOL mShowCanvasGuides;
    BOOL mInspectorPaneVisible;
    BOOL mRemovedAllQuickCalcFunctions;
    BOOL mShowsComments;
    TNSheetSelection *mSheetSelection;
    NSSet *mSelectedInfos;
    id <TNUIStateDelegate> mDelegate;
    TSTTableSelection *mTableSelection;
    int mDocumentMode;
    int mTableEditingMode;
    TNChartSelection *mChartSelection;
    int mInspectorPaneViewMode;
    NSArray *mSelectedQuickCalcFunctions;
    struct CGSize mDesktopScreenSize;
    struct CGRect mDesktopWindowFrame;
}

@property(nonatomic) struct CGSize desktopScreenSize; // @synthesize desktopScreenSize=mDesktopScreenSize;
@property(nonatomic) struct CGRect desktopWindowFrame; // @synthesize desktopWindowFrame=mDesktopWindowFrame;
@property(nonatomic) BOOL showsComments; // @synthesize showsComments=mShowsComments;
@property(nonatomic) BOOL showCanvasGuides; // @synthesize showCanvasGuides=mShowCanvasGuides;
@property(nonatomic) BOOL removedAllQuickCalcFunctions; // @synthesize removedAllQuickCalcFunctions=mRemovedAllQuickCalcFunctions;
@property(copy, nonatomic) NSArray *selectedQuickCalcFunctions; // @synthesize selectedQuickCalcFunctions=mSelectedQuickCalcFunctions;
@property(nonatomic) int inspectorPaneViewMode; // @synthesize inspectorPaneViewMode=mInspectorPaneViewMode;
@property(nonatomic, getter=isInspectorPaneVisible) BOOL inspectorPaneVisible; // @synthesize inspectorPaneVisible=mInspectorPaneVisible;
@property(retain, nonatomic) TNChartSelection *chartSelection; // @synthesize chartSelection=mChartSelection;
@property(nonatomic) int tableEditingMode; // @synthesize tableEditingMode=mTableEditingMode;
@property(nonatomic) int documentMode; // @synthesize documentMode=mDocumentMode;
@property(retain, nonatomic) TSTTableSelection *tableSelection; // @synthesize tableSelection=mTableSelection;
@property(nonatomic) id <TNUIStateDelegate> delegate; // @synthesize delegate=mDelegate;
@property(retain, nonatomic) NSSet *selectedInfos; // @synthesize selectedInfos=mSelectedInfos;
@property(retain, nonatomic) TNSheetSelection *sheetSelection; // @synthesize sheetSelection=mSheetSelection;
- (id).cxx_construct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct UIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct UIStateArchive *)arg1 unarchiver:(id)arg2;
- (id)description;
- (id)archivedUIStateInContext:(id)arg1;
- (void)p_exitPaginatedMode;
- (void)p_enterPaginatedMode;
@property(nonatomic) unsigned char formFocusedFieldIndex;
@property(nonatomic) unsigned short formFocusedRecordIndex;
@property(readonly, nonatomic) BOOL hasPreviousVisibleRect;
@property(readonly, nonatomic) BOOL hasVisibleRect;
- (void)removeUIStateForSheet:(id)arg1;
- (id)uiStateForSheet:(id)arg1;
- (void)setUIState:(id)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) float previousViewScale;
@property(readonly, nonatomic) float viewScale;
- (float)p_defaultViewScale;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect)arg1;
- (void)clearPreviousVisibleRect;
@property(nonatomic) struct CGRect previousVisibleRect;
- (void)setPreviousVisibleRect:(struct CGRect)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) struct CGPoint previousScrollPosition;
- (void)clearVisibleRect;
@property(nonatomic) struct CGRect visibleRect;
- (void)setVisibleRect:(struct CGRect)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) struct CGPoint scrollPosition;
- (void)dealloc;
- (id)init;

@end

