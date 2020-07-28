//
//  FirstResponder.m
//  Quakes-Objc
//
//  Created by Dimitri Bouniol Lambda on 7/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "FirstResponder.h"

// Optional, since we are using @synthesize
//@interface FirstResponder () {
//    NSString *myInternalName;
//}
//
//@end

@implementation FirstResponder

//@synthesize name = _name; // Default
@synthesize name = myInternalName;

// myFirstResponder.name = @"Dimitri";
// [myFirstResponder setName:@"Dimitri"];

// NSString *name = myFirstResponder.name;
// NSString *name = [myFirstResponder name];

- (void)setName:(NSString *)aName
{
    // willSet
    
    myInternalName = aName.copy;
    
    // didSet
}

- (NSString *)name
{
    return myInternalName.copy;
}

@end
