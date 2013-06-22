/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABMultiCellContentView.h>

#import "UITextFieldDelegate-Protocol.h"

@class ABHighlightingTextField, NSString;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate>
{
    ABHighlightingTextField *_textField;
    NSString *_previousValue;
}

+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
- (CDStruct_421913e2)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)isValidValue:(id)arg1;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (void)setAbCellStyle:(int)arg1;
- (id)viewForFirstResponder;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)wantsLabelDivider;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (void)reloadFromModel;
- (void)reload;
- (id)pickerView;
@property(readonly, nonatomic) NSString *text;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (BOOL)canHandleProperty:(int)arg1;
- (void)dealloc;

@end

