//
//  StudentModel.h
//  Graduation Funds
//
//  Created by Jhonathan Wyterlin on 04/06/15.
//  Copyright (c) 2015 Jhonathan Wyterlin. All rights reserved.
//

#import <Foundation/Foundation.h>

// Model
#import "NeighborhoodModel.h"

@interface StudentModel : NSObject

@property(nonatomic,strong) NSNumber *identifier;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *email;
@property(nonatomic,strong) NSNumber *phone;
@property(nonatomic,strong) NSNumber *cellPhone;
@property(nonatomic,strong) NSString *password;
@property(nonatomic,strong) NSString *generalRegistrationIdentification;
@property(nonatomic,strong) NSNumber *individualRegistration;
@property(nonatomic,strong) NSNumber *gender;
@property(nonatomic,strong) NSString *address;
@property(nonatomic,strong) NSNumber *addressNumber;
@property(nonatomic,strong) NSString *addressComplement;
@property(nonatomic,strong) NSNumber *zipCode;
@property(nonatomic,strong) NeighborhoodModel *neighborhood;
@property(nonatomic,strong) NSDate *birthDate;

@end
