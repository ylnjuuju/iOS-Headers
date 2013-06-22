/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class NSDate, NSOrderedSet, NSString;

@interface GKChallengeInternal : GKInternalRepresentation
{
    NSString *_issuingPlayerID;
    NSOrderedSet *_compatibleBundleIDs;
    NSString *_receivingPlayerID;
    int _state;
    NSString *_message;
    NSDate *_issueDate;
    NSString *_bundleID;
    NSDate *_completionDate;
    NSString *_challengeID;
}

+ (id)internalRepresentation;
+ (id)codedPropertyKeys;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSDate *issueDate; // @synthesize issueDate=_issueDate;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *receivingPlayerID; // @synthesize receivingPlayerID=_receivingPlayerID;
@property(retain, nonatomic) NSOrderedSet *compatibleBundleIDs; // @synthesize compatibleBundleIDs=_compatibleBundleIDs;
@property(retain, nonatomic) NSString *issuingPlayerID; // @synthesize issuingPlayerID=_issuingPlayerID;
- (id)findLocalGameBundleID;
- (id)issueRepresentationToPlayerID:(id)arg1;
- (id)serverRepresentation;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end

