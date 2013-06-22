/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class DOMNode, NSArray, NSDictionary, WebFrame;

@interface DDOperation : NSOperation
{
    WebFrame *_frame;
    DOMNode *_startNode;
    int _startOffset;
    DOMNode *_endNode;
    int _endOffset;
    BOOL _needContinuation;
    int _generationNumber;
    unsigned int _types;
    struct __DDScanQuery *_query;
    NSArray *_results;
    BOOL _isCurrentlyUsingTheScanner;
    BOOL _isDiscarded;
    int _tryCount;
    int _needsLayoutTryCount;
    NSDictionary *_context;
}

+ (BOOL)_needsFullScannerForDetectionTypes:(unsigned int)arg1;
+ (struct __DDScanner *)_sharedScannerForTypes:(unsigned int)arg1;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property BOOL isDiscarded; // @synthesize isDiscarded=_isDiscarded;
@property(nonatomic) unsigned int detectionTypes; // @synthesize detectionTypes=_types;
@property int tryCount; // @synthesize tryCount=_tryCount;
@property int generationNumber; // @synthesize generationNumber=_generationNumber;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property BOOL needContinuation; // @synthesize needContinuation=_needContinuation;
@property int endOffset; // @synthesize endOffset=_endOffset;
@property(retain, nonatomic) DOMNode *endNode; // @synthesize endNode=_endNode;
@property int startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) DOMNode *startNode; // @synthesize startNode=_startNode;
@property(retain, nonatomic) WebFrame *frame; // @synthesize frame=_frame;
- (BOOL)_needsFullScanner;
- (void)_setScanQuery:(struct __DDScanQuery *)arg1;
- (void)cleanup;
- (void)cancel;
- (void)main;
- (void)dealloc;
- (id)init;
- (struct __DDScanQuery *)scanQuery;
- (BOOL)_doURLificationOnDocument;
- (void)_createScanQueryOnWebThreadStartAfterRange:(id)arg1;

@end

