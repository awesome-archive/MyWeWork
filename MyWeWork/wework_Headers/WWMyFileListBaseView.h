//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WWMyFileListBaseView-Protocol.h"
#import "WWMyFileListDelayTaskHolderDelegate-Protocol.h"
#import "WWMyFileProxyObserverDelegate-Protocol.h"

@class NSMutableArray, NSString, WWMyFileListDelayTaskHolder, WWMyFileListNewViewController;
@protocol WWMyFileListViewDelegate;

@interface WWMyFileListBaseView : UIView <WWMyFileListDelayTaskHolderDelegate, WWMyFileProxyObserverDelegate, WWMyFileListBaseView>
{
    struct WWMyFileProxyObserver *_mMyFileProxyObserver;
    _Bool _mHasLocalMore;
    _Bool _mHasRemoteMore;
    _Bool _mIsShowLoadFinish;
    _Bool _mHasRequestRemoteData;
    int _mIsInRefreshList;
    int _mRefreshListSeq;
    id <WWMyFileListViewDelegate> _mDelegate;
    WWMyFileListNewViewController *_mParentController;
    NSMutableArray *_mDataList;
    WWMyFileListDelayTaskHolder *_mDelayLoadHolder;
}

@property(retain, nonatomic) WWMyFileListDelayTaskHolder *mDelayLoadHolder; // @synthesize mDelayLoadHolder=_mDelayLoadHolder;
@property(nonatomic) _Bool mHasRequestRemoteData; // @synthesize mHasRequestRemoteData=_mHasRequestRemoteData;
@property(nonatomic) _Bool mIsShowLoadFinish; // @synthesize mIsShowLoadFinish=_mIsShowLoadFinish;
@property(nonatomic) int mRefreshListSeq; // @synthesize mRefreshListSeq=_mRefreshListSeq;
@property(nonatomic) int mIsInRefreshList; // @synthesize mIsInRefreshList=_mIsInRefreshList;
@property(retain, nonatomic) NSMutableArray *mDataList; // @synthesize mDataList=_mDataList;
@property(nonatomic) _Bool mHasRemoteMore; // @synthesize mHasRemoteMore=_mHasRemoteMore;
@property(nonatomic) _Bool mHasLocalMore; // @synthesize mHasLocalMore=_mHasLocalMore;
@property(nonatomic) __weak WWMyFileListNewViewController *mParentController; // @synthesize mParentController=_mParentController;
@property(nonatomic) __weak id <WWMyFileListViewDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void).cxx_destruct;
- (_Bool)isFileSelectViewType;
- (void)OnCollectionMyFileDataChanged;
- (void)onDelayTaskFire:(id)arg1 holder:(id)arg2;
- (_Bool)isInFooterRefreshing;
- (void)showEmptyLoadingUI;
- (void)didSelectedItem:(id)arg1 itemFrame:(struct CGRect)arg2 dataList:(id)arg3;
- (void)didSelectedItem:(id)arg1 dataList:(id)arg2;
- (_Bool)isSearchActive;
- (void)listViewDidDisAppear;
- (void)listViewWillDisAppear;
- (void)listViewDidAppear;
- (void)listViewWillAppear;
- (void)resetUIWhenReload;
- (void)updateUI;
- (void)endRefreshData;
- (int)getLoadMoreCount;
- (int)getCurrFilterType;
- (id)getDataListLastFileItem;
- (void)delayDoLoadDataResult:(id)arg1;
- (id)parseLoadResult:(int)arg1 srcCollectionList:(const vector_362d011d *)arg2 isLoadMore:(_Bool)arg3 reqFilterType:(int)arg4 startLocalId:(unsigned long long)arg5 refreshSeq:(int)arg6;
- (int)reqRefreshListSeq;
- (int)getListMaxNumInScreen;
- (void)loadData:(unsigned int)arg1 startTime:(unsigned long long)arg2 isAfterServerLoad:(_Bool)arg3;
- (void)loadLocalMoreData:(_Bool)arg1;
- (void)appendDataList:(id)arg1;
- (void)clearDataList;
- (void)initData;
- (void)reLoadData;
- (void)loadMoreData;
- (_Bool)hasMore;
- (void)wwMyFileLoadCloudMessageHelperOnFinish:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 parentController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

