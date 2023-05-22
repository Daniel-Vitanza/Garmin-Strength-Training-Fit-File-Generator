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

public class LanguageBits2  {
    public static final short SLOVENIAN = 0x01;
    public static final short SWEDISH = 0x02;
    public static final short RUSSIAN = 0x04;
    public static final short TURKISH = 0x08;
    public static final short LATVIAN = 0x10;
    public static final short UKRAINIAN = 0x20;
    public static final short ARABIC = 0x40;
    public static final short FARSI = 0x80;
    public static final short INVALID = Fit.UINT8Z_INVALID;

    private static final Map<Short, String> stringMap;

    static {
        stringMap = new HashMap<Short, String>();
        stringMap.put(SLOVENIAN, "SLOVENIAN");
        stringMap.put(SWEDISH, "SWEDISH");
        stringMap.put(RUSSIAN, "RUSSIAN");
        stringMap.put(TURKISH, "TURKISH");
        stringMap.put(LATVIAN, "LATVIAN");
        stringMap.put(UKRAINIAN, "UKRAINIAN");
        stringMap.put(ARABIC, "ARABIC");
        stringMap.put(FARSI, "FARSI");
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
