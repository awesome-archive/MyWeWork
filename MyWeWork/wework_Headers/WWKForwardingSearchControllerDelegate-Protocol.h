//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKForwardingSearchController;

@protocol WWKForwardingSearchControllerDelegate <NSObject>
- (_Bool)shouldSearchFilterConversation:(scoped_refptr_fd92d7bf)arg1;

@optional
- (void)searchDisplayControllerDidEndSearch;
- (void)searchDisplayControllerWillEndSearch;
- (void)searchController:(WWKForwardingSearchController *)arg1 didSelectConversation:(scoped_refptr_fd92d7bf)arg2;
@end

