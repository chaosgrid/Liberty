#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment/Launcher.hpp"

namespace Archetype
{
    struct Gun : Launcher
    {
        COMMON_DEC Gun(const Gun&);
        COMMON_DEC Gun(IClObj*);
        COMMON_DEC virtual ~Gun();
        COMMON_DEC Gun& operator=(const Gun&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC HpAttachmentType get_hp_type_by_index(int) const;
        COMMON_DEC float get_munition_range() const;
        COMMON_DEC int get_number_of_hp_types() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 40 */ float dispersionAngle;
        /* 41 */ float turnRate;
        /* 42 */ float gunAzimuth[2];
        /* 44 */ float gunElevation[2];
        /* 46 */ bool useGunAzimuth;
        bool useGunElevation;
        bool autoTurret;
        /* 47 */ uint hpTypes[4]; // st6::vector?
    };
}