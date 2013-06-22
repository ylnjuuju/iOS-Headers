/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBTree : NSObject <NSCopying>
{
    int type;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    NSMutableDictionary *cache;
}

+ (id)keyboard;
+ (id)key;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (id)mergeStringForKeyName:(id)arg1;
+ (BOOL)shouldSkipCacheString:(id)arg1;
+ (id)stringForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)uniqueName;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache;
@property(retain, nonatomic) NSMutableArray *subtrees; // @synthesize subtrees;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int type; // @synthesize type;
- (BOOL)renderAsStringKey;
- (BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)arg1;
- (id)cacheDisplayString;
- (BOOL)shouldCacheKey;
- (id)variantDisplayString;
- (BOOL)behavesAsShiftKey;
- (void)removeClientVariantActionInfo;
- (BOOL)avoidsLanguageIndicator;
- (void)setClipCorners:(int)arg1;
- (int)clipCorners;
- (void)setSplitMode:(int)arg1;
- (int)splitMode;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)disabled;
- (id)variantPopupBias;
- (void)setVariantPopupBias:(id)arg1;
- (void)setGhost:(BOOL)arg1;
- (BOOL)ghost;
- (void)setVisible:(BOOL)arg1;
- (BOOL)visible;
- (void)setClientVariantActionName:(id)arg1;
- (id)clientVariantActionName;
- (void)setClientVariantRepresentedString:(id)arg1;
- (id)clientVariantRepresentedString;
- (void)setIsClientVariantOverride:(BOOL)arg1;
- (BOOL)isClientVariantOverride;
- (void)setOverrideDisplayString:(id)arg1;
- (id)overrideDisplayString;
- (void)setRendering:(int)arg1;
- (int)rendering;
- (void)setDisplayRowHint:(int)arg1;
- (int)displayRowHint;
- (void)setTextAlignment:(int)arg1;
- (int)textAlignment;
- (void)setHighlightedVariantIndex:(int)arg1;
- (int)highlightedVariantIndex;
- (void)setDisplayTypeHint:(int)arg1;
- (int)displayTypeHint;
- (void)setVariantType:(int)arg1;
- (int)variantType;
- (void)setInteractionType:(int)arg1;
- (int)interactionType;
- (void)setDisplayType:(int)arg1;
- (int)displayType;
- (id)localizationKey;
- (void)setDisplayString:(id)arg1;
- (id)displayString;
- (void)setRepresentedString:(id)arg1;
- (id)representedString;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (int)_variantType;
- (id)attributeSet:(BOOL)arg1;
- (id)geometrySet:(BOOL)arg1;
- (id)keySet;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (void)updateDictationKeyOnNumberPads:(BOOL)arg1;
- (id)findLeftMoreKey;
- (BOOL)looksLike:(id)arg1;
- (BOOL)supportsType:(int)arg1;
- (id)autolocalizedKeyCacheIterator;
- (void)setIsGenerated:(BOOL)arg1;
- (BOOL)isGenerated;
- (BOOL)isLetters;
- (BOOL)looksLikeShiftAlternate;
- (BOOL)usesKeyCharging;
- (BOOL)usesAdaptiveKeys;
- (BOOL)isShiftKeyPlaneChooser;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (BOOL)noLanguageIndicator;
- (BOOL)notUseCandidateSelection;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)isShiftKeyplane;
- (id)shiftAlternateKeyplaneName;
- (id)alternateKeyplaneName;
- (BOOL)usesAutoShift;
- (id)keysWithString:(id)arg1;
- (id)keysByKeyName:(id)arg1;
- (id)geometriesOrderedByPosition;
- (id)keysOrderedByPosition;
- (id)keysOrderedByPositionWithoutZip;
- (void)clearTransientCaches;
- (id)keyAttributes;
- (id)geometries;
- (id)keys;
- (void)setAttributes:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)keyForString:(id)arg1;
- (id)layoutName;
- (void)cacheKey:(id)arg1;
- (id)_cacheRootNameForKey:(id)arg1;
- (id)firstCachedKeyWithName:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1;
- (void)setVisualStyle:(int)arg1;
- (int)visualStyle;
- (void)setFrameOnly:(struct CGRect)arg1;
- (void)setPaddedFrame:(struct CGRect)arg1;
- (struct CGRect)paddedFrame;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (void)setShape:(id)arg1;
- (id)shape;
- (BOOL)subtreesAreOrdered;
- (BOOL)isLeafType;
- (void)zipAttributes;
- (void)zipGeometrySet;
- (void)zipGeometries:(BOOL)arg1 attributes:(BOOL)arg2;
- (BOOL)_needsScaling;
- (int)indexOfSubtree:(id)arg1;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithName:(id)arg1;
- (id)subtreeWithType:(int)arg1;
- (id)recursiveDescription;
- (id)description;
- (id)numberForProperty:(id)arg1;
- (BOOL)boolForProperty:(id)arg1;
- (int)intForProperty:(id)arg1;
- (id)stringForProperty:(id)arg1;
- (BOOL)setObject:(id)arg1 forProperty:(id)arg2;
- (id)subtreeAtIndexPath:(id)arg1 withPosition:(int)arg2;
- (BOOL)isDuplicateOfTree:(id)arg1;
- (BOOL)isEqualToTree:(id)arg1;
- (BOOL)isSameAsTree:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (id)initWithType:(int)arg1;
- (BOOL)isHashed;
- (id)componentName;
- (id)unhashedName;
- (id)nameFromAttributes;
@property(readonly, nonatomic) BOOL acceptsShiftLock;
@property(readonly, nonatomic) BOOL modifiesKeyplane;

@end

