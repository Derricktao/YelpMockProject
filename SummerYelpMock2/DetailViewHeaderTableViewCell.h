//
//  DetailViewHeaderTableViewCell.h
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/17/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YelpDataModel;

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;


@end
