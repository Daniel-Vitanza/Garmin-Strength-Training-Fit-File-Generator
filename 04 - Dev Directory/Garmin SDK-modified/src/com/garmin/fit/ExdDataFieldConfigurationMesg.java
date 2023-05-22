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



public class ExdDataFieldConfigurationMesg extends Mesg   {

    
    public static final int ScreenIndexFieldNum = 0;
    
    public static final int ConceptFieldFieldNum = 1;
    
    public static final int FieldIdFieldNum = 2;
    
    public static final int ConceptCountFieldNum = 3;
    
    public static final int DisplayTypeFieldNum = 4;
    
    public static final int TitleFieldNum = 5;
    

    protected static final  Mesg exdDataFieldConfigurationMesg;
    static {int field_index = 0;
        // exd_data_field_configuration
        exdDataFieldConfigurationMesg = new Mesg("exd_data_field_configuration", MesgNum.EXD_DATA_FIELD_CONFIGURATION);
        exdDataFieldConfigurationMesg.addField(new Field("screen_index", ScreenIndexFieldNum, 2, 1, 0, "", false, Profile.Type.UINT8));
        field_index++;
        exdDataFieldConfigurationMesg.addField(new Field("concept_field", ConceptFieldFieldNum, 13, 1, 0, "", false, Profile.Type.BYTE));
        exdDataFieldConfigurationMesg.fields.get(field_index).components.add(new FieldComponent(2, false, 4, 1, 0)); // field_id
        exdDataFieldConfigurationMesg.fields.get(field_index).components.add(new FieldComponent(3, false, 4, 1, 0)); // concept_count
        field_index++;
        exdDataFieldConfigurationMesg.addField(new Field("field_id", FieldIdFieldNum, 2, 1, 0, "", false, Profile.Type.UINT8));
        field_index++;
        exdDataFieldConfigurationMesg.addField(new Field("concept_count", ConceptCountFieldNum, 2, 1, 0, "", false, Profile.Type.UINT8));
        field_index++;
        exdDataFieldConfigurationMesg.addField(new Field("display_type", DisplayTypeFieldNum, 0, 1, 0, "", false, Profile.Type.EXD_DISPLAY_TYPE));
        field_index++;
        exdDataFieldConfigurationMesg.addField(new Field("title", TitleFieldNum, 7, 1, 0, "", false, Profile.Type.STRING));
        field_index++;
    }

    public ExdDataFieldConfigurationMesg() {
        super(Factory.createMesg(MesgNum.EXD_DATA_FIELD_CONFIGURATION));
    }

    public ExdDataFieldConfigurationMesg(final Mesg mesg) {
        super(mesg);
    }


    /**
     * Get screen_index field
     *
     * @return screen_index
     */
    public Short getScreenIndex() {
        return getFieldShortValue(0, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set screen_index field
     *
     * @param screenIndex The new screenIndex value to be set
     */
    public void setScreenIndex(Short screenIndex) {
        setFieldValue(0, 0, screenIndex, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get concept_field field
     *
     * @return concept_field
     */
    public Byte getConceptField() {
        return getFieldByteValue(1, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set concept_field field
     *
     * @param conceptField The new conceptField value to be set
     */
    public void setConceptField(Byte conceptField) {
        setFieldValue(1, 0, conceptField, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get field_id field
     *
     * @return field_id
     */
    public Short getFieldId() {
        return getFieldShortValue(2, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set field_id field
     *
     * @param fieldId The new fieldId value to be set
     */
    public void setFieldId(Short fieldId) {
        setFieldValue(2, 0, fieldId, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get concept_count field
     *
     * @return concept_count
     */
    public Short getConceptCount() {
        return getFieldShortValue(3, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set concept_count field
     *
     * @param conceptCount The new conceptCount value to be set
     */
    public void setConceptCount(Short conceptCount) {
        setFieldValue(3, 0, conceptCount, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get display_type field
     *
     * @return display_type
     */
    public ExdDisplayType getDisplayType() {
        Short value = getFieldShortValue(4, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
        if (value == null) {
            return null;
        }
        return ExdDisplayType.getByValue(value);
    }

    /**
     * Set display_type field
     *
     * @param displayType The new displayType value to be set
     */
    public void setDisplayType(ExdDisplayType displayType) {
        setFieldValue(4, 0, displayType.value, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    public String[] getTitle() {
        
        return getFieldStringValues(5, Fit.SUBFIELD_INDEX_MAIN_FIELD);
        
    }

    /**
     * @return number of title
     */
    public int getNumTitle() {
        return getNumFieldValues(5, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get title field
     *
     * @param index of title
     * @return title
     */
    public String getTitle(int index) {
        return getFieldStringValue(5, index, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set title field
     *
     * @param index of title
     * @param title The new title value to be set
     */
    public void setTitle(int index, String title) {
        setFieldValue(5, index, title, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

}
