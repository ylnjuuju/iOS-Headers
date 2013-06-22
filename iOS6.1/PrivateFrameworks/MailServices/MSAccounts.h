/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MailServices/MSMailDefaultService.h>

@interface MSAccounts : MSMailDefaultService
{
}

+ (BOOL)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id *)arg2;
+ (id)customSignatureForSendingEmailAddress:(id)arg1;
+ (BOOL)canSendMail;
+ (void)accountValuesForKeys:(id)arg1 launchMobileMail:(BOOL)arg2 completionBlock:(id)arg3;
+ (void)accountValuesForKeys:(id)arg1 completionBlock:(id)arg2;
+ (BOOL)hasActiveAccounts;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id)arg3;
- (void)_listAccountKeys:(id)arg1 handler:(id)arg2;

@end

