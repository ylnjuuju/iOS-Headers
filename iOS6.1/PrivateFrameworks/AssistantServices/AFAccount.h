/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AFAccount : NSObject
{
    NSString *_label;
    NSString *_identifier;
    NSDictionary *_lastSyncDates;
    NSString *_speechIdentifier;
    NSString *_assistantIdentifier;
    NSString *_aceHost;
    BOOL _isActive;
    NSString *_localeIdentifier;
    NSString *_group;
    NSString *_hostname;
    NSString *_predefinedServer;
}

@property(copy, nonatomic) NSString *predefinedServer; // @synthesize predefinedServer=_predefinedServer;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *aceHost; // @synthesize aceHost=_aceHost;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(copy, nonatomic) NSString *speechIdentifier; // @synthesize speechIdentifier=_speechIdentifier;
@property(copy, nonatomic) NSDictionary *lastSyncDates; // @synthesize lastSyncDates=_lastSyncDates;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)messageDictionary;
- (id)initWithMessageDictionary:(id)arg1;
- (id)description;

@end

