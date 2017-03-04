//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SRWebSocketDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, SRWebSocket, WAWebSocketConfig;

@interface WAWebSocketHandler : NSObject <SRWebSocketDelegate>
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAWebSocketConfig *_webSocketConfig;
    _Bool _isOpen;
    SRWebSocket *_websocket;
    id <WAWebSocketHandlerDelegate> _delegate;
}

@property __weak id <WAWebSocketHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessageWithString:(id)arg2;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocketDidOpen:(id)arg1;
- (void)callbackWithError:(id)arg1;
- (void)sendMessage:(id)arg1 isBuffer:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)close;
- (void)openWithUrl:(id)arg1 httpHeaders:(id)arg2 isIgnoreCheckDomain:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

