//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKCommonComposeViewController;

@protocol WWKCommonComposeViewControllerDelegate <NSObject>
- (void)composeViewController:(WWKCommonComposeViewController *)arg1 didCancelPublishPost:(const struct WWKCommonComposePost *)arg2;
- (void)composeViewController:(WWKCommonComposeViewController *)arg1 didPublishPost:(const struct WWKCommonComposePost *)arg2;
@end

