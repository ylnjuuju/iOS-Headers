/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuickLook/QLPrintPageRenderer.h>

@class NSMutableArray, UIWebBrowserView, UIWebPaginationInfo;

@interface QLSpreadsheetPrintPageRenderer : QLPrintPageRenderer
{
    UIWebBrowserView *_printView;
    UIWebPaginationInfo *_paginationInfo;
    BOOL _frameLoaded;
    NSMutableArray *_urls;
    unsigned int _currentURLIndex;
    unsigned int _currentPageIndex;
    int _totalPagesPrinted;
    BOOL _printingDone;
}

- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (void)dealloc;
- (id)_documentURLs;
- (BOOL)_loadURLAtIndex:(unsigned int)arg1;
- (int)numberOfPages;
- (BOOL)_loadNextURL;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;

@end

