//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DTexture.h>

@class TSDFill;

__attribute__((visibility("hidden")))
@interface TSCH3DTSDFillTexture : TSCH3DTexture
{
    TSDFill *mFill;
}

+ (id)textureWithTSDFill:(id)arg1;
- (id)databufferForDataCache:(id)arg1;
- (BOOL)hasCompleteData;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTSDFill:(id)arg1;

@end

