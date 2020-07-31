//
//  NSDateInterval+DayAdditions.h
//  Quakes-Objc
//
//  Created by Dimitri Bouniol Lambda on 7/29/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDateInterval (DayAdditions)

+ (instancetype)lsi_dateIntervalByAddingDays:(NSInteger)days;
+ (instancetype)lsi_dateIntervalByAddingDays:(NSInteger)days toDate:(NSDate *)aDate;

@end

NS_ASSUME_NONNULL_END
