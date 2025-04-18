#pragma once
#include "../../../FLCoreDefs.hpp"

#include "FLCore/Common/CEquip/CInternalEquip.hpp"

class CECargo : public CInternalEquip
{
    public:
    COMMON_DEC virtual ~CECargo();
    COMMON_DEC virtual bool IsDestroyed() const;
    COMMON_DEC virtual bool GetEquipDesc(EquipDesc&) const;
    COMMON_DEC virtual void Destroy();
    COMMON_DEC virtual float GetHitPoints() const;
    COMMON_DEC virtual void SetHitPoints(float);
    COMMON_DEC virtual unsigned int GetType() const;                       // 88
    COMMON_DEC virtual void Init(float, unsigned int, const CacheString&); // 92

    COMMON_DEC static CECargo* cast(CEquip*);
    COMMON_DEC static const CECargo* cast(const CEquip*);

    COMMON_DEC CECargo(const CECargo&);
    COMMON_DEC CECargo(CEqObj*, unsigned short, const Archetype::Equipment*, bool);
    COMMON_DEC void AddToStack(unsigned int, float);
    COMMON_DEC const class CECargoPod* GetContainer() const;
    COMMON_DEC unsigned int GetCount() const;
    COMMON_DEC float GetDecayDamagePerSecond() const;
    COMMON_DEC void RemoveFromStack(unsigned int);
    COMMON_DEC void SetCount(unsigned int);

    CECargoPod* cargoPod;
    float hitPts;
    uint count;
};