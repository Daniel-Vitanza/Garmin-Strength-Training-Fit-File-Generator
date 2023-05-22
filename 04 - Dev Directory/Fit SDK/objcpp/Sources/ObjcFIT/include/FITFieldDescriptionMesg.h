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


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITFieldDescriptionMesg : FITMessage
- (id)init;
// DeveloperDataIndex 
- (BOOL)isDeveloperDataIndexValid;
- (FITUInt8)getDeveloperDataIndex;
- (void)setDeveloperDataIndex:(FITUInt8)developerDataIndex;
// FieldDefinitionNumber 
- (BOOL)isFieldDefinitionNumberValid;
- (FITUInt8)getFieldDefinitionNumber;
- (void)setFieldDefinitionNumber:(FITUInt8)fieldDefinitionNumber;
// FitBaseTypeId 
- (BOOL)isFitBaseTypeIdValid;
- (FITFitBaseType)getFitBaseTypeId;
- (void)setFitBaseTypeId:(FITFitBaseType)fitBaseTypeId;
// FieldName 
@property(readonly,nonatomic) uint8_t numFieldNameValues;
- (BOOL)isFieldNameValidforIndex : (uint8_t)index;
- (NSString *)getFieldNameforIndex : (uint8_t)index;
- (void)setFieldName:(NSString *)fieldName forIndex:(uint8_t)index;
// Array 
- (BOOL)isArrayValid;
- (FITUInt8)getArray;
- (void)setArray:(FITUInt8)array;
// Components 
- (BOOL)isComponentsValid;
- (NSString *)getComponents;
- (void)setComponents:(NSString *)components;
// Scale 
- (BOOL)isScaleValid;
- (FITUInt8)getScale;
- (void)setScale:(FITUInt8)scale;
// Offset 
- (BOOL)isOffsetValid;
- (FITSInt8)getOffset;
- (void)setOffset:(FITSInt8)offset;
// Units 
@property(readonly,nonatomic) uint8_t numUnitsValues;
- (BOOL)isUnitsValidforIndex : (uint8_t)index;
- (NSString *)getUnitsforIndex : (uint8_t)index;
- (void)setUnits:(NSString *)units forIndex:(uint8_t)index;
// Bits 
- (BOOL)isBitsValid;
- (NSString *)getBits;
- (void)setBits:(NSString *)bits;
// Accumulate 
- (BOOL)isAccumulateValid;
- (NSString *)getAccumulate;
- (void)setAccumulate:(NSString *)accumulate;
// FitBaseUnitId 
- (BOOL)isFitBaseUnitIdValid;
- (FITFitBaseUnit)getFitBaseUnitId;
- (void)setFitBaseUnitId:(FITFitBaseUnit)fitBaseUnitId;
// NativeMesgNum 
- (BOOL)isNativeMesgNumValid;
- (FITMesgNum)getNativeMesgNum;
- (void)setNativeMesgNum:(FITMesgNum)nativeMesgNum;
// NativeFieldNum 
- (BOOL)isNativeFieldNumValid;
- (FITUInt8)getNativeFieldNum;
- (void)setNativeFieldNum:(FITUInt8)nativeFieldNum;

@end

NS_ASSUME_NONNULL_END