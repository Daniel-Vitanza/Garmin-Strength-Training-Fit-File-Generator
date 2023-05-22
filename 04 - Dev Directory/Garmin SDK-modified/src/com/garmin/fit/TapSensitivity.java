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


public enum TapSensitivity  {
    HIGH((short)0),
    MEDIUM((short)1),
    LOW((short)2),
    INVALID((short)255);

    protected short value;

    private TapSensitivity(short value) {
        this.value = value;
    }

    public static TapSensitivity getByValue(final Short value) {
        for (final TapSensitivity type : TapSensitivity.values()) {
            if (value == type.value)
                return type;
        }

        return TapSensitivity.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( TapSensitivity value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
