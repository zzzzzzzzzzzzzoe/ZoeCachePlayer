//
//  ViewController.m
//  ZoeCachePlayer
//
//  Created by mac on 2017/7/26.
//  Copyright © 2017年 mac. All rights reserved.
//
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#import "ViewController.h"
#import "ZoePlayer.h"

@interface ViewController ()
@property (nonatomic, strong) UIView *showView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.showView = [[UIView alloc] init];
    self.showView.frame = CGRectMake(0, 0, kScreenWidth, kScreenHeight);
    [self.view addSubview:self.showView];
    
    
    
    NSString *document = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).lastObject;
    NSString *movePath =  [document stringByAppendingPathComponent:@"保存数据.mp4"];
    
    NSURL *localURL = [NSURL fileURLWithPath:movePath];
    
    NSURL *url2 = [NSURL URLWithString:@"http://zyvideo1.oss-cn-qingdao.aliyuncs.com/zyvd/7c/de/04ec95f4fd42d9d01f63b9683ad0"];
    url2 = [NSURL URLWithString:@"http://baobab.wdjcdn.com/1461897495660000111.mp4"];
    
    [[ZoePlayer sharedInstance] playWithUrl:url2 showView:self.showView];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
