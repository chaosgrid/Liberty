#pragma once
#include "../../../FLCoreDefs.hpp"

class CEAttachedFX : public CExternalEquip
{
    public:
    COMMON_DEC virtual ~CEAttachedFX();
    COMMON_DEC virtual void NotifyArchGroupDestroyed(unsigned short);

    COMMON_DEC static CEAttachedFX* cast(CEquip*);
    COMMON_DEC static const CEAttachedFX* cast(const CEquip*);

    COMMON_DEC CEAttachedFX(const CEAttachedFX&);
    COMMON_DEC CEAttachedFX(CEqObj*, unsigned short, const Archetype::AttachedFXEquip*, bool);
    COMMON_DEC const Archetype::AttachedFXEquip* FXArch() const;
};