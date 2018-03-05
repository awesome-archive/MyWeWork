//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKApplyProfileFooterViewDeleagte-Protocol.h"

@class NSString, UIButton, UILabel, WWKApplyProfileFooterView, WWKApplyProfileHeaderView;
@protocol WWKApplyProfileControllerDelegate;

@interface WWKApplyProfileController : UITableViewController <WWKApplyProfileFooterViewDeleagte>
{
    WWKApplyProfileHeaderView *_headerView;
    WWKApplyProfileFooterView *_footView;
    struct ApplicationRecord record_;
    NSString *_nameString;
    NSString *_mobileString;
    NSString *_emailString;
    long long _rowCount;
    UILabel *_tipLabelLineOne;
    UILabel *_tipLabelLineSecond;
    UIButton *_passButton;
    UIButton *_denyButton;
    id <WWKApplyProfileControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKApplyProfileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_showAlertViewWithString:(id)arg1;
- (void)applyProfileFooterView:(id)arg1 didClickOperateButtonWithAccept:(_Bool)arg2;
- (void)acceptApplicationRecord:(_Bool)arg1;
- (void)didClickOperateButton:(id)arg1;
- (void)viewWillLayoutSubviews;
- (struct ApplicationRecord)applicationRecord;
- (void)reloadSubviews;
- (void)fontSizeChange;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithApplicationRecord:(struct ApplicationRecord)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
