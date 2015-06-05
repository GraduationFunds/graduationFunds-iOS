//
//  DefaultingModel.h
//  Graduation Funds
//
//  Created by Jhonathan Wyterlin on 05/06/15.
//  Copyright (c) 2015 Jhonathan Wyterlin. All rights reserved.
//

#import <Foundation/Foundation.h>

// Model
#import "StudentModel.h"

@interface DefaultingModel : NSObject

@property(nonatomic,strong) NSNumber *identifier;
@property(nonatomic,strong) NSNumber *month;
@property(nonatomic,strong) NSNumber *year;
@property(nonatomic,strong) NSNumber *maturityDay;
@property(nonatomic,strong) NSNumber *parValue;
@property(nonatomic,strong) NSNumber *calendarDays;
@property(nonatomic,strong) NSNumber *balanceDue;
@property(nonatomic,strong) NSNumber *correctedValue;
@property(nonatomic,strong) StudentModel *student;

@end
