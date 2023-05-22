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


public enum LapTrigger  {
    MANUAL((short)0),
    TIME((short)1),
    DISTANCE((short)2),
    POSITION_START((short)3),
    POSITION_LAP((short)4),
    POSITION_WAYPOINT((short)5),
    POSITION_MARKED((short)6),
    SESSION_END((short)7),
    FITNESS_EQUIPMENT((short)8),
    INVALID((short)255);

    protected short value;

    private LapTrigger(short value) {
        this.value = value;
    }

    public static LapTrigger getByValue(final Short value) {
        for (final LapTrigger type : LapTrigger.values()) {
            if (value == type.value)
                return type;
        }

        return LapTrigger.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( LapTrigger value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
