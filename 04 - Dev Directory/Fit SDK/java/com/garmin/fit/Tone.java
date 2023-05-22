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


public enum Tone  {
    OFF((short)0),
    TONE((short)1),
    VIBRATE((short)2),
    TONE_AND_VIBRATE((short)3),
    INVALID((short)255);

    protected short value;

    private Tone(short value) {
        this.value = value;
    }

    public static Tone getByValue(final Short value) {
        for (final Tone type : Tone.values()) {
            if (value == type.value)
                return type;
        }

        return Tone.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( Tone value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
