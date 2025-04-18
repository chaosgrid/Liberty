#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment.hpp"

namespace Archetype
{
    struct CargoPod : AttachedEquipment
    {
        COMMON_DEC CargoPod(const CargoPod&);
        COMMON_DEC CargoPod(IClObj*);
        COMMON_DEC virtual ~CargoPod();
        COMMON_DEC CargoPod& operator=(const CargoPod&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;

        public:
        // no fields here
    };
}