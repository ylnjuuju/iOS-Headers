/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ABUnknownPersonViewController.h"

#import "ABUnknownPersonViewControllerDelegate-Protocol.h"

@interface EKUnknownIdentityViewController : ABUnknownPersonViewController <ABUnknownPersonViewControllerDelegate>
{
    id <EKIdentityProtocol> _identity;
}

- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setIdentity:(id)arg1;
- (void)dealloc;
- (id)initWithIdentity:(id)arg1;

@end

