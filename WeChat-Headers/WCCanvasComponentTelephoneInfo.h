//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WCCanvasComponentTelephoneInfo : NSObject
{
    NSArray *_phoneNumList;
    double _topLineSize;
    double _bottomLineSize;
}

@property(nonatomic) double bottomLineSize; // @synthesize bottomLineSize=_bottomLineSize;
@property(nonatomic) double topLineSize; // @synthesize topLineSize=_topLineSize;
@property(retain, nonatomic) NSArray *phoneNumList; // @synthesize phoneNumList=_phoneNumList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

