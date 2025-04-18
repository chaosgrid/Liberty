#pragma once
#include <FLHookCore.h>
#include "../Equipment.hpp"

namespace Archetype
{
    struct Shield final : Equipment
    {
        COMMON_DEC Shield(const Shield&);
        COMMON_DEC Shield(IClObj*);
        COMMON_DEC virtual ~Shield();
        COMMON_DEC Shield& operator=(const Shield&);
        COMMON_DEC virtual ClassType get_class_type() const;

        public:
        /* 28 */ char* dunno1;
        /* 29 */ char* dunno2;
        /* 30 */ uint dunno3;
        /* 31 */ uint dunno4;
        /* 32 */ char* dunno5;
        /* 33 */ uint dunno6;
    };
}