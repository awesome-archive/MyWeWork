//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKInvoiceInfoView.h"

@class UILabel, WWKInvoiceQRCodeView;

@interface WWKPersonalInvoiceInfoView : WWKInvoiceInfoView
{
    scoped_refptr_e086aaa7 invoice_;
    UILabel *_name;
    UILabel *_phone;
    UILabel *_email;
    WWKInvoiceQRCodeView *_qrcodeView;
}

+ (id)instancePersonalInvoiceInfoView;
@property(nonatomic) __weak WWKInvoiceQRCodeView *qrcodeView; // @synthesize qrcodeView=_qrcodeView;
@property(nonatomic) __weak UILabel *email; // @synthesize email=_email;
@property(nonatomic) __weak UILabel *phone; // @synthesize phone=_phone;
@property(nonatomic) __weak UILabel *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateUI;
- (void)setInvoice:(const scoped_refptr_e086aaa7 *)arg1;
- (id)initWithCoder:(id)arg1;

@end
