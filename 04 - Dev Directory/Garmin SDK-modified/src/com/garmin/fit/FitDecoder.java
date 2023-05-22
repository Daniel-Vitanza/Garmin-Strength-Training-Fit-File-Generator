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

import com.garmin.fit.BufferedMesgBroadcaster;
import com.garmin.fit.Decode;
import com.garmin.fit.FitRuntimeException;
import com.garmin.fit.MesgBroadcastPlugin;

import java.io.InputStream;

public class FitDecoder {

    public FitDecoder() {
    }

    public FitMessages decode(InputStream inputStream) {
        Decode decode = new Decode();
        FitListener fitListener = new FitListener();

        try {
            decode.read(inputStream, fitListener, null);
        } catch (FitRuntimeException fre) {
            // If a FIT file with 0 data size is encountered, attempt to
            // process the next chained FIT file in the input stream.
            if (decode.getInvalidFileDataSize()) {
                decode.nextFile();
                decode.read(inputStream, fitListener, null);
            } else {
                throw fre;
            }
        }

        return fitListener.getFitMessages();
    }

    public FitMessages decode(InputStream inputStream, MesgBroadcastPlugin plugin) {
        Decode decode = new Decode();
        FitListener fitListener = new FitListener();
        BufferedMesgBroadcaster mesgBroadcaster = new BufferedMesgBroadcaster(decode);

        mesgBroadcaster.registerMesgBroadcastPlugin(plugin);
        mesgBroadcaster.addListener(fitListener);

        try {
            mesgBroadcaster.run(inputStream);
            mesgBroadcaster.broadcast();
        } catch (FitRuntimeException fre) {
            // If a FIT file with 0 data size is encountered, attempt to
            // process the next chained FIT file in the input stream.
            if (decode.getInvalidFileDataSize()) {
                decode.nextFile();
                mesgBroadcaster.run(inputStream);
                mesgBroadcaster.broadcast();
            } else {
                throw fre;
            }
        }

        return fitListener.getFitMessages();
    }
}
