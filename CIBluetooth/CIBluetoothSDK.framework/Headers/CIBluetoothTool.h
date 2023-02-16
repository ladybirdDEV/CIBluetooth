//
//  CIBluetoothTool.h
//  CIBluetooth
//
//  Created by daben on 2022/3/31.
//  Copyright © 2022 CI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CIBluetoothConst.h"

NS_ASSUME_NONNULL_BEGIN

// 持续向外回调消息
typedef void(^BluetoothResultCallback)(NSInteger callbackType, NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

typedef NSDictionary<CIBluetoothResKey, id> CIBluetoothRes;

@interface CIBluetoothTool : NSObject

+ (instancetype)tool;

/// 验证命令是否有效
/// @param command 命令
- (BOOL)canIUse:(NSString *)command;

/**
 Bluetooth消息分发
 
 @param message JS消息体
 @param callback 消息回调
 @discussion 该方法属于Bluetooth消息分发器，所有和Bluetooth相关的消息都通过该方法进行转发
 */
- (void)dispatchJSMessage:(NSDictionary *)message callback:(BluetoothResultCallback)callback;

@end

NS_ASSUME_NONNULL_END
