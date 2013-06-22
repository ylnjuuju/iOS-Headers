/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIToolbar, UIWindow;

@interface UIModalView : UIView <UITextFieldDelegate>
{
    id <UIModalViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyTextLabel;
    UILabel *_taglineTextLabel;
    float _startX;
    float _startY;
    id _context;
    int _cancelButton;
    int _defaultButton;
    int _firstOtherButton;
    UIToolbar *_toolbar;
    UIWindow *_originalWindow;
    UIWindow *_dimWindow;
    int _suspendTag;
    int _dismissButtonIndex;
    float _bodyTextHeight;
    NSMutableArray *_buttons;
    NSMutableArray *_textFields;
    UIView *_keyboard;
    UIView *_table;
    UIView *_dimView;
    UIView *_sheetView;
    struct {
        unsigned int numberOfRows:7;
        unsigned int delegateAlertSheetButtonClicked:1;
        unsigned int delegateDidPresentAlertSheet:1;
        unsigned int delegateDidDismissAlertSheet:1;
        unsigned int hideButtonBar:1;
        unsigned int alertStyle:3;
        unsigned int dontDimBackground:1;
        unsigned int dismissSuspended:1;
        unsigned int dontBlockInteraction:1;
        unsigned int sheetWasPoppedUp:1;
        unsigned int animating:1;
        unsigned int hideWhenDoneAnimating:1;
        unsigned int layoutWhenDoneAnimating:1;
        unsigned int titleMaxLineCount:2;
        unsigned int bodyTextMaxLineCount:3;
        unsigned int runsModal:1;
        unsigned int runningModal:1;
        unsigned int addedTextView:1;
        unsigned int addedTableShadows:1;
        unsigned int showOverSBAlerts:1;
        unsigned int showMinTableContent:1;
        unsigned int bodyTextTruncated:1;
        unsigned int orientation:3;
        unsigned int groupsTextFields:1;
        unsigned int delegateBodyTextAlignment:1;
        unsigned int delegateClickedButtonAtIndex:1;
        unsigned int delegateCancel:1;
        unsigned int delegateWillPresent:1;
        unsigned int delegateDidPresent:1;
        unsigned int delegateWillDismiss:1;
        unsigned int delegateDidDismiss:1;
        unsigned int popupFromPoint:1;
        unsigned int extra:20;
        unsigned int dontCallDismissDelegate:1;
        unsigned int useAutomaticKB:1;
        unsigned int shouldHandleFirstKeyUpEvent:1;
        unsigned int cancelWhenDoneAnimating:1;
    } _modalViewFlags;
}

+ (void)noteOrientationChangingTo:(int)arg1;
+ (id)visibleAlert;
+ (id)topMostAlert;
+ (BOOL)atLeastOneAlertVisible;
+ (id)_popupAlertBackground;
+ (struct CGSize)minimumSize;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (int)firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(int)arg1;
@property(nonatomic) int cancelButtonIndex;
- (int)defaultButtonIndex;
- (void)setDefaultButtonIndex:(int)arg1;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, nonatomic) int numberOfButtons;
- (id)buttonTitleAtIndex:(int)arg1;
- (int)addButtonWithTitle:(id)arg1;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) id <UIModalViewDelegate> delegate;
- (void)dealloc;
- (id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (void)_prepareToBeReplaced;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (id)taglineTextView;
- (id)bodyTextView;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)layout;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect)arg2 withMinimumHeight:(float)arg3;
- (int)numberOfLinesInTitle;
- (float)_buttonHeight;
- (float)_maxHeight;
- (struct CGRect)titleRect;
- (BOOL)runsModal;
- (void)setRunsModal:(BOOL)arg1;
- (BOOL)blocksInteraction;
- (void)setBlocksInteraction:(BOOL)arg1;
- (int)suspendTag;
- (void)setSuspendTag:(int)arg1;
- (BOOL)dimsBackground;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setAlertSheetStyle:(int)arg1;
- (int)alertSheetStyle;
- (int)numberOfRows;
- (void)setNumberOfRows:(int)arg1;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_appSuspended:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (float)_bottomVerticalInset;
- (float)_titleHorizontalInset;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (struct CGSize)backgroundSize;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismiss;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (id)_dimView;
- (void)setDimView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)userDidCancelPopoverView:(id)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 fromBarButtonItem:(id)arg2;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2;
- (BOOL)isBodyTextTruncated;
- (void)layoutAnimated:(BOOL)arg1;
- (void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_setupInitialFrame;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)_hideAnimated:(BOOL)arg1;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (BOOL)_canShowAlerts;
- (BOOL)_dimsBackground;
- (void)_repopup;
- (void)_repopupNoAnimation;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)_isAnimating;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_performPopup:(BOOL)arg1;
- (BOOL)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (BOOL)_shouldOrderInAutomaticKeyboard;
- (BOOL)_manualKeyboardIsVisible;
- (BOOL)_needsKeyboard;
- (id)tableView;
- (BOOL)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)_isSBAlert;
- (void)_buttonClicked:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (int)buttonCount;
- (id)_addButtonWithTitleText:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)_addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)destructiveButton;
- (void)setDestructiveButton:(id)arg1;
- (id)_defaultButton;
- (void)_setDefaultButton:(id)arg1;
- (id)defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)keyboard;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (id)textField;
- (int)textFieldCount;
- (id)textFieldAtIndex:(int)arg1;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (int)titleMaxLineCount;
- (void)setTitleMaxLineCount:(int)arg1;
- (id)bodyText;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)_setupTitleStyle;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (id)buttons;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (int)_currentOrientation;
- (BOOL)requiresPortraitOrientation;
@property(nonatomic) BOOL groupsTextFields;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;

@end

