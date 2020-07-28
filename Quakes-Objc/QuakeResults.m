//
//  QuakeResults.m
//  Quakes-Objc
//
//  Created by Dimitri Bouniol Lambda on 7/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "QuakeResults.h"
#import "Quake.h"

@implementation QuakeResults

- (instancetype)init
{
    return [self initWithQuakes:@[]];
}

- (instancetype)initWithQuakes:(NSArray<Quake *> *)quakes
{
    if (self = [super init]) {
        _quakes = quakes.copy;
    }
    return self;
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    NSArray *quakeDictionaries = [dictionary objectForKey:@"features"];
    if (![quakeDictionaries isKindOfClass:NSArray.class]) return nil;
    
    NSMutableArray *quakes = [[NSMutableArray alloc] initWithCapacity:quakeDictionaries.count];
    
    for (NSDictionary *quakeDictionary in quakeDictionaries) {
        if (![quakeDictionary isKindOfClass:NSDictionary.class]) continue;
        
        Quake *quake = [[Quake alloc] initWithDictionary:quakeDictionary];
        
        if (quake) {
            [quakes addObject:quake];
        } else {
            // TODO: One of our required fields might be optional and we may need to debug this with real data
            NSLog(@"Unable to parse quake dictionary: %@", quakeDictionary);
        }
    }
    
    return [self initWithQuakes:quakes];
}

@end
