//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSWPBibliographySmartField : TSWPSmartField
{
    BOOL _isLocalizable;
    NSArray *_citationRecords;
}

@property(nonatomic) BOOL isLocalizable; // @synthesize isLocalizable=_isLocalizable;
@property(copy, nonatomic) NSArray *citationRecords; // @synthesize citationRecords=_citationRecords;
- (BOOL)allowsPasteAsSmartField;
- (id)citationSmartFields;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (int)elementKind;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;

@end

