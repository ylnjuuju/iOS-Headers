/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class CKMediaObject, NSData;

@interface CKMediaPreviewGenerator : NSOperation
{
    BOOL _generateComposePreview;
    int _orientation;
    CKMediaObject *_mediaObject;
    id _delegate;
    NSData *_previewResult;
    NSData *_composePreviewResult;
}

- (void)main;
- (void)dealloc;
@property(readonly, nonatomic) NSData *composePreviewResult; // @synthesize composePreviewResult=_composePreviewResult;
@property(readonly, nonatomic) NSData *previewResult; // @synthesize previewResult=_previewResult;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(nonatomic) BOOL generateComposePreview; // @synthesize generateComposePreview=_generateComposePreview;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;

@end
