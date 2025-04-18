#pragma once
#include "../Root.hpp"

namespace Archetype
{
    struct AttachedFXEquip : Root
    {
        COMMON_DEC AttachedFXEquip(const AttachedFXEquip&);
        COMMON_DEC AttachedFXEquip(IClObj*);
        COMMON_DEC virtual ~AttachedFXEquip();
        COMMON_DEC AttachedFXEquip& operator=(const AttachedFXEquip&);
        COMMON_DEC virtual ClassType get_class_type() const;

        public:
        // no fields here
    };
}