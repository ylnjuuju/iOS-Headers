/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DOMRange, UIResponder<UITextInputPrivate>, UITextRange;

@interface UITextSelection : NSObject
{
    UIResponder<UITextInputPrivate> *_document;
    int _granularity;
    UITextRange *_selectedRange;
    UITextRange *_base;
    UITextRange *_initialExtent;
    BOOL _isCommitting;
}

@property(readonly, nonatomic) BOOL isCommitting; // @synthesize isCommitting=_isCommitting;
@property(readonly, nonatomic) UIResponder<UITextInputPrivate> *document; // @synthesize document=_document;
@property(retain, nonatomic) UITextRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) UITextRange *initialExtent; // @synthesize initialExtent=_initialExtent;
@property(nonatomic) int granularity; // @synthesize granularity=_granularity;
@property(retain, nonatomic) UITextRange *base; // @synthesize base=_base;
- (void)smartExtendRangedSelection:(int)arg1 downstream:(BOOL)arg2;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (struct CGPoint)clipPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelection;
- (BOOL)hasEditableSelection;
- (BOOL)pointAtEndOfLine:(struct CGPoint)arg1;
- (BOOL)pointAtStartOfLine:(struct CGPoint)arg1;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (void)alterSelection:(struct CGPoint)arg1 granularity:(int)arg2;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)collapseSelection;
- (void)clearSelection;
- (void)selectAll;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (unsigned int)offsetInMarkedText;
- (struct CGRect)closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(BOOL)arg2;
- (id)selectedText;
- (id)wordContainingCaretSelection;
- (struct CGRect)caretRectAtBeginOfDocument;
- (struct CGRect)caretRectAtEndOfDocument;
- (struct CGRect)caretRect;
- (id)selectionRects;
@property(readonly, nonatomic, getter=_domRange) DOMRange *domRange;
- (void)commit;
- (void)selectionChanged;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDocument:(id)arg1;

@end

