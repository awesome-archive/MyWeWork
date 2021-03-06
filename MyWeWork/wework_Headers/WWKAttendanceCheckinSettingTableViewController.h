//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKSelectContactsViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@interface WWKAttendanceCheckinSettingTableViewController : UITableViewController <WWKSelectContactsViewControllerDelegate>
{
    struct CheckInNotifyUserList _mOutReportList;
    struct CheckInNotifyUserList _mBinaryReportList;
    NSArray *_dataTypes;
    NSString *_outReporterDetailText;
    NSString *_binaryReporterDetailText;
    CDUnknownBlockType _contactSelectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType contactSelectBlock; // @synthesize contactSelectBlock=_contactSelectBlock;
@property(copy, nonatomic) NSString *binaryReporterDetailText; // @synthesize binaryReporterDetailText=_binaryReporterDetailText;
@property(copy, nonatomic) NSString *outReporterDetailText; // @synthesize outReporterDetailText=_outReporterDetailText;
@property(retain, nonatomic) NSArray *dataTypes; // @synthesize dataTypes=_dataTypes;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_didClickBinaryReportCell;
- (void)p_didClickOutReportCell;
- (void)p_setBinaryReporterDetail:(const struct CheckInNotifyUserList *)arg1;
- (void)p_setOutReporterDetail:(const struct CheckInNotifyUserList *)arg1;
- (void)p_setOuterReportUserList:(const struct CheckInNotifyUserList *)arg1;
- (void)p_setBinaryReportUserList:(const struct CheckInNotifyUserList *)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (id)titleForNumberExceedMax:(id)arg1;
- (long long)numberOfMaxSelectedContacts:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

