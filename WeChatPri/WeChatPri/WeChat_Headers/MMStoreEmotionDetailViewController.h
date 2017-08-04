//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonButtonDescExt-Protocol.h"
#import "EmotionStoreDetailRewardEntranceDelegate-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"
#import "IStoreEmotionRewardExt-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"
#import "StoreEmotionDeleteCgiDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class EmoticonStoreDetailCoverImageView, EmoticonStoreDetailRewardEntranceView, EmoticonStoreGridView, EmoticonStoreItem, EmoticonStoreReportInfo, EmotionProgressView, EmotionRewardResponseInfo, EmotionStoreDetailDesignerContainerView, MMUIScrollView, NSMutableArray, NSString, StoreEmotionDeleteCgi, StoreEmotionPageShareLogic, UIButton, UIImageView, UILabel, UIView, WCDataItem;

@interface MMStoreEmotionDetailViewController : MMUIViewController <EmoticonButtonDescExt, StoreEmotionDeleteCgiDelegate, IStoreEmotionRewardExt, EmotionStoreDetailRewardEntranceDelegate, IEmoticonPackageStateMgrExt, UIAlertViewDelegate, SessionSelectControllerDelegate>
{
    long long _type;
    long long m_downloadExtrance;
    _Bool _needScrollToBottom;
    _Bool _m_isGettingRewardInfo;
    int m_scence;
    unsigned int m_clickFlag;
    EmoticonStoreItem *m_storeItem;
    NSMutableArray *m_arrEmoticon;
    MMUIScrollView *m_tableView;
    UIButton *m_button;
    EmotionProgressView *m_progressView;
    UIView *m_downLoadStateView;
    UIButton *m_cancelButton;
    UILabel *m_priceLabel;
    EmoticonStoreDetailCoverImageView *m_coverImageView;
    UILabel *m_nameLabel;
    UILabel *m_timeLabel;
    UILabel *m_copyrightLabel;
    UIButton *m_statementButton;
    EmoticonStoreGridView *m_thumbGridView;
    UIView *m_previewTipsLabel;
    UILabel *m_descLabel;
    UIImageView *m_animationImageView;
    UIImageView *m_animationView;
    UIView *m_packDescContainView;
    UIButton *m_useButton;
    NSString *m_clickRegionDesc;
    UILabel *m_serverDescLabel;
    UILabel *m_previewDescLabel;
    WCDataItem *_m_dataItem;
    EmoticonStoreReportInfo *_reportInfo;
    UIButton *_m_complainButton;
    UILabel *_m_animationLabel;
    StoreEmotionDeleteCgi *_m_deleteCgi;
    EmoticonStoreDetailRewardEntranceView *_rewardView;
    EmotionRewardResponseInfo *_m_rewardInfo;
    EmotionStoreDetailDesignerContainerView *_designerContainerView;
    UIView *_statementContainerView;
    StoreEmotionPageShareLogic *_shareLogic;
}

