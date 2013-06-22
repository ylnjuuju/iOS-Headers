/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "MPAudioDeviceControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPAudioDeviceController, NSArray;

@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MPAudioDeviceController *_audioDeviceController;
    BOOL _ignoringInteractionEvents;
    NSArray *_routes;
}

- (BOOL)_pickRouteAtIndex:(unsigned int)arg1 withPassword:(id)arg2;
- (BOOL)requiresPortraitOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)dealloc;
- (void)setAVPlayer:(id)arg1;
- (id)initWithAVPlayer:(id)arg1;

@end

