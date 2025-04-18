#pragma once

#include <FLCore/Common/PhySys/Controller.hpp>
#include "../../../FLCoreDefs.hpp"

class CPhysControllerEquip : public PhySys::Controller
{
    public:
    COMMON_DEC virtual ~CPhysControllerEquip();
    COMMON_DEC virtual bool EnableController();
    COMMON_DEC virtual bool DisableController();
    COMMON_DEC virtual bool IsControllerEnabled() const;
    COMMON_DEC virtual bool ControlObject(CObject*);

    COMMON_DEC CPhysControllerEquip(const CPhysControllerEquip&);
    COMMON_DEC CPhysControllerEquip();
    COMMON_DEC CPhysControllerEquip& operator=(const CPhysControllerEquip&);

    public:
    bool isEnabled;
};