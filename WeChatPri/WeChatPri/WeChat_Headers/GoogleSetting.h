//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSDate, NSMutableDictionary, NSString;

@interface GoogleSetting : NSObject <PBCoding>
{
    NSString *m_clientID;
    NSString *m_clientSecret;
    NSString *m_refreshToken;
    NSString *m_scope;
    NSString *m_redirectURI;
    NSMutableDictionary *m_parameters;
    NSString *m_tokenURL;
    NSDate *m_expirationDate;
}

+ (id)getGoogleSettingLocalCachePath;
+ (id)getGoogleSettingLocalCacheRootDir;
+ (id)loadSetting;
+ (void)initialize;
@property(retain, nonatomic) NSString *m_scope; // @synthesize m_scope;
@property(retain, nonatomic) NSDate *m_expirationDate; // @synthesize m_expirationDate;
@property(retain, nonatomic) NSString *m_tokenURL; // @synthesize m_tokenURL;
@property(retain, nonatomic) NSMutableDictionary *m_parameters; // @synthesize m_parameters;
@property(retain, nonatomic) NSString *m_redirectURI; // @synthesize m_redirectURI;
@property(retain, nonatomic) NSString *m_refreshToken; // @synthesize m_refreshToken;
@property(retain, nonatomic) NSString *m_clientSecret; // @synthesize m_clientSecret;
@property(retain, nonatomic) NSString *m_clientID; // @synthesize m_clientID;
- (void).cxx_destruct;
- (void)saveSetting;
- (void)dealloc;
- (void)resetSetting;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
