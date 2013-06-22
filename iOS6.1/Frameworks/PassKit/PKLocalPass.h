/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PassKit/PKPass.h>

#import "NSCopying-Protocol.h"
#import "PKLocalPassFileAccessor-Protocol.h"

@class NSData, NSString, NSURL;

@interface PKLocalPass : PKPass <PKLocalPassFileAccessor, NSCopying>
{
    NSURL *_fileURL;
    id <PKLocalPassFileAccessor> _fileAccessor;
    NSString *_localizedDescription;
    NSData *_passData;
    BOOL _removeOnDiskRepresentationOnDealloc;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL removeOnDiskRepresentationOnDealloc; // @synthesize removeOnDiskRepresentationOnDealloc=_removeOnDiskRepresentationOnDealloc;
@property(readonly, nonatomic) NSData *passData; // @synthesize passData=_passData;
- (void)setLocalizedDescription:(id)arg1;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)_locationsFromPassDictionary:(id)arg1;
- (id)displayProfileWithPassDictionary:(id)arg1 passURL:(id)arg2;
- (id)serializedFileWrapperFromPassURL:(id)arg1;
- (id)manifestHashFromPassURL:(id)arg1;
- (BOOL)getResourceValue:(id *)arg1 forKey:(id)arg2 forPassAtURL:(id)arg3 error:(id *)arg4;
- (BOOL)removePassAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)movePassAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)copyPassAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)loadImageSet:(int)arg1 fromPassURL:(id)arg2 displayProfile:(id)arg3;
- (id)loadContentFromPassURL:(id)arg1;
- (void)checkRevocationStatusForPassAtURL:(id)arg1 completion:(id)arg2;
- (id)validatePassURL:(id)arg1;
- (id)localizedString:(id)arg1 forPassAtURL:(id)arg2;
- (id)loadDictionaryFromPassURL:(id)arg1;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)diff:(id)arg1;
- (BOOL)moveToTemporaryURL;
- (BOOL)moveToFileURL:(id)arg1;
- (id)serializedFileWrapper;
- (id)copyWithFileAccessor:(id)arg1;
- (id)copyWithFileURL:(id)arg1 fileAccessor:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fetchImageSet:(int)arg1 withCompletion:(id)arg2;
- (void)fetchContentWithCompletion:(id)arg1;
- (id)localizedDescription;
- (void)checkRevocationStatusWithCompletion:(id)arg1;
- (id)modificationDate;
@property(nonatomic) id <PKLocalPassFileAccessor> fileAccessor; // @synthesize fileAccessor=_fileAccessor;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2;
- (id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2 error:(id *)arg3;

@end

