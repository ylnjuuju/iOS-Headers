/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADMovie.h>

@class NSData, NSString;

@interface OADEmbeddedMediaFile : OADMovie
{
    NSData *mData;
    NSString *mName;
}

@property(retain) NSString *name; // @synthesize name=mName;
@property(retain) NSData *data; // @synthesize data=mData;
- (void)dealloc;

@end

