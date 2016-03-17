//
//  CustomizedUICollectionReusableViewHeader.m
//  CustomUICollectionView
//
//  Created by lalaleelala on 3/13/16.
//  Copyright © 2016 lalaleelala. All rights reserved.
//

#import "CustomizedUICollectionReusableViewHeader.h"

@implementation CustomizedUICollectionReusableViewHeader

- (void)awakeFromNib {
    // Initialization code
}
- (void)loadHeader:(NSString *)headerString {
    headerLbl.text = headerString;
}

@end
