/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADGraphicProperties.h>

@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties
{
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;
- (BOOL)hasImageFill;
- (void)setImageFill:(id)arg1;
- (id)imageFill;
- (void)dealloc;

@end

