//
//  NeighborhoodModel.h
//  Graduation Funds
//
//  Created by Jhonathan Wyterlin on 04/06/15.
//  Copyright (c) 2015 Jhonathan Wyterlin. All rights reserved.
//

#import <Foundation/Foundation.h>

// Model
#import "CityModel.h"

@interface NeighborhoodModel : NSObject

@property(nonatomic,strong) NSNumber *identifier;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) CityModel *city;

@end
