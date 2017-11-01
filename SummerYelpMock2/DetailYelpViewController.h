//
//  DetailYelpViewController.h
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/17/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YelpDataModel;

@interface DetailYelpViewController : UIViewController

- (instancetype)initWithDataModel:(YelpDataModel *)dataModel;
@end
