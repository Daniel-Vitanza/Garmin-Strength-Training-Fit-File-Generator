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



public class VideoMesg extends Mesg   {

    
    public static final int UrlFieldNum = 0;
    
    public static final int HostingProviderFieldNum = 1;
    
    public static final int DurationFieldNum = 2;
    

    protected static final  Mesg videoMesg;
    static {
        // video
        videoMesg = new Mesg("video", MesgNum.VIDEO);
        videoMesg.addField(new Field("url", UrlFieldNum, 7, 1, 0, "", false, Profile.Type.STRING));
        
        videoMesg.addField(new Field("hosting_provider", HostingProviderFieldNum, 7, 1, 0, "", false, Profile.Type.STRING));
        
        videoMesg.addField(new Field("duration", DurationFieldNum, 134, 1, 0, "ms", false, Profile.Type.UINT32));
        
    }

    public VideoMesg() {
        super(Factory.createMesg(MesgNum.VIDEO));
    }

    public VideoMesg(final Mesg mesg) {
        super(mesg);
    }


    /**
     * Get url field
     *
     * @return url
     */
    public String getUrl() {
        return getFieldStringValue(0, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set url field
     *
     * @param url The new url value to be set
     */
    public void setUrl(String url) {
        setFieldValue(0, 0, url, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get hosting_provider field
     *
     * @return hosting_provider
     */
    public String getHostingProvider() {
        return getFieldStringValue(1, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set hosting_provider field
     *
     * @param hostingProvider The new hostingProvider value to be set
     */
    public void setHostingProvider(String hostingProvider) {
        setFieldValue(1, 0, hostingProvider, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get duration field
     * Units: ms
     * Comment: Playback time of video
     *
     * @return duration
     */
    public Long getDuration() {
        return getFieldLongValue(2, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set duration field
     * Units: ms
     * Comment: Playback time of video
     *
     * @param duration The new duration value to be set
     */
    public void setDuration(Long duration) {
        setFieldValue(2, 0, duration, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

}
