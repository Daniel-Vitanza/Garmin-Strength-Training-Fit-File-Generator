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


package com.garmin.fit;


public enum MesgCount  {
    NUM_PER_FILE((short)0),
    MAX_PER_FILE((short)1),
    MAX_PER_FILE_TYPE((short)2),
    INVALID((short)255);

    protected short value;

    private MesgCount(short value) {
        this.value = value;
    }

    public static MesgCount getByValue(final Short value) {
        for (final MesgCount type : MesgCount.values()) {
            if (value == type.value)
                return type;
        }

        return MesgCount.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( MesgCount value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
