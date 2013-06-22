/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class NSString, UIBarButtonItem, _UIAsyncInvocation, _UIQueueingServiceWebViewControllerProxy, _UIRemoteWebViewController;

@interface _UIWebViewController : UIViewController
{
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _UIRemoteWebViewController *_remoteViewController;
    _UIQueueingServiceWebViewControllerProxy *_serviceProxy;
    id <_UIWebViewControllerDelegate> _delegate;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    BOOL _canGoBack;
    BOOL _canGoForward;
    BOOL _loading;
    float _estimatedProgress;
    NSString *_pageTitle;
    NSString *_URLString;
}

@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(readonly, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(readonly, nonatomic) float estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property(readonly, nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) BOOL canGoForward; // @synthesize canGoForward=_canGoForward;
@property(readonly, nonatomic) BOOL canGoBack; // @synthesize canGoBack=_canGoBack;
@property(readonly, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(nonatomic) id <_UIWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_dispatchDidDismissViewController;
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)arg1;
- (void)_decidePolicyForEncodedRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 replyHandler:(id)arg4;
- (void)_webContentSizeWithReplyHandler:(id)arg1;
- (void)configureWithSettings:(id)arg1;
- (void)loadView;
- (void)stopLoading;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_setURLString:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setCanGoBack:(BOOL)arg1 canGoForward:(BOOL)arg2;
- (void)_setLoading:(BOOL)arg1 error:(id)arg2;
- (void)_setEstimatedProgress:(float)arg1;
- (void)dealloc;
- (void)queueingServiceProxy:(id)arg1 willQueueInvocation:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_connectToService;
- (void)_updateBarButtonItems;
- (void)_addRemoteView;

@end

