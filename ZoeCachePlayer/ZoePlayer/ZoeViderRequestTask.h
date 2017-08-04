//
//  ZoeViderRequestTask.h
//  ZoeCachePlayer
//
//  Created by mac on 2017/8/3.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
@class ZoeViderRequestTask;
@protocol VideoRequestTaskDelegate <NSObject>

- (void)task:(ZoeViderRequestTask *)task didReceiveVideoLength:(NSUInteger)ideoLength mimeType:(NSString *)mimeType;
- (void)didReceiveVideoDataWithTask:(ZoeViderRequestTask *)task;
- (void)didFinishLoadingWithTask:(ZoeViderRequestTask *)task;
- (void)didFailLoadingWithTask:(ZoeViderRequestTask *)task WithError:(NSInteger )errorCode;

@end
@interface ZoeViderRequestTask : NSObject

@property (nonatomic, strong, readonly) NSURL                      *url;
@property (nonatomic, readonly        ) NSUInteger                 offset;

@property (nonatomic, readonly        ) NSUInteger                 videoLength;
@property (nonatomic, readonly        ) NSUInteger                 downLoadingOffset;
@property (nonatomic, strong, readonly) NSString                   * mimeType;
@property (nonatomic, assign)           BOOL                       isFinishLoad;

@property (nonatomic, weak            ) id <VideoRequestTaskDelegate> delegate;


- (void)setUrl:(NSURL *)url offset:(NSUInteger)offset;

- (void)cancel;

- (void)continueLoading;

- (void)clearData;
@end
