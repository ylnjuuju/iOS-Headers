/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaPredicate.h>

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate
{
    long long *_persistentIDs;
    unsigned int _count;
    BOOL _shouldContain;
}

+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2 shouldContain:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldContain; // @synthesize shouldContain=_shouldContain;
@property(readonly, nonatomic) const long long *persistentIDs; // @synthesize persistentIDs=_persistentIDs;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

@end

