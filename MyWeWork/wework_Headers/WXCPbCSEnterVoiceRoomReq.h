//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPPBGeneratedMessage.h"

@class NSMutableArray, NSString, WXCPbPVMergeWWMember, WXCPbVoiceGroupInfo, WXCPbVoipRelayData;

@interface WXCPbCSEnterVoiceRoomReq : WXPPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WXCPbVoipRelayData *capInfo; // @dynamic capInfo;
@property(nonatomic) int enterType; // @dynamic enterType;
@property(nonatomic) int filterexit; // @dynamic filterexit;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) WXCPbVoiceGroupInfo *groupInfo; // @dynamic groupInfo;
@property(nonatomic) unsigned int iswebuser; // @dynamic iswebuser;
@property(retain, nonatomic) NSMutableArray *profileList; // @dynamic profileList;
@property(retain, nonatomic) WXCPbPVMergeWWMember *pvinfo; // @dynamic pvinfo;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;
@property(nonatomic) unsigned int userAbility; // @dynamic userAbility;
@property(retain, nonatomic) NSMutableArray *userNames; // @dynamic userNames;
@property(nonatomic) unsigned int voipmaxsize; // @dynamic voipmaxsize;

@end
