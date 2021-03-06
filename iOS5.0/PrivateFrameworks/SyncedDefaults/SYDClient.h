/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SYDClient : NSObject
{
    struct dispatch_queue_s *_queue;
    struct _xpc_connection_s *_connection;
    NSString *_bundleIdentifier;
}

- (id)initWithQueue:(struct dispatch_queue_s *)arg1 bundleIdentifier:(struct __CFString *)arg2;
- (void)dealloc;
- (void)finalize;
- (void)_createConnectionIfNecessary;
- (void)_resetConnection;
- (void)shutdown;
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;
- (id)_sendMessageWithReplySync:(id)arg1;
- (void)_sendMessageNoReply:(id)arg1;
- (void)_sendMessage:(id)arg1 replyHandler:(id)arg2;
- (void)sendMessageWithName:(id)arg1;
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)sendMessageWithName:(id)arg1 replyHandler:(id)arg2;

@end

