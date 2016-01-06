//
//  Declarations.h
//  Parse Object
//
//  Created by Walter Gonzalez Domenzain on 29/11/15.
//  Copyright © 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBJson.h"
#import "ObjectMapper.h"
#import "ObjectResponse.h"

//Debug
#define nDebugEnable        1
#define print(x)            if(nDebugEnable){(x);}

//Operations
#define nTimeStamp          [NSString stringWithFormat:@"%lu",(long)[[NSDate date] timeIntervalSince1970] * 1]

extern NSDictionary *mjsonRegister;
extern NSDictionary *mjsonZones;
extern NSDictionary *mjsonWeather;

@interface Declarations : NSObject

@end
