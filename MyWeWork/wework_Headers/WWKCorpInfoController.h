//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKCommonSettingControllerDelegate-Protocol.h"
#import "WWKEditTextDelegate-Protocol.h"
#import "WWKInteractiveLabelDelegate-Protocol.h"
#import "WXApiManagerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WWKCorpInfoController : UITableViewController <WWKInteractiveLabelDelegate, WWKEditTextDelegate, WXApiManagerDelegate, WWKCommonSettingControllerDelegate>
{
    NSMutableArray *_dataSource;
    struct IndustryInfo _selectedFirstIndustryInfo;
    struct IndustryInfo _selectedIndustryInfo;
    struct CorpScaleInfo _selectedCorpScaleInfo;
    vector_6b0af354 _industryInfoList;
    struct vector<allconfig::CorpScaleInfo, std::__1::allocator<allconfig::CorpScaleInfo>> _corpScaleInfoList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)controller:(id)arg1 onItemSelected:(long long)arg2;
- (void)verifyMobileSuccessful:(struct PhoneItem)arg1;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (void)editTextController:(id)arg1 didClickSaveItemWithText:(id)arg2;
- (void)p_submitIndustyInfo:(const struct CorpIndustryInfo *)arg1 withCallback:(CDUnknownBlockType)arg2;
- (long long)getCorpScaleInfoSelectedIndex;
- (id)corpScaleInfoStrList;
- (id)popAlertWithIcon:(id)arg1 title:(id)arg2 subTitle:(id)arg3;
- (void)onMoreBtnClick:(id)arg1;
- (void)OnSubTitleClick;
- (id)tipsFooterView;
- (void)removeCellType:(long long)arg1;
- (id)mutableCopyWithCellTypes:(id)arg1;
- (id)p_cellDetailTitleWithIndexPath:(id)arg1;
- (id)p_cellTitleWithIndexPath:(id)arg1;
- (struct CorpIndustryInfo)corpIndustryInfo;
- (_Bool)p_isOtherIndustryInfo:(const struct IndustryInfo *)arg1;
- (id)p_industyTypeName;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)buildIndustryInfo:(const struct IndustryInfoList *)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

