//
//  ZoeloaderURLSesstion.h
//  ZoeCachePlayer
//
//  Created by mac on 2017/8/3.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@class ZoeViderRequestTask;

@protocol loaderURLConnectionDelegate <NSObject>

- (void)didFinishLoadingWithTask:(ZoeViderRequestTask *)task;
- (void)didFailLoadingWithTask:(ZoeViderRequestTask *)task WithError:(NSInteger )errorCode;

@end

@interface ZoeloaderURLSesstion : NSObject<AVAssetResourceLoaderDelegate>
@property (nonatomic, strong) ZoeViderRequestTask *task;
@property (nonatomic, weak  ) id<loaderURLConnectionDelegate> delegate;
- (NSURL *)getSchemeVideoURL:(NSURL *)url;
@end
