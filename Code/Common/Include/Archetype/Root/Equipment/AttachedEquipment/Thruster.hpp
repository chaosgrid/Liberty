#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../AttachedEquipment.hpp"

namespace Archetype
{
    struct Thruster : public AttachedEquipment
    {
        COMMON_DEC Thruster(const Thruster&);
        COMMON_DEC Thruster(IClObj*);
        COMMON_DEC virtual ~Thruster();
        COMMON_DEC Thruster& operator=(const Thruster&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 34 */ float powerUsage;
        /* 35 */ float maxForce;
    };
}