//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface WCDBABTestExt : MMService <MMService>
{
}

- (void)onServiceInit;
- (void)checkABTest;
- (id)checkABTestWalFrame;
- (id)checkABTestResultCache;
- (id)checkABTestTrash;
- (id)checkABTestMultiThread;
- (id)checkABTestCheckpoint;
- (id)checkABTestSwitch;
- (id)checkABTestPerformanceOptimization;
- (id)checkABTestPerformance;
- (id)checkABTestDBCorrupt;
- (id)checkABTestMultiHandles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
