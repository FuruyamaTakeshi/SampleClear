//
//  DetailViewController.h
//  SampleClear
//
//  Created by 古山 健司 on 12/12/19.
//  Copyright (c) 2012年 TF. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 * @brief 詳細画面クラス
 *
 */
@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
