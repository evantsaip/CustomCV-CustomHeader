//
//  CustomizedUICollectionReusableViewHeader.h
//  CustomUICollectionView
//
//  Created by lalaleelala on 3/13/16.
//  Copyright © 2016 lalaleelala. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomizedUICollectionReusableViewHeader : UICollectionReusableView
{
    
    IBOutlet UILabel *headerLbl;
}
- (void)loadHeader: (NSString*)headerString;
@end
