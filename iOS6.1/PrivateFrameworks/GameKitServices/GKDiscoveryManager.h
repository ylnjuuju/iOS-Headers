/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKDiscoveryBonjour, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GKDiscoveryManager : NSObject
{
    id _playerFoundHandler;
    id _playerLostHandler;
    id _receiveDataHandler;
    NSString *_playerID;
    NSString *_deviceID;
    NSMutableDictionary *_peers;
    GKDiscoveryBonjour *_bonjour;
    NSObject<OS_dispatch_queue> *_peersQueue;
}

+ (id)parseDeviceIDFromServiceName:(id)arg1;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) GKDiscoveryBonjour *bonjour; // @synthesize bonjour=_bonjour;
@property(copy, nonatomic) id receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
@property(copy, nonatomic) id playerLostHandler; // @synthesize playerLostHandler=_playerLostHandler;
@property(copy, nonatomic) id playerFoundHandler; // @synthesize playerFoundHandler=_playerFoundHandler;
@property(retain, nonatomic) NSMutableDictionary *peers; // @synthesize peers=_peers;
- (void)removeInterface:(unsigned int)arg1 forPeerWithServiceName:(id)arg2;
- (void)didLosePeer:(id)arg1;
- (id)peersList;
- (void)addInterface:(unsigned int)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(id)arg4;
- (void)stopBrowsing;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)cleanUpPeersForBrowse;
- (void)stopAdvertising;
- (id)localServiceName;
- (id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2;
- (void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3;
- (void)connectToSockAddr:(struct sockaddr *)arg1 port:(unsigned short)arg2 forPeer:(id)arg3;
- (void)resolveForPeer:(id)arg1;
- (id)generateDeviceID;
- (void)dealloc;
- (id)init;

@end

