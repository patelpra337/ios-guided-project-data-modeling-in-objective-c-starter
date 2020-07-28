//
//  FirstResponder.h
//  Quakes-Objc
//
//  Created by Dimitri Bouniol Lambda on 7/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FirstResponder : NSObject

@property (nonatomic, copy) NSString *name;

/*
 
 Setter:
 - (void)setName:(NSString *)aName;
 
 Getter:
 - (NSString *)name;
 
 Instance Variable (in the class's @interface)
 NSString *_name;
 
 */

@end

NS_ASSUME_NONNULL_END
