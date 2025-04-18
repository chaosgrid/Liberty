#pragma once


class CELightEquip : CEquip
{
    public:
    COMMON_DEC virtual ~CELightEquip();
    COMMON_DEC virtual void NotifyArchGroupDestroyed(unsigned short);

    COMMON_DEC static CELightEquip* cast(CEquip*);
    COMMON_DEC static const CELightEquip* cast(const CEquip*);

    COMMON_DEC CELightEquip(const CELightEquip&);
    COMMON_DEC CELightEquip(CEqObj*, unsigned short, const Archetype::Light*, bool);
    COMMON_DEC const Archetype::Light* LightArch() const;
};