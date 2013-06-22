/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFMessageBodyParserObject.h>

@class NSError, NSMutableArray;

@interface MFMessageBodyParser : MFMessageBodyParserObject
{
    NSMutableArray *_subparsers;
    NSMutableArray *_elementPool;
    NSMutableArray *_paragraphNodes;
    id _foundMessageBodyElementBlock;
    NSError *_parserError;
    struct __CFArray *_nodesStackCache;
    struct __CFDictionary *_nodesLevelCache;
    struct __CFDictionary *_nodesQuoteLevelCache;
    unsigned int _options;
}

+ (BOOL)isLinebreakImpliedAfterTagName:(id)arg1;
+ (BOOL)isLinebreakImpliedBeforeTagName:(id)arg1;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
- (void)getLevel:(int *)arg1 quoteLevel:(int *)arg2 forBodyNode:(id)arg3;
- (unsigned int)quoteLevelForBodyNode:(id)arg1;
- (void)didFindError:(id)arg1;
- (void)didFinishParsing;
- (void)willBeginParsing;
- (void)didFindBodyElement:(id)arg1;
- (void)flushParagraphNodes;
- (void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyStringAccumulatorClass;
- (BOOL)shouldIgnoreTagWithTagName:(id)arg1;
- (BOOL)isLandmarkTagName:(id)arg1;
- (id)getAvailableMessageBodyElement;
- (void)removeSubparser:(id)arg1;
- (void)addSubparser:(id)arg1;
- (void)setFoundMessageBodyElementBlock:(id)arg1;
- (id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned int)arg2;
- (id)parserError;
- (void)copyBlocks;
- (BOOL)shouldProceedParsing;
- (BOOL)parse;
- (void)dealloc;
- (id)init;

@end

