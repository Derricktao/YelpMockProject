//
//  MapTableViewCell.h
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/19/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"

@interface MapTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end

