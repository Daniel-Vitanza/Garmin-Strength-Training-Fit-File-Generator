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

public class ExerciseCategory  {
    public static final int BENCH_PRESS = 0;
    public static final int CALF_RAISE = 1;
    public static final int CARDIO = 2;
    public static final int CARRY = 3;
    public static final int CHOP = 4;
    public static final int CORE = 5;
    public static final int CRUNCH = 6;
    public static final int CURL = 7;
    public static final int DEADLIFT = 8;
    public static final int FLYE = 9;
    public static final int HIP_RAISE = 10;
    public static final int HIP_STABILITY = 11;
    public static final int HIP_SWING = 12;
    public static final int HYPEREXTENSION = 13;
    public static final int LATERAL_RAISE = 14;
    public static final int LEG_CURL = 15;
    public static final int LEG_RAISE = 16;
    public static final int LUNGE = 17;
    public static final int OLYMPIC_LIFT = 18;
    public static final int PLANK = 19;
    public static final int PLYO = 20;
    public static final int PULL_UP = 21;
    public static final int PUSH_UP = 22;
    public static final int ROW = 23;
    public static final int SHOULDER_PRESS = 24;
    public static final int SHOULDER_STABILITY = 25;
    public static final int SHRUG = 26;
    public static final int SIT_UP = 27;
    public static final int SQUAT = 28;
    public static final int TOTAL_BODY = 29;
    public static final int TRICEPS_EXTENSION = 30;
    public static final int WARM_UP = 31;
    public static final int RUN = 32;
    public static final int UNKNOWN = 65534;
    public static final int INVALID = Fit.UINT16_INVALID;

    private static final Map<Integer, String> stringMap;

    static {
        stringMap = new HashMap<Integer, String>();
        stringMap.put(BENCH_PRESS, "BENCH_PRESS");
        stringMap.put(CALF_RAISE, "CALF_RAISE");
        stringMap.put(CARDIO, "CARDIO");
        stringMap.put(CARRY, "CARRY");
        stringMap.put(CHOP, "CHOP");
        stringMap.put(CORE, "CORE");
        stringMap.put(CRUNCH, "CRUNCH");
        stringMap.put(CURL, "CURL");
        stringMap.put(DEADLIFT, "DEADLIFT");
        stringMap.put(FLYE, "FLYE");
        stringMap.put(HIP_RAISE, "HIP_RAISE");
        stringMap.put(HIP_STABILITY, "HIP_STABILITY");
        stringMap.put(HIP_SWING, "HIP_SWING");
        stringMap.put(HYPEREXTENSION, "HYPEREXTENSION");
        stringMap.put(LATERAL_RAISE, "LATERAL_RAISE");
        stringMap.put(LEG_CURL, "LEG_CURL");
        stringMap.put(LEG_RAISE, "LEG_RAISE");
        stringMap.put(LUNGE, "LUNGE");
        stringMap.put(OLYMPIC_LIFT, "OLYMPIC_LIFT");
        stringMap.put(PLANK, "PLANK");
        stringMap.put(PLYO, "PLYO");
        stringMap.put(PULL_UP, "PULL_UP");
        stringMap.put(PUSH_UP, "PUSH_UP");
        stringMap.put(ROW, "ROW");
        stringMap.put(SHOULDER_PRESS, "SHOULDER_PRESS");
        stringMap.put(SHOULDER_STABILITY, "SHOULDER_STABILITY");
        stringMap.put(SHRUG, "SHRUG");
        stringMap.put(SIT_UP, "SIT_UP");
        stringMap.put(SQUAT, "SQUAT");
        stringMap.put(TOTAL_BODY, "TOTAL_BODY");
        stringMap.put(TRICEPS_EXTENSION, "TRICEPS_EXTENSION");
        stringMap.put(WARM_UP, "WARM_UP");
        stringMap.put(RUN, "RUN");
        stringMap.put(UNKNOWN, "UNKNOWN");
    }


    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum contsant
     */
    public static String getStringFromValue( Integer value ) {
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
    public static Integer getValueFromString( String value ) {
        for( Map.Entry<Integer, String> entry : stringMap.entrySet() ) {
            if( entry.getValue().equals( value ) ) {
                return entry.getKey();
            }
        }

        return INVALID;
    }

}
