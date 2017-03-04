//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "CNetworkStatusExt.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableSet, OrderedDictionary;

@interface WCDownloadMgr : MMObject <PBMessageObserverDelegate, CNetworkStatusExt>
{
    int m_currScene;
    NSMutableSet *m_cancelDownloadMedias;
    NSMutableSet *m_needNotifyMedias;
    OrderedDictionary *m_dataDownloadQueue;
    int m_dataCurrentDownloadingCount;
    int m_dataMaxDownloadCount;
    OrderedDictionary *m_previewDownloadQueue;
    int m_previewCurrentDownloadingCount;
    int m_previewMaxDownloadCount;
    OrderedDictionary *m_sightDownloadQueue;
    int m_sightCurrentDownloadingCount;
    int m_sightMaxDownloadCount;
    OrderedDictionary *m_videoDownloadQueue;
    int m_videoCurrentDownloadingCount;
    int m_videoMaxDownloadCount;
    id <WCDownloadMgrDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCDownloadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)isDownloadingSnsImageForUrl:(id)arg1;
- (id)urlSuffixWithToken:(id)arg1 encIdx:(unsigned int)arg2;
- (id)getEncUrlWithDownloadId:(id)arg1 FromMediaItem:(id)arg2;
- (void)updateDownloadConcurrentCount;
- (void)updateImageDownloadConcurrentCount;
- (void)useDefaultImageDownloadConcurrentCount;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onReveicePartFromURL:(id)arg1;
- (void)ReveicePartFromURL:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportDownloadRecord:(id)arg1 downloadMediaWrap:(id)arg2;
- (void)doDownloadMediaCDN:(id)arg1;
- (void)tryStartNextDownloadTask:(int)arg1;
- (void)setDownloadScene:(int)arg1;
- (void)pullDownloadMediaToFront:(id)arg1 downloadType:(int)arg2;
- (void)setPreviewMaxDownloadCountWifi:(int)arg1 Edge:(int)arg2;
- (void)setDataMaxDownloadCountWifi:(int)arg1 Edge:(int)arg2;
- (void)cancelDownloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)forceDownloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
- (void)forceDownloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)downloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
- (void)downloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)addDownloadTask:(id)arg1 downloadType:(int)arg2 withNotify:(_Bool)arg3;
- (int *)getCurrentDownloadingCountWithType:(int)arg1;
- (id)getDownloadQueue:(int)arg1;
- (void)dealloc;
- (id)init;

@end
