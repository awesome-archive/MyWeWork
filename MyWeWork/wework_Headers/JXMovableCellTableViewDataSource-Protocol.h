//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"

@class JXMovableCellTableView, NSArray, NSIndexPath, NSMutableArray;

@protocol JXMovableCellTableViewDataSource <UITableViewDataSource>
- (_Bool)cellMovalbeAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(JXMovableCellTableView *)arg1 newDataSourceArrayAfterMove:(NSArray *)arg2;
- (NSMutableArray *)dataSourceArrayInTableView:(JXMovableCellTableView *)arg1;
@end
