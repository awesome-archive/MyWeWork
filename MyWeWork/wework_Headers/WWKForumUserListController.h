//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UISearchDisplayController, WWKDepartmentSearchController, WWKSearchBar;

@interface WWKForumUserListController : UITableViewController
{
    vector_89e6321f user_list_;
    WWKSearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    WWKDepartmentSearchController *_searchController;
}

@property(retain, nonatomic) WWKDepartmentSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)setUserList:(const vector_89e6321f *)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

