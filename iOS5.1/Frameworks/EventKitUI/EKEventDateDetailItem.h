/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailItem.h>

#import "EKCellShortener-Protocol.h"

@class PreferencesDoubleTwoPartValueCell;

@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener>
{
    PreferencesDoubleTwoPartValueCell *_cell;
    CDStruct_b0fa4487 _startDateGr;
    CDStruct_b0fa4487 _endDateGr;
    BOOL _indent;
}

- (void)shortenCell:(id)arg1;
- (id)cellForSubitemAtIndex:(int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)reset;

@end

