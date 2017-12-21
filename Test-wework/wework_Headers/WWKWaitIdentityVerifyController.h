//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIImage, UILabel, WWKWaitVerifyIdentityCell;

@interface WWKWaitIdentityVerifyController : UITableViewController
{
    struct IDCardInfo _idCardInfo;
    _Bool _isFrontImageDownloading;
    _Bool _isBackImageDownloading;
    CDUnknownBlockType _callBack;
    NSArray *_cellTypes;
    UILabel *_submitTimeLabel;
    UIImage *_idFrontImage;
    UIImage *_idBackImage;
    WWKWaitVerifyIdentityCell *_waitVerifyIdentityCell;
}

@property(retain, nonatomic) WWKWaitVerifyIdentityCell *waitVerifyIdentityCell; // @synthesize waitVerifyIdentityCell=_waitVerifyIdentityCell;
@property(nonatomic) _Bool isBackImageDownloading; // @synthesize isBackImageDownloading=_isBackImageDownloading;
@property(nonatomic) _Bool isFrontImageDownloading; // @synthesize isFrontImageDownloading=_isFrontImageDownloading;
@property(retain, nonatomic) UIImage *idBackImage; // @synthesize idBackImage=_idBackImage;
@property(retain, nonatomic) UIImage *idFrontImage; // @synthesize idFrontImage=_idFrontImage;
@property(retain, nonatomic) UILabel *submitTimeLabel; // @synthesize submitTimeLabel=_submitTimeLabel;
@property(retain, nonatomic) NSArray *cellTypes; // @synthesize cellTypes=_cellTypes;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)waterMarkImage:(id)arg1 withText:(id)arg2;
- (void)p_revoke;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithIDCardInfo:(const struct IDCardInfo *)arg1;

@end
