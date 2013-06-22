/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSIndexPath, NSString;

@interface _UICollectionViewItemKey : NSObject <NSCopying>
{
    NSIndexPath *_indexPath;
    NSString *_identifier;
    unsigned int type;
}

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

