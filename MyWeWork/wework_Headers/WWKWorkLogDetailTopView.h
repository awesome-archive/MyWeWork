//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, WWKAvatarImageView;

@interface WWKWorkLogDetailTopView : UIView
{
    WWKAvatarImageView *_headImgView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
}

+ (double)getToViewHeight;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WWKAvatarImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void).cxx_destruct;
- (void)updateDetailTopView:(unsigned long long)arg1 withCreatorInfoData:(const basic_string_a490aa4c *)arg2 withTimeString:(id)arg3 withType:(int)arg4;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

