//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QMEditorCommand : NSObject
{
    NSString *_command;
    NSString *_value;
}

+ (id)commandWith:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)dealloc;

@end

