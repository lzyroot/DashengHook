//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WXGBackupImportMessageHelperDelegate <NSObject>
- (void)onBackupImportMessageCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupImportMessageFinish;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessageStart;
@end

