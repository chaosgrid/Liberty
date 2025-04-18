#pragma once
#include "../Equipment.hpp"

namespace Archetype
{
    struct TradeLaneEquip : public Equipment
    {
        COMMON_DEC TradeLaneEquip(const TradeLaneEquip&);
        COMMON_DEC TradeLaneEquip(struct IClObj*);
        COMMON_DEC virtual ~TradeLaneEquip();
        COMMON_DEC TradeLaneEquip& operator=(const TradeLaneEquip&);
        COMMON_DEC virtual ClassType get_class_type() const;

        public:
        // no new fields
    };
}