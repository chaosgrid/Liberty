#pragma once

#include <FLHookCore.h>
#include "GameObject.hpp"

struct CounterMeasure : public GameObject
{
    CCounterMeasure* ccountermeasure(){return reinterpret_cast<CCounterMeasure*>(cobject());};
    static CounterMeasure* Cast(IObjInspectImpl* iobj)
    {
        if(iobj->cobject()->objectClass == CObject::CCOUNTERMEASURE_OBJECT)
        {
            return reinterpret_cast<CounterMeasure*>(iobj);
        }
        return nullptr;
    }
};