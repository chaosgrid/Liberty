#pragma once
#include "../../../FLCoreDefs.hpp"

class CETradeLaneEquip : public CInternalEquip
{
    public:
    COMMON_DEC virtual ~CETradeLaneEquip();

    COMMON_DEC static CETradeLaneEquip* cast(CEquip*);
    COMMON_DEC static const CETradeLaneEquip* cast(const CEquip*);

    COMMON_DEC CETradeLaneEquip(const CETradeLaneEquip&);
    COMMON_DEC CETradeLaneEquip(CEqObj*, unsigned short, const Archetype::TradeLaneEquip*, bool);
    COMMON_DEC const Archetype::TradeLaneEquip* TradeLaneArch() const;

    Archetype::TradeLaneEquip* archType;
};