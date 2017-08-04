//
//  ZoePlayer.h
//  ZoeCachePlayer
//
//  Created by mac on 2017/8/1.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSString *const PlayerStateChangedNotification;
FOUNDATION_EXPORT NSString *const PlayerProgressChangedNotification;
FOUNDATION_EXPORT NSString *const PlayerLoadProgressChangedNotification;


typedef NS_ENUM(NSInteger, PlayerState) {
    PlayerStateBuffering = 1 << 0,
    PlayerStatePlaying   = 1 << 1,
    PlayerStateStopped   = 1 << 2,
    PlayerStatePause     = 1 << 3
};

@interface ZoePlayer : NSObject

@property (nonatomic, readonly) PlayerState state;
@property (nonatomic, readonly) CGFloat       loadedProgress;
@property (nonatomic, readonly) CGFloat       duration;
@property (nonatomic, readonly) CGFloat       current;
@property (nonatomic, readonly) CGFloat       progress;
@property (nonatomic, assign) BOOL          EnterBackground;


+ (instancetype)sharedInstance;
- (void)playWithUrl:(NSURL *)url showView:(UIView *)showView;
- (void)seekToTime:(CGFloat)seconds;

- (void)resume;
- (void)pause;
- (void)stop;

- (void)fullScreen;  //全屏
- (void)halfScreen;   //半屏

@end
