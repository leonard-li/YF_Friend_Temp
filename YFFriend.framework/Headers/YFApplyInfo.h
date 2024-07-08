//
//  YFApplyInfo.h
//  YFFriend
//
//  Created by leonard.li on 2024/6/11.
//

#import <Foundation/Foundation.h>
@class ApplyInfo;

NS_ASSUME_NONNULL_BEGIN

@interface YFApplyInfo : NSObject<NSCoding>

@property (assign, nonatomic) uint64_t applyId; // 申请信息id
@property (copy, nonatomic) NSString *fromId; // 申请者uid
@property (copy, nonatomic) NSString *toId; // 目标uid
@property (assign, nonatomic) uint64_t createTime; // 时间戳 毫秒级 13位

+ (instancetype)applyWithInfo:(ApplyInfo *)apply;

@end

NS_ASSUME_NONNULL_END
