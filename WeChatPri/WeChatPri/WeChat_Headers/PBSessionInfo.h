//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, PBCContact, PBCMessageWrap;

@interface PBSessionInfo : NSObject <PBCoding>
{
    _Bool showUnreadCountAsRedDot;
    _Bool newInvApprove;
    _Bool bNeedContactVerify;
    unsigned int atMeCount;
    unsigned int greenLabelType;
    unsigned int newInvCount;
    unsigned int transferCount;
    PBCContact *contact;
    PBCMessageWrap *message;
}

+ (void)initialize;
@property(nonatomic) unsigned int transferCount; // @synthesize transferCount;
@property(nonatomic) _Bool bNeedContactVerify; // @synthesize bNeedContactVerify;
@property(nonatomic) _Bool newInvApprove; // @synthesize newInvApprove;
@property(nonatomic) unsigned int newInvCount; // @synthesize newInvCount;
@property(nonatomic) unsigned int greenLabelType; // @synthesize greenLabelType;
@property(nonatomic) _Bool showUnreadCountAsRedDot; // @synthesize showUnreadCountAsRedDot;
@property(nonatomic) unsigned int atMeCount; // @synthesize atMeCount;
@property(retain, nonatomic) PBCMessageWrap *message; // @synthesize message;
@property(retain, nonatomic) PBCContact *contact; // @synthesize contact;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)setFromSessionInfo:(id)arg1;
- (id)toSessionInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
