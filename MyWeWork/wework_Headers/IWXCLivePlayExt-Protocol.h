//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IWXCLivePlayExt <NSObject>

@optional
- (void)wxcLivePlayOnMemberVideoChanged:(unsigned long long)arg1 isOpen:(_Bool)arg2;
- (void)wxcLivePlayOnDeviceStartOK;
- (void)wxcLivePlayOnBeginStartDevice;
- (void)wxcLivePlayOnDataConnected;
- (void)wxcLivePlaySpeakerChange:(_Bool)arg1;
- (void)wxcLivePlayOnStartPlayWithDelay:(int)arg1;
- (void)wxcLivePlayOnEnterSucc;
- (void)wxcLivePlayOnErr:(long long)arg1;
@end

