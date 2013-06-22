/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject
{
    EKSource *_source;
    NSMutableArray *_calendars;
    BOOL _selected;
    BOOL _showSelectAllButton;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
}

@property(nonatomic) BOOL showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (id)description;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) BOOL isSubscribed;
@property(readonly, nonatomic) BOOL showCalendarNameIfSolitary;
@property(readonly, nonatomic) BOOL showAddCalendarButton;
- (void)selectNone;
- (void)selectAll;
@property(readonly, nonatomic) NSSet *selectedCalendarSet;
@property(readonly, nonatomic) NSSet *calendarSet;
- (id)copyCalendars;
- (id)calendarAtIndex:(int)arg1;
@property(readonly, nonatomic) int numSelectedCalendars;
@property(readonly, nonatomic) int numCalendars;
@property(readonly, nonatomic) NSArray *calendarInfos;
@property(readonly, nonatomic) NSString *typeTitle;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
@property(readonly, nonatomic) NSString *title;
@property(retain, nonatomic) EKSource *source;
- (void)removeCalendar:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (void)dealloc;
- (id)init;

@end

