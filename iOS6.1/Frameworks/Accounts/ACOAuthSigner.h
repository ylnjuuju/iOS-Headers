/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCProxyTarget-Protocol.h"

@class ACAccount, XPCProxy<ACDOAuthSignerProtocol>;

@interface ACOAuthSigner : NSObject <XPCProxyTarget>
{
    XPCProxy<ACDOAuthSignerProtocol> *_oauthSignerProxy;
    struct dispatch_queue_s *_connectionQueue;
    struct _xpc_connection_s *_connection;
    ACAccount *_account;
    BOOL _shouldIncludeAppIdInRequest;
}

@property(nonatomic) BOOL shouldIncludeAppIdInRequest; // @synthesize shouldIncludeAppIdInRequest=_shouldIncludeAppIdInRequest;
- (void).cxx_destruct;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)signedURLRequestWithURLRequest:(id)arg1;
- (id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3;
- (id)oauthSignerProxy;
- (void)_tearDownConnection;
- (void)_configureWithConnection:(struct _xpc_connection_s *)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

