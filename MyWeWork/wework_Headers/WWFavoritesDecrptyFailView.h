//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSString, WWFavoritesItem, WWKInteractiveLabel;

@interface WWFavoritesDecrptyFailView : UIView <WWKInteractiveLabelDelegate>
{
    WWKInteractiveLabel *_txtContentLabelTips;
    WWKInteractiveLabel *_txtContentLabelBtn;
    WWFavoritesItem *_favItem;
}

@property(retain, nonatomic) WWFavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) WWKInteractiveLabel *txtContentLabelBtn; // @synthesize txtContentLabelBtn=_txtContentLabelBtn;
@property(retain, nonatomic) WWKInteractiveLabel *txtContentLabelTips; // @synthesize txtContentLabelTips=_txtContentLabelTips;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

