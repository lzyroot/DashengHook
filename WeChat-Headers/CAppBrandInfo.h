//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CAppBrandInfo : NSObject
{
    unsigned int versionState;
    unsigned int maxPkgSize;
    unsigned int maxUploadConcurrent;
    unsigned int maxDownloadConcurrent;
    unsigned int maxLocalstorageSize;
    unsigned int maxBackgroundLifespan;
    unsigned int maxRequestConcurrent;
    unsigned int maxWebviewDepth;
    unsigned int runningFlag;
    unsigned int _versionOpenControl;
    NSString *appid;
    unsigned long long appVersion;
    NSString *versionPkgMD5;
    NSString *sloganBigImgUrl;
    NSString *_versionOpenControlReasonUrl;
    NSString *_runningOpenForbbidenUrl;
}

@property(copy, nonatomic) NSString *runningOpenForbbidenUrl; // @synthesize runningOpenForbbidenUrl=_runningOpenForbbidenUrl;
@property(copy, nonatomic) NSString *versionOpenControlReasonUrl; // @synthesize versionOpenControlReasonUrl=_versionOpenControlReasonUrl;
@property(nonatomic) unsigned int versionOpenControl; // @synthesize versionOpenControl=_versionOpenControl;
@property(nonatomic) unsigned int runningFlag; // @synthesize runningFlag;
@property(nonatomic) unsigned int maxWebviewDepth; // @synthesize maxWebviewDepth;
@property(nonatomic) unsigned int maxRequestConcurrent; // @synthesize maxRequestConcurrent;
@property(nonatomic) unsigned int maxBackgroundLifespan; // @synthesize maxBackgroundLifespan;
@property(nonatomic) unsigned int maxLocalstorageSize; // @synthesize maxLocalstorageSize;
@property(nonatomic) unsigned int maxDownloadConcurrent; // @synthesize maxDownloadConcurrent;
@property(nonatomic) unsigned int maxUploadConcurrent; // @synthesize maxUploadConcurrent;
@property(nonatomic) unsigned int maxPkgSize; // @synthesize maxPkgSize;
@property(copy, nonatomic) NSString *sloganBigImgUrl; // @synthesize sloganBigImgUrl;
@property(copy, nonatomic) NSString *versionPkgMD5; // @synthesize versionPkgMD5;
@property(nonatomic) unsigned long long appVersion; // @synthesize appVersion;
@property(nonatomic) unsigned int versionState; // @synthesize versionState;
@property(copy, nonatomic) NSString *appid; // @synthesize appid;
- (void).cxx_destruct;

@end

