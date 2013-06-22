/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIKeyboardCandidateList-Protocol.h"
#import "UIKeyboardCandidateListDelegate-Protocol.h"

@class NSArray, NSString, UIKeyboardCandidateView<UIKeyboardCandidateViewInline>, UIView<UIKeyboardCandidateList>;

@interface UIKeyboardCandidateInline : NSObject <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate>
{
    NSArray *m_candidates;
    NSString *m_inlineText;
    struct CGRect m_inlineRect;
    UIView<UIKeyboardCandidateList> *m_inlineView;
    UIKeyboardCandidateView<UIKeyboardCandidateViewInline> *m_extendedView;
    struct {
        unsigned int isExtended;
    } _inlineFlags;
    int _promptTextType;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(nonatomic) int promptTextType; // @synthesize promptTextType=_promptTextType;
@property(nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=m_inlineRect;
@property(retain, nonatomic) NSString *inlineText; // @synthesize inlineText=m_inlineText;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=m_candidates;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)setCompletionContext:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)configureKeyboard:(id)arg1;
- (unsigned int)count;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)layout;
- (void)animateInlineCandidate;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (void)candidatesDidChange;
- (void)setInlineViewExtended:(BOOL)arg1;
- (id)activeCandidateList;
- (void)dealloc;
- (id)init;
- (BOOL)isReducedWidth;
- (id)_inlineView;

@end

