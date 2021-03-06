//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WWMyFileLoadCloudMessageHelperDelegate;

@interface WWMyFileLoadCloudMessageHelper : NSObject
{
    scoped_refptr_c1fa851d _lastMsg;
    scoped_refptr_fd92d7bf _conv;
    _Bool _mIsLoading;
    _Bool _mIsFinish;
    _Bool _mIsCancel;
    int _mMsgCount;
    int _mTryLoadMsgCount;
    id <WWMyFileLoadCloudMessageHelperDelegate> _delegate;
    double _mStartLoadTime;
}

@property(nonatomic) double mStartLoadTime; // @synthesize mStartLoadTime=_mStartLoadTime;
@property(nonatomic) int mTryLoadMsgCount; // @synthesize mTryLoadMsgCount=_mTryLoadMsgCount;
@property(nonatomic) int mMsgCount; // @synthesize mMsgCount=_mMsgCount;
@property(nonatomic) _Bool mIsCancel; // @synthesize mIsCancel=_mIsCancel;
@property(nonatomic) __weak id <WWMyFileLoadCloudMessageHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool mIsFinish; // @synthesize mIsFinish=_mIsFinish;
@property(nonatomic) _Bool mIsLoading; // @synthesize mIsLoading=_mIsLoading;
- (id).cxx_construct;
- (void).cxx_destruct;
- (basic_string_a490aa4c)getCloudMessageKey:(const scoped_refptr_fd92d7bf *)arg1;
- (void)saveCloudMessageLoadResult:(_Bool)arg1 conv:(const scoped_refptr_fd92d7bf *)arg2;
- (_Bool)loadCloudMessageLoadResult:(const scoped_refptr_fd92d7bf *)arg1;
- (void)notifyLoadFinish:(int)arg1;
- (void)loadCloudHistoryMessage:(int)arg1;
- (void)stopLoadCloudMessage;
- (_Bool)startLoadCloudMessage:(int)arg1;
- (void)dealloc;
- (id)initWithConv:(scoped_refptr_fd92d7bf)arg1 lastMsg:(scoped_refptr_c1fa851d)arg2;

@end

