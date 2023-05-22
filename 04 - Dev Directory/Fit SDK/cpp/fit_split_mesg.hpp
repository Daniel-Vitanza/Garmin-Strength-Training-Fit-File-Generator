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


#if !defined(FIT_SPLIT_MESG_HPP)
#define FIT_SPLIT_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class SplitMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 SplitType = 0;
       static const FIT_UINT8 TotalElapsedTime = 1;
       static const FIT_UINT8 TotalTimerTime = 2;
       static const FIT_UINT8 TotalDistance = 3;
       static const FIT_UINT8 StartTime = 9;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    SplitMesg(void) : Mesg(Profile::MESG_SPLIT)
    {
    }

    SplitMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of split_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSplitTypeValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns split_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_SPLIT_TYPE GetSplitType(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set split_type field
    ///////////////////////////////////////////////////////////////////////
    void SetSplitType(FIT_SPLIT_TYPE splitType)
    {
        SetFieldENUMValue(0, splitType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of total_elapsed_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTotalElapsedTimeValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_elapsed_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTotalElapsedTime(void) const
    {
        return GetFieldFLOAT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_elapsed_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTotalElapsedTime(FIT_FLOAT32 totalElapsedTime)
    {
        SetFieldFLOAT32Value(1, totalElapsedTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of total_timer_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTotalTimerTimeValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_timer_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTotalTimerTime(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_timer_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTotalTimerTime(FIT_FLOAT32 totalTimerTime)
    {
        SetFieldFLOAT32Value(2, totalTimerTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of total_distance field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTotalDistanceValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_distance field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTotalDistance(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_distance field
    // Units: m
    ///////////////////////////////////////////////////////////////////////
    void SetTotalDistance(FIT_FLOAT32 totalDistance)
    {
        SetFieldFLOAT32Value(3, totalDistance, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of start_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStartTimeValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns start_time field
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetStartTime(void) const
    {
        return GetFieldUINT32Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set start_time field
    ///////////////////////////////////////////////////////////////////////
    void SetStartTime(FIT_DATE_TIME startTime)
    {
        SetFieldUINT32Value(9, startTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_SPLIT_MESG_HPP)
