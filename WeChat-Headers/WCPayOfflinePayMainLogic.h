//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMWebViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayAddPayCardDelegate.h"
#import "WCPayOfflinePayConfirmViewDelegate.h"
#import "WCPayOfflinePayViewControllerDelegate.h"
#import "WCPayOrderDetailHistoryViewControllerDelegate.h"
#import "WCPayPaidOrderDetailViewControllerDelegate.h"

@class NSMutableArray, NSString, WCPayOfflinePayConfirmView, WCPayPayMoneyLogic, WCPayRealnameGuideInfo;

@interface WCPayOfflinePayMainLogic : WCPayControlLogic <UIViewControllerTransitioningDelegate, MMWebViewDelegate, WCPayAddPayCardDelegate, WCPayOfflinePayViewControllerDelegate, WCPayOrderDetailHistoryViewControllerDelegate, WCBaseControlMgrExt, WCPayOfflinePayConfirmViewDelegate, WCPayPaidOrderDetailViewControllerDelegate>
{
    int m_uiLocationTag;
    NSMutableArray *m_arrConfirmedOfflinePayID;
    WCPayOfflinePayConfirmView *confirmView;
    WCPayRealnameGuideInfo *m_realNameInfo;
    WCPayPayMoneyLogic *_payMoneyLogic;
}

@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
- (void).cxx_destruct;
- (_Bool)gotoViewController:(id)arg1;
- (void)startPayMoneyLogic:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)reportReceiveSuccessData:(id)arg1;
- (id)OnWCPayPaidOrderDetailViewControllerRequestGuideInfo;
- (void)OnWCPayPaidOrderDetailViewControllerClearGuideInfo;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnEnterForeground;
- (void)OnNotifyOfflinePayConfirmWithReqkey:(id)arg1;
- (void)OnNotifyOfflinePayConfirm:(id)arg1;
- (void)OnNotifyOfflinePaySuccess:(id)arg1 Error:(id)arg2;
- (void)OnNotifyResutltOfOfflinePay:(id)arg1;
- (void)onNotifyOfflinePayRealNameGuide:(id)arg1;
- (void)onNotifyOfflinePayRealNameBlock:(id)arg1;
- (void)OnNotifyFreezeOfflinePay:(id)arg1;
- (void)OnShouldChangePayCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnLimitInsufficientError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnConfirmOfflinePayResponse:(id)arg1 transID:(id)arg2 Error:(id)arg3;
- (id)genRealNameGuideInfoFromDic:(id)arg1;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(_Bool)arg2 Error:(id)arg3;
- (void)OnOfflinePayCerticationOuttimeError:(id)arg1;
- (void)OnQueryOfflinePayInfo:(id)arg1 LocalCached:(_Bool)arg2 Error:(id)arg3;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(int)arg2;
- (void)onAddPayCardResult:(_Bool)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)onOfflinePayConfirmViewCancel:(id)arg1;
- (void)onOfflinePayConfirmViewPay:(id)arg1 passwd:(id)arg2;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)OnHistoryOrderDetailRightActionBack:(_Bool)arg1;
- (void)OnHistoryOrderDetailBack:(_Bool)arg1;
- (void)stopOfflinePayLogicWithoutAnimation;
- (void)ReceiveClickLogic;
- (void)OnWCpayOfflinePayViewControllerClickReceiveMoneyBtn;
- (void)OnWCPayOfflinePayViewControllerAddNewCardBtnPress;
- (void)OnWCPayOfflinePayViewControllerSnapShotAlertGotoDetail;
- (void)OnWCPayOfflinePayViewControllerCloseAction;
- (void)OnWCPayOfflinePayViewControllerUnfreezeBtnDown;
- (void)OnWCPayOfflinePayViewControllerQuickChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerCreateOfflinePay;
- (void)OnWCPayOfflinePayViewControllerBack;
- (void)OnReCreateOfflinePay;
- (void)OnCancelReCreateOfflinePay;
- (void)OnAddCardBtnDonw:(id)arg1;
- (void)OnChangedLimitBtnDonw:(id)arg1;
- (void)clearVibration;
- (void)playVibration;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

