/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DOMNode.h"

#import "UIKeyInput-Protocol.h"
#import "UIKeyboardInput-Protocol.h"
#import "UITextInputTokenizer-Protocol.h"

@class NSDictionary, UIColor, UIImage, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UIKeyInput, UITextInputTokenizer>
- (id)textDocument;
@property(nonatomic) int selectionAffinity;
- (BOOL)editing;
- (BOOL)editable;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (struct CGRect)caretRectForPosition:(id)arg1;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (BOOL)hasText;
- (void)unmarkText;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)moveDown;
- (void)moveUp;
- (void)moveLeft;
- (void)moveRight;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(BOOL)arg3;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_textSelectingContainer;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (BOOL)isEditing;
- (BOOL)isEditable;
- (id)content;
- (void)updateSelection;
- (id)selectionView;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (BOOL)isAutoFillMode;
- (void)acceptedAutoFillWord:(id)arg1;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)updateAutoscroll:(id)arg1;
- (id)automaticallySelectedOverlay;
- (void)setInitialSelectionBehavior:(int)arg1;
- (int)initialSelectionBehavior;
@property(nonatomic) int returnKeyType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(nonatomic) id textSuggestionDelegate;
- (BOOL)isShowingPlaceholder;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (struct CGRect)caretRect;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1 inset:(float)arg2;
- (id)text;
- (void)setText:(id)arg1;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1 withInset:(float)arg2;
- (int)selectionState;
- (void)selectAll;
- (void)moveForward:(unsigned int)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (BOOL)selectionAtWordStart;
- (BOOL)selectionAtDocumentStart;
- (BOOL)hasSelection;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (id)selectedDOMRange;
- (struct _NSRange)selectionRange;
- (struct _NSRange)_markedTextNSRange;
- (int)wordOffsetInRange:(id)arg1;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (struct CGRect)rectContainingCaretSelection;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRangeWithText:(struct _NSRange)arg1 replacementText:(id)arg2;
- (id)markedText;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (struct CGRect)rectForNSRange:(struct _NSRange)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMarkedText:(id)arg1;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)uiWebDocumentView;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)requiresKeyEvents;
- (id)delegate;
- (void)setSecure:(BOOL)arg1;
- (id)textInputTraits;
- (void)setupPlaceholderTextIfNeeded;
- (BOOL)hasContent;
- (void)takeTraitsFrom:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) BOOL deferBecomingResponder;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) BOOL forceEnableDictation;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) int spellCheckingType;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;
@end

