//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADMacArchiveParser.h"

@class NSDictionary, XADHandle;

@interface XAD7ZipParser : XADMacArchiveParser
{
    long long startoffset;
    NSDictionary *mainstreams;
    NSDictionary *currfolder;
    XADHandle *currfolderhandle;
}

+ (id)volumesForHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (_Bool)recognizeFileWithHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (int)requiredHeaderSize;
- (id)formatName;
- (_Bool)isFolderEncrypted:(id)arg1 index:(int)arg2;
- (_Bool)isFolderEncrypted:(id)arg1;
- (id)compressorNameForCoder:(id)arg1;
- (id)compressorNameForFolder:(id)arg1 index:(int)arg2;
- (id)compressorNameForFolder:(id)arg1;
- (long long)uncompressedSizeForFolder:(id)arg1;
- (long long)compressedSizeForFolder:(id)arg1;
- (int)IDForCoder:(id)arg1;
- (id)inHandleForFolder:(id)arg1 index:(int)arg2;
- (id)inHandleForFolder:(id)arg1 coder:(id)arg2 index:(int)arg3;
- (id)outHandleForFolder:(id)arg1 index:(int)arg2;
- (id)handleForStreams:(id)arg1 folderIndex:(int)arg2;
- (id)handleForSolidStreamWithObject:(id)arg1 wantChecksum:(_Bool)arg2;
- (id)rawHandleForEntryWithDictionary:(id)arg1 wantChecksum:(_Bool)arg2;
- (id)collectAllSubStreamsFromFolders:(id)arg1;
- (void)setupDefaultSubStreamsForFolders:(id)arg1;
- (void)parseSubStreamsInfoForHandle:(id)arg1 folders:(id)arg2;
- (void)parseFolderForHandle:(id)arg1 dictionary:(id)arg2 packedStreams:(id)arg3 packedStreamIndex:(int *)arg4;
- (id)parseFoldersForHandle:(id)arg1 packedStreams:(id)arg2;
- (id)parsePackedStreamsForHandle:(id)arg1;
- (id)parseStreamsForHandle:(id)arg1;
- (void)parseAttributesForHandle:(id)arg1 array:(id)arg2;
- (void)parseNamesForHandle:(id)arg1 array:(id)arg2;
- (void)parseCRCsForHandle:(id)arg1 array:(id)arg2;
- (void)parseDatesForHandle:(id)arg1 array:(id)arg2 key:(id)arg3;
- (id)parseDefintionVectorForHandle:(id)arg1 numberOfElements:(int)arg2;
- (void)parseBitVectorForHandle:(id)arg1 array:(id)arg2 key:(id)arg3;
- (id)parseFilesForHandle:(id)arg1;
- (void)parseWithSeparateMacForks;
- (void)dealloc;
- (id)init;

@end
