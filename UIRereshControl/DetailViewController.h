//
//  DetailViewController.h
//  UIRereshControl
//
//  Created by Takayama on 2014/11/07.
//  Copyright (c) 2014年 Hiroshi Takayama. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

