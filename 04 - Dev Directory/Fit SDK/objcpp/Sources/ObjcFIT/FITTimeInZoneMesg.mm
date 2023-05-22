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


#import "FITMessage+Internal.h"


#import "FITTimeInZoneMesg.h"

@implementation FITTimeInZoneMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_TIME_IN_ZONE];

    return self;
}

// Timestamp 
- (BOOL)isTimestampValid {
	const fit::Field* field = [super getField:253];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITDate *)getTimestamp {
    return FITDateFromTimestamp([super getFieldUINT32ValueForField:253 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimestamp:(FITDate *)timestamp {
    [super setFieldUINT32ValueForField:253 andValue:TimestampFromFITDate(timestamp) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ReferenceMesg 
- (BOOL)isReferenceMesgValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITMesgNum)getReferenceMesg {
    return ([super getFieldUINT16ValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setReferenceMesg:(FITMesgNum)referenceMesg {
    [super setFieldUINT16ValueForField:0 andValue:(referenceMesg) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ReferenceIndex 
- (BOOL)isReferenceIndexValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITMessageIndex)getReferenceIndex {
    return ([super getFieldUINT16ValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setReferenceIndex:(FITMessageIndex)referenceIndex {
    [super setFieldUINT16ValueForField:1 andValue:(referenceIndex) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TimeInHrZone 
- (uint8_t)numTimeInHrZoneValues {
    return [super getFieldNumValuesForField:2 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isTimeInHrZoneValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTimeInHrZoneforIndex:(uint8_t)index {
    return ([super getFieldFLOAT32ValueForField:2 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimeInHrZone:(FITFloat32)timeInHrZone forIndex:(uint8_t)index {
    [super setFieldFLOAT32ValueForField:2 andValue:(timeInHrZone) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TimeInSpeedZone 
- (uint8_t)numTimeInSpeedZoneValues {
    return [super getFieldNumValuesForField:3 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isTimeInSpeedZoneValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTimeInSpeedZoneforIndex:(uint8_t)index {
    return ([super getFieldFLOAT32ValueForField:3 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimeInSpeedZone:(FITFloat32)timeInSpeedZone forIndex:(uint8_t)index {
    [super setFieldFLOAT32ValueForField:3 andValue:(timeInSpeedZone) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TimeInCadenceZone 
- (uint8_t)numTimeInCadenceZoneValues {
    return [super getFieldNumValuesForField:4 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isTimeInCadenceZoneValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTimeInCadenceZoneforIndex:(uint8_t)index {
    return ([super getFieldFLOAT32ValueForField:4 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimeInCadenceZone:(FITFloat32)timeInCadenceZone forIndex:(uint8_t)index {
    [super setFieldFLOAT32ValueForField:4 andValue:(timeInCadenceZone) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TimeInPowerZone 
- (uint8_t)numTimeInPowerZoneValues {
    return [super getFieldNumValuesForField:5 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isTimeInPowerZoneValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:5];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTimeInPowerZoneforIndex:(uint8_t)index {
    return ([super getFieldFLOAT32ValueForField:5 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimeInPowerZone:(FITFloat32)timeInPowerZone forIndex:(uint8_t)index {
    [super setFieldFLOAT32ValueForField:5 andValue:(timeInPowerZone) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// HrZoneHighBoundary 
- (uint8_t)numHrZoneHighBoundaryValues {
    return [super getFieldNumValuesForField:6 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isHrZoneHighBoundaryValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:6];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getHrZoneHighBoundaryforIndex:(uint8_t)index {
    return ([super getFieldUINT8ValueForField:6 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setHrZoneHighBoundary:(FITUInt8)hrZoneHighBoundary forIndex:(uint8_t)index {
    [super setFieldUINT8ValueForField:6 andValue:(hrZoneHighBoundary) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// SpeedZoneHighBoundary 
- (uint8_t)numSpeedZoneHighBoundaryValues {
    return [super getFieldNumValuesForField:7 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isSpeedZoneHighBoundaryValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:7];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getSpeedZoneHighBoundaryforIndex:(uint8_t)index {
    return ([super getFieldFLOAT32ValueForField:7 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSpeedZoneHighBoundary:(FITFloat32)speedZoneHighBoundary forIndex:(uint8_t)index {
    [super setFieldFLOAT32ValueForField:7 andValue:(speedZoneHighBoundary) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// CadenceZoneHighBondary 
- (uint8_t)numCadenceZoneHighBondaryValues {
    return [super getFieldNumValuesForField:8 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isCadenceZoneHighBondaryValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:8];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getCadenceZoneHighBondaryforIndex:(uint8_t)index {
    return ([super getFieldUINT8ValueForField:8 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCadenceZoneHighBondary:(FITUInt8)cadenceZoneHighBondary forIndex:(uint8_t)index {
    [super setFieldUINT8ValueForField:8 andValue:(cadenceZoneHighBondary) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// PowerZoneHighBoundary 
- (uint8_t)numPowerZoneHighBoundaryValues {
    return [super getFieldNumValuesForField:9 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isPowerZoneHighBoundaryValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:9];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getPowerZoneHighBoundaryforIndex:(uint8_t)index {
    return ([super getFieldUINT16ValueForField:9 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setPowerZoneHighBoundary:(FITUInt16)powerZoneHighBoundary forIndex:(uint8_t)index {
    [super setFieldUINT16ValueForField:9 andValue:(powerZoneHighBoundary) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// HrCalcType 
- (BOOL)isHrCalcTypeValid {
	const fit::Field* field = [super getField:10];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITHrZoneCalc)getHrCalcType {
    return ([super getFieldENUMValueForField:10 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setHrCalcType:(FITHrZoneCalc)hrCalcType {
    [super setFieldENUMValueForField:10 andValue:(hrCalcType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// MaxHeartRate 
- (BOOL)isMaxHeartRateValid {
	const fit::Field* field = [super getField:11];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getMaxHeartRate {
    return ([super getFieldUINT8ValueForField:11 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setMaxHeartRate:(FITUInt8)maxHeartRate {
    [super setFieldUINT8ValueForField:11 andValue:(maxHeartRate) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// RestingHeartRate 
- (BOOL)isRestingHeartRateValid {
	const fit::Field* field = [super getField:12];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getRestingHeartRate {
    return ([super getFieldUINT8ValueForField:12 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setRestingHeartRate:(FITUInt8)restingHeartRate {
    [super setFieldUINT8ValueForField:12 andValue:(restingHeartRate) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ThresholdHeartRate 
- (BOOL)isThresholdHeartRateValid {
	const fit::Field* field = [super getField:13];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getThresholdHeartRate {
    return ([super getFieldUINT8ValueForField:13 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setThresholdHeartRate:(FITUInt8)thresholdHeartRate {
    [super setFieldUINT8ValueForField:13 andValue:(thresholdHeartRate) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// PwrCalcType 
- (BOOL)isPwrCalcTypeValid {
	const fit::Field* field = [super getField:14];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITPwrZoneCalc)getPwrCalcType {
    return ([super getFieldENUMValueForField:14 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setPwrCalcType:(FITPwrZoneCalc)pwrCalcType {
    [super setFieldENUMValueForField:14 andValue:(pwrCalcType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FunctionalThresholdPower 
- (BOOL)isFunctionalThresholdPowerValid {
	const fit::Field* field = [super getField:15];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getFunctionalThresholdPower {
    return ([super getFieldUINT16ValueForField:15 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFunctionalThresholdPower:(FITUInt16)functionalThresholdPower {
    [super setFieldUINT16ValueForField:15 andValue:(functionalThresholdPower) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
