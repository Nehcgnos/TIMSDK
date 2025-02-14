
//  Created by Tencent on 2023/06/09.
//  Copyright © 2023 Tencent. All rights reserved.
/**
 *
 *  本文件声明了好友申请界面的视图模型。
 *  视图模型可以通过 IM SDK 提供的接口拉取好友申请信息，并将拉取到的信息进行加载，便于好友申请界面的进一步显示。
 *
 *  This file declares the view model for the friend request interface.
 *  The view model can pull the friend application information through the interface provided by the IM SDK, and load the pulled information to facilitate the
 * further display of the friend application interface.
 */

#import <Foundation/Foundation.h>
#import "TUICommonPendencyCell_Minimalist.h"

NS_ASSUME_NONNULL_BEGIN

@interface TUINewFriendViewDataProvider_Minimalist : NSObject

@property(readonly) NSArray *dataList;

/**
 *  是否具有未显示的数据。
 *  YES：有未显示的请求；NO：所有请求已加载完毕。
 *
 *  Has data not shown.
 *  YES：There are unshown requests；NO：All requests are loaded.
 */
@property BOOL hasNextData;

@property BOOL isLoading;

- (void)loadData;

- (void)removeData:(TUICommonPendencyCellData_Minimalist *)data;
- (void)agreeData:(TUICommonPendencyCellData_Minimalist *)data;
- (void)rejectData:(TUICommonPendencyCellData_Minimalist *)data;
@end

NS_ASSUME_NONNULL_END
