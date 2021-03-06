//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "ConversationProxyObserverDelegate-Protocol.h"
#import "WWKOrganizationCellDelegate-Protocol.h"
#import "WWKSelectAppointedContactsControllerDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"

@class NSString, UISearchDisplayController, WWKConvMembersSearchController, WWKSearchBar;

@interface WWKConversationMembersController : UITableViewController <WWKSelectContactsViewControllerDelegate, ConversationProxyObserverDelegate, WWKOrganizationCellDelegate, WWKSelectAppointedContactsControllerDelegate>
{
    scoped_refptr_fd92d7bf _conversation;
    struct ConversationProxyObserver *_conversationProxyObserver;
    vector_89e6321f normal_user_vector_;
    vector_46470f89 valid_user_vector_vector_;
    vector_46470f89 pinyin_user_vector_vector_;
    _Bool _isChooseNewCreator;
    WWKSearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    WWKConvMembersSearchController *_searchController;
}

@property(retain, nonatomic) WWKConvMembersSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool isChooseNewCreator; // @synthesize isChooseNewCreator=_isChooseNewCreator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onCellPropertyChanged;
- (void)onRefreshUserInfo:(id)arg1;
- (void)p_onClickCancelButton;
- (void)configureValidDataSource;
- (_Bool)needGroupSectionIndex;
- (_Bool)isMeWithIndexPath:(id)arg1;
-     // Error parsing type: ^{User=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::UserObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::UserObserver *, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}^^{UserObserver}{__compressed_pair<model::UserObserver **, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}}}ii}{ObserverList<model::UserObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::UserObserver *, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}^^{UserObserver}{__compressed_pair<model::UserObserver **, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}}}ii}{unique_ptr<pb::User, std::__1::default_delete<pb::User> >={__compressed_pair<pb::User *, std::__1::default_delete<pb::User> >=^{User}}}{scoped_refptr<model::Company>=^{Company}}}24@0:8@16, name: userWithIndexPath:
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)sectionIndexTitlesForContentTableView;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)forceNotShowCorpName:(scoped_refptr_e1f85e48)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectAppointedContactsController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (void)OnPropertyChanged:(scoped_refptr_fd92d7bf)arg1;
- (void)OnRemoveMembers:(const vector_4ea3d2e4 *)arg1 inConversation:(scoped_refptr_fd92d7bf)arg2;
- (void)onAddMembers:(const vector_4ea3d2e4 *)arg1 inConversation:(scoped_refptr_fd92d7bf)arg2;
- (void)onClickNavigationRightItem;
- (void)dealloc;
- (void)reloadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)p_naviRightMoreClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConversation:(scoped_refptr_fd92d7bf)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

