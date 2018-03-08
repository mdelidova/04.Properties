//
//  MDChild.m
//  ParametersTest
//
//  Created by Maryna Delidova on 3/8/18.
//  Copyright © 2018 Maryna Delidova. All rights reserved.
//

#import "MDChild.h"

@implementation MDChild

- (NSString*) greeting {
    
    return [NSString stringWithFormat:@"Hello, %@ %@", self.firstNameOfGirl, self.lastNameOfGirl];
    
}

@end
