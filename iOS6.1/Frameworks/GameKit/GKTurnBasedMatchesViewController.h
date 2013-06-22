/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableViewControllerV2.h>

#import "GKTurnBasedInviteViewControllerDelegate-Protocol.h"
#import "GKTurnBasedMatchDetailViewControllerDelegate-Protocol.h"

@class GKMatchRequest, GKTurnBasedInviteViewController, GKTurnBasedMatchesDataSource, GKTurnBasedMatchmakerViewController, NSObject<GKTurnBasedMatchmakerViewControllerDelegate>;

@interface GKTurnBasedMatchesViewController : GKTableViewControllerV2 <GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate>
{
    NSObject<GKTurnBasedMatchmakerViewControllerDelegate> *_delegateWeak;
    GKTurnBasedMatchmakerViewController *_matchmakerViewController;
    GKTurnBasedMatchesDataSource *_matchesDataSource;
    GKTurnBasedInviteViewController *_inviteController;
    BOOL _showExistingMatches;
    GKMatchRequest *_matchRequest;
    BOOL _showingExistingMatches;
    int _maxMatchesSeen;
    BOOL _suppressUpdateContents;
    BOOL _authenticateViewControllerVisible;
}

@property(nonatomic) BOOL authenticateViewControllerVisible; // @synthesize authenticateViewControllerVisible=_authenticateViewControllerVisible;
@property(nonatomic) BOOL suppressUpdateContents; // @synthesize suppressUpdateContents=_suppressUpdateContents;
@property(nonatomic) int maxMatchesSeen; // @synthesize maxMatchesSeen=_maxMatchesSeen;
@property(nonatomic) BOOL showingExistingMatches; // @synthesize showingExistingMatches=_showingExistingMatches;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(nonatomic) BOOL showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(retain, nonatomic) GKTurnBasedInviteViewController *inviteController; // @synthesize inviteController=_inviteController;
@property(retain, nonatomic) GKTurnBasedMatchesDataSource *matchesDataSource; // @synthesize matchesDataSource=_matchesDataSource;
@property(nonatomic) GKTurnBasedMatchmakerViewController *matchmakerViewController; // @synthesize matchmakerViewController=_matchmakerViewController;
- (void)updateHeaderView;
- (void)updateHeaderViewForTableView:(id)arg1 isLandscape:(BOOL)arg2;
- (id)prepareHeaderView;
- (void)viewDidLoad;
- (void)finishWithMatchID:(id)arg1;
- (void)tableView:(id)arg1 didDeleteMatch:(id)arg2;
- (void)didSelectMatch:(id)arg1;
- (void)addPressed;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)title;
- (void)receivedTurnBasedNotification:(id)arg1;
- (void)authenticatedStatusChanged:(id)arg1;
- (void)loadView;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1;
- (void)showDetailControllerForMatch:(id)arg1 style:(int)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (void)showInviteControllerAnimated:(BOOL)arg1;
- (void)navigationPopToSelfAndSuppressUpdateContents;
- (void)cancelButtonPressed;
- (void)prepareDataSource;
- (id)description;
@property(nonatomic) NSObject<GKTurnBasedMatchmakerViewControllerDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (BOOL)usesCrossfade;
- (void)dealloc;
- (id)initWithMatchRequest:(id)arg1;

@end

