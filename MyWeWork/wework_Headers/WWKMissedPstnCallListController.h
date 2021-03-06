//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ConversationProxyObserverDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKPstnMissedCallCellDelegate-Protocol.h"

@class NSString, UITableView, WWKChatCollectionHeader, WWKConversationTitleView, WWKReusableObjectPool;

@interface WWKMissedPstnCallListController : UIViewController <ConversationProxyObserverDelegate, WWKPstnMissedCallCellDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    scoped_refptr_fd92d7bf _conversation;
    vector_b095e902 _messages;
    scoped_refptr_c1fa851d _last_message;
    _Bool _willFetchingMessages;
    _Bool _isFetchingMessages;
    _Bool _isViewAppeared;
    _Bool _isMeasuringRowHeight;
    scoped_refptr_c1fa851d _initInstructionMessage;
    scoped_refptr_e1f85e48 _user;
    WWKReusableObjectPool *_reusableObjectPool;
    struct ConversationProxyObserver *_proxyObserver;
    struct map<scoped_refptr<model::Message>, double, std::__1::less<scoped_refptr<model::Message>>, std::__1::allocator<std::__1::pair<const scoped_refptr<model::Message>, double>>> _row_height_cache;
    _Bool _hasMore;
    WWKChatCollectionHeader *_refreshingHeader;
    UITableView *_tableView;
    WWKConversationTitleView *_customTitleView;
    double _nextMarkConversationTime;
}

@property(nonatomic) double nextMarkConversationTime; // @synthesize nextMarkConversationTime=_nextMarkConversationTime;
@property(retain, nonatomic) WWKConversationTitleView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) WWKChatCollectionHeader *refreshingHeader; // @synthesize refreshingHeader=_refreshingHeader;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_doCommonConfigWithModelMessage:(scoped_refptr_c1fa851d)arg1 WithCell:(id)arg2 WithIndexPath:(id)arg3;
- (_Bool)p_needJumToPstnAppGuideController;
- (struct DefaultApplication)p_checkPstnDefaultAPP;
- (void)p_onDataChanged;
- (void)p_onDynamicFontSizeDidChange;
- (void)p_onApplicationDidBecomeActive:(id)arg1;
- (void)p_onMarkConversation:(_Bool)arg1;
- (void)p_clickSetting:(id)arg1;
- (void)onDidTapPstnMissedCallCell:(const scoped_refptr_c1fa851d *)arg1;
- (_Bool)isScrollPositionAtBottom;
- (void)OnAddMessage:(const vector_b095e902 *)arg1 end:(_Bool)arg2 inConversation:(scoped_refptr_fd92d7bf)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollToBottomWithAnimation:(_Bool)arg1;
- (void)sortMessages:(vector_b095e902 *)arg1 orderedByAscending:(_Bool)arg2;
- (void)onFetchHistory:(int)arg1 messages:(const vector_b095e902 *)arg2;
- (void)fetchHistoryMessagesCount:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)p_cellForWEXCALLVIDWithMessage:(scoped_refptr_c1fa851d)arg1 atIndexPath:(id)arg2;
- (id)p_defaultCellForUnSupportMessage:(scoped_refptr_c1fa851d)arg1 atIndexPath:(id)arg2;
- (id)p_pstnMissedCallLogCellForMessage:(scoped_refptr_c1fa851d)arg1 calllogDataItem:(id)arg2 atIndexPath:(id)arg3;
- (id)p_pstnCardCellForMessage:(scoped_refptr_c1fa851d)arg1 calllogDataItem:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)p_isPstnMessage:(scoped_refptr_c1fa851d)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)gotoPstnCalllogViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateTitleViewWithTitle:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)getMissedPstnConvID;
- (id)initWithConversation:(scoped_refptr_fd92d7bf)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

