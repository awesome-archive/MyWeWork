//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKDepartmentAddUserController;

@protocol WWKDepartmentAddUserControllerDelegate <NSObject>

@optional
- (void)didRefreshUserInController:(WWKDepartmentAddUserController *)arg1;
- (void)addUserComplete:(WWKDepartmentAddUserController *)arg1;
- (void)deleteUserComplete;
- (void)editUserComplete:(WWKDepartmentAddUserController *)arg1;
@end

