//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;
+ (id)WF_ignorableCharacterSet;
- (id)WF_stringWithMostSignificatDomainPart;
- (BOOL)_isIPv4DomainAddress;
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned int)arg1;
- (int)WF_numericCompare:(id)arg1;
- (id)WF_fuzzyStringWithWordLength:(int)arg1;
- (id)WF_stringByConvertingSpacesInHTMLSpaces;
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;
- (id)WF_stringByEscapingPrintfArguments;
- (id)WF_stringByRemovingWord:(id)arg1;
- (struct _NSRange)WF_rangeOfWord:(id)arg1;
- (BOOL)WF_containsWord:(id)arg1;
- (BOOL)WF_containsString:(id)arg1 options:(unsigned int)arg2;
- (BOOL)WF_containsString:(id)arg1;
@end
