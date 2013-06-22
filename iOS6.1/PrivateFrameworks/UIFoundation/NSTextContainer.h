/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSTextLayoutOrientationProvider-Protocol.h"

@class NSLayoutManager;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager *_layoutManager;
    struct CGSize _size;
    float _lineFragmentPadding;
    unsigned int _maximumLines;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int _reserved:13;
    } _tcFlags;
}

+ (void)initialize;
@property unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumLines;
- (int)layoutOrientation;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)isSimpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned int)arg2 movementDirection:(unsigned int)arg3 remainingRect:(struct CGRect *)arg4;
- (float)lineFragmentPadding;
- (void)setLineFragmentPadding:(float)arg1;
- (struct CGSize)containerSize;
- (void)setContainerSize:(struct CGSize)arg1;
- (void)replaceLayoutManager:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (id)layoutManager;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (void)_commonInit;

@end

