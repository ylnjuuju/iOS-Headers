/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface BBAction : NSObject
{
    id _internalBlock;
    BOOL _hasCallblock;
    BOOL _canBypassPinLock;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    int _replyType;
    NSString *_activatePluginName;
    NSDictionary *_activatePluginContext;
}

+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithTextReplyCallblock:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id)arg2;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id)arg2;
+ (id)actionWithCallblock:(id)arg1;
@property(copy, nonatomic) NSDictionary *activatePluginContext; // @synthesize activatePluginContext=_activatePluginContext;
@property(copy, nonatomic) NSString *activatePluginName; // @synthesize activatePluginName=_activatePluginName;
@property(nonatomic) BOOL canBypassPinLock; // @synthesize canBypassPinLock=_canBypassPinLock;
@property(nonatomic) int replyType; // @synthesize replyType=_replyType;
@property(copy, nonatomic) NSString *launchBundleID; // @synthesize launchBundleID=_launchBundleID;
@property(retain, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) BOOL hasCallblock; // @synthesize hasCallblock=_hasCallblock;
@property(copy, nonatomic) id internalBlock; // @synthesize internalBlock=_internalBlock;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)partialDescription;
- (void)deliverResponse:(id)arg1;
- (id)bundleID;
- (id)url;
- (BOOL)isAppLaunchAction;
- (BOOL)isURLLaunchAction;
- (BOOL)wantsTextReply;
- (BOOL)hasLaunchInfo;
- (void)dealloc;
- (id)_initWithInternalCallblock:(id)arg1 replyType:(void)arg2;
- (id)initWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
- (id)initWithTextReplyCallblock:(id)arg1;
- (id)initWithCallblock:(id)arg1;

@end

