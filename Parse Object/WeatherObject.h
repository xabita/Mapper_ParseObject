//
//  WeatherObject.h
//  Parse Object
//
//  Created by Elizabeth Martínez Gómez on 07/01/16.
//  Copyright © 2016 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeatherObject : NSObject
@property (nonatomic,strong) NSString *ID;
@property (nonatomic,strong) NSString *main;
@property (nonatomic,strong) NSString *descriptionWeather;
@property (nonatomic,strong) NSString *icon;



@end
