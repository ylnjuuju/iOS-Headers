//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

#import "EKCellShortener.h"

@class EKCalendarItemRecurrenceEndCell, EKRecurrenceTypeEditItemViewController, NSDate, NSString, PreferencesValueCell;

__attribute__((visibility("hidden")))
@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKCellShortener>
{
    int _repeatType;
    int _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    unsigned int _disclosedSubitem;
    int _shorteningStatus;
    PreferencesValueCell *_repeatEndDateCell;
    EKRecurrenceTypeEditItemViewController *_recurrenceTypeVC;
    EKCalendarItemRecurrenceEndCell *_repeatEndPickerCell;
}

- (void).cxx_destruct;
- (id)_recurrenceTypeVC;
- (void)_neverRepeatButtonTapped:(id)arg1;
- (void)_repeatEndDateChanged:(id)arg1;
- (id)_repeatEndPickerCell;
- (id)minRecurrenceEndDate;
- (id)stringForDate:(id)arg1;
- (id)recurrenceTimeZone;
- (id)recurrenceDate;
- (void)shortenCell:(id)arg1;
- (BOOL)_validateRecurrenceType:(id)arg1;
- (BOOL)editItemViewControllerCommit:(id)arg1 notify:(BOOL)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (void)_updateRepeatEndDateCell;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (unsigned int)numberOfSubitemsInSubsection:(unsigned int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)reset;

@end

