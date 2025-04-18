#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct Armor : Equipment
    {
        COMMON_DEC Armor(const Armor&);
        COMMON_DEC Armor(IClObj*);
        COMMON_DEC virtual ~Armor();
        COMMON_DEC Armor& operator=(const Armor&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float hitPointsScale;
    };
}