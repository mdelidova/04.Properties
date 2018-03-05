//
//  MDObject.h
//  ParametersTest
//
//  Created by Maryna Delidova on 3/3/18.
//  Copyright © 2018 Maryna Delidova. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MDObject : NSObject <NSCopying>

@property (strong,nonatomic) NSString* name;

@property (strong, nonatomic) NSString* firstName;

@property (strong, nonatomic) NSString* lastName;

@property (readonly, nonatomic) NSString* fullName;

+(NSString*) sayFullName;

@end
