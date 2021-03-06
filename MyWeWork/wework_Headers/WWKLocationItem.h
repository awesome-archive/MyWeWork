//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WWKLocationItem : NSObject <NSCopying>
{
    NSString *_remoteID;
    NSString *_addressName;
    NSString *_detailAddressName;
    double _zoom;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(copy, nonatomic) NSString *detailAddressName; // @synthesize detailAddressName=_detailAddressName;
@property(copy, nonatomic) NSString *addressName; // @synthesize addressName=_addressName;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end

