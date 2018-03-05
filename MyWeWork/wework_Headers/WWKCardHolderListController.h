//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonTableViewController.h"

#import "WWCardWallEmptyViewDelegate-Protocol.h"
#import "WWKCardWallListDataSourceDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UISearchDisplayController, WWCardWallEmptyView, WWCardWallListSearchController, WWKCardHolderFooterView, WWKCardWallListDataSource, WWKSearchBar;

@interface WWKCardHolderListController : WWKCommonTableViewController <WWKCardWallListDataSourceDelegate, WWCardWallEmptyViewDelegate>
{
    NSArray *_cardInfoArr;
    _Bool _fromSearch;
    NSString *_navigationTitle;
    UISearchDisplayController *_searchDisplayController;
    WWCardWallListSearchController *_searchController;
    WWKSearchBar *_searchBar;
    WWKCardWallListDataSource *_listDataSource;
    UIActivityIndicatorView *_indicatorView;
    NSMutableDictionary *_cellHeightDic;
    WWCardWallEmptyView *_emptyView;
    WWKCardHolderFooterView *_tableFooterView;
    long long _historyCount;
}

@property(nonatomic) long long historyCount; // @synthesize historyCount=_historyCount;
@property(retain, nonatomic) WWKCardHolderFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) WWCardWallEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSMutableDictionary *cellHeightDic; // @synthesize cellHeightDic=_cellHeightDic;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) WWKCardWallListDataSource *listDataSource; // @synthesize listDataSource=_listDataSource;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WWCardWallListSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(nonatomic) _Bool fromSearch; // @synthesize fromSearch=_fromSearch;
@property(retain, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
- (void).cxx_destruct;
- (void)onDidTapCardListCell:(id)arg1;
- (void)p_dataSourceDidFinishLoad;
- (void)cardWallListDataSourceDidLoadEmpty;
- (void)cardWallListDataSourceDidUpdate;
- (void)cardWallListDataSourceDidFinishLoad:(int)arg1;
- (id)sectionIndexTitlesForContentTableView;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)inputHistoryCards;
- (void)gotoScanCard;
- (void)stopLoading;
- (void)startLoding;
- (id)dataSource;
- (void)loadDataSource;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setCardDataSoure:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
