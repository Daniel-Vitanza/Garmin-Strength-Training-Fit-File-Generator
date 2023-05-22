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


#if !defined(FIT_FIELD_CAPABILITIES_MESG_HPP)
#define FIT_FIELD_CAPABILITIES_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class FieldCapabilitiesMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 File = 0;
       static const FIT_UINT8 MesgNum = 1;
       static const FIT_UINT8 FieldNum = 2;
       static const FIT_UINT8 Count = 3;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    FieldCapabilitiesMesg(void) : Mesg(Profile::MESG_FIELD_CAPABILITIES)
    {
    }

    FieldCapabilitiesMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of message_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMessageIndexValid() const
    {
        const Field* field = GetField(254);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns message_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetMessageIndex(void) const
    {
        return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set message_index field
    ///////////////////////////////////////////////////////////////////////
    void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
    {
        SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of file field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFileValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns file field
    ///////////////////////////////////////////////////////////////////////
    FIT_FILE GetFile(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set file field
    ///////////////////////////////////////////////////////////////////////
    void SetFile(FIT_FILE file)
    {
        SetFieldENUMValue(0, file, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of mesg_num field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMesgNumValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns mesg_num field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESG_NUM GetMesgNum(void) const
    {
        return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set mesg_num field
    ///////////////////////////////////////////////////////////////////////
    void SetMesgNum(FIT_MESG_NUM mesgNum)
    {
        SetFieldUINT16Value(1, mesgNum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of field_num field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFieldNumValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns field_num field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetFieldNum(void) const
    {
        return GetFieldUINT8Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set field_num field
    ///////////////////////////////////////////////////////////////////////
    void SetFieldNum(FIT_UINT8 fieldNum)
    {
        SetFieldUINT8Value(2, fieldNum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of count field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCountValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns count field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetCount(void) const
    {
        return GetFieldUINT16Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set count field
    ///////////////////////////////////////////////////////////////////////
    void SetCount(FIT_UINT16 count)
    {
        SetFieldUINT16Value(3, count, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_FIELD_CAPABILITIES_MESG_HPP)
