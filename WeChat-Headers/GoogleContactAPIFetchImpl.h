//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class GTMOAuth2Authentication, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection;

@interface GoogleContactAPIFetchImpl : MMObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate>
{
    id <GoogleContactAPIFetchImplDelegate> m_delegate;
    GTMOAuth2Authentication *m_auth;
    NSMutableData *m_dataBuf;
    NSURLConnection *m_connection;
    NSMutableURLRequest *m_request;
    int m_state;
}

@property(nonatomic) int m_state; // @synthesize m_state;
@property(retain, nonatomic) NSMutableURLRequest *m_request; // @synthesize m_request;
@property(retain, nonatomic) NSURLConnection *m_connection; // @synthesize m_connection;
@property(retain, nonatomic) NSMutableData *m_dataBuf; // @synthesize m_dataBuf;
@property(retain, nonatomic) GTMOAuth2Authentication *m_auth; // @synthesize m_auth;
@property(nonatomic) __weak id <GoogleContactAPIFetchImplDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onFetcherRetryDelayStop:(id)arg1;
- (void)onFetcherRetryDelayStart:(id)arg1;
- (void)onFetcherStop:(id)arg1;
- (void)onFetcherStart:(id)arg1;
- (void)onOAuthRefreshTokenChange:(id)arg1;
- (void)onOAuthAccessTokenFailed:(id)arg1;
- (void)onOAuthAccessTokenOK:(id)arg1;
- (void)startConnection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)stopFetch;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)separateGoogleContactAddress:(id)arg1;
- (void)formatGoogleNickName:(id)arg1 andNickName:(id)arg2;
- (id)decodeJsonStringToGoogleContact:(id)arg1;
- (void)doAnAuthenticatedAPIFetch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

