/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class GKCoreTextLabel, GKUITheme, NSDate, NSString;

@interface GKGameTitleView : UIView
{
    GKUITheme *_theme;
    NSString *_title;
    NSDate *_date;
    float _maxTitleFontSize;
    float _maxDateLabelFontSize;
    float _maxDateFontSize;
    unsigned int _numberOfTitleLines;
    struct UIEdgeInsets _datelineInsets;
    GKCoreTextLabel *_lastPlayedLabel;
    GKCoreTextLabel *_dateLabel;
    GKCoreTextLabel *_gameTitleLabel;
}

@property(retain, nonatomic) GKCoreTextLabel *gameTitleLabel; // @synthesize gameTitleLabel=_gameTitleLabel;
@property(retain, nonatomic) GKCoreTextLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) GKCoreTextLabel *lastPlayedLabel; // @synthesize lastPlayedLabel=_lastPlayedLabel;
@property(nonatomic) struct UIEdgeInsets datelineInsets; // @synthesize datelineInsets=_datelineInsets;
@property(nonatomic) unsigned int numberOfTitleLines; // @synthesize numberOfTitleLines=_numberOfTitleLines;
@property(nonatomic) float maxDateFontSize; // @synthesize maxDateFontSize=_maxDateFontSize;
@property(nonatomic) float maxDateLabelFontSize; // @synthesize maxDateLabelFontSize=_maxDateLabelFontSize;
@property(nonatomic) float maxTitleFontSize; // @synthesize maxTitleFontSize=_maxTitleFontSize;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)layoutSubviews;
- (struct CGRect)layoutGameTitleLabelWithBounds:(struct CGRect)arg1;
- (void)layoutDateLineWithBounds:(struct CGRect)arg1 viewBounds:(struct CGRect)arg2 hasValidDate:(BOOL)arg3;
- (id)formattedDateForStyle:(unsigned int)arg1 relative:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

