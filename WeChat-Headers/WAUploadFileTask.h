//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSURLSession, NSURLSessionUploadTask;

@interface WAUploadFileTask : NSObject
{
    NSString *_appID;
    NSURLSession *_urlSession;
    NSURLSessionUploadTask *_task;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_responseData;
    _Bool _isRedirectInvalid;
    id <WAUploadFileTaskDelegate> delegate;
}

@property __weak id <WAUploadFileTaskDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)taskDidEnd;
- (id)filePathFromLocalID:(id)arg1;
- (void)callCompletionHandlerWithError:(id)arg1 statusCode:(long long)arg2;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)markRedirectFail;
- (void)didRecevieData:(id)arg1;
- (void)didCompleteWithError:(id)arg1 statusCode:(long long)arg2;
- (id)task;
- (void)cancel;
- (void)startWithURL:(id)arg1 localID:(id)arg2 fileFieldName:(id)arg3 httpHeaders:(id)arg4 userAgent:(id)arg5 referer:(id)arg6 formFields:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2;

@end

