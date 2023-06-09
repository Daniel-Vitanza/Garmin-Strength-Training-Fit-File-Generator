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


#ifndef __FIT_DECODER_BRIDGE_H__
#define __FIT_DECODER_BRIDGE_H__

void OnMesgFromDecoder(void *decoder, void *mesg);
void OnMesgDefinitionFromDecoder(void *decoder, void *mesgDefinition);
void OnDeveloperFieldDefinitionFromDecoder(void *decoder, void *fieldDescriptionMesg, void *developerDataIdMesg);


#endif //__FIT_DECODER_BRIDGE_H__
