//
//  MDParent.h
//  ParametersTest
//
//  Created by Maryna Delidova on 3/8/18.
//  Copyright © 2018 Maryna Delidova. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MDParent : NSObject

@property (strong, nonatomic) NSString* firstName;

@property (strong, nonatomic) NSString* lastName;

- (NSString*) greeting;

@end
