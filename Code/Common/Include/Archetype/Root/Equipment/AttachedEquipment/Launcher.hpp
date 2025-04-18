#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment.hpp"

namespace Archetype
{
    struct Launcher : public AttachedEquipment
    {
        COMMON_DEC Launcher(const Launcher&);
        COMMON_DEC Launcher(IClObj*);
        COMMON_DEC virtual ~Launcher();
        COMMON_DEC Launcher& operator=(const Launcher&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 34 */ float damagePerFire;
        /* 35 */ float powerUsage;
        /* 36 */ float refireDelay;
        /* 37 */ float muzzleVelocity;
        /* 38 */ uint projectileArchId;
        /* 39 */ char* useAnimation;
    };
}