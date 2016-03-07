//
//  ProductBottomView.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/06/29.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import <UIKit/UIKit.h>
#import "ProductForm.h"

/**
 * 产品页面下方的操作栏
 */

@protocol ProductBottomViewDelegate <NSObject>

- (void)doSubmitProductForm;

- (void)doCollectProduct;

- (void)doClickCartBtn;

@end


@interface ProductBottomView : UIView

@property (nonatomic, weak) id<ProductBottomViewDelegate> delegate;

+ (CGFloat)height;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)setProductForm:(ProductForm *)productForm
                             cartNum:(NSNumber *)cartNum
                hasCollectedProduct:(BOOL)hasCollectedProduct;

- (void)setCartNum:(NSNumber *)cartNum;

- (void)setHasCollectedProduct:(BOOL)hasCollectedProduct;


#pragma mark - 点击加入购物车后，显示和隐藏购物车加载中的视图

- (void)showCartLoadingView;

- (void)hideCartLoadingView;

@end
