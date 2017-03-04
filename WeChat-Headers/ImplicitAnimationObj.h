//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableArray;

@interface ImplicitAnimationObj : NSObject
{
    CADisplayLink *m_displayLink;
    NSMutableArray *m_implicitViews;
    unsigned long long m_countOfViewStartAnimation;
    double m_nextTimeToLetNextViewStartAnimation;
    _Bool _isFromBottom;
    id <ImplicitAnimationControllerDelegate> _delegate;
    CDUnknownBlockType _durationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType durationBlock; // @synthesize durationBlock=_durationBlock;
@property(nonatomic) _Bool isFromBottom; // @synthesize isFromBottom=_isFromBottom;
@property(nonatomic) __weak id <ImplicitAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCountOfViewStartAnimationWithCurTime:(double)arg1;
- (void)updateFrame;
- (void)startAnimationWithViews:(id)arg1;
- (void)stopAnimation;
- (void)dealloc;

@end

