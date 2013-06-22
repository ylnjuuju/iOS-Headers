/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUArrayCellConfiguration.h>

@class NSString, UIImage;

@interface IUMusicSimpleGroupCellConfiguration : IUArrayCellConfiguration
{
}

+ (float)rowHeightForGlobalContext:(id)arg1;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) UIImage *artwork;
- (struct UIEdgeInsets)selectionEdgeInsets;
- (void)reloadLayoutInformation;
- (void)reloadData;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)init;

@end

