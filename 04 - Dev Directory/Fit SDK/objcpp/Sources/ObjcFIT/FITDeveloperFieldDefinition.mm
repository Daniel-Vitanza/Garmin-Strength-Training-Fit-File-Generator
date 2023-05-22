/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.105Release
// Tag = production/release/21.105.00-0-gdc65d24
/////////////////////////////////////////////////////////////////////////////////////////////


#import "FITDeveloperFieldDefinition.h"

@interface FITDeveloperFieldDefinition ()

@property(nonatomic, assign) FITFieldDescriptionMesg* fieldDescription;
@property(nonatomic, assign) FITDeveloperDataIdMesg* developer;

@end

@implementation FITDeveloperFieldDefinition

- (id)initWithFieldDescriptionMesg: (FITFieldDescriptionMesg*) fieldDescription andDeveloperDataIdMesg: (FITDeveloperDataIdMesg*) developer {

    if (self = [super init]) {
        self.fieldDescription = fieldDescription;
        self.developer = developer;
    }
    return self;
}

-(BOOL) isDefined {
    return (_fieldDescription != nil && _developer != nil);
}

@end