//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

@class JSEvent;

@interface WCPayJSApiGetWCPayRealnameVerifyControlLogic : WCPayControlLogic
{
    JSEvent *m_jsEvent;
    int m_enWCPayCheckAuthorityScene;
}

- (void).cxx_destruct;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void)OnRealnameVerifyCancel:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1;

@end

