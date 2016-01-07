//
//  Parser.h
//  Parse Object
//
//  Created by Walter Gonzalez Domenzain on 29/11/15.
//  Copyright © 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Declarations.h"

@interface Parser : NSObject
+ (ObjectResponse *)parseRegisterObject;
+ (ObjectResponse *)parseZoneObject;
+ (WeatherResponse *)parseWeatherResponse;
@end
