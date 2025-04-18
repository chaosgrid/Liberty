#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment.hpp"

namespace Archetype
{
    struct ShieldGenerator final : public AttachedEquipment
    {
        struct COMMON_DEC ShieldLink final
        {
            ShieldLink(const ShieldLink&);
            ShieldLink();
            ~ShieldLink();
            ShieldLink& operator=(const ShieldLink&);

            public:
            unsigned char data[0x18];
        };

        COMMON_DEC ShieldGenerator(const ShieldGenerator&);
        COMMON_DEC ShieldGenerator(IClObj*);
        COMMON_DEC virtual ~ShieldGenerator();
        COMMON_DEC ShieldGenerator& operator=(const ShieldGenerator&);
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC HpAttachmentType get_hp_type_by_index(int) const;
        COMMON_DEC int get_number_of_hp_types() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);
        ClassType get_class_type() const override { return ClassType::ShieldGenerator; }

        public:
        /* 34 */ uint hpType;
        /* 35 */ uint shieldTypeId;
        /* 36 */ float regenerationRate;
        /* 37 */ float maxCapacity;
        /* 38 */ float constantPowerDraw;
        /* 39 */ float rebuildPowerDraw;
        /* 40 */ float offlineThreshold;
        float offlineRebuildTime;
        /* 41 */ uint hpShieldType[4]; // std6::vector?
    };
}