+ (id)genProductIdFromTimelineUserData:(id)arg1;
@property(retain, nonatomic) StoreEmotionPageShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(retain, nonatomic) UIView *statementContainerView; // @synthesize statementContainerView=_statementContainerView;
@property(retain, nonatomic) EmotionStoreDetailDesignerContainerView *designerContainerView; // @synthesize designerContainerView=_designerContainerView;
@property(nonatomic) _Bool m_isGettingRewardInfo; // @synthesize m_isGettingRewardInfo=_m_isGettingRewardInfo;
@property(retain, nonatomic) EmotionRewardResponseInfo *m_rewardInfo; // @synthesize m_rewardInfo=_m_rewardInfo;
@property(retain, nonatomic) EmoticonStoreDetailRewardEntranceView *rewardView; // @synthesize rewardView=_rewardView;
@property(retain, nonatomic) StoreEmotionDeleteCgi *m_deleteCgi; // @synthesize m_deleteCgi=_m_deleteCgi;
@property(retain, nonatomic) UILabel *m_animationLabel; // @synthesize m_animationLabel=_m_animationLabel;
@property(retain, nonatomic) UIButton *m_complainButton; // @synthesize m_complainButton=_m_complainButton;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem=_m_dataItem;
@property(nonatomic) _Bool needScrollToBottom; // @synthesize needScrollToBottom=_needScrollToBottom;
@property(nonatomic) unsigned int m_clickFlag; // @synthesize m_clickFlag;
@property(nonatomic) int m_scence; // @synthesize m_scence;
@property(retain, nonatomic) UILabel *m_previewDescLabel; // @synthesize m_previewDescLabel;
@property(retain, nonatomic) UILabel *m_serverDescLabel; // @synthesize m_serverDescLabel;
@property(retain, nonatomic) NSString *m_clickRegionDesc; // @synthesize m_clickRegionDesc;
@property(retain, nonatomic) UIButton *m_useButton; // @synthesize m_useButton;
@property(retain, nonatomic) UIView *m_packDescContainView; // @synthesize m_packDescContainView;
@property(retain, nonatomic) UIImageView *m_animationView; // @synthesize m_animationView;
@property(retain, nonatomic) UIImageView *m_animationImageView; // @synthesize m_animationImageView;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) UIView *m_previewTipsLabel; // @synthesize m_previewTipsLabel;
@property(retain, nonatomic) EmoticonStoreGridView *m_thumbGridView; // @synthesize m_thumbGridView;
@property(retain, nonatomic) UIButton *m_statementButton; // @synthesize m_statementButton;
@property(retain, nonatomic) UILabel *m_copyrightLabel; // @synthesize m_copyrightLabel;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) EmoticonStoreDetailCoverImageView *m_coverImageView; // @synthesize m_coverImageView;
@property(retain, nonatomic) UILabel *m_priceLabel; // @synthesize m_priceLabel;
@property(retain, nonatomic) UIButton *m_cancelButton; // @synthesize m_cancelButton;
@property(retain, nonatomic) UIView *m_downLoadStateView; // @synthesize m_downLoadStateView;
@property(retain, nonatomic) EmotionProgressView *m_progressView; // @synthesize m_progressView;
@property(retain, nonatomic) UIButton *m_button; // @synthesize m_button;
@property(retain, nonatomic) MMUIScrollView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableArray *m_arrEmoticon; // @synthesize m_arrEmoticon;
@property(retain, nonatomic) EmoticonStoreItem *m_storeItem; // @synthesize m_storeItem;
- (void).cxx_destruct;
- (void)onStoreEmotionRewardCompleteOkWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onShowAllDonorsButtonClick;
- (void)onRewardButtonClick;
- (void)onStoreEmotionDeleteCgiFailed:(id)arg1;
- (void)onStoreEmotionDeleteCgiOK:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (_Bool)needJudgeClickFlag;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onState:(int)arg1;
- (_Bool)showServerDescLabel;
- (void)updateSubViewsMarginWithContainViewHeight:(double)arg1;
- (_Bool)showExpiredButton;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)OnBuyItemCancel:(id)arg1;
- (void)OnBuyItemFailed:(id)arg1;
- (void)OnBuyItemSuccess:(id)arg1;
- (void)onLawBtnClick;
- (void)onCancelDownloadBtnClick;
- (void)checkEmoticonBuyRet:(int)arg1;
- (void)onPurchaseBtnClick;
- (void)reportDownload;
- (void)onClickComplainButton;
- (void)OnCancelModalView:(id)arg1;
- (struct CGPoint)makeStatementCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeCopyRightCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)clickDesignerCell;
- (struct CGPoint)updateDesignerView:(struct CGPoint)arg1;
- (struct CGPoint)makeDesignerCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)tryGetRewardInfo;
- (struct CGPoint)updateRewardViewWithMarginPoint:(struct CGPoint)arg1;
- (struct CGPoint)makeRewardCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeEmoticonsCell:(id)arg1 rowEmoticons:(id)arg2 Previews:(id)arg3 marginPoint:(struct CGPoint)arg4;
- (struct CGPoint)updateGridView:(id)arg1 WithEmoticons:(id)arg2 Previews:(id)arg3;
- (struct CGPoint)updateStatementMarginPoint:(struct CGPoint)arg1;
- (struct CGPoint)updateCopyRight:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updatePreviewTipCell:(struct CGPoint)arg1;
- (struct CGPoint)makePreviewTipCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updateDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)makeBuyButton:(id)arg1 item:(id)arg2;
- (void)useThisEmoticon;
- (void)makeUseButton:(id)arg1 item:(id)arg2;
- (struct CGPoint)updateCoverImageView:(struct CGPoint)arg1;
- (struct CGPoint)makeCoverImageCell:(id)arg1;
- (void)updatePackTypeView:(struct CGPoint)arg1;
- (void)makePackTypeLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)updatePackTimeLabel:(id)arg1 item:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (void)makeServerDescLabel:(id)arg1 item:(id)arg2;
- (void)makePackTimeLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)updatePackNameLabel:(id)arg1 item:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (void)makePackNameLabel:(id)arg1 item:(id)arg2;
- (void)refreshPriceLabelString;
- (void)makePackPriceLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)makeContainerView:(id)arg1 item:(id)arg2;
- (struct CGPoint)updateUseButton:(struct CGPoint)arg1;
- (struct CGPoint)updateServerDescLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateBuyButton:(struct CGPoint)arg1;
- (struct CGPoint)updateTypeLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateTimeLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateNameLabel:(struct CGPoint)arg1;
- (struct CGPoint)updatePriceLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateContainerView:(struct CGPoint)arg1;
- (struct CGPoint)updateDescView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewTipsView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewGridView:(struct CGPoint)arg1;
- (struct CGPoint)makeCoverImage:(id)arg1 item:(id)arg2;
- (void)updateScrollView;
- (_Bool)recurisiveCheckMsgControllerToRootFrom:(id)arg1;
- (_Bool)checkMsgControllerFrom:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)hasNecessaryShareInfo;
- (void)onOperate:(id)arg1;
- (void)updateReportButton;
- (void)updateRightBarButton;
- (void)initScrollView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithPid:(id)arg1 Scence:(int)arg2 extrance:(long long)arg3;
- (id)initWithStoreItem:(id)arg1 Scence:(int)arg2 extrance:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
