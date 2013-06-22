/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAttributedString, NSObject<GKTextLayout>, NSString, UIColor;

@interface GKCoreTextRenderer : NSObject
{
    NSAttributedString *_attributedText;
    NSObject<GKTextLayout> *_textLayout;
    id _contentPath;
    float _leading;
    BOOL _shouldDrawEmoji;
    BOOL _shouldSizeToTextImageBounds;
    BOOL _adjustsFontSizeToFitWidth;
    NSString *_truncationSymbol;
    int _numberOfLines;
    float _minimumFontSize;
    int _baselineAdjustment;
    UIColor *_textColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    struct CGRect _bounds;
    BOOL _hasCalculatedBounds;
}

@property(nonatomic) BOOL hasCalculatedBounds; // @synthesize hasCalculatedBounds=_hasCalculatedBounds;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int baselineAdjustment; // @synthesize baselineAdjustment=_baselineAdjustment;
@property(nonatomic) float minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *truncationSymbol; // @synthesize truncationSymbol=_truncationSymbol;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) BOOL shouldSizeToTextImageBounds; // @synthesize shouldSizeToTextImageBounds=_shouldSizeToTextImageBounds;
@property(nonatomic) BOOL shouldDrawEmoji; // @synthesize shouldDrawEmoji=_shouldDrawEmoji;
@property(nonatomic) float leading; // @synthesize leading=_leading;
@property(retain, nonatomic) id contentPath; // @synthesize contentPath=_contentPath;
@property(retain, nonatomic) NSObject<GKTextLayout> *textLayout; // @synthesize textLayout=_textLayout;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)_drawInContext:(struct CGContext *)arg1 drawEmoji:(BOOL)arg2;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(int)arg2;
- (float)lineHeightForAttributedString:(id)arg1;
- (float)lineImageHeightForAttributedString:(id)arg1;
- (float)lineHeightForFont:(struct __CTFont *)arg1;
@property(readonly, nonatomic) float baselineYOffset;
- (float)calculatedFontSizeForString:(id)arg1 bounds:(struct CGRect)arg2;
- (id)overallAttribute:(id)arg1 forString:(id)arg2;
- (id)string:(id)arg1 withCTFont:(struct __CTFont *)arg2;
- (struct CGSize)suggestFrameSizeWithConstraints:(struct CGSize)arg1 fitsRange:(CDStruct_dff5684f *)arg2;
- (struct CGSize)suggestFrameSizeForString:(id)arg1 withConstraints:(struct CGSize)arg2 fitsRange:(CDStruct_dff5684f *)arg3;
- (id)textLayoutForString:(id)arg1 withConstraints:(struct CGSize)arg2;
- (Class)classForTextLayout;
@property(readonly, nonatomic) unsigned int actualLineCount;
- (void)invalidateTextLayout;
- (void)dealloc;
- (id)init;

@end

