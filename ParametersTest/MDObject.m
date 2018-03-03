//
//  MDObject.m
//  ParametersTest
//
//  Created by Maryna Delidova on 3/3/18.
//  Copyright © 2018 Maryna Delidova. All rights reserved.
//

#import "MDObject.h"

@implementation MDObject

- (instancetype)init
{
    self = [super init];
    if (self) {
        NSLog(@"object is created");
    }
    return self;
}

-(void) dealloc {
    NSLog(@"object is deallocated");    
}

@end
