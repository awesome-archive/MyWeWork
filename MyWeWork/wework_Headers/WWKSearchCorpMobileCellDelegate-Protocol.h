//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UITextField, WWKSearchCorpMobileCell;

@protocol WWKSearchCorpMobileCellDelegate <NSObject>
- (void)mobileCell:(WWKSearchCorpMobileCell *)arg1 textFieldEndEdit:(UITextField *)arg2;
- (void)mobileCell:(WWKSearchCorpMobileCell *)arg1 textFieldBeginEdit:(UITextField *)arg2;
- (void)mobileCellDataChange:(WWKSearchCorpMobileCell *)arg1 countryCode:(NSString *)arg2 mobile:(NSString *)arg3;
@end

