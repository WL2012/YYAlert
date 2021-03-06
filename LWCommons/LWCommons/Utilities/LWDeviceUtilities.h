//
//  LWDeviceUtilities.h
//
//
//  Created by chris on 6/19/14.
//  Copyright (c) 2014 wangliang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDiOSVersion.h"

@interface LWDeviceUtilities : NSObject
{
    NSString *_systemVersion;
    NSString *_deviceUid;
    NSString *_cellularProviderName;
    NSString *_imei;
    NSString *_deviceName;
}

@property (nonatomic, strong, readonly, getter = getSystemName) NSString *systemName;
@property (nonatomic, strong, readonly, getter = getSystemVersion) NSString *systemVersion;
@property (nonatomic, assign, readonly, getter = getSystemMajorVersion) NSInteger systemMajorVersion;
@property (nonatomic, strong, readonly, getter = getDeviceUid) NSString *deviceUid;
@property (nonatomic, strong, readonly, getter = getCellularProviderName) NSString *cellularProviderName;
@property (nonatomic, strong, readonly, getter = getIMEI) NSString *imei;
@property (nonatomic, strong, readonly, getter = getModel) NSString *model;
@property (nonatomic, strong, readonly, getter = getDeviceName) NSString *deviceName;
@property (nonatomic, strong, readonly) NSString *idfa;

+ (LWDeviceUtilities*)sharedInstance;

- (NSString *)getIPAddress;

- (BOOL) limitAdTracking;

- (BOOL) iPhonePlus;

- (BOOL) iPhone6;

- (BOOL) iPhone5;

- (BOOL) iPhone4;

- (BOOL) iPhoneX;

@end
