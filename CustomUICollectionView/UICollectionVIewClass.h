//
//  UICollectionVIewClass.h
//  CustomUICollectionView
//
//  Created by lalaleelala on 3/13/16.
//  Copyright © 2016 lalaleelala. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UICollectionViewCustomizedCell.h"
#import "CustomizedUICollectionReusableViewHeader.h"
@interface UICollectionVIewClass : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *myArray;
}
@property (strong, nonatomic) IBOutlet UICollectionView *myCollectionView;
@end
