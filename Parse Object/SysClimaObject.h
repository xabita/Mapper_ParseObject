//
//  SysClimaObject.h
//  Parse Object
//
//  Created by Elizabeth Martínez Gómez on 07/01/16.
//  Copyright © 2016 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SysClimaObject : NSObject
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *ID;
@property (nonatomic,strong) NSString *message;
@property (nonatomic,strong) NSString *country;
@property (nonatomic,strong) NSString *sunrise;
@property (nonatomic,strong) NSString *sunset;


@end
