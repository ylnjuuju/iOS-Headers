/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface UIPickerContentView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_checkView;
    struct {
        unsigned int checked:1;
        unsigned int highlighted:1;
    } _pickerContentViewFlags;
}

+ (float)_checkmarkOffset;
- (BOOL)_isSelectable;
- (float)labelWidthForBounds:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *titleLabel;
@property(nonatomic, getter=isChecked) BOOL checked;
- (void)dealloc;

@end

