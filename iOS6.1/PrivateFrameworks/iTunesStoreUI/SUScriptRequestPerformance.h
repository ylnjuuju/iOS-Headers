/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ISURLRequestPerformance, NSString;

@interface SUScriptRequestPerformance : SUScriptObject
{
    ISURLRequestPerformance *_performance;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) double renderEndInterval;
@property(readonly) double renderBeginInterval;
@property(readonly) double receivedResponseInterval;
@property(readonly) NSString *JSONHeaders;
@property(readonly) double finishInterval;
- (id)_className;
- (void)dealloc;
- (id)initWithRequestPerformance:(id)arg1;

@end

