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


#import "FITMessage.h"

#import <fit_mesg.hpp>
#import <fit_field.hpp>

@interface FITMessage ()
-(instancetype)initWithFitMesgIndex:(fit::Profile::MESG_INDEX)index NS_DESIGNATED_INITIALIZER;
-(instancetype)initWithFitMesg:(fit::Mesg *)fit_mesg NS_DESIGNATED_INITIALIZER;
-(fit::Mesg *)getInternalFitMesg;
-(fit::Field *)getField:(FIT_UINT8)fieldNum;
@end
