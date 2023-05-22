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


package com.garmin.fit.csv;

import com.garmin.fit.*;
import java.util.ArrayList;
import java.util.HashSet;

/**
 * Listens to incoming mesg definitions and data messages and filters
 * them by name - Once filtered the messages are passed along to whoever
 * is listening.
 *
 */
@SuppressWarnings("overloads")
public class MesgFilter implements MesgListener, MesgDefinitionListener, MesgSource {
    private ArrayList<MesgListener> mesgListeners = new ArrayList<MesgListener>();
    private ArrayList<MesgDefinitionListener> mesgDefListeners = new ArrayList<MesgDefinitionListener>();
    private HashSet<String> mesgDefinitionsToOutput;
    private HashSet<String> mesgDefinitionsToIgnore;
    private HashSet<String> mesgToOutput;
    private HashSet<String> mesgToIgnore;
    private boolean outputMesgDefinitions;
    private boolean outputMesg;

    public MesgFilter() {
        this.outputMesgDefinitions = true;
        this.outputMesg = true;
    }

    @Override
    public void addListener(MesgListener mesgListener) {
        if ((mesgListener != null) && !mesgListeners.contains(mesgListener)) {
            mesgListeners.add(mesgListener);
        }
    }

    public void addListener(MesgDefinitionListener mesgDefinitionListener) {
        if ((mesgDefinitionListener != null) && !mesgDefListeners.contains(mesgDefinitionListener)) {
            mesgDefListeners.add(mesgDefinitionListener);
        }
    }

    public void setMesgDefinitionsToOutput(HashSet<String> inputMesgDefinitionsToOutput) {
        if(mesgDefinitionsToIgnore != null) {
            throw new UnsupportedOperationException("Setting both an include filter and an exclude filter not supported.");
        }

        this.mesgDefinitionsToOutput = inputMesgDefinitionsToOutput;
        if(this.mesgDefinitionsToOutput.contains("none")) {
            this.outputMesgDefinitions = false;
        }
    }

    public void setMesgDefinitionsToIgnore(HashSet<String> inputMesgDefinitionsToIgnore) {
        if(mesgDefinitionsToOutput != null) {
            throw new UnsupportedOperationException("Setting both an include filter and an exclude filter not supported.");
        }

        this.mesgDefinitionsToIgnore = inputMesgDefinitionsToIgnore;
        if(this.mesgDefinitionsToIgnore.contains("none")) {
            this.outputMesgDefinitions = false;
        }
    }

    public void setDataMessagesToOutput(HashSet<String> inputMesgToOutput) {
        this.mesgToOutput = inputMesgToOutput;
        if(this.mesgToOutput.contains("none")) {
            this.outputMesg = false;
        }
    }

    public void setDataMessagesToIgnore(HashSet<String> inputMesgToIgnore) {
        this.mesgToIgnore = inputMesgToIgnore;
        if(this.mesgToIgnore.contains("none")) {
            this.outputMesg = false;
        }
    }

    public void onMesgDefinition(MesgDefinition mesgDef) {
        boolean outputDefinition = true;
        Mesg mesg = Factory.createMesg(mesgDef.getNum());

        if(!this.outputMesgDefinitions) {
            outputDefinition = false;
        } else {
            if(this.mesgDefinitionsToOutput != null && !this.mesgDefinitionsToOutput.isEmpty()) {
                if(this.mesgDefinitionsToOutput.contains(mesg.getName())) {
                    outputDefinition = true;
                } else {
                    outputDefinition = false;
                }
            } else if(this.mesgDefinitionsToIgnore != null && !this.mesgDefinitionsToIgnore.isEmpty()) {
                if(this.mesgDefinitionsToIgnore.contains(mesg.getName())) {
                    outputDefinition = false; // ignore definitions in ignore list
                } else {
                    outputDefinition = true;
                }
            } // else if no include or exclude list set, output the definition
        }

        if(outputDefinition) {
            for (MesgDefinitionListener mesgListener : mesgDefListeners) {
                mesgListener.onMesgDefinition(mesgDef);
            }
        }
    }

    public void onMesg(Mesg mesg) {
        boolean outputMessage = true;

        if(!this.outputMesg) {
            outputMessage = false;
        } else {
            if(this.mesgToOutput != null && !this.mesgToOutput.isEmpty()) {
                if(this.mesgToOutput.contains(mesg.getName())) {
                    outputMessage = true;
                } else {
                    outputMessage = false;
                }
            } else if(this.mesgToIgnore != null && !this.mesgToIgnore.isEmpty()) {
                if(this.mesgToIgnore.contains(mesg.getName())) {
                    outputMessage = false;
                } else {
                    outputMessage = true;
                }
            } // else if no include or exclude list set, output the message
        }

        if(outputMessage) {
            for (MesgListener mesgListener : mesgListeners) {
                mesgListener.onMesg(mesg);
            }
        }
    }
}
