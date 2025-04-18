#pragma once


class CInternalEquip : public CEquip
{
    public:
    COMMON_DEC virtual ~CInternalEquip();
    COMMON_DEC virtual bool GetEquipDesc(EquipDesc&) const;

    COMMON_DEC static CInternalEquip* cast(CEquip*);
    COMMON_DEC static const CInternalEquip* cast(const CEquip*);

    COMMON_DEC CInternalEquip(const CInternalEquip&);
    COMMON_DEC CInternalEquip(unsigned int, CEqObj*, unsigned short, const Archetype::Equipment*, bool);
};