//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAPageFlowAppInfo : MMObject
{
    _Bool _isSubApp;
    NSString *_username;
    NSString *_appid;
    unsigned long long _appState;
    unsigned long long _useState;
    WAPageFlowAppInfo *_hostAppInfo;
}

@property(retain, nonatomic) WAPageFlowAppInfo *hostAppInfo; // @synthesize hostAppInfo=_hostAppInfo;
@property(nonatomic) _Bool isSubApp; // @synthesize isSubApp=_isSubApp;
@property(nonatomic) unsigned long long useState; // @synthesize useState=_useState;
@property(nonatomic) unsigned long long appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithUserName:(id)arg1 appid:(id)arg2 type:(unsigned int)arg3 useState:(unsigned long long)arg4;

@end

