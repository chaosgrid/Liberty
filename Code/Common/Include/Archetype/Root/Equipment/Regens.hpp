#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct RepairDroid : Equipment
    {
        COMMON_DEC RepairDroid(const RepairDroid&);
        COMMON_DEC RepairDroid(IClObj*);
        COMMON_DEC virtual ~RepairDroid();
        COMMON_DEC RepairDroid& operator=(const RepairDroid&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float repairRate;
    };

    struct ShieldBattery : Equipment
    {
        COMMON_DEC ShieldBattery(const ShieldBattery&);
        COMMON_DEC ShieldBattery(IClObj*);
        COMMON_DEC virtual ~ShieldBattery();
        COMMON_DEC ShieldBattery& operator=(const ShieldBattery&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual Equipment* get_loot_appearance();
        COMMON_DEC virtual bool read(struct INI_Reader&);

        public:
        /* 28 */ uint lootAppearanceId;
    };

    struct COMMON_DEC RepairKit final : ShieldBattery
    {
        RepairKit(const RepairKit&);
        RepairKit(IClObj*);
        virtual ~RepairKit();
        RepairKit& operator=(const RepairKit&);
        virtual ClassType get_class_type() const;
        virtual HpAttachmentType get_hp_type() const;
        virtual Equipment* get_loot_appearance();
        virtual bool read(struct INI_Reader&);

        public:
        unsigned char data[OBJECT_DATA_SIZE];
    };
}