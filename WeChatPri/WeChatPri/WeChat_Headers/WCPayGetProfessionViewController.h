//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSArray, WCPayProfession;
@protocol WCPayGetProfessionViewControllerDelegate;

@interface WCPayGetProfessionViewController : WCPayBaseViewController
{
    WCPayProfession *_selectedProfession;
    NSArray *_professions;
    id <WCPayGetProfessionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WCPayGetProfessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *professions; // @synthesize professions=_professions;
@property(retain, nonatomic) WCPayProfession *selectedProfession; // @synthesize selectedProfession=_selectedProfession;
- (void).cxx_destruct;
- (void)clickInfoCell:(id)arg1;
- (void)reloadTableView;
- (void)viewDidLoad;
- (id)initWithProfessions:(id)arg1;

@end

