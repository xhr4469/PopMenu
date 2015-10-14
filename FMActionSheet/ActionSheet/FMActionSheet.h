//
//  FMActionSheet.h
//  FollowmeiOS
//
//  Created by Subo on 15/8/6.
//  Copyright (c) 2015年 com.followme. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol FMActionSheetDelegate;

@interface FMActionSheet : UIView

/**
 *  遮罩层背景颜色, 默认为blackColor
 */
@property (strong, nonatomic) UIColor *maskBackgroundColor;
/**
 *  遮罩层的alpha值，默认为0.5
 */
@property (nonatomic) CGFloat maskAlpha;

/**
 *  Default: [UIFont systemFontOfSize:20]
 */
@property (strong, nonatomic) UIFont *titleFont;
/**
 *  default: blackColor
 */
@property (strong, nonatomic) UIColor *titleColor;
/**
 *  default: whiteColor
 */
@property (strong, nonatomic) UIColor *titleBackgroundColor;

/**
 *  分割线颜色, default: lightGrayColor
 */
@property (strong, nonatomic) UIColor *lineColor;
/**
 *  按钮高度 默认为49
 */
@property (assign,nonatomic) CGFloat buttonHeight;
/**
 *  标题的高度 默认为49
 */
@property (assign,nonatomic) CGFloat titleHeight;

/**
 * 实例弹出框：弹出框标题，按钮标题数组，取消按钮，弹出框代理
 */
+ (instancetype)actionSheetWithTitle:(NSString *)title
                        buttonTitles:(NSArray *)buttonTitles
                   cancelButtonTitle:(NSString *)cancelButtonTitle
                            delegate:(id<FMActionSheetDelegate>)delegate;

- (instancetype)initWithTitle:(NSString *)title
                 buttonTitles:(NSArray *)buttonTitles
            cancelButtonTitle:(NSString *)cancelButtonTitle
                     delegate:(id<FMActionSheetDelegate>)delegate;
/**
 *
 */
- (void)show;

@end

/**
 * 弹出框协议内容
 */
@protocol FMActionSheetDelegate <NSObject>

@optional
/**
 * 点击按钮的下标
 */
- (void)actionSheet:(FMActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex;
/**
 * 点击按钮的文字字体
 */
- (UIFont *)actionSheet:(FMActionSheet *)actionSheet buttonTextFontAtIndex:(NSInteger)bottonIndex;
/**
 * 点击按钮的文字颜色
 */
- (UIColor *)actionSheet:(FMActionSheet *)actionSheet buttonTextColorAtIndex:(NSInteger)bottonIndex;
/**
 * 点击按钮的背景色
 */
- (UIColor *)actionSheet:(FMActionSheet *)actionSheet buttonBackgroundColorAtIndex:(NSInteger)bottonIndex;

@end
