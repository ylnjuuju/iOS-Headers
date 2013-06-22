/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSEditingPane.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class PSTextEditingCell, UITableView, UITextField;

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    PSTextEditingCell *_cell;
    UITextField *_textField;
}

- (void)setPreferenceSpecifier:(id)arg1;
- (id)preferenceValue;
- (void)setPreferenceValue:(id)arg1;
- (BOOL)becomeFirstResponder;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

