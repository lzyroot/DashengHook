//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface StoreEmotionDeleteCgi : MMObject <PBMessageObserverDelegate>
{
    id <StoreEmotionDeleteCgiDelegate> _m_delegate;
    NSString *_m_packageId;
}

@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId=_m_packageId;
@property(nonatomic) __weak id <StoreEmotionDeleteCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)callOkDelegate;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequest;
- (id)initWithPackageId:(id)arg1 delegate:(id)arg2;

@end

