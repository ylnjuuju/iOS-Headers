/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

#import "CoreDAVTaskDelegate-Protocol.h"
#import "CoreDAVTaskGroupDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSURL;

@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>
{
    int _state;
    NSURL *_dropboxURL;
    NSDictionary *_attachments;
    NSDictionary *_contentTypes;
    NSMutableDictionary *_sentAttachmentURLsToETags;
    NSSet *_attendeePrincipalURLs;
    NSSet *_aceItems;
    NSDictionary *_putFailureSizes;
    BOOL _attendeesCanManageDropBox;
}

+ (id)dropboxACEItemsForPrincipalURLs:(id)arg1 baseURL:(id)arg2 writable:(BOOL)arg3;
@property(retain) NSDictionary *putFailureSizes; // @synthesize putFailureSizes=_putFailureSizes;
@property(retain) NSSet *aceItems; // @synthesize aceItems=_aceItems;
@property(retain) NSSet *attendeePrincipalURLs; // @synthesize attendeePrincipalURLs=_attendeePrincipalURLs;
@property(retain) NSDictionary *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(retain) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain) NSURL *dropboxURL; // @synthesize dropboxURL=_dropboxURL;
@property(retain) NSMutableDictionary *sentAttachmentURLsToETags; // @synthesize sentAttachmentURLsToETags=_sentAttachmentURLsToETags;
@property BOOL attendeesCanManageDropBox; // @synthesize attendeesCanManageDropBox=_attendeesCanManageDropBox;
@property int state; // @synthesize state=_state;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)_sendAttachments;
- (void)_makeDropBox;
- (void)_updateACLWithState:(int)arg1;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
@property(readonly) NSDictionary *etags;
- (id)initWithAccountInfoProvider:(id)arg1 dropboxURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 attendeePrincipalURLs:(id)arg5 attendeesCanManageDropBox:(BOOL)arg6 taskManager:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;

@end

