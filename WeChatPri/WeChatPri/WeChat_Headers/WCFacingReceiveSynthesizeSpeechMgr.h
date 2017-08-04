//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "VoIPPushKitExt-Protocol.h"
#import "WCPayF2FVoiceCgiDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"

@class NSString, WCPayF2FVoiceCgi;

@interface WCFacingReceiveSynthesizeSpeechMgr : MMService <WCPayLogicMgrExt, WCPayF2FVoiceCgiDelegate, MMService, VoIPPushKitExt>
{
    WCPayF2FVoiceCgi *_m_voiceCgi;
}

@property(retain, nonatomic) WCPayF2FVoiceCgi *m_voiceCgi; // @synthesize m_voiceCgi=_m_voiceCgi;
- (void).cxx_destruct;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)playSynthesizeSound:(id)arg1 voiceType:(unsigned int)arg2;
- (void)OnGetWCPayF2FVoiceRespErrorWithPayload:(id)arg1 billNo:(id)arg2;
- (void)OnGetWCPayF2FVoiceRespOK:(id)arg1 payload:(id)arg2 billNo:(id)arg3;
- (void)requestForSynthesizeSpeech:(unsigned int)arg1 billNo:(id)arg2 localPushInfo:(id)arg3;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)showLocalNotification:(id)arg1 isVoiceReqSuccess:(_Bool)arg2;
- (id)localNotificationInfo:(id)arg1 isVoiceReqSuccess:(_Bool)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
