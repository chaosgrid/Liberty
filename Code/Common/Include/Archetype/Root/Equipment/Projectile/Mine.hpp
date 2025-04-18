#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Projectile.hpp"

namespace Archetype
{
    struct Mine : Projectile
    {
        COMMON_DEC Mine(const Mine&);
        COMMON_DEC Mine(IClObj*);
        COMMON_DEC virtual ~Mine();
        COMMON_DEC Mine& operator=(const Mine&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 32 */ float linearDrag;
        /* 33 */ float detonationDist;
        /* 34 */ float seekerDist;
        /* 35 */ float acceleration;
        /* 36 */ float topSpeed;
    };
}