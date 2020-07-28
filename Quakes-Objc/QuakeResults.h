//
//  QuakeResults.h
//  Quakes-Objc
//
//  Created by Dimitri Bouniol Lambda on 7/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Quake;

NS_ASSUME_NONNULL_BEGIN

@interface QuakeResults : NSObject

- (instancetype)initWithQuakes:(NSArray<Quake *> *)quakes NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithDictionary:(NSDictionary *)dictionary;

@property (nonatomic, readonly, copy) NSArray<Quake *> *quakes;

@end

NS_ASSUME_NONNULL_END
