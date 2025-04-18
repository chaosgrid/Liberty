#pragma once


class CEInternalFX : public CEquip
{
    public:
    COMMON_DEC virtual ~CEInternalFX();
    COMMON_DEC virtual void Destroy();

    COMMON_DEC static CEInternalFX* cast(CEquip*);
    COMMON_DEC static const CEInternalFX* cast(const CEquip*);

    COMMON_DEC CEInternalFX(const CEInternalFX&);
    COMMON_DEC CEInternalFX(CEqObj*, unsigned short, const Archetype::InternalFXEquip*, bool);
    COMMON_DEC const Archetype::InternalFXEquip* InternalFXArch() const;
};