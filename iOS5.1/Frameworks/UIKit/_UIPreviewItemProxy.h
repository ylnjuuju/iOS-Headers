/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface _UIPreviewItemProxy : NSObject
{
    NSURL *_URL;
    NSURL *_previewURLOverride;
    NSString *_name;
    NSURL *_URLToDeleteOnDealloc;
    NSString *_previewItemContentType;
}

@property(copy, nonatomic) NSURL *URLToDeleteOnDealloc; // @synthesize URLToDeleteOnDealloc=_URLToDeleteOnDealloc;
@property(copy, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_name;
@property(copy, nonatomic) NSURL *previewItemURLOverride; // @synthesize previewItemURLOverride=_previewURLOverride;
@property(copy, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_URL;
- (id)previewItemURLForDisplay;
- (id)_primitive_previewItemContentType;
@property(copy, nonatomic) NSString *previewItemContentType;
- (void)dealloc;

@end
