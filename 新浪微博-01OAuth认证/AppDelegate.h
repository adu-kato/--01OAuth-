//
//  AppDelegate.h
//  新浪微博-01OAuth认证
//
//  Created by yang on 15-5-6.
//  Copyright (c) 2015年 com.bjsxt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AccountManager.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property(strong,nonatomic)AccountManager *accountManager;
@end
