/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSAttributedString.h"

@interface NSAttributedString (NSAttributedStringKitAdditions)
+ (id)writableTextFileTypesForDocumentTypes;
+ (id)textPasteboardTypes;
+ (id)textFileTypes;
+ (id)textTypes;
+ (id)textUnfilteredPasteboardTypes;
+ (id)textUnfilteredFileTypes;
+ (id)textUnfilteredTypes;
+ (id)_documentTypeForFileType:(id)arg1;
- (int)itemNumberInTextList:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2 completeRow:(char *)arg3;
- (BOOL)_atEndOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_atStartOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned int)arg2;
- (id)rulerAttributesInRange:(struct _NSRange)arg1;
- (id)fontAttributesInRange:(struct _NSRange)arg1;
- (id)_initWithDOMRange:(id)arg1;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)_documentFromRange:(struct _NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id *)arg4;
- (void)_readDocumentFragment:(id)arg1 fromRange:(struct _NSRange)arg2 documentAttributes:(id)arg3 subresources:(id *)arg4;
- (id)docFormatFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)_RTFWithSelector:(SEL)arg1 range:(struct _NSRange)arg2 documentAttributes:(id)arg3;
- (id)fileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange)arg1;
- (BOOL)containsAttachments;
- (unsigned int)nextWordFromIndex:(unsigned int)arg1 forward:(BOOL)arg2;
- (unsigned int)lineBreakByHyphenatingBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned int)lineBreakBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned int)_lineBreakBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange)arg2 usesAlternativeBreaker:(BOOL)arg3;
- (struct _NSRange)doubleClickAtIndex:(unsigned int)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)doubleClickAtIndex:(unsigned int)arg1;
- (id)defaultLanguage;
- (BOOL)_isStringDrawingTextStorage;
@end

