//
//  DetailViewController.h
//  test
//
//  Created by Esteve Mayolas on 21/09/13.
//  Copyright (c) 2013 Esteve Mayolas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
