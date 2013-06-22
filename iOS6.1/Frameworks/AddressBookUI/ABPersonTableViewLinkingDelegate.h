/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABPersonLinkingUIDelegate-Protocol.h"

@class ABPersonTableViewDataSource, ABPersonViewControllerHelper, NSArray, NSMutableArray;

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate>
{
    NSMutableArray *_linkedInfos;
    int _currentIndexInLinkedInfos;
    BOOL _ignoresReloadLinkedInfos;
    BOOL _shouldAllowLinkingAnotherContact;
    BOOL _hasLinkChanges;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonViewControllerHelper *_helper;
    BOOL _shouldShowLinkingUIOnCard;
    BOOL _showsLinkedPeople;
    BOOL _appearsInLinkingPeoplePicker;
    BOOL _updateShouldAllowLinkingAnotherContact;
}

@property(nonatomic) BOOL updateShouldAllowLinkingAnotherContact; // @synthesize updateShouldAllowLinkingAnotherContact=_updateShouldAllowLinkingAnotherContact;
@property(nonatomic) BOOL appearsInLinkingPeoplePicker; // @synthesize appearsInLinkingPeoplePicker=_appearsInLinkingPeoplePicker;
@property(nonatomic) BOOL shouldShowLinkedPeople; // @synthesize shouldShowLinkedPeople=_showsLinkedPeople;
@property(nonatomic) BOOL shouldShowLinkingUIOnCard; // @synthesize shouldShowLinkingUIOnCard=_shouldShowLinkingUIOnCard;
@property(readonly, nonatomic) NSArray *linkedInfos; // @synthesize linkedInfos=_linkedInfos;
@property(readonly, nonatomic) BOOL hasLinkChanges; // @synthesize hasLinkChanges=_hasLinkChanges;
@property(readonly, nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;
@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)newPeoplePickerForLinking;
- (id)newPersonViewControllerForLinkedCardAtRow:(int)arg1;
- (BOOL)shouldAllowLinkingPersonWithRecordID:(int)arg1;
- (BOOL)shouldAllowLinkingAnotherContact;
- (id)sourceNameForCardAtRow:(int)arg1;
- (id)personNameForCardAtRow:(int)arg1;
- (BOOL)canUnlinkCardAtRow:(int)arg1;
- (int)numberOfLinkedCardRows;
- (BOOL)manuallyUnlinkCardAtRow:(int)arg1;
- (void)_finalizeLinkChanges;
- (BOOL)manuallyLinkPerson:(void *)arg1;
- (id)allNonUnifiedPeople;
- (void)reloadLinkingUI;
- (BOOL)reloadLinkedInfos;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
- (id)newLinkedInfoForPerson:(void *)arg1;
- (id)linkedInfoAtRow:(int)arg1;
- (int)indexOfLinkedInfoAtRow:(int)arg1;
- (id)sourceNameForCurrentCard;
- (BOOL)isLinkedCard;
- (BOOL)shouldIncludeLinkingUISectionWhenEditing:(BOOL)arg1;
- (void)dealloc;
- (id)initWithHelper:(id)arg1;

@end

