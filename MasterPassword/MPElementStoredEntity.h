//
//  MPElementStoredEntity.h
//  MasterPassword-iOS
//
//  Created by Maarten Billemont on 11/06/12.
//  Copyright (c) 2012 Lyndir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MPElementEntity.h"


@interface MPElementStoredEntity : MPElementEntity

@property (nonatomic, retain) id contentObject;

@end
