/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIImage, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject
{
    struct CGPDFPage *_cgPage;
    unsigned int _pageNumber;
    NSString *_stringInReadingOrder;
    UIPDFSelection *_selection;
    UIPDFDocument *_document;
    unsigned int _pageIndex;
    UIImage *_pageImage;
}

@property(retain) UIImage *pageImage; // @synthesize pageImage=_pageImage;
@property(readonly) UIPDFDocument *document; // @synthesize document=_document;
@property(retain) UIPDFSelection *selection; // @synthesize selection=_selection;
@property(readonly) unsigned int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly) unsigned int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly) struct CGPDFPage *CGPage; // @synthesize CGPage=_cgPage;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned int)arg3;
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned int)arg1;
- (id)string;
- (unsigned int)rotation;
- (struct CGRect)mediaBoxAccountForRotation;
- (struct CGRect)mediaBox;
- (struct CGRect)cropBoxAccountForRotation;
@property(readonly) struct CGRect cropBox;
- (struct CGSize)size;
- (void)deliverImageWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5;
- (id)getImageIfAvailable;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)dealloc;
- (id)initWithCGPDFPage:(struct CGPDFPage *)arg1;

@end

