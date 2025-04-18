#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct Light : Equipment
    {
        COMMON_DEC Light(const Light&);
        COMMON_DEC Light(IClObj*);
        COMMON_DEC virtual ~Light();
        COMMON_DEC Light& operator=(const Light&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC bool read(struct INI_Reader&);

        public:
        /* 28 */ bool alwaysOn;
        bool dockingLight;
    };
}