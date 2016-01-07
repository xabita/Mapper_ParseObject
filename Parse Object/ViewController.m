//
//  ViewController.m
//  Parse Object
//
//  Created by Walter Gonzalez Domenzain on 29/11/15.
//  Copyright © 2015 Smartplace. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   //  [self getRemoteData];
    [self getWeather];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)getRemoteData {
    NSString *stPushToken           = @"232342343";
    mjsonRegister                   = [WebServices userRegister:stPushToken];
    ObjectResponse *objectResponse  = [Parser parseRegisterObject];
    
    NSString *stPublicKey           = objectResponse.publicKey;
    NSString *stResponseStatus      = objectResponse.responseStatus;
    
    print(NSLog(@"mjsonRegister = %@", mjsonRegister))
    print(NSLog(@"stPublicKey = %@", stPublicKey))
    print(NSLog(@"stResponseStatus = %@", stResponseStatus))
    
    mjsonZones                      = [WebServices getRiskZones:stPublicKey];
    objectResponse                  = [Parser parseZoneObject];
    print(NSLog(@"objectResponse = %@", objectResponse))
    
    NSString *name1                  = ((ZonesObject *)objectResponse.zones[0]).name;
    print(NSLog(@"name1 = %@", name1))
    
    int size = (int)[objectResponse.zones count];
    
    for (int i = 0; i < size; i++) {
        
        NSString *name                  = ((ZonesObject *)objectResponse.zones[i]).name;
        print(NSLog(@"name = %@", name))
    }
}

-(void)getWeather{
    
    mjsonWeather = [WebServices getWeather];
    print(NSLog(@"mjsonWeather = %@", mjsonWeather))
    WeatherResponse *weatherResponse = [Parser parseWeatherResponse];
    
    print(NSLog(@"weatherResponse = %@", weatherResponse.base))
    int size = (int)[weatherResponse.weather count];
    print(NSLog(@"size = %d",size));
    NSString *description = ((WeatherObject*) weatherResponse.weather[0]).descriptionWeather;
    print(NSLog(@"description = %@",description));
}

@end
