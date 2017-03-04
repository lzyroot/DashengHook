//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface __DeviceInfo : NSObject
{
    short _m_seq;
    int _m_authState;
    int _m_cryptMethod;
    long long _m_did;
    NSString *_m_deviceId;
    NSString *_m_deviceType;
    NSString *_m_usrname;
    unsigned long long _m_expireTime;
    unsigned long long _m_blockTimeout;
    unsigned long long _m_lastAuthTime;
    NSData *_m_sessionKey;
    NSData *_m_AESSessionKey;
    NSData *_m_sessionBuffer;
}

@property(nonatomic) int m_cryptMethod; // @synthesize m_cryptMethod=_m_cryptMethod;
@property(nonatomic) short m_seq; // @synthesize m_seq=_m_seq;
@property(retain, nonatomic) NSData *m_sessionBuffer; // @synthesize m_sessionBuffer=_m_sessionBuffer;
@property(retain, nonatomic) NSData *m_AESSessionKey; // @synthesize m_AESSessionKey=_m_AESSessionKey;
@property(retain, nonatomic) NSData *m_sessionKey; // @synthesize m_sessionKey=_m_sessionKey;
@property(nonatomic) unsigned long long m_lastAuthTime; // @synthesize m_lastAuthTime=_m_lastAuthTime;
@property(nonatomic) unsigned long long m_blockTimeout; // @synthesize m_blockTimeout=_m_blockTimeout;
@property(nonatomic) unsigned long long m_expireTime; // @synthesize m_expireTime=_m_expireTime;
@property(nonatomic) int m_authState; // @synthesize m_authState=_m_authState;
@property(retain, nonatomic) NSString *m_usrname; // @synthesize m_usrname=_m_usrname;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType=_m_deviceType;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId=_m_deviceId;
@property(nonatomic) long long m_did; // @synthesize m_did=_m_did;
- (void).cxx_destruct;

@end

