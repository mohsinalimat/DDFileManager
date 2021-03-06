//
//  SCSTableHeaderView.h
//  ZMSMobile
//
//  Created by 王志斌 on 16/12/7.
//  Copyright © 2016年 王志斌. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DDFileModel.h"

#define kSCSTableHeaderViewFrame CGRectMake(0, 0, SCREEN_WIDTH, NAV_BAR_HEIGHT)

@interface SCSTableHeaderView : UIView

@property (nonatomic, copy) void (^btnClickBlock)(DDFileModel *model); /**< 点击了哪个按钮 传回对应的模型 */

- (void)addModel:(DDFileModel *)model;

@end
