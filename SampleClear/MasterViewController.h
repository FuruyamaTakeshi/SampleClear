//
//  MasterViewController.h
//  SampleClear
//
//  Created by 古山 健司 on 12/12/19.
//  Copyright (c) 2012年 TF. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;
/**
 * @brief メイン画面クラス
 *
 */
@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
