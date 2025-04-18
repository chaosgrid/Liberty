#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct Scanner final : Equipment
    {
        COMMON_DEC Scanner(const Scanner&);
        COMMON_DEC Scanner(IClObj*);
        COMMON_DEC virtual ~Scanner();
        COMMON_DEC Scanner& operator=(const Scanner&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float powerUsage;
        /* 29 */ float range;
        /* 30 */ float cargoScanRange;
    };
}