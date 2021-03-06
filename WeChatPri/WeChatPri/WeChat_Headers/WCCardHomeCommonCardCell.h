//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMImageLoaderObserver-Protocol.h"
#import "WCCardHomeCommonDetailIconsViewDelegate-Protocol.h"

@class MMUIImageView, MMUILabel, NSArray, NSString, UIImage, UIView, WCCardHomeCommonDetailIconsView;

@interface WCCardHomeCommonCardCell : UICollectionViewCell <MMImageLoaderObserver, WCCardHomeCommonDetailIconsViewDelegate>
{
    _Bool _showTipLabel;
    _Bool _showRedIcon;
    UIImage *_iconImage;
    NSString *_title;
    NSString *_subTitle;
    NSArray *_shareCardIcons;
    MMUIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUIImageView *_detailImageView;
    WCCardHomeCommonDetailIconsView *_iconsView;
    MMUIImageView *_redDotImageView;
    MMUILabel *_tipLabel;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) MMUIImageView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) WCCardHomeCommonDetailIconsView *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) MMUIImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool showRedIcon; // @synthesize showRedIcon=_showRedIcon;
@property(nonatomic) _Bool showTipLabel; // @synthesize showTipLabel=_showTipLabel;
@property(retain, nonatomic) NSArray *shareCardIcons; // @synthesize shareCardIcons=_shareCardIcons;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)WCCardHomeCommonDetailShouldSizeToFit;
- (void)setHighlighted:(_Bool)arg1;
- (void)confiUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

