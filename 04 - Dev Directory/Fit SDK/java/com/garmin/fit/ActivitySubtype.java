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


public enum ActivitySubtype  {
    GENERIC((short)0),
    TREADMILL((short)1),
    STREET((short)2),
    TRAIL((short)3),
    TRACK((short)4),
    SPIN((short)5),
    INDOOR_CYCLING((short)6),
    ROAD((short)7),
    MOUNTAIN((short)8),
    DOWNHILL((short)9),
    RECUMBENT((short)10),
    CYCLOCROSS((short)11),
    HAND_CYCLING((short)12),
    TRACK_CYCLING((short)13),
    INDOOR_ROWING((short)14),
    ELLIPTICAL((short)15),
    STAIR_CLIMBING((short)16),
    LAP_SWIMMING((short)17),
    OPEN_WATER((short)18),
    ALL((short)254),
    INVALID((short)255);

    protected short value;

    private ActivitySubtype(short value) {
        this.value = value;
    }

    public static ActivitySubtype getByValue(final Short value) {
        for (final ActivitySubtype type : ActivitySubtype.values()) {
            if (value == type.value)
                return type;
        }

        return ActivitySubtype.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( ActivitySubtype value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
