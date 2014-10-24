//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "FMFSessionDelegateInternal.h"

@class FMFHandle, NSArray, NSMutableDictionary, NSString, UIAlertView;

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal>
{
    BOOL _isMyLocationEnabled;
    BOOL _useFamilyCirclePhotos;
    BOOL _useFamilyCirclePhotosLoaded;
    NSArray *_allFollowersHandles;
    NSArray *_followersHandles;
    NSArray *_followersSpecifiers;
    NSArray *_familySpecifiers;
    NSMutableDictionary *_dsidToFamilyPhoto;
    NSArray *_hashedFamilyDsids;
    void *_addressBook;
    FMFHandle *_lastSelectedHandle;
    NSArray *_familyMembers;
    UIAlertView *_genericErrorAlert;
}

@property(nonatomic) BOOL useFamilyCirclePhotosLoaded; // @synthesize useFamilyCirclePhotosLoaded=_useFamilyCirclePhotosLoaded;
@property(nonatomic) BOOL useFamilyCirclePhotos; // @synthesize useFamilyCirclePhotos=_useFamilyCirclePhotos;
@property(retain, nonatomic) UIAlertView *genericErrorAlert; // @synthesize genericErrorAlert=_genericErrorAlert;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(nonatomic) BOOL isMyLocationEnabled; // @synthesize isMyLocationEnabled=_isMyLocationEnabled;
@property(retain, nonatomic) FMFHandle *lastSelectedHandle; // @synthesize lastSelectedHandle=_lastSelectedHandle;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSArray *hashedFamilyDsids; // @synthesize hashedFamilyDsids=_hashedFamilyDsids;
@property(retain, nonatomic) NSMutableDictionary *dsidToFamilyPhoto; // @synthesize dsidToFamilyPhoto=_dsidToFamilyPhoto;
@property(retain, nonatomic) NSArray *familySpecifiers; // @synthesize familySpecifiers=_familySpecifiers;
@property(retain, nonatomic) NSArray *followersSpecifiers; // @synthesize followersSpecifiers=_followersSpecifiers;
@property(retain, nonatomic) NSArray *followersHandles; // @synthesize followersHandles=_followersHandles;
@property(retain, nonatomic) NSArray *allFollowersHandles; // @synthesize allFollowersHandles=_allFollowersHandles;
- (void).cxx_destruct;
- (void)networkReachabilityUpdated:(BOOL)arg1;
- (void)didReceiveServerError:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateHidingStatus:(BOOL)arg1;
- (void)reloadSpecifiersOnMainQueue;
- (void)_meDeviceSpecifierWasTapped:(id)arg1;
- (void *)unknownRecordForData:(id)arg1 property:(int)arg2;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg1;
- (void)shareMyLocation:(id)arg1;
- (id)_followerHandleWithHashedDSID:(id)arg1;
- (void)removeFollower:(id)arg1;
- (void)addShareActionToPersonViewController:(id)arg1;
- (void)addRemoveActionToPersonViewController:(id)arg1;
- (void *)recordForHandle:(id)arg1;
- (id)reverseString:(id)arg1;
- (id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2;
- (BOOL)phoneNumberMatches:(id)arg1 phone2:(id)arg2;
- (int)identifierOfProperty:(int)arg1 withHandleId:(id)arg2 forRecord:(void *)arg3;
- (BOOL)_isFamilyMemberAFollower:(id)arg1;
- (BOOL)_isHandleAFollower:(id)arg1;
- (void)_pushAddressBookUIForHandle:(id)arg1;
- (void)_showFamilyMemberDetails:(id)arg1;
- (void)_showHandleDetails:(id)arg1;
- (id)_shareSwitchEnabled:(id)arg1;
- (void)displayGenericErrorAlert;
- (void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)formatStringForHours:(int)arg1 minutes:(int)arg2;
- (id)offerTimeRemaining:(double)arg1;
- (id)monogramForHandle:(id)arg1;
- (id)_specifierForHandle:(id)arg1;
- (BOOL)noMeDeviceSelected:(id)arg1;
- (id)sortedFollowersWithCombinedRecords:(id)arg1;
- (void)_loadFamilyMemberPhotos;
- (void)_loadFamilyMembers:(BOOL)arg1;
- (id)specifiers;
- (void)abChanged:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
