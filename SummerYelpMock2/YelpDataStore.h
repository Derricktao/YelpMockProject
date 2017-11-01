//
//  YelpDataStore.h
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/17/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"
@import CoreLocation;
@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;
@property (nonatomic) NSString *priceParameter;
@property (nonatomic) NSMutableSet *selectedCategories;

+ (YelpDataStore *)sharedInstance;
@end

