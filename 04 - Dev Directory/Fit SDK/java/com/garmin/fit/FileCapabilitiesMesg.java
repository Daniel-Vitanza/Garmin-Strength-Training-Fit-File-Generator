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



public class FileCapabilitiesMesg extends Mesg   {

    
    public static final int MessageIndexFieldNum = 254;
    
    public static final int TypeFieldNum = 0;
    
    public static final int FlagsFieldNum = 1;
    
    public static final int DirectoryFieldNum = 2;
    
    public static final int MaxCountFieldNum = 3;
    
    public static final int MaxSizeFieldNum = 4;
    

    protected static final  Mesg fileCapabilitiesMesg;
    static {
        // file_capabilities
        fileCapabilitiesMesg = new Mesg("file_capabilities", MesgNum.FILE_CAPABILITIES);
        fileCapabilitiesMesg.addField(new Field("message_index", MessageIndexFieldNum, 132, 1, 0, "", false, Profile.Type.MESSAGE_INDEX));
        
        fileCapabilitiesMesg.addField(new Field("type", TypeFieldNum, 0, 1, 0, "", false, Profile.Type.FILE));
        
        fileCapabilitiesMesg.addField(new Field("flags", FlagsFieldNum, 10, 1, 0, "", false, Profile.Type.FILE_FLAGS));
        
        fileCapabilitiesMesg.addField(new Field("directory", DirectoryFieldNum, 7, 1, 0, "", false, Profile.Type.STRING));
        
        fileCapabilitiesMesg.addField(new Field("max_count", MaxCountFieldNum, 132, 1, 0, "", false, Profile.Type.UINT16));
        
        fileCapabilitiesMesg.addField(new Field("max_size", MaxSizeFieldNum, 134, 1, 0, "bytes", false, Profile.Type.UINT32));
        
    }

    public FileCapabilitiesMesg() {
        super(Factory.createMesg(MesgNum.FILE_CAPABILITIES));
    }

    public FileCapabilitiesMesg(final Mesg mesg) {
        super(mesg);
    }


    /**
     * Get message_index field
     *
     * @return message_index
     */
    public Integer getMessageIndex() {
        return getFieldIntegerValue(254, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set message_index field
     *
     * @param messageIndex The new messageIndex value to be set
     */
    public void setMessageIndex(Integer messageIndex) {
        setFieldValue(254, 0, messageIndex, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get type field
     *
     * @return type
     */
    public File getType() {
        Short value = getFieldShortValue(0, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
        if (value == null) {
            return null;
        }
        return File.getByValue(value);
    }

    /**
     * Set type field
     *
     * @param type The new type value to be set
     */
    public void setType(File type) {
        setFieldValue(0, 0, type.value, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get flags field
     *
     * @return flags
     */
    public Short getFlags() {
        return getFieldShortValue(1, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set flags field
     *
     * @param flags The new flags value to be set
     */
    public void setFlags(Short flags) {
        setFieldValue(1, 0, flags, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get directory field
     *
     * @return directory
     */
    public String getDirectory() {
        return getFieldStringValue(2, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set directory field
     *
     * @param directory The new directory value to be set
     */
    public void setDirectory(String directory) {
        setFieldValue(2, 0, directory, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get max_count field
     *
     * @return max_count
     */
    public Integer getMaxCount() {
        return getFieldIntegerValue(3, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set max_count field
     *
     * @param maxCount The new maxCount value to be set
     */
    public void setMaxCount(Integer maxCount) {
        setFieldValue(3, 0, maxCount, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get max_size field
     * Units: bytes
     *
     * @return max_size
     */
    public Long getMaxSize() {
        return getFieldLongValue(4, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set max_size field
     * Units: bytes
     *
     * @param maxSize The new maxSize value to be set
     */
    public void setMaxSize(Long maxSize) {
        setFieldValue(4, 0, maxSize, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

}
