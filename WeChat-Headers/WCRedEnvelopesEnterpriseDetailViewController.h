//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "IZCWScrollNumViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCRedEnvelopesCommentInputToolViewDelegate.h"
#import "WebAddContactDelegate.h"

@class MMTableView, NSString, UIButton, UIImageView, UIView, WCRedEnvelopesCommentInputToolView, WCUITextField;

@interface WCRedEnvelopesEnterpriseDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, IZCWScrollNumViewDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesEnterpriseDetailViewControllerDelegate> m_delegate;
    _Bool m_loadingMoreOrderList;
    MMTableView *m_tableView;
    _Bool m_bDidBack;
    WCUITextField *m_oWishingTextField;
    UIView *m_oHeaderView;
    WCRedEnvelopesCommentInputToolView *oWCRedEnvelopesCommentInputToolView;
    UIView *oMsgAnimationView;
    UIView *oMoneyAnimationView;
    UIView *oTableAnimationView;
    UIView *oTopHeaderView;
    UIView *oNavigationBarView;
    UIImageView *commentImageView;
    UIButton *commentButton;
    _Bool m_bEnterpriseRedEnvelopes;
    int enWCRedEnvelopesEnterpriseDetailViewControllerScene;
    unsigned int m_uiStatFromScene;
}

@property(nonatomic) unsigned int m_uiStatFromScene; // @synthesize m_uiStatFromScene;
@property(nonatomic) _Bool m_bEnterpriseRedEnvelopes; // @synthesize m_bEnterpriseRedEnvelopes;
@property(nonatomic) int enWCRedEnvelopesEnterpriseDetailViewControllerScene; // @synthesize enWCRedEnvelopesEnterpriseDetailViewControllerScene;
- (void).cxx_destruct;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)setLeftCloseBarButton;
- (void)animationForLabel;
- (void)startOpenAnimation;
- (void)OnToolViewDissmiss;
- (void)SendTextMessageToolView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)watchMyRedEnvelopesList;
- (void)handleTailOperation;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (void)gotoUrl;
- (void)gotoBalanceDetail;
- (void)commentRedEnvelopes;
- (void)refreshViewWithData:(id)arg1;
- (id)GetHeaderView:(id)arg1;
- (id)GetViewHeader:(id)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)getAnimationView:(id)arg1;
- (void)initTableView;
- (id)getNoMoreBottomView;
- (id)getBottomView;
- (void)statExpourseOperation;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGRect)getFinalBoundsForDetailView;
- (id)genNumView;
- (void)initContainerView;
- (void)viewDidLayoutSubviews;
- (void)loadMoreOrderList;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)OnLeftBarButtonDoneLogic;
- (void)OnLeftBarButtonDone;
- (_Bool)useTransparentNavibar;
- (void)initNavigationBar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

