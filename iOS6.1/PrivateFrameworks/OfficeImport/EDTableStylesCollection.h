/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDCollection.h>

@class NSString;

@interface EDTableStylesCollection : EDCollection
{
    NSString *mDefaultTableStyleName;
    NSString *mDefaultPivotStyleName;
}

- (void)setDefaultPivotStyleName:(id)arg1;
- (id)defaultPivotStyleName;
- (void)setDefaultTableStyleName:(id)arg1;
- (id)defaultTableStyleName;
- (id)objectWithName:(id)arg1;
- (id)defaultPivotStyle;
- (id)defaultTableStyle;
- (void)dealloc;

@end

