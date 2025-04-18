#pragma once
#include "../../../FLCoreDefs.hpp"

class CECloakingDevice : public CExternalEquip
{
    public:
    COMMON_DEC virtual ~CECloakingDevice();
    COMMON_DEC virtual bool Update(float, unsigned int);
    COMMON_DEC virtual bool Activate(bool);

    COMMON_DEC static CECloakingDevice* cast(CEquip*);
    COMMON_DEC static const CECloakingDevice* cast(const CEquip*);

    COMMON_DEC CECloakingDevice(const CECloakingDevice&);
    COMMON_DEC CECloakingDevice(CEqObj*, unsigned short, const Archetype::CloakingDevice*, bool);
    COMMON_DEC const Archetype::CloakingDevice* CloakArch() const;
    COMMON_DEC float cloak_percent() const;
};