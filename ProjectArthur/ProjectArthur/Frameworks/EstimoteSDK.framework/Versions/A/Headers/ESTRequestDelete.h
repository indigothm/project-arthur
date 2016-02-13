//
//  ESTRequestDelete.h
//  EstimoteSDK
//
//  Created by Alexander Juda on 28/08/15.
//  Copyright (c) 2015 Estimote. All rights reserved.
//

#import "ESTRequestBase.h"

#define ESTRequestDeleteErrorDomain @"ESTRequestDeleteErrorDomain"

typedef NS_ENUM(NSInteger, ESTRequestDeleteError)
{
    ESTRequestDeleteErrorNoData,
    ESTRequestDeleteErrorNotAuthorized,
    ESTRequestDeleteErrorNotResource,
    ESTRequestDeleteErrorCloudReturnedError
};

@interface ESTRequestDelete : ESTRequestBase

@end
