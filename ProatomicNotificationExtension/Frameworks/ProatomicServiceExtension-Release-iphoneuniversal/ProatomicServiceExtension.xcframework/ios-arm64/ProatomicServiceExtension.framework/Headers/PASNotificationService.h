//
//  PASNotificationService.h
//  ProatomicServiceExtension
//
//  Created by Guillermo Sáenz on 9/26/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UserNotifications;

@protocol PASNotificationServiceDelegate;
@protocol PASNotificationServiceDataSource;

@interface PASNotificationService : UNNotificationServiceExtension

@property (nonatomic, weak) id <PASNotificationServiceDataSource> dataSource;
@property (nonatomic, weak) id <PASNotificationServiceDelegate> delegate;

@end

@protocol PASNotificationServiceDelegate <NSObject>

@optional
- (void)customizeBestAttemptContent:(UNMutableNotificationContent *)bestAttemptContent;

@end

@protocol PASNotificationServiceDataSource <NSObject>

@optional
- (NSString *)getMediaLinkURLStringFromUserInfo:(NSDictionary *)userInfo;

@end
