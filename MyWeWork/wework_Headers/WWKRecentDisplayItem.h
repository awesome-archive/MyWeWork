//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, WWKAvatarImageView;

@interface WWKRecentDisplayItem : UIButton
{
    struct RecentSearchItem _recentSearchItem;
    WWKAvatarImageView *_avatar;
    UILabel *_title;
}

@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) WWKAvatarImageView *avatar; // @synthesize avatar=_avatar;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setRecentSearchItem:(struct RecentSearchItem)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

