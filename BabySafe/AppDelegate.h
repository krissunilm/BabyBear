//
//  AppDelegate.h
//  BabySafe
//
//  Created by sunil maganti on 3/1/14.
//  Copyright (c) 2014 Kvana Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FYX/FYX.h>
#import <FYX/FYXVisitManager.h>
#import <FYX/FYXVisit.h>
#import <FYX/FYXTransmitter.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, FYXServiceDelegate, FYXVisitDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic) FYXVisitManager *visitManager;
@end
