//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseAppMessageDetailViewController.h"

@class UIImageView, UILabel;

@interface WWKTextAppMessageDetailViewController : WWKBaseAppMessageDetailViewController
{
    UILabel *_contentLabel;
    UIImageView *_waterMaskImageView;
}

@property(retain, nonatomic) UIImageView *waterMaskImageView; // @synthesize waterMaskImageView=_waterMaskImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (double)setupContentView:(id)arg1;
- (void)viewDidLoad;

@end

