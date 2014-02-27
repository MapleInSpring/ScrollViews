//
//  PagedScrollViewController.h
//  ScrollViews
//
//  Created by Yifeng Hou on 24/2/14.
//  Copyright (c) 2014 GraceHou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PagedScrollViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;
@property (nonatomic, strong) IBOutlet UIPageControl *pageControl;

@end
