/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WLZipUnarchiver : NSObject
{
}

+ (void)noteBOMCopier:(struct _BOMCopier *)arg1 succeeded:(BOOL)arg2;
+ (void)disassociateBOMCopier:(struct _BOMCopier *)arg1;
+ (void)associateBOMCopier:(struct _BOMCopier *)arg1 withCompletionHandler:(id)arg2;
- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(id)arg3;

@end

