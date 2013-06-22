/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "EKEventAttendeePickerDelegate-Protocol.h"

@class EKCalendarShareePicker, NSArray;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate>
{
    EKCalendarShareePicker *_picker;
    id <EKShareePickerViewControllerDelegate> _delegate;
}

@property(nonatomic) id <EKShareePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)eventAttendeePicker:(id)arg1 getValidationStatusForEmailAddress:(id)arg2;
- (void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(int)arg2 forEmail:(id)arg3;
- (struct CGSize)contentSizeForViewInPopover;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
@property(copy, nonatomic) NSArray *sharees;
- (id)_recipientFromSharee:(id)arg1;
- (id)_shareeFromRecipient:(id)arg1;
- (void)add;
- (void)cancel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setSearchAccountID:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

