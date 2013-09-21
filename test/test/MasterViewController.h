//
//  MasterViewController.h
//  test
//
//  Created by Esteve Mayolas on 21/09/13.
//  Copyright (c) 2013 Esteve Mayolas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
