//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x200 : WloginTlv
{
    NSData *PF;
    NSData *PFKey;
}

@property(copy) NSData *PFKey; // @synthesize PFKey;
@property(copy) NSData *PF; // @synthesize PF;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;

@end

