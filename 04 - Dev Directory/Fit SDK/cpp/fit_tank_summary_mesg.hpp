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


#if !defined(FIT_TANK_SUMMARY_MESG_HPP)
#define FIT_TANK_SUMMARY_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class TankSummaryMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 Sensor = 0;
       static const FIT_UINT8 StartPressure = 1;
       static const FIT_UINT8 EndPressure = 2;
       static const FIT_UINT8 VolumeUsed = 3;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    TankSummaryMesg(void) : Mesg(Profile::MESG_TANK_SUMMARY)
    {
    }

    TankSummaryMesg(const Mesg &mesg) : Mesg(mesg)
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
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sensor field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSensorValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sensor field
    ///////////////////////////////////////////////////////////////////////
    FIT_ANT_CHANNEL_ID GetSensor(void) const
    {
        return GetFieldUINT32ZValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sensor field
    ///////////////////////////////////////////////////////////////////////
    void SetSensor(FIT_ANT_CHANNEL_ID sensor)
    {
        SetFieldUINT32ZValue(0, sensor, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of start_pressure field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStartPressureValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns start_pressure field
    // Units: bar
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetStartPressure(void) const
    {
        return GetFieldFLOAT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set start_pressure field
    // Units: bar
    ///////////////////////////////////////////////////////////////////////
    void SetStartPressure(FIT_FLOAT32 startPressure)
    {
        SetFieldFLOAT32Value(1, startPressure, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of end_pressure field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEndPressureValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns end_pressure field
    // Units: bar
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetEndPressure(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set end_pressure field
    // Units: bar
    ///////////////////////////////////////////////////////////////////////
    void SetEndPressure(FIT_FLOAT32 endPressure)
    {
        SetFieldFLOAT32Value(2, endPressure, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of volume_used field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsVolumeUsedValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns volume_used field
    // Units: L
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetVolumeUsed(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set volume_used field
    // Units: L
    ///////////////////////////////////////////////////////////////////////
    void SetVolumeUsed(FIT_FLOAT32 volumeUsed)
    {
        SetFieldFLOAT32Value(3, volumeUsed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_TANK_SUMMARY_MESG_HPP)
