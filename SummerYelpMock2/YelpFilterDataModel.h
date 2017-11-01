//
//  YelpFilterDataModel.h
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/24/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YelpFilterDataModel : NSObject

@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSString *categoryCode;

+ (NSArray <YelpFilterDataModel *>*)buildDataModelArrayFromDictionaryArray:(NSArray<NSDictionary *> *)dictArray;

@end
