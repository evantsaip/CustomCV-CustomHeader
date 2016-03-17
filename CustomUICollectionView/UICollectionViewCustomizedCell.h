//
//  UICollectionViewCustomizedCell.h
//  CustomUICollectionView
//
//  Created by lalaleelala on 3/13/16.
//  Copyright © 2016 lalaleelala. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionViewCustomizedCell : UICollectionViewCell
@property (strong, nonatomic) IBOutlet UILabel *cellCenterLabel;
- (void)loadCell:(NSString*) cellString;
@end
