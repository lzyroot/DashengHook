//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUITextView.h"

#import "MMInputAccessoryViewDelegate.h"

@class MMInputAccessoryView, NSString, UIColor, UIResponder;

@interface MMTextView : MMUITextView <MMInputAccessoryViewDelegate>
{
    NSString *placeholder;
    _Bool _shouldDrawPlaceholder;
    id <textViewDelegate> m_delegate;
    double _fForceY;
    UIResponder *_overrideNextResponder;
    _Bool _externalKeyboardAttatched;
    MMInputAccessoryView *_accessoryView;
    UIColor *_placeHolderColor;
    double _textViewOriginHeight;
}

@property(nonatomic) double textViewOriginHeight; // @synthesize textViewOriginHeight=_textViewOriginHeight;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
@property(nonatomic) double fForceY; // @synthesize fForceY=_fForceY;
@property(nonatomic) __weak id <textViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
- (void).cxx_destruct;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (_Bool)isExtenalKeyboardAttatched;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setText:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)_updateShouldDrawPlaceholder;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

