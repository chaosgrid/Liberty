#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Projectile.hpp"

namespace Archetype
{
    struct CounterMeasure : Projectile
    {
        COMMON_DEC CounterMeasure(const CounterMeasure&);
        COMMON_DEC CounterMeasure(IClObj*);
        COMMON_DEC virtual ~CounterMeasure();
        COMMON_DEC CounterMeasure& operator=(const CounterMeasure&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 32 */ float linearDrag;
        /* 33 */ float range;
        /* 34 */ float diversionPercentage;
    };
}