//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TURemoteLogDaemonDelegate.h"

@interface _TURemoteLogDaemonAppDelegate : NSObject <TURemoteLogDaemonDelegate>
{
}

- (void)remoteLogDaemon:(id)arg1 encounteredProblem:(id)arg2 critical:(BOOL)arg3;
- (void)remoteLogDaemonTimeoutFired:(id)arg1;
- (void)remoteLogDaemon:(id)arg1 clientCountChanged:(unsigned long long)arg2;

@end

