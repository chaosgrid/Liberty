#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment/Launcher.hpp"

namespace Archetype
{
    struct CounterMeasureDropper : Launcher
    {
        COMMON_DEC CounterMeasureDropper(const CounterMeasureDropper&);
        COMMON_DEC CounterMeasureDropper(IClObj*);
        COMMON_DEC virtual ~CounterMeasureDropper();
        COMMON_DEC CounterMeasureDropper& operator=(const CounterMeasureDropper&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 40 */ float range;
    };
}