/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ABRecordMerger : NSObject
{
}

- (void)mergeVCardRecord:(void *)arg1 withProperties:(struct __CFArray *)arg2 intoRecord:(void *)arg3;
- (BOOL)_propertiesArray:(id)arg1 containsProperty:(int)arg2;
- (BOOL)mergeMultiValueProperty:(int)arg1 fromRecord:(void *)arg2 intoRecord:(void *)arg3;
- (BOOL)addMultiValueEntry:(void *)arg1 atIndex:(unsigned int)arg2 toMultiValue:(void *)arg3 withProperty:(int)arg4 existingValues:(struct __CFSet *)arg5;
- (void)addValue:(void *)arg1 withProperty:(int)arg2 toExistingValues:(struct __CFSet *)arg3;
- (BOOL)mergeSingleValueProperty:(int)arg1 fromRecord:(void *)arg2 intoRecord:(void *)arg3;

@end

