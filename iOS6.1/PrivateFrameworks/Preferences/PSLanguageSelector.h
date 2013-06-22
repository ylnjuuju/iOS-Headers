/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface PSLanguageSelector : NSObject
{
    NSString *_language;
    NSMutableArray *_supportedLanguages;
    NSArray *_supportedKeyboards;
}

+ (id)sharedInstance;
- (id)supportedLanguages;
- (void)setLanguage:(id)arg1;
- (id)currentLanguage;
- (void)_loadSupportedLanguages;
- (BOOL)_adjustLanguageIndices;
- (void)_setLanguage:(id)arg1;
- (void)dealloc;

@end

