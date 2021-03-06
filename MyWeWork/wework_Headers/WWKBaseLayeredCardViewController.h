//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WWKCardPrivacySettingViewControllerDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIScrollView, UIView, WWKOldCardPrivacySettingControllerViewController;

@interface WWKBaseLayeredCardViewController : UIViewController <UIScrollViewDelegate, WWKCardPrivacySettingViewControllerDelegate>
{
    _Bool _simulateBlur;
    _Bool _appeared;
    _Bool _dismissed;
    _Bool _userDragging;
    _Bool _shouldPerformStableLayout;
    WWKOldCardPrivacySettingControllerViewController *_privacySettingViewController;
    UIScrollView *_scrollView;
    UIScrollView *_interactionScrollView;
    UIView *_backgroundView;
    UIView *_actionContainerView;
    UIButton *_sendButton;
    UIButton *_settingButton;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
}

@property(nonatomic) _Bool shouldPerformStableLayout; // @synthesize shouldPerformStableLayout=_shouldPerformStableLayout;
@property(nonatomic) _Bool userDragging; // @synthesize userDragging=_userDragging;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
@property(nonatomic) _Bool simulateBlur; // @synthesize simulateBlur=_simulateBlur;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *actionContainerView; // @synthesize actionContainerView=_actionContainerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIScrollView *interactionScrollView; // @synthesize interactionScrollView=_interactionScrollView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WWKOldCardPrivacySettingControllerViewController *privacySettingViewController; // @synthesize privacySettingViewController=_privacySettingViewController;
- (void).cxx_destruct;
- (double)reverseScrollFadeThreshold;
- (double)scrollDismissThreshold;
- (double)scrollFadeThreshold;
- (double)scrollContentHeight;
- (void)didExitPrivacySetting;
- (void)willExitPrivacySetting;
- (void)willEnterPrivacySetting;
- (void)dismissLayout;
- (void)stableLayout;
- (void)privacyFinishLayout;
- (void)privacyIdleLayout;
- (void)beforeSendLayout;
- (void)finishIdleLayout;
- (void)idleLayout;
- (void)initialLayout;
- (void)animateWithDuration:(double)arg1 to:(SEL)arg2 delay:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (double)wwk_preferredWindowLevel;
- (void)show;
- (void)privacyDidChange:(id)arg1;
- (void)overridePrivacySetting:(id)arg1;
- (id)createCardView;
- (void)privacySettingViewControllerDidClose:(id)arg1;
- (void)privacySettingViewControllerDidChangeSetting:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)settingDidClick:(id)arg1;
- (void)cancelDidClick:(id)arg1;
- (void)sendDidClick:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

