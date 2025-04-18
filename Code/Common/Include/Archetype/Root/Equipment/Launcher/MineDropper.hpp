#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment/Launcher.hpp"

namespace Archetype
{
    struct MineDropper : Launcher
    {
        COMMON_DEC MineDropper(const MineDropper&);
        COMMON_DEC MineDropper(IClObj*);
        COMMON_DEC virtual ~MineDropper();
        COMMON_DEC MineDropper& operator=(const MineDropper&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;

        public:
        // no fields here
    };
}