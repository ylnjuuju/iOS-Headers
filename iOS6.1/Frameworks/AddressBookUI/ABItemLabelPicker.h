/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "ABSimpleTextInputViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ABPropertyGroup, ABStyleProvider, NSIndexPath, NSMutableArray, NSString, UITableView;

@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate>
{
    id _delegate;
    id _editedItem;
    NSString *_savedLabel;
    NSString *_selectedLabel;
    NSIndexPath *_selectedPath;
    UITableView *_tableView;
    NSMutableArray *_additionalLabels;
    struct __CFArray *_sortedCustomItemLabelInfos;
    struct __CFArray *_sortedDefaultItemLabelInfos;
    void *_sortedCustomItemLabelInfosMemory;
    void *_sortedDefaultItemLabelInfosMemory;
    ABPropertyGroup *_propertyGroup;
    int _property;
    int _itemIndex;
    void *_addressBook;
    BOOL _addLabelDisabled;
    BOOL _didCreateNewLabel;
    ABStyleProvider *_styleProvider;
}

+ (id)defaultLabelsForProperty:(int)arg1 person:(void *)arg2 addressBook:(void *)arg3 outBestLabelIndex:(int *)arg4 forceIncludeLabels:(id)arg5;
+ (id)defaultLabelsForPropertyGroup:(id)arg1 index:(int)arg2 addressBook:(void *)arg3 outBestLabelIndex:(int *)arg4 forceIncludeLabels:(id)arg5;
+ (id)_defaultLabelsForProperty:(int)arg1 person:(void *)arg2 propertyGroup:(id)arg3 index:(int)arg4 addressBook:(void *)arg5 outBestLabelIndex:(int *)arg6 forceIncludeLabels:(id)arg7;
+ (struct __CFDictionary *)copyLabelUsageForProperty:(int)arg1 person:(void *)arg2;
+ (struct __CFDictionary *)copyLabelUsageForPropertyGroup:(id)arg1 person:(void *)arg2;
+ (id)defaultLabelsForProperty:(int)arg1 policy:(void *)arg2;
+ (id)builtInLabelsForProperty:(int)arg1;
@property(nonatomic) BOOL didCreateNewLabel; // @synthesize didCreateNewLabel=_didCreateNewLabel;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic, getter=isAddLabelDisabled) BOOL addLabelDisabled; // @synthesize addLabelDisabled=_addLabelDisabled;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (void)displayScrollerIndicators;
- (BOOL)shouldPopItem;
- (void)createNewCustomLabel;
- (void)toggleEditing;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)isEditing;
- (BOOL)canEdit;
- (void)_didEndPickingAndConfirmed:(BOOL)arg1 animate:(BOOL)arg2;
- (void)buildUI;
- (void)setDelegate:(id)arg1;
- (void)reloadData;
- (void)reloadItemLabels;
- (BOOL)allowsCustomLabels;
- (id)selectedLabel;
- (void)setSelectedLabel:(id)arg1;
- (void)_matchSelectedPathWithSelectedLabel;
- (void)_setSelectedLabel:(id)arg1;
- (void)_setSelectedPath:(id)arg1;
- (void)_setSelectedLabel:(id)arg1 atPath:(id)arg2;
- (id)savedLabel;
- (void)setSavedLabel:(id)arg1;
- (void)setAdditionalLabels:(id)arg1;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void)setPropertyGroup:(id)arg1 itemIndex:(int)arg2;
- (void)resetLabelCaches;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

