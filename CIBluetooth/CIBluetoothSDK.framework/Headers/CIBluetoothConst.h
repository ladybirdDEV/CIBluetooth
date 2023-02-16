//
//  CIBluetoothConst.h
//  CIBluetooth
//
//  Created by daben on 2022/4/7.
//  Copyright © 2022 CI. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 回调类型
typedef NS_ENUM(NSUInteger, CIBluetoothJSCallbackType) {
    CIBluetoothJSCallbackTypeNormal, // 普通回调
    CIBluetoothJSCallbackTypeSubscribe // 订阅回调
};

/// 错误码
typedef NS_ENUM(NSInteger, CIBluetoothError) {
    /// 未知
    CIBluetoothErrorUnknown = 400,
    /// 成功
    CIBluetoothErrorSuccess = 0,
    /// 已连接
    CIBluetoothErrorAlreadyConnect = -1,
    /// 未初始化蓝牙适配器
    CIBluetoothErrorNotInit = 10000,
    /// 当前蓝牙适配器不可用
    CIBluetoothErrorNotAvailable = 10001,
    /// 没有找到指定设备
    CIBluetoothErrorNotDevice = 10002,
    /// 连接失败
    CIBluetoothErrorConnectionFailed = 10003,
    /// 没有找到指定服务
    CIBluetoothErrorNoService = 10004,
    /// 没有找到指定特征
    CIBluetoothErrorNoCharacteristic = 10005,
    /// 当前连接已断开
    CIBluetoothErrorNoConnection = 10006,
    /// 当前特征不支持此操作
    CIBluetoothErrorPropertyNotSupport = 10007,
    /// 系统错误
    CIBluetoothErrorSystem = 10008,
    /// 连接超时
    CIBluetoothErrorOperateTimeout = 10012,
    /// 连接 deviceId 为空或者是格式不正确
    CIBluetoothErrorInvalidData = 10013
};

/// 参数名
typedef NSString * CIBluetoothParamName;

/// mode
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamModeName;
/// callbackId
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamCallbackIdName;
/// allowDuplicatesKey
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamAllowDuplicatesKeyName;
/// services
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamServicesName;
/// interval
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamIntervalName;
/// timeout
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamTimeoutName;
/// deviceId
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamDeviceIdName;
/// serviceId
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamServiceIdName;
/// characteristicId
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamCharacteristicIdName;
/// state
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamStateName;
/// RSSI
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamRSSIName;
/// properties
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamPropertiesName;
/// type
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamTypeName;
/// writeType
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamWriteTypeName;
/// write
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamWriteName;
/// writeNoResponse
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamWriteNoResponseName;
/// value
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamValueName;
/// notification
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamNotificationName;
/// indication
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamIndicationName;
/// available
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamAvailableName;
/// discovering
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamDiscoveringName;
/// isDiscovering
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamIsDiscoveringName;
/// devices
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamDevicesName;
/// name
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamNameName;
/// advertisData
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamAdvertisDataName;
/// advertisServiceUUIDs
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamAdvertisServiceUUIDsName;
/// localName
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamLocalNameName;
/// serviceData
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamServiceDataName;
/// connectable
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamConnectableName;
/// uuid
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamUUIDName;
/// isPrimary
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamIsPrimaryName;
/// characteristics
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamCharacteristicsName;
/// read
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamReadName;
/// notify
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamNotifyName;
/// indicate
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamIndicateName;
/// writeDefault
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamWriteDefaultName;
/// mtu
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamMTUName;
/// connected
FOUNDATION_EXPORT CIBluetoothParamName const CIBluetoothParamConnectedName;

/// 响应：Native回调给小程序（网页）
typedef NSString * CIBluetoothResKey;
/// 错误码（对标微信的响应结构。暂时无用，请使用CIBluetoothResStatusKey和CIBluetoothResStatusMessageKey）
FOUNDATION_EXPORT CIBluetoothResKey const CIBluetoothResCodeKey;
/// 错误码（小程序框架设计如此：errMsg=ok代表成功，errMsg=fail代表失败）
/// 使用示例：@{CIBluetoothResStatusKey : CIBluetoothResStatusSuccess, CIBluetoothResStatusMessageKey : @"This response is success"}
FOUNDATION_EXPORT CIBluetoothResKey const CIBluetoothResStatusKey;
FOUNDATION_EXPORT CIBluetoothResKey const CIBluetoothResStatusSuccess;
FOUNDATION_EXPORT CIBluetoothResKey const CIBluetoothResStatusFailure;
FOUNDATION_EXPORT CIBluetoothResKey const CIBluetoothResStatusMessageKey;


@interface CIBluetoothConst : NSObject

@end

NS_ASSUME_NONNULL_END
