#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct Commodity : Equipment
    {
        COMMON_DEC Commodity(const Commodity&);
        COMMON_DEC Commodity(IClObj*);
        COMMON_DEC virtual ~Commodity();
        COMMON_DEC Commodity& operator=(const Commodity&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC float get_decay_per_second() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual Equipment* get_loot_appearance();
        COMMON_DEC virtual CargoPod* get_pod_appearance();
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float decayPerSecond;
        /* 29 */ uint lootAppearanceId;
        /* 30 */ uint podAppearanceId;
    };
}