//
//  FundHasStudentModel.h
//  Graduation Funds
//
//  Created by Jhonathan Wyterlin on 05/06/15.
//  Copyright (c) 2015 Jhonathan Wyterlin. All rights reserved.
//

#import <Foundation/Foundation.h>

// Model
#import "FundModel.h"
#import "StudentModel.h"

@interface FundHasStudentModel : NSObject

@property(nonatomic,strong) NSNumber *identifier;
@property(nonatomic,strong) FundModel *fund;
@property(nonatomic,strong) StudentModel *student;
@property(nonatomic,strong) NSNumber *studentOff;
@property(nonatomic,strong) NSNumber *quantityAccess;
@property(nonatomic,strong) NSDate *lastAccess;
@property(nonatomic,strong) NSDate *createdAt;

@end
