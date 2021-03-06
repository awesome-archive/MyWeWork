//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImagePickerController.h>

#import "WeDrawViewControllerDelegate-Protocol.h"

@class NSString, UIButton, UIView;

@interface UIImagePickerController (TakePhotoMark) <WeDrawViewControllerDelegate>
- (void)close;
- (void)didDrawViewController:(id)arg1 finishHandleImage:(id)arg2;
- (id)p_findPreviewBottomBar:(id)arg1;
- (id)p_findUseThisPhotoButton:(id)arg1;
- (void)unhackWhenOriginImagePickerDisappear;
- (void)hackWhenOriginImagePickerAppear:(id)arg1;
- (void)prepareMark;
@property(retain, nonatomic) UIView *observingView;
@property(nonatomic) _Bool isToMarkPhoto;
@property(nonatomic) _Bool isHacked;
@property(retain, nonatomic) UIButton *useThisPhotoBtn;

// Remaining properties
@property(retain, nonatomic) UIView *cameraPhotoPreviewTopBar;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

