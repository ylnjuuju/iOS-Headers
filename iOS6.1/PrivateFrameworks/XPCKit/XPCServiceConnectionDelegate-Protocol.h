/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol XPCServiceConnectionDelegate <NSObject>
- (void)XPCServiceConnectionDidDisconnect:(id)arg1;
- (void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned int)arg3;
@end

