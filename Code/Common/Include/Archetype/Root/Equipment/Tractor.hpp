#pragma once
#include "../Equipment.hpp"
#include "Include/Enums.hpp"

namespace Archetype
{
    struct Tractor : public Equipment
    {
        COMMON_DEC Tractor(const Tractor&);
        COMMON_DEC Tractor(IClObj*);
        COMMON_DEC virtual ~Tractor();
        COMMON_DEC Tractor& operator=(const Tractor&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float maxLength;
        /* 29 */ float reachSpeed;
    };
}