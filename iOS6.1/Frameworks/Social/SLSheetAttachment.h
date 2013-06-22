/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString, UIImage, UIView<SLSheetPreviewView>;

@interface SLSheetAttachment : NSObject <NSCoding>
{
    NSString *identifier;
    int _type;
    id _payload;
    UIImage *_previewImage;
    UIView<SLSheetPreviewView> *_previewView;
    int _downsampleStatus;
    BOOL _pendingPreviewProxy;
}

+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;
+ (id)uniqueIdentifier;
@property(nonatomic) BOOL pendingPreviewProxy; // @synthesize pendingPreviewProxy=_pendingPreviewProxy;
@property(nonatomic) int downsampleStatus; // @synthesize downsampleStatus=_downsampleStatus;
@property(retain, nonatomic) UIView<SLSheetPreviewView> *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) id payload; // @synthesize payload=_payload;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

