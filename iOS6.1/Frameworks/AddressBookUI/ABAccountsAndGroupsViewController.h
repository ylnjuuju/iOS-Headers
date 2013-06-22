/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABAbstractViewController.h>

#import "UITableViewDelegate-Protocol.h"

@class ABAccountsAndGroupDataSource, ABPeoplePickerNavigationController, UITableView;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate>
{
    ABAccountsAndGroupDataSource *_dataSource;
    BOOL _needsReload;
    BOOL _tableViewNeedsReloadAfterResume;
    BOOL _showsRefreshButton;
    ABPeoplePickerNavigationController *_peoplePickerNavigationController;
}

@property(nonatomic) ABPeoplePickerNavigationController *peoplePickerNavigationController; // @synthesize peoplePickerNavigationController=_peoplePickerNavigationController;
@property(readonly, nonatomic) ABAccountsAndGroupDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)modelDatabaseChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateDisplayedContactsFilterFromSelection;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)done:(id)arg1;
- (int)abViewControllerType;
- (void)applicationDidResume;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setStyleProvider:(id)arg1;
- (void)_applyStylesToTableView:(id)arg1;
- (void)setModel:(id)arg1;
- (id)model;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
@property(nonatomic) BOOL hidesGlobalGroupWrapper;
@property(nonatomic) BOOL hidesSearchableSources;
- (void)accessibilityLargeTextDidChange;
- (void)_applyAccessibilityFontChanges;
@property(readonly, nonatomic) UITableView *tableView;
- (void)updateRefreshButton;
- (void)refreshEverythingNow;
- (void)reloadData;
- (id)allGroupWrapperIndexPaths;

@end

