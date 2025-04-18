#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct Power : Equipment
    {
        COMMON_DEC Power(const Power&);
        COMMON_DEC Power(IClObj*);
        COMMON_DEC virtual ~Power();
        COMMON_DEC Power& operator=(const Power&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float capacity;
        /* 29 */ float chargeRate;
        /* 30 */ float thrustCapacity;
        /* 31 */ float thrustChargeRate;
    };
}