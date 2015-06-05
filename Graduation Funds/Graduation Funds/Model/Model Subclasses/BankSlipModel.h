//
//  BankSlipModel.h
//  Graduation Funds
//
//  Created by Jhonathan Wyterlin on 04/06/15.
//  Copyright (c) 2015 Jhonathan Wyterlin. All rights reserved.
//

#import <Foundation/Foundation.h>

// Model
#import "BankSlipTypeModel.h"

@interface BankSlipModel : NSObject

@property(nonatomic,strong) NSNumber *identifier;
@property(nonatomic,strong) NSNumber *financialCode;
@property(nonatomic,strong) BankSlipTypeModel *bankSlipType;
@property(nonatomic,strong) NSDate *originalDueDate;
@property(nonatomic,strong) NSDate *actualDueDate;
@property(nonatomic,strong) NSNumber *amount;
@property(nonatomic,strong) NSNumber *amountPaid;

@end
