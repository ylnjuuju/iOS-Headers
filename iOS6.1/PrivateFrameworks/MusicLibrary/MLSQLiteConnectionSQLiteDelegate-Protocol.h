/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MLSQLiteConnectionSQLiteDelegate <NSObject>
- (void)connection:(id)arg1 willCloseDBHandle:(struct sqlite3 *)arg2;
- (void)connection:(id)arg1 didOpenDBHandle:(struct sqlite3 *)arg2;
@end

