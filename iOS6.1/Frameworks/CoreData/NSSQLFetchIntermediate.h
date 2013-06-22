/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSMutableArray, NSMutableDictionary, NSSQLEntity, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLLimitIntermediate, NSSQLOffsetIntermediate, NSSQLOrderIntermediate, NSSQLSelectIntermediate, NSSQLWhereIntermediate, NSString;

@interface NSSQLFetchIntermediate : NSSQLIntermediate
{
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLSelectIntermediate *_selectClause;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSSQLOrderIntermediate *_orderIntermediate;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
    NSMutableArray *_groupByKeypaths;
    BOOL _isDictionaryCountFetch;
}

- (void)selectDistinct;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (void)setGoverningEntity:(id)arg1;
- (id)governingEntity;
- (void)setGoverningAlias:(id)arg1;
- (id)governingAlias;
- (void)setCorrelationToken:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateJoinSQLStringInContext:(id)arg1;
- (void)setOrderIntermediate:(id)arg1;
- (id)joinIntermediates;
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1;
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1;
- (id)finalJoinForKeypathWithComponents:(id)arg1;
- (void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2;
- (void)setOffsetIntermediate:(id)arg1;
- (void)setLimitIntermediate:(id)arg1;
- (id)limitIntermediate;
- (void)setWhereIntermediate:(id)arg1;
- (void)setHavingIntermediate:(id)arg1;
- (id)havingIntermediate;
- (BOOL)groupByClauseContainsKeypath:(id)arg1;
- (void)addGroupByKeypath:(id)arg1;
- (void)setGroupByIntermediate:(id)arg1;
- (id)groupByIntermediate;
- (id)selectIntermediate;
- (void)setSelectIntermediate:(id)arg1;
- (BOOL)isFunctionScoped;
- (void)setDictionaryCountFetch:(BOOL)arg1;
- (BOOL)isDictionaryCountFetch;
- (id)fetchIntermediate;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (id)initWithScope:(id)arg1;

@end

