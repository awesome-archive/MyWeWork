//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WWKInteractiveLabel;

@protocol WWKInteractiveLabelDelegate <NSObject>

@optional
- (NSArray *)interactiveLabel:(WWKInteractiveLabel *)arg1 willShowMenuControllerWithContext:(id)arg2;
- (void)interactiveLabel:(WWKInteractiveLabel *)arg1 didLongPressContext:(id)arg2 boundingRects:(NSArray *)arg3;
- (void)interactiveLabel:(WWKInteractiveLabel *)arg1 didTouchContext:(id)arg2 boundingRects:(NSArray *)arg3;
- (void)interactiveLabelDidLongPress:(WWKInteractiveLabel *)arg1;
- (void)interactiveLabelDidTouch:(WWKInteractiveLabel *)arg1;
@end
