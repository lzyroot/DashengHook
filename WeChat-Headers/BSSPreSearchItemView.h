//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSSBaseItemView.h"

@class AttributeLabel, NSString, UIImageView, UILabel;

@interface BSSPreSearchItemView : BSSBaseItemView
{
    NSString *_keyword;
    UIImageView *_headImageView;
    UILabel *_preTipsLabel;
    AttributeLabel *_displayLabel;
}

+ (double)heightForItem;
@property(retain, nonatomic) AttributeLabel *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(retain, nonatomic) UILabel *preTipsLabel; // @synthesize preTipsLabel=_preTipsLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)initView;
- (id)initPreSearchItemViewWithKeyword:(id)arg1;
- (void)dealloc;

@end

