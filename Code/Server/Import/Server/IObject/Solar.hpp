#pragma once

#include <FLHookCore.h>
#include "EqObj.hpp"
#include "../Common/Include/CObjects/CSimple/CEqObj/CSolar.hpp"

struct Solar : public EqObj
{
    CSolar* csolar(){return reinterpret_cast<CSolar*>(cobject());};
    virtual FLHookCore::Vector& ChooseSystemArrivalLocation(uint unused, FLHookCore::Vector& pos, FLHookCore::Matrix& ori);

    static Solar* Cast(IObjInspectImpl* iobj)
    {
        if(iobj->cobject()->objectClass == CObject::CSOLAR_OBJECT)
        {
            return reinterpret_cast<Solar*>(iobj);
        }
        return nullptr;
    }
};