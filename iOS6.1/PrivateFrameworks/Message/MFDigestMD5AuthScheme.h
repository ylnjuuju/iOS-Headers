/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Message/AuthScheme.h>

@interface MFDigestMD5AuthScheme : AuthScheme
{
}

- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (BOOL)hasEncryption;
- (id)humanReadableName;
- (id)name;
- (Class)authenticatorClass;

@end

