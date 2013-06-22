/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface SSSQLiteDatabase : NSObject
{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    BOOL _readOnly;
    BOOL _isInTransaction;
    id _setupBlock;
    struct __CFDictionary *_statementCache;
    BOOL _takesTaskCompletionAssertions;
    struct SBSProcessAssertion *_taskAssertion;
    int _taskAssertionCount;
}

+ (void)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(char *)arg2 didFinish:(char *)arg3;
+ (void)_setTakesTaskCompletionAssertions:(BOOL)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
@property(copy, nonatomic) id setupBlock; // @synthesize setupBlock=_setupBlock;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg1 cache:(BOOL)arg2;
- (BOOL)_resetDatabaseWithPath:(id)arg1;
- (void)_resetCorruptDatabase;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (int)_openFlags;
- (int)_openDatabase;
- (void)_endTaskCompletionAssertion;
- (void)_beginTaskCompletionAssertion;
- (void)_accessDatabaseUsingBlock:(id)arg1;
@property BOOL takesTaskCompletionAssertions;
- (void)endTaskCompletionAssertion;
- (void)beginTaskCompletionAssertion;
- (BOOL)setUserVersion:(int)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (void)performTransactionWithBlock:(id)arg1;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg1;
- (BOOL)executeSQL:(id)arg1;
- (void)dispatchBlockSync:(id)arg1;
- (void)dispatchBlockAsync:(id)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id)arg2;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithDatabaseURL:(id)arg1;

@end

