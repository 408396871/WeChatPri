//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@protocol WCPaySelectWalletViewControllerDelegate;

@interface WCPaySelectWalletViewController : WCPayBaseViewController
{
    id <WCPaySelectWalletViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)selectWalletInfo:(id)arg1;
- (void)makeWalletInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)OnBack;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

