/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface VGLLayeredTextureOutputManager : NSObject
{
    NSObject<OS_dispatch_queue> *_textureQueue;
    NSMutableDictionary *_textureDictionary;
}

+ (id)sharedManager;
- (void)purge;
- (id)textureWithName:(id)arg1 style:(id)arg2 levelOfDetail:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

@end

