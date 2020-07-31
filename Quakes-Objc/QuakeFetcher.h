//
//  QuakeFetcher.h
//  Quakes-Objc
//
//  Created by Dimitri Bouniol Lambda on 7/29/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^QuakeFetcherCompletionHandler)(NSArray *_Nullable quakes, NSError *_Nullable error);

@interface QuakeFetcher : NSObject

- (void)fetchQuakedWithCompletionHandler:(nonnull QuakeFetcherCompletionHandler)completionHandler;
- (void)fetchQuakesInTimeInterval:(nonnull NSDateInterval *)interval completionHandler:(nonnull QuakeFetcherCompletionHandler)completionHandler;

@end
