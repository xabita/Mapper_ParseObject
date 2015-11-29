//
//  Parser.m
//  Parse Object
//
//  Created by Walter Gonzalez Domenzain on 29/11/15.
//  Copyright © 2015 Smartplace. All rights reserved.
//

#import "Parser.h"

@implementation Parser
//-------------------------------------------------------------------
+ (ObjectResponse *)parseRegisterObject {
    //check for valid value
    if(mjsonRegister != nil) {
        // Using ObjectMapper Directly
        ObjectResponse *customizedObject = [[ObjectMapper sharedInstance] objectFromSource:mjsonRegister toInstanceOfClass:[ObjectResponse class]];
        return customizedObject;
    }
    return nil;
}
//-------------------------------------------------------------------
+ (ObjectResponse *)parseZoneObject {
    //check for valid value
    if(mjsonZones != nil) {
        // Using ObjectMapper Directly
        ObjectResponse *customizedObject = [[ObjectMapper sharedInstance] objectFromSource:mjsonZones toInstanceOfClass:[ObjectResponse class]];
        return customizedObject;
    }
    return nil;
}
@end
