#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct InternalFXEquip : Equipment
    {
        COMMON_DEC InternalFXEquip(const InternalFXEquip&);
        COMMON_DEC InternalFXEquip(IClObj*);
        COMMON_DEC virtual ~InternalFXEquip();
        COMMON_DEC InternalFXEquip& operator=(const InternalFXEquip&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ char* useAnimation;
    };
}