/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPDisposable-Protocol.h"

@class NSString;

@interface CPFont : NSObject <CPDisposable>
{
    struct CGPDFFont *cgPDFFont;
    struct CGFont *cgFont;
    NSString *fontName;
    BOOL exactMatch;
    CDStruct_8bce2348 descriptor;
    struct __CFDictionary *kernDictionary;
    double kernUnitsPerEm;
    BOOL isHorizontal;
    float defaultWidth;
    BOOL disposed;
}

- (void)uniCharsFor:(unsigned long)arg1 count:(unsigned int *)arg2 toArray:(unsigned short *)arg3 maxChars:(unsigned int)arg4;
- (BOOL)getGlyphs:(unsigned short *)arg1 forCodes:(const unsigned short *)arg2 count:(unsigned int)arg3;
- (double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2;
- (BOOL)isHorizontal;
- (float)underlineThickness;
- (float)underlinePosition;
- (float)spaceWidth;
- (float)missingWidth;
- (float)maxWidth;
- (float)avgWidth;
- (float)stemH;
- (float)stemV;
- (float)xHeight;
- (float)capHeight;
- (float)leading;
- (float)descent;
- (float)ascent;
- (float)italicAngle;
- (struct CGRect)fontBBox;
- (unsigned int)flags;
- (float)fontWeight;
- (float)fontStretch;
- (BOOL)isSameFontAs:(id)arg1;
- (id)fontName;
- (struct CGFont *)cgFont;
- (struct CGPDFFont *)cgPDFFont;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWith:(struct CGPDFDictionary *)arg1;
- (void)loadEmbeddedFontInfo;
- (void)loadExternalFontInfoFor:(id)arg1;
- (void)getFontName;
- (id)matchingFontName;

@end

