#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{

    struct AttachedEquipment : Equipment
    {
        COMMON_DEC AttachedEquipment(const AttachedEquipment&);
        COMMON_DEC AttachedEquipment(IClObj*);
        COMMON_DEC virtual ~AttachedEquipment();
        COMMON_DEC AttachedEquipment& operator=(const AttachedEquipment&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual bool is_attached() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ uint separationExplosionId;
        /* 29 */ uint debrisTypeId;
        /* 30 */ float childImpulse;
        /* 31 */ float parentImpulse;
        /* 32 */ char* hpChild;
        /* 33 */ int toughness;
    };

}