//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ICameraPermissionCheckExt-Protocol.h"
#import "ITalkMultiVideoExt-Protocol.h"
#import "IWXCLivePlayExt-Protocol.h"
#import "IWXCLiveRoomExt-Protocol.h"
#import "IWXCRecordPermissionCheckExt-Protocol.h"
#import "IWXTalkExt-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, WXCPVMergeExtraInfo, WXCPbPVMergeWWMember;

@interface WXCSdkMultiTalkProxy : NSObject <IWXTalkExt, IWXCRecordPermissionCheckExt, IWXCLivePlayExt, ICameraPermissionCheckExt, ITalkMultiVideoExt, IWXCLiveRoomExt>
{
    int _enterTalkType;
    int _mMultiTalkMode;
    NSString *_tmpClientGroupId;
    NSString *_tmpCalleeMailAddress;
    NSString *_curOpenGroupID;
    NSString *_mCurServerGroupID;
    WXCPbPVMergeWWMember *_mSelfEnterMember;
    NSMutableSet *_mCurMutedUUIDs;
    NSMutableDictionary *_mGroupIdToPVMergeInviteTalkInfoCache;
    WXCPVMergeExtraInfo *_mCurExtraInfo;
}

@property(retain, nonatomic) WXCPVMergeExtraInfo *mCurExtraInfo; // @synthesize mCurExtraInfo=_mCurExtraInfo;
@property(retain, nonatomic) NSMutableDictionary *mGroupIdToPVMergeInviteTalkInfoCache; // @synthesize mGroupIdToPVMergeInviteTalkInfoCache=_mGroupIdToPVMergeInviteTalkInfoCache;
@property(retain, nonatomic) NSMutableSet *mCurMutedUUIDs; // @synthesize mCurMutedUUIDs=_mCurMutedUUIDs;
@property(retain, nonatomic) WXCPbPVMergeWWMember *mSelfEnterMember; // @synthesize mSelfEnterMember=_mSelfEnterMember;
@property(copy, nonatomic) NSString *mCurServerGroupID; // @synthesize mCurServerGroupID=_mCurServerGroupID;
@property(copy, nonatomic) NSString *curOpenGroupID; // @synthesize curOpenGroupID=_curOpenGroupID;
@property(nonatomic) int mMultiTalkMode; // @synthesize mMultiTalkMode=_mMultiTalkMode;
@property(copy, nonatomic) NSString *tmpCalleeMailAddress; // @synthesize tmpCalleeMailAddress=_tmpCalleeMailAddress;
@property(copy, nonatomic) NSString *tmpClientGroupId; // @synthesize tmpClientGroupId=_tmpClientGroupId;
@property(nonatomic) int enterTalkType; // @synthesize enterTalkType=_enterTalkType;
- (void).cxx_destruct;
- (_Bool)fixSpeakerChangeInvalid;
- (_Bool)isRoomBusyWithPvMergeTalkData:(id)arg1;
- (void)resumePVMergeFromSysCallHold;
- (_Bool)switchPVMergeEncodingAndNotify;
- (_Bool)notifyPVMergeSwitchTalkToPstn;
- (_Bool)checkPVMergeInvite:(int)arg1;
- (_Bool)checkPVMergeInviteCalleeValid:(id)arg1;
- (_Bool)rejectMultiTalkAndClose:(id)arg1 exitReason:(int)arg2;
- (_Bool)exitCurPvMergeMultiTalk:(int)arg1;
- (_Bool)createPvMergeTalk:(id)arg1 extraInfo:(id)arg2;
- (_Bool)enterMultiTalk:(id)arg1 routId:(int)arg2 extraInfo:(id)arg3 pvMember:(id)arg4;
- (id)genMultiTalkUniqueId;
- (void)setMinimumModeChanged:(unsigned long long)arg1;
- (void)setFocusPoint:(struct CGPoint)arg1 frame:(struct CGRect)arg2;
- (void)notifyScreenShareEnded;
- (void)notifyScreenShareStarted:(unsigned long long)arg1;
- (void)notifyRefleshRoomMemberList;
- (id)getCameraImg;
- (_Bool)isMuted:(int)arg1;
- (void)onMemberVideoChanged:(unsigned long long)arg1 isOpen:(_Bool)arg2;
- (void)wxcLivePlayOnMemberVideoChanged:(unsigned long long)arg1 isOpen:(_Bool)arg2;
- (void)doMemberVideoChanged:(unsigned long long)arg1 isOpen:(_Bool)arg2;
- (void)OnReceivedScreenShareData;
- (void)OnScreenShareVideoChanged:(struct CGSize)arg1;
- (_Bool)removeVideoView:(unsigned long long)arg1 isAudience:(_Bool)arg2;
- (_Bool)createVideoViewForMember:(unsigned long long)arg1 withParentView:(id)arg2 isAudience:(_Bool)arg3;
- (_Bool)isCameraOpen;
- (_Bool)closeCamera;
- (void)flipCamera;
- (_Bool)openCamera;
- (void)OnCameraDenied;
- (void)OnCameraPermissioned;
- (id)getWXCSingleTalkMemberListWithVoiceGroupMemList:(id)arg1;
- (void)resetTmpEnterData;
- (void)wxcLivePlayOnStartPlayWithDelay:(int)arg1;
- (void)wxcLivePlayOnEnterSucc;
- (void)wxcLivePlayOnErr:(long long)arg1;
- (void)onReleaseMicResult:(_Bool)arg1;
- (void)onSeizeMicResult:(_Bool)arg1;
- (void)onPeerSignalChange:(int)arg1 level:(int)arg2 isLocal:(_Bool)arg3;
- (void)onInviteAckResult:(_Bool)arg1 groupId:(id)arg2 ackType:(int)arg3 errCode:(int)arg4;
- (void)OnMuteChange:(_Bool)arg1;
- (void)OnSpeakerChange:(_Bool)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onTalkStatusChange:(id)arg1;
- (void)OnError:(id)arg1 errorType:(int)arg2 errorNo:(int)arg3;
- (void)reset;
- (void)onPVMergeMemberChangeSpeical:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 bSvrNotify:(_Bool)arg2;
- (void)OnDeviceStartOK;
- (void)OnReceiveOtherMemberTalkData;
- (void)OnDataConnectOK;
- (void)OnEnterTalkModeOK:(id)arg1;
- (void)OnCreateTalkModeOKWithGroupId:(id)arg1 isHitSimultaneous:(_Bool)arg2;
- (id)getWXCPVMergeMemberListWithVoiceGroupMemList:(id)arg1;
- (id)getWXCPVMergerGroupWithRoomData:(id)arg1;
- (void)checkAndRestartAudioDevice;
- (_Bool)setLivePlaySpeaker:(_Bool)arg1;
- (_Bool)setLivePlayMute:(_Bool)arg1;
- (_Bool)exitLivePlay;
- (_Bool)enterLivePlay:(id)arg1;
- (_Bool)releaseMultiTalkMic;
- (_Bool)seizeMultiTalkMic:(int)arg1;
- (_Bool)setMultiTalkMode:(int)arg1;
- (_Bool)isInTalkRoom;
- (_Bool)isWorking;
- (id)getInviteData;
- (_Bool)exitSingleTalk;
- (_Bool)enterSingleTalk;
- (_Bool)createSingleTalk:(id)arg1;
- (_Bool)createSingleTalkFromMail:(id)arg1 callerMailAdress:(id)arg2 calleeMailAdress:(id)arg3 vid:(id)arg4 encryptInfo:(id)arg5;
- (_Bool)checkInviteFromPhoneBookApp;
- (_Bool)checkInvite;
- (_Bool)checkInviteCalleeValid:(id)arg1;
- (void)getTalkTotalFlow:(int *)arg1 pOutWifiBytes:(int *)arg2;
- (void)setTalkSoundMute:(_Bool)arg1;
- (_Bool)blockTalkByClientId:(id)arg1 isBlock:(_Bool)arg2;
- (_Bool)getMuteOn;
- (_Bool)setMute:(_Bool)arg1;
- (_Bool)getSpeakerOn;
- (_Bool)setSpeaker:(_Bool)arg1;
- (_Bool)stopMultiTalk;
- (void)startMultiTalk:(id)arg1 isGuest:(_Bool)arg2 title:(id)arg3 voiceType:(int)arg4 extraInfo:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

