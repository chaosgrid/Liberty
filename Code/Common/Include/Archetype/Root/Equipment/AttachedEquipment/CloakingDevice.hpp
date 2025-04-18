#pragma once


#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment.hpp"

namespace Archetype
{
    struct CloakingDevice : AttachedEquipment
    {
        COMMON_DEC CloakingDevice(const CloakingDevice&);
        COMMON_DEC CloakingDevice(IClObj*);
        COMMON_DEC virtual ~CloakingDevice();
        COMMON_DEC CloakingDevice& operator=(const CloakingDevice&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 34 */ float powerUsage;
        /* 35 */ float cloakInTime;
        /* 36 */ float cloakOutTime;
        /* 37 */ uint cloakInFxId;
        /* 38 */ uint cloakOutFxId;
    };
}