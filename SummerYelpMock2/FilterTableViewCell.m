//
//  FilterTableViewCell.m
//  SummerYelpMock2
//
//  Created by Songyun Tao on 10/24/17.
//  Copyright © 2017 Songyun Tao. All rights reserved.
//

#import "FilterTableViewCell.h"
#import "YelpDataStore.h"
#import "YelpFilterDataModel.h"

@interface FilterTableViewCell ()
@property (weak, nonatomic) IBOutlet UISwitch *filter;
@property (weak, nonatomic) IBOutlet UILabel *categoryTitle;

@property (nonatomic) YelpFilterDataModel *dataModel;

@end

@implementation FilterTableViewCell

- (void)updateDataModel:(YelpFilterDataModel *)dataModel
{
    self.dataModel = dataModel;
    self.categoryTitle.text = dataModel.categoryName;
    [self.filter setOn:[[YelpDataStore sharedInstance].selectedCategories containsObject:self.dataModel.categoryCode]];
}



- (IBAction)didUpdateCategory:(id)sender {
    if ([self.filter isOn]) {
        [[YelpDataStore sharedInstance].selectedCategories addObject:self.dataModel.categoryCode];
    } else {
        [[YelpDataStore sharedInstance].selectedCategories removeObject:self.dataModel.categoryCode];
    }
}

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

@end



