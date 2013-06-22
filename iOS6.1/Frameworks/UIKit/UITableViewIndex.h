/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, UIColor, UIFont;

@interface UITableViewIndex : UIControl
{
    NSArray *_titles;
    UIFont *_font;
    int _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    struct CGSize _cachedSize;
    struct CGSize _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
}

@property(readonly, nonatomic) BOOL pastBottom; // @synthesize pastBottom=_pastBottom;
@property(readonly, nonatomic) BOOL pastTop; // @synthesize pastTop=_pastTop;
@property(readonly, nonatomic) int selectedSection; // @synthesize selectedSection=_selectedSection;
@property(retain, nonatomic) UIColor *indexBackgroundColor;
@property(retain, nonatomic) UIColor *indexColor;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned int)maximumNumberOfTitlesWithoutTruncationForHeight:(float)arg1;
@property(readonly, nonatomic) NSString *selectedSectionTitle;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) NSArray *titles;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_displayTitles;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)mouseDragged:(struct __GSEvent *)arg1;
- (void)mouseDown:(struct __GSEvent *)arg1;
- (id)_createTouchesWithMouseEvent:(struct __GSEvent *)arg1 phase:(int)arg2;

@end

