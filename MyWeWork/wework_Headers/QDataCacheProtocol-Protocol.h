//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol QDataCacheProtocol <NSObject>
@property(readonly, nonatomic) NSString *logoPath;
@property(copy, nonatomic) NSString *version;
- (NSData *)cacheDataWithTile:(CDStruct_74b02b43)arg1;
- (_Bool)writeCacheData:(NSData *)arg1 tile:(CDStruct_74b02b43)arg2 version:(NSString *)arg3;

@optional
- (void)clearCache;
@end
