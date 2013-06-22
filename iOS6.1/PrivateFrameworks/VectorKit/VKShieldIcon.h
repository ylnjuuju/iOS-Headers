/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKLabelIcon.h>

@class NSArray, NSString, VKGenericShieldDrawStyle;

@interface VKShieldIcon : VKLabelIcon
{
    long long _shieldType;
    NSString *_shieldText;
    VKGenericShieldDrawStyle *_genericShieldStyle;
    int _mode;
    NSArray *_resourceNames;
    BOOL _drawingRenderableIcon;
    struct CGSize _size;
}

@property(readonly, nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(readonly, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
- (id).cxx_construct;
- (id)renderableIcon;
- (void)updateWithLabelContext:(struct LabelContext *)arg1 labelStyle:(CDStruct_daf29242 *)arg2 atMercatorPoint:(CDStruct_31142d93)arg3;
- (void)dealloc;
- (id)initWithShieldType:(long long)arg1 shieldText:(const char *)arg2 genericShieldStyle:(id)arg3 mode:(int)arg4;

@end

