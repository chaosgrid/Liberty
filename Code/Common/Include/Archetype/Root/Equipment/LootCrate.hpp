#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct LootCrate : Equipment
    {
        COMMON_DEC LootCrate(const LootCrate&);
        COMMON_DEC LootCrate(IClObj*);
        COMMON_DEC virtual ~LootCrate();
        COMMON_DEC LootCrate& operator=(const LootCrate&);
        COMMON_DEC virtual ClassType get_class_type() const;

        public:
        // no fields here
    };
}