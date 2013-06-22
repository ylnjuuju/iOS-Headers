/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;
    CoreDAVItemWithNoChildren *_validSyncToken;
    CoreDAVItemWithNoChildren *_noUIDConflict;
    CoreDAVItemWithNoChildren *_validAddressData;
    CoreDAVItemWithNoChildren *_maxResourceSize;
    CoreDAVItemWithNoChildren *_uid;
    CoreDAVItemWithNoChildren *_ctagOkay;
    CoreDAVItemWithNoChildren *_maxImageSize;
    CoreDAVItemWithNoChildren *_invalidImageType;
    CoreDAVItemWithNoChildren *_imageError;
    CoreDAVItemWithNoChildren *_maxAttendees;
    CoreDAVLeafItem *_status;
}

+ (id)copyParseRules;
@property(retain) CoreDAVLeafItem *status; // @synthesize status=_status;
@property(retain) CoreDAVItemWithNoChildren *maxAttendees; // @synthesize maxAttendees=_maxAttendees;
@property(retain) CoreDAVItemWithNoChildren *imageError; // @synthesize imageError=_imageError;
@property(retain) CoreDAVItemWithNoChildren *invalidImageType; // @synthesize invalidImageType=_invalidImageType;
@property(retain) CoreDAVItemWithNoChildren *maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain) CoreDAVItemWithNoChildren *ctagOkay; // @synthesize ctagOkay=_ctagOkay;
@property(retain) CoreDAVItemWithNoChildren *uid; // @synthesize uid=_uid;
@property(retain) CoreDAVItemWithNoChildren *maxResourceSize; // @synthesize maxResourceSize=_maxResourceSize;
@property(retain) CoreDAVItemWithNoChildren *validAddressData; // @synthesize validAddressData=_validAddressData;
@property(retain) CoreDAVItemWithNoChildren *noUIDConflict; // @synthesize noUIDConflict=_noUIDConflict;
@property(retain) CoreDAVItemWithNoChildren *validSyncToken; // @synthesize validSyncToken=_validSyncToken;
@property(retain) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits; // @synthesize numberOfMatchesWithinLimits=_numberOfMatchesWithinLimits;
- (id)description;
- (void)dealloc;
- (id)init;

@end

