//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKAttendationUserData : NSObject
{
    int _statusType;
    unsigned long long _vid;
    NSString *_headURL;
    NSString *_name;
    NSString *_departName;
    NSString *_status;
    long long _checkinCount;
}

@property(nonatomic) long long checkinCount; // @synthesize checkinCount=_checkinCount;
@property(nonatomic) int statusType; // @synthesize statusType=_statusType;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *departName; // @synthesize departName=_departName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *headURL; // @synthesize headURL=_headURL;
@property(nonatomic) unsigned long long vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

