/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFMessageBodyParser.h>

@class DOMDocument;

@interface MFMessageBodyDOMParser : MFMessageBodyParser
{
    DOMDocument *_document;
}

+ (BOOL)documentContainsAnyQuotation:(id)arg1;
- (id)rangeFromElement:(id)arg1 toElement:(id)arg2;
- (void)extendRange:(id)arg1 toElement:(id)arg2;
- (id)rangeForElement:(id)arg1;
- (BOOL)parse;
- (void)_consumeAccumulatedNodes:(id)arg1;
- (Class)messageBodyElementClass;
- (void)dealloc;
- (id)initWithDOMDocument:(id)arg1;

@end

