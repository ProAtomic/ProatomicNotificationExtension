//
//  UNNotificationAttachment+PASExtras.h
//  ProatomicServiceExtension
//
//  Created by Guillermo Sáenz on 9/26/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UserNotifications;
@import UIKit;
@import Foundation;

@interface UNNotificationAttachment (PASExtras)

+ (UNNotificationAttachment *)createWithFileIdentifier:(NSString *)fileIdentifier data:(NSData *)data options:(NSDictionary *)options;

@end
