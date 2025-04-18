#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../EqObj.hpp"

namespace Archetype
{
    struct Solar : public EqObj
    {
        COMMON_DEC Solar(const Solar&);
        COMMON_DEC Solar(IClObj*);
        COMMON_DEC virtual ~Solar();
        COMMON_DEC Solar& operator=(const Solar&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 37 */ bool destrutible;
        /* 38 */ float solarRadius;
        /* 39 */ uint toughness;
        /* 40 */ char* openAnim;
        /* 41 */ char* jumpOutHp;
        /* 42 */ uint loadoutId;
    };
}