//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WWMarketAppInstallFloatingView;

@interface WWMarketAppInstallHintCell : UITableViewCell
{
    WWMarketAppInstallFloatingView *_installFloatingView;
}

@property(retain, nonatomic) WWMarketAppInstallFloatingView *installFloatingView; // @synthesize installFloatingView=_installFloatingView;
- (void).cxx_destruct;
- (double)p_layoutForHeightWithParentWidth:(double)arg1;
- (void)p_doInit;
- (void)updateWithRecommendApp:(const struct RecommendApp *)arg1;
- (double)cellHeightWithParentWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

