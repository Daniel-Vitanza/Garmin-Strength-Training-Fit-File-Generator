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


#if !defined(FIT_GYROSCOPE_DATA_MESG_HPP)
#define FIT_GYROSCOPE_DATA_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class GyroscopeDataMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 TimestampMs = 0;
       static const FIT_UINT8 SampleTimeOffset = 1;
       static const FIT_UINT8 GyroX = 2;
       static const FIT_UINT8 GyroY = 3;
       static const FIT_UINT8 GyroZ = 4;
       static const FIT_UINT8 CalibratedGyroX = 5;
       static const FIT_UINT8 CalibratedGyroY = 6;
       static const FIT_UINT8 CalibratedGyroZ = 7;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    GyroscopeDataMesg(void) : Mesg(Profile::MESG_GYROSCOPE_DATA)
    {
    }

    GyroscopeDataMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp_ms field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampMsValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTimestampMs(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the timestamp.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestampMs(FIT_UINT16 timestampMs)
    {
        SetFieldUINT16Value(0, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of sample_time_offset
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumSampleTimeOffset(void) const
    {
        return GetFieldNumValues(1, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sample_time_offset field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSampleTimeOffsetValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the gyro sample with the corrosponding index was taken. Limited to 30 samples in each message. The samples may span across seconds. Array size must match the number of samples in gyro_x and gyro_y and gyro_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetSampleTimeOffset(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(1, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sample_time_offset field
    // Units: ms
    // Comment: Each time in the array describes the time at which the gyro sample with the corrosponding index was taken. Limited to 30 samples in each message. The samples may span across seconds. Array size must match the number of samples in gyro_x and gyro_y and gyro_z
    ///////////////////////////////////////////////////////////////////////
    void SetSampleTimeOffset(FIT_UINT8 index, FIT_UINT16 sampleTimeOffset)
    {
        SetFieldUINT16Value(1, sampleTimeOffset, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of gyro_x
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumGyroX(void) const
    {
        return GetFieldNumValues(2, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of gyro_x field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGyroXValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns gyro_x field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetGyroX(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(2, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set gyro_x field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetGyroX(FIT_UINT8 index, FIT_UINT16 gyroX)
    {
        SetFieldUINT16Value(2, gyroX, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of gyro_y
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumGyroY(void) const
    {
        return GetFieldNumValues(3, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of gyro_y field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGyroYValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns gyro_y field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetGyroY(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(3, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set gyro_y field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetGyroY(FIT_UINT8 index, FIT_UINT16 gyroY)
    {
        SetFieldUINT16Value(3, gyroY, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of gyro_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumGyroZ(void) const
    {
        return GetFieldNumValues(4, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of gyro_z field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGyroZValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns gyro_z field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetGyroZ(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(4, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set gyro_z field
    // Units: counts
    // Comment: These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples may span across seconds. A conversion will need to be done on this data once read.
    ///////////////////////////////////////////////////////////////////////
    void SetGyroZ(FIT_UINT8 index, FIT_UINT16 gyroZ)
    {
        SetFieldUINT16Value(4, gyroZ, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_gyro_x
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedGyroX(void) const
    {
        return GetFieldNumValues(5, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_gyro_x field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedGyroXValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_gyro_x field
    // Units: deg/s
    // Comment: Calibrated gyro reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedGyroX(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(5, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_gyro_x field
    // Units: deg/s
    // Comment: Calibrated gyro reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedGyroX(FIT_UINT8 index, FIT_FLOAT32 calibratedGyroX)
    {
        SetFieldFLOAT32Value(5, calibratedGyroX, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_gyro_y
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedGyroY(void) const
    {
        return GetFieldNumValues(6, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_gyro_y field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedGyroYValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_gyro_y field
    // Units: deg/s
    // Comment: Calibrated gyro reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedGyroY(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(6, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_gyro_y field
    // Units: deg/s
    // Comment: Calibrated gyro reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedGyroY(FIT_UINT8 index, FIT_FLOAT32 calibratedGyroY)
    {
        SetFieldFLOAT32Value(6, calibratedGyroY, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of calibrated_gyro_z
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumCalibratedGyroZ(void) const
    {
        return GetFieldNumValues(7, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibrated_gyro_z field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibratedGyroZValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibrated_gyro_z field
    // Units: deg/s
    // Comment: Calibrated gyro reading
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalibratedGyroZ(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(7, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibrated_gyro_z field
    // Units: deg/s
    // Comment: Calibrated gyro reading
    ///////////////////////////////////////////////////////////////////////
    void SetCalibratedGyroZ(FIT_UINT8 index, FIT_FLOAT32 calibratedGyroZ)
    {
        SetFieldFLOAT32Value(7, calibratedGyroZ, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_GYROSCOPE_DATA_MESG_HPP)
