/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (AXPriv)
+ (struct USet *)_japaneseLetterSet;
+ (struct USet *)_ideographSet;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
- (BOOL)_isJapanesePhrase;
- (BOOL)_isOnlyIdeographs;
- (BOOL)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
@end

