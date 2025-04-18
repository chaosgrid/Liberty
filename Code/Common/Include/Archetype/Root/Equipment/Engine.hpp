#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct Engine : Equipment
    {
        COMMON_DEC Engine(const Engine&);
        COMMON_DEC Engine(IClObj*);
        COMMON_DEC virtual ~Engine();
        COMMON_DEC Engine& operator=(const Engine&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float maxForce;
        /* 29 */ float linearDrag;
        /* 30 */ float powerUsage;
        /* 31 */ float cruisePowerUsage;
        /* 32 */ float cruiseChargeTime;
        /* 33 */ bool indestructible;
        /* 34 */ float reverseFraction;
    };
}