//
//  ViewController.h
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/10/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface  YelpViewController : UIViewController
- (instancetype)initWithDataModel:(YelpDataModel *)dataModel;

@end
