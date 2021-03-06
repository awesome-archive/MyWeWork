//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class QMUIKeyboardManager;

@interface UITextField (QMUI)
- (void)keyboardDidChangeFrameWithUserInfo:(id)arg1;
- (void)keyboardDidHideWithUserInfo:(id)arg1;
- (void)keyboardDidShowWithUserInfo:(id)arg1;
- (void)keyboardWillChangeFrameWithUserInfo:(id)arg1;
- (void)keyboardWillHideWithUserInfo:(id)arg1;
- (void)keyboardWillShowWithUserInfo:(id)arg1;
- (void)initKeyboardManagerIfNeeded;
@property(readonly, nonatomic) QMUIKeyboardManager *qmui_keyboardManager;
- (void)setQmui_keyboardManager:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType qmui_keyboardDidChangeFrameNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType qmui_keyboardWillChangeFrameNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType qmui_keyboardDidHideNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType qmui_keyboardWillHideNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType qmui_keyboardDidShowNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType qmui_keyboardWillShowNotificationBlock;
@property(readonly, nonatomic) struct _NSRange qmui_selectedRange;
@end

