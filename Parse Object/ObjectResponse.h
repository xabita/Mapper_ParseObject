//
//  ObjectResponse.h
//  Parse Object
//
//  Created by Walter Gonzalez Domenzain on 29/11/15.
//  Copyright © 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZonesObject.h"
#import "WeatherObject.h"
#import "SysClimaObject.h"

@interface ObjectResponse : NSObject
@property (nonatomic,strong) NSString *responseStatus;
@property (nonatomic,strong) NSString *publicKey;
@property (nonatomic,strong) NSMutableArray *zones;

@end
