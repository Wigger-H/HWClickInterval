//
//  UIControl+HWClickInterval.h
//  MyTest
//
//  Created by huangwei on 2020/12/8.
//  Copyright © 2020 天翼文化. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIControl (HWClickInterval)
//点击事件响应的时间间隔，不设置或者小于 0 时为默认时间间隔
@property (nonatomic, assign) NSTimeInterval clickInterval;
// 是否忽略响应的时间间隔
@property (nonatomic, assign) BOOL ignoreClickInterval;

+(void)hw_exchangeClickMethod;
@end

NS_ASSUME_NONNULL_END
