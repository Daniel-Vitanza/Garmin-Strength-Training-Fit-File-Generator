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


#if !defined(FIT_SET_MESG_LISTENER_HPP)
#define FIT_SET_MESG_LISTENER_HPP

#include "fit_set_mesg.hpp"

namespace fit
{

class SetMesgListener
{
public:
    virtual ~SetMesgListener() {}
    virtual void OnMesg(SetMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_SET_MESG_LISTENER_HPP)
