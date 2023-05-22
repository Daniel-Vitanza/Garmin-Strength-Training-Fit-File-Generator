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

import java.util.HashMap;
import java.util.Map;

public class SportBits3  {
    public static final short DRIVING = 0x01;
    public static final short GOLF = 0x02;
    public static final short HANG_GLIDING = 0x04;
    public static final short HORSEBACK_RIDING = 0x08;
    public static final short HUNTING = 0x10;
    public static final short FISHING = 0x20;
    public static final short INLINE_SKATING = 0x40;
    public static final short ROCK_CLIMBING = 0x80;
    public static final short INVALID = Fit.UINT8Z_INVALID;

    private static final Map<Short, String> stringMap;

    static {
        stringMap = new HashMap<Short, String>();
        stringMap.put(DRIVING, "DRIVING");
        stringMap.put(GOLF, "GOLF");
        stringMap.put(HANG_GLIDING, "HANG_GLIDING");
        stringMap.put(HORSEBACK_RIDING, "HORSEBACK_RIDING");
        stringMap.put(HUNTING, "HUNTING");
        stringMap.put(FISHING, "FISHING");
        stringMap.put(INLINE_SKATING, "INLINE_SKATING");
        stringMap.put(ROCK_CLIMBING, "ROCK_CLIMBING");
    }


    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum contsant
     */
    public static String getStringFromValue( Short value ) {
        if( stringMap.containsKey( value ) ) {
            return stringMap.get( value );
        }

        return "";
    }

    /**
     * Returns the enum constant with the specified name.
     * @param value The enum string value
     * @return The enum constant or INVALID if unknown
     */
    public static Short getValueFromString( String value ) {
        for( Map.Entry<Short, String> entry : stringMap.entrySet() ) {
            if( entry.getValue().equals( value ) ) {
                return entry.getKey();
            }
        }

        return INVALID;
    }

}
