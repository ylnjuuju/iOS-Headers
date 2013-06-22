/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIWebView.h"

@class NSArray, UIImage;

@interface GKWebView : UIWebView
{
    NSArray *_backgroundTiles;
    UIImage *_backgroundImage;
    struct CGPoint _contentOffset;
}

@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSArray *backgroundTiles; // @synthesize backgroundTiles=_backgroundTiles;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateBackground;
- (void)layoutTilesWithBounds:(struct CGRect)arg1 offset:(struct CGSize)arg2;
- (void)updateBackgroundImageWithBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

