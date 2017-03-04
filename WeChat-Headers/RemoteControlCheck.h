//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ActionRecognitionDelegate.h"
#import "MMService.h"
#import "WCAudioSessionExt.h"

@class ActionRecognition, NSString;

@interface RemoteControlCheck : MMService <ActionRecognitionDelegate, WCAudioSessionExt, MMService>
{
    _Bool mIsCondRecordCheck;
    _Bool mIsForceRecordCheck;
    _Bool mIsRecordCheckEnabled;
    _Bool mIsRecordMayStart;
    _Bool mIsPlayCheckEnabled;
    _Bool mIsPlayMayStart;
    ActionRecognition *mActionRecogn;
}

- (void).cxx_destruct;
- (void)HandleRemoteControlEvent:(id)arg1;
- (_Bool)isPlayChecking;
- (void)stopPlayCheck;
- (void)startPlayCheck;
- (_Bool)isRecordChecking;
- (void)stopRecordCheck;
- (void)startRecordCheck;
- (void)stopRecordCheckIfOpenRC;
- (void)startRecordCheckIfOpenRC;
- (void)dealloc;
- (_Bool)IsSoundPlaying;
- (_Bool)IsOpenRemoteControl;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)unregisterNotify;
- (void)registerNotify;
- (void)endReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)realEndReceiveRemoteControlEvent;
- (void)beginReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)realBeginReceiveRemoteControlEvent;
- (void)plugin_off;
- (void)plugin_on;
- (_Bool)CanRecord;
- (void)ActionRecognitionShake;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

