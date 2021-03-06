//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIVisualEffectSubview.h>

__attribute__((visibility("hidden")))
@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview
{
    id _statisticsDelegate;
    unsigned int _blurHardEdges;
    float _blurRadius;
}

+ (Class)layerClass;
@property(nonatomic) float blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) unsigned int blurHardEdges; // @synthesize blurHardEdges=_blurHardEdges;
@property(nonatomic) id statisticsDelegate; // @synthesize statisticsDelegate=_statisticsDelegate;
- (void)_updateInputBounds;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setGroupName:(id)arg1;
- (id)_groupName;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (id)backdropLayer;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 settings:(id)arg2;

@end

