//
//  AppDelegate.h
//  ParametersTest
//
//  Created by Maryna Delidova on 3/3/18.
//  Copyright © 2018 Maryna Delidova. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MDParent;

@class MDObject;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (copy, nonatomic) MDObject* object;

@property (strong, nonatomic) MDParent* parent;

@end

