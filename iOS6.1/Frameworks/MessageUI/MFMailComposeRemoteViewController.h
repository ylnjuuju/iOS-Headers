/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIRemoteViewController.h"

#import "MFMailComposeRemoteHost-Protocol.h"

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost>
{
    id <MFMailComposeRemoteViewControllerDelegate> _delegate;
}

+ (id)requestViewControllerWithConnectionHandler:(id)arg1;
@property(nonatomic) id <MFMailComposeRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)bodyFinishedDrawing;
- (void)compositionFinishedWithResult:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

