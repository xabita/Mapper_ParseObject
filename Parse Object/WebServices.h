//
//  WebServices.h
//  Parse Object
//
//  Created by Walter Gonzalez Domenzain on 29/11/15.
//  Copyright © 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WebServices : NSObject
+ (NSDictionary *)userRegister:(NSString *)pushToken;
+ (NSDictionary *)getRiskZones:(NSString *)publicKey;
+ (NSDictionary *)getWeather;
+ (NSDictionary *)getSys;


@end
