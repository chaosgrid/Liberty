#pragma once

#include "CInternalEquip.hpp"

class CEArmor : public CInternalEquip
{
    public:
    COMMON_DEC virtual ~CEArmor();

    COMMON_DEC static CEArmor* cast(CEquip*);
    COMMON_DEC static const CEArmor* cast(const CEquip*);

    COMMON_DEC CEArmor(const CEArmor&);
    COMMON_DEC CEArmor(CEqObj*, unsigned short, const Archetype::Armor*, bool);
    COMMON_DEC const Archetype::Armor* ArmorArch() const;
};