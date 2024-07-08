//
//  YFFriendInfo.h
//  YFFriend
//
//  Created by leonard.li on 2024/6/11.
//

#import <Foundation/Foundation.h>
@class UserListInfo;

NS_ASSUME_NONNULL_BEGIN

@interface YFFriendInfo : NSObject<NSCoding>

@property (copy, nonatomic) NSString *userId; // 用户唯一标识
@property (assign, nonatomic) uint32_t mutualFriendCount; // 共同好友数

+ (instancetype)friendWithInfo:(UserListInfo *)userInfo;

@end

NS_ASSUME_NONNULL_END
