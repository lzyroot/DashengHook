//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MsgFastBrowseView, MsgImageSquareThumbView, NSArray, NSMutableSet, SimpleImgInfo;

@protocol MsgFastBrowseViewDelegate <NSObject>
- (double)getContentViewY;
- (double)getVisibleHeight;
- (NSArray *)messageWrapsForMsgFastBrowseView:(MsgFastBrowseView *)arg1;

@optional
- (NSMutableSet *)expiredMsgForMsgFastBrowseView:(MsgFastBrowseView *)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(MsgFastBrowseView *)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (void)onSquareImgClicked:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2 withOffset:(unsigned int)arg3;
- (void)msgFastBrowseView:(MsgFastBrowseView *)arg1 didChangeCheckMarkTo:(_Bool)arg2 atSection:(unsigned long long)arg3;
- (_Bool)msgFastBrowseView:(MsgFastBrowseView *)arg1 willChangeCheckMarkTo:(_Bool)arg2 atSection:(unsigned long long)arg3;
- (void)msgFastBrowseView:(MsgFastBrowseView *)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(SimpleImgInfo *)arg3;
- (_Bool)msgFastBrowseView:(MsgFastBrowseView *)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(SimpleImgInfo *)arg3;
@end

