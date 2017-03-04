//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "MMImageLoaderObserver.h"
#import "MMImageScrollViewHelperDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, NSArray, NSString, NSURL, UIImage, UIImageView, WCCanvasComponentItem;

@interface WCCanvasFullScreenImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, MMImageLoaderObserver>
{
    _Bool m_isAnimating;
    _Bool m_isImageReady;
    _Bool m_isComeFromDownload;
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    long long m_lastDeviceOrientation;
    WCCanvasComponentItem *m_componentItem;
    NSURL *m_imageUrl;
    UIImage *m_image;
    UIImageView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    id <WCCanvasFullScreenImageScrollViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCCanvasFullScreenImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSURL *m_imageUrl; // @synthesize m_imageUrl;
@property(retain, nonatomic) WCCanvasComponentItem *m_componentItem; // @synthesize m_componentItem;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)startLoadingBlocked;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)tryDownloadImage;
- (void)updateCanvasComponentItem:(id)arg1 url:(id)arg2;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (struct CGRect)getCenterRect:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (struct CGRect)CGRectFloor:(struct CGRect)arg1;
- (void)showProcessView;
- (void)reloadView:(id)arg1;
- (void)initScrollViewHelper;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setZoomScale:(float)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)stopAllAnimation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

