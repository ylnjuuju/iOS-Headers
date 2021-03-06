//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRenderStyle : NSObject
{
    struct RenderStyle _internal;
    void *_query;
}

@property(nonatomic) void *query; // @synthesize query=_query;
- (id).cxx_construct;
@property(readonly, nonatomic) NSString *targetName;
@property(readonly, nonatomic) NSString *sourceName;
@property(readonly, nonatomic) float blendFactor;
@property(readonly, nonatomic) BOOL hasTargetStyle;
- (void)setTargetStyleData:(struct StyleData *)arg1 animationFactor:(float *)arg2;
- (void)setSourceStyleData:(struct StyleData *)arg1;
- (id)initWithQuery:(void *)arg1 data:(struct StyleData *)arg2 variantData:(struct StyleData *)arg3 blendingFactor:(float *)arg4;

@end

