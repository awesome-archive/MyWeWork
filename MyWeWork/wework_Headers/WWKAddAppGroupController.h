//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UIView, WWKAddAppGroupHeader;

@interface WWKAddAppGroupController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _edit;
    _Bool _forcusEditGroupName;
    NSString *_naviTitle;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _delAppGroupcallback;
    CDUnknownBlockType _addAppCallback;
    CDUnknownBlockType _checkExistGroupNameBlock;
    NSMutableArray *_appSections;
    NSMutableArray *_orginalAppSections;
    UITableView *_tableView;
    UIView *_topBackgroundView;
    WWKAddAppGroupHeader *_header;
}

@property(retain, nonatomic) WWKAddAppGroupHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *orginalAppSections; // @synthesize orginalAppSections=_orginalAppSections;
@property(retain, nonatomic) NSMutableArray *appSections; // @synthesize appSections=_appSections;
@property(copy, nonatomic) CDUnknownBlockType checkExistGroupNameBlock; // @synthesize checkExistGroupNameBlock=_checkExistGroupNameBlock;
@property(copy, nonatomic) CDUnknownBlockType addAppCallback; // @synthesize addAppCallback=_addAppCallback;
@property(copy, nonatomic) CDUnknownBlockType delAppGroupcallback; // @synthesize delAppGroupcallback=_delAppGroupcallback;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool forcusEditGroupName; // @synthesize forcusEditGroupName=_forcusEditGroupName;
@property(nonatomic) _Bool edit; // @synthesize edit=_edit;
@property(retain, nonatomic) NSString *naviTitle; // @synthesize naviTitle=_naviTitle;
- (void).cxx_destruct;
- (void)checkRightNaviBarItemEnable;
- (void)deleteDataAtIndexPath:(id)arg1;
- (id)deleteApps;
- (_Bool)hasModify;
- (void)rightBarItemClick;
- (void)leftBarItemClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateUI;
- (id)thirdAppSectionWithGroups:(id)arg1;
- (id)thirdAppSection;
- (id)sectionTitle;
- (id)backButtonTitle;
- (_Bool)isPresent;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAppGroups:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

