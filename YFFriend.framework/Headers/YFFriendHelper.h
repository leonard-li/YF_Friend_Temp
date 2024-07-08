//
//  YFFriendHelper.h
//  YFFriend
//
//  Created by leonard.li on 2024/6/11.
//

#import <Foundation/Foundation.h>
#import <YFFriend/YFApplyInfo.h>
#import <YFFriend/YFFriendInfo.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFFriendHelper : NSObject

@property (class, nonatomic, readonly) YFFriendHelper *defaultHelper;

/// 业务标识
@property (nonatomic, strong) NSString *bid;

/// 获取用户好友列表
/// @param userId 用户Id
/// @param completion 回调结果
- (void)getFriendList:(NSString *)userId
           completion:(void(^_Nullable)(NSError * _Nullable error, NSArray<NSString *> * _Nullable userList))completion;

/// 获取用户推荐好友列表
/// @param userId 用户Id
/// @param completion 回调结果
- (void)getRecommandFriend:(NSString *)userId
                completion:(void(^_Nullable)(NSError * _Nullable error, NSArray<YFFriendInfo *> * _Nullable userList))completion;

/// 申请添加好友 【A申请添加B】
/// @param applyUserId 申请者的用户Id
/// @param targetUserId 被申请的用户Id
/// @param completion 回调结果
- (void)addFriend:(NSString *)applyUserId
           target:(NSString *)targetUserId
       completion:(void(^_Nullable)(NSError * _Nullable error))completion;

/// 获取【收到的】好友申请列表
/// @param userId 用户Id
/// @param completion 回调结果
- (void)getFriendApplyList:(NSString *)userId
                completion:(void(^_Nullable)(NSError * _Nullable error, NSArray<YFApplyInfo *> * _Nullable applies))completion;

/// 获取【发出去的】好友申请列表
/// @param userId 用户Id
/// @param completion 回调结果
- (void)getSendedFriendApplyList:(NSString *)userId
                      completion:(void(^_Nullable)(NSError * _Nullable error, NSArray<YFApplyInfo *> * _Nullable applies))completion;

/// 处理好友申请
/// @param applyIds 申请Id集合 -- 不是用户id, 而是YFApplyInfo对象中的applyId
/// @param accept 是否同意申请
/// @param completion 回调结果
- (void)handleFriendApply:(NSArray<NSString *> *)applyIds
                   accept:(BOOL)accept
               completion:(void(^_Nullable)(NSError * _Nullable error))completion;

/// 删除好友 【A删除B】
/// @param applyUserId 删除者的用户Id
/// @param targetUserId 被删除的用户Id
/// @param completion 回调结果
- (void)deleteFriend:(NSString *)applyUserId
              target:(NSString *)targetUserId
          completion:(void(^_Nullable)(NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
