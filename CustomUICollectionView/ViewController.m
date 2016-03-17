//
//  ViewController.m
//  CustomUICollectionView
//
//  Created by lalaleelala on 3/13/16.
//  Copyright © 2016 lalaleelala. All rights reserved.
//

#import "ViewController.h"
#import "UICollectionVIewClass.h"
#import "UICollectionViewCustomizedCell.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UICollectionVIewClass *uiCollectionViewClass = [[[NSBundle mainBundle]loadNibNamed:@"UICollectionViewClassXib" owner:self options:nil]lastObject];
    uiCollectionViewClass.frame = self.view.frame;
    [self.view addSubview:uiCollectionViewClass];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
