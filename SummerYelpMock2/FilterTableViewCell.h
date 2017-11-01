//
//  FilterTableViewCell.h
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/24/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpFilterDataModel.h"
@interface FilterTableViewCell : UITableViewCell
- (void)updateDataModel:(YelpFilterDataModel *)dataModel;
@end
