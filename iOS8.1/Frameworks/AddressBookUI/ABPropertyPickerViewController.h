//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPickerViewController.h>

#import "ABCardPropertyPickerDelegate.h"

@class ABUIPerson, NSArray;

@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate>
{
    void *_addressBook;
    ABUIPerson *_person;
    struct __CFArray *_properties;
    NSArray *_policies;
}

@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2 withDefaultValue:(id)arg3;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
@property(nonatomic) void *addressBook;
@property(nonatomic) struct __CFArray *properties;
- (float)ab_heightToFitForViewInPopoverView;
- (id)propertyPicker;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

