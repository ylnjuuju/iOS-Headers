/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface _UIAccessDeniedView : UIView
{
    UIImageView *_lockView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSString *_title;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (id)_textColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

