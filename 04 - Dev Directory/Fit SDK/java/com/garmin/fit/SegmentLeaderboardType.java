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


public enum SegmentLeaderboardType  {
    OVERALL((short)0),
    PERSONAL_BEST((short)1),
    CONNECTIONS((short)2),
    GROUP((short)3),
    CHALLENGER((short)4),
    KOM((short)5),
    QOM((short)6),
    PR((short)7),
    GOAL((short)8),
    RIVAL((short)9),
    CLUB_LEADER((short)10),
    INVALID((short)255);

    protected short value;

    private SegmentLeaderboardType(short value) {
        this.value = value;
    }

    public static SegmentLeaderboardType getByValue(final Short value) {
        for (final SegmentLeaderboardType type : SegmentLeaderboardType.values()) {
            if (value == type.value)
                return type;
        }

        return SegmentLeaderboardType.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( SegmentLeaderboardType value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
