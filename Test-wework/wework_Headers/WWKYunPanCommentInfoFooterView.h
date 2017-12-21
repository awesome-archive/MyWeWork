//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QMUIButton, QMUILabel, UIImageView;

@interface WWKYunPanCommentInfoFooterView : UIView
{
    QMUIButton *_mNameLabel;
    UIImageView *_mCommentIcon;
    QMUILabel *_mCommentCntLabel;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) QMUILabel *mCommentCntLabel; // @synthesize mCommentCntLabel=_mCommentCntLabel;
@property(retain, nonatomic) UIImageView *mCommentIcon; // @synthesize mCommentIcon=_mCommentIcon;
@property(retain, nonatomic) QMUIButton *mNameLabel; // @synthesize mNameLabel=_mNameLabel;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setUpUiElements;
- (void)addNameClickHandler:(id)arg1 handler:(SEL)arg2;
- (void)updateCommentCount:(int)arg1;
- (void)updateFooterView:(id)arg1 commentCount:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
