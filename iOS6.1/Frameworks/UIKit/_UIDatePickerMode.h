/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSDateComponents, NSString, UIColor, UIFont, _UIDatePickerView;

@interface _UIDatePickerMode : NSObject
{
    NSDateComponents *_selectedDateComponents;
    NSDateComponents *_baseDateComponents;
    unsigned int *_elements;
    int _yearsSinceBaseDate;
    struct _NSRange _maxDayRange;
    struct _NSRange _maxMonthRange;
    NSString *_localizedFormatString;
    NSArray *_dateFormatters;
    unsigned int _numberOfComponents;
    NSString *_amString;
    NSString *_pmString;
    int _minuteInterval;
    NSDateComponents *_todayDateComponents;
    double _todaySinceReferenceDate;
    UIFont *_font;
    UIFont *_amPmFont;
    UIFont *_defaultTimeFont;
    UIColor *_todayTextColor;
    NSDate *_baseDate;
    NSDate *_minimumDate;
    NSDateComponents *_minimumDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_maximumDateComponents;
    NSDate *_originatingDate;
    _UIDatePickerView *datePickerView;
}

+ (unsigned int)extractableCalendarUnits;
+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)_datePickerModeWithMode:(int)arg1 datePickerView:(id)arg2;
+ (int)datePickerMode;
+ (id)newDateFromGregorianYear:(int)arg1 month:(int)arg2 day:(int)arg3 timeZone:(id)arg4;
@property(nonatomic) _UIDatePickerView *datePickerView; // @synthesize datePickerView;
@property(retain, nonatomic) NSDateComponents *selectedDateComponents; // @synthesize selectedDateComponents=_selectedDateComponents;
@property(retain, nonatomic) NSDate *originatingDate; // @synthesize originatingDate=_originatingDate;
@property(readonly, nonatomic) NSDateComponents *maximumDateComponents; // @synthesize maximumDateComponents=_maximumDateComponents;
@property(readonly, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(readonly, nonatomic) NSDateComponents *minimumDateComponents; // @synthesize minimumDateComponents=_minimumDateComponents;
@property(readonly, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(nonatomic) int yearsSinceBaseDate; // @synthesize yearsSinceBaseDate=_yearsSinceBaseDate;
@property(retain, nonatomic) NSDate *baseDate; // @synthesize baseDate=_baseDate;
@property(retain, nonatomic) NSString *localizedFormatString; // @synthesize localizedFormatString=_localizedFormatString;
@property(nonatomic) double todaySinceReferenceDate; // @synthesize todaySinceReferenceDate=_todaySinceReferenceDate;
@property(nonatomic) int minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(nonatomic) unsigned int numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
- (void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (BOOL)_shouldEnableValueForRow:(int)arg1 column:(int)arg2;
- (BOOL)_scrollingAnyColumnExcept:(int)arg1;
- (BOOL)_isComponentScrolling:(int)arg1;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2;
- (id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2;
- (BOOL)_monthExists:(int)arg1 inYear:(int)arg2;
- (int)_numberOfDaysInDateComponents:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(BOOL)arg2;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(int)arg1;
- (void)loadDate:(id)arg1 animated:(BOOL)arg2;
- (int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4;
- (struct _NSRange)rangeForCalendarUnit:(unsigned int)arg1;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (int)valueForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (int)eraForYearRow:(int)arg1;
- (int)yearForRow:(int)arg1;
- (int)monthForRow:(int)arg1;
- (int)dayForRow:(int)arg1;
- (int)hourForRow:(int)arg1;
- (int)minuteForRow:(int)arg1;
- (int)secondForRow:(int)arg1;
- (id)_dateForYearRow:(int)arg1;
- (id)_dateByEnsuringValue:(int)arg1 forCalendarUnit:(unsigned int)arg2;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (int)_incrementForStaggeredTimeIntervals;
- (float)totalComponentWidthWithFont:(id)arg1;
- (float)totalComponentWidth;
- (void)resetComponentWidths;
- (void)noteCalendarChanged;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (int)numberOfRowsInComponent:(int)arg1;
- (int)componentForCalendarUnit:(unsigned int)arg1;
- (unsigned int)calendarUnitForComponent:(int)arg1;
@property(readonly, nonatomic) int displayedCalendarUnits;
@property(nonatomic) unsigned int *elements; // @synthesize elements=_elements;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (float)widthForComponent:(int)arg1 maxWidth:(float)arg2;
@property(readonly, nonatomic) UIColor *todayTextColor; // @synthesize todayTextColor=_todayTextColor;
@property(readonly, nonatomic) float rowHeight;
@property(readonly, nonatomic) UIFont *amPmFont; // @synthesize amPmFont=_amPmFont;
@property(readonly, nonatomic) UIFont *defaultTimeFont; // @synthesize defaultTimeFont=_defaultTimeFont;
@property(readonly, nonatomic) UIFont *sizedFont;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)fontForCalendarUnit:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *pmString; // @synthesize pmString=_pmString;
@property(readonly, nonatomic) NSString *amString; // @synthesize amString=_amString;
@property(retain, nonatomic) NSDateComponents *baseDateComponents;
- (void)clearBaseDate;
@property(retain, nonatomic) NSDateComponents *todayDateComponents; // @synthesize todayDateComponents=_todayDateComponents;
- (id)dateFormatterForCalendarUnit:(unsigned int)arg1;
@property(readonly, nonatomic) int datePickerMode;
- (BOOL)is24Hour;
- (float)componentWidthForTwoDigitCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (void)_shouldReset:(id)arg1;
- (id)timeZone;
- (id)locale;
- (id)calendar;
- (void)dealloc;
- (id)init;

@end

