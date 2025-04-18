#pragma once
#include "../../../FLCoreDefs.hpp"

#include "../CAttachedEquip.hpp"

namespace Archetype
{
    struct Shield;
    struct ShieldGenerator;
} // namespace Archetype

class CEShield : public CAttachedEquip
{
    public:
        COMMON_DEC virtual ~CEShield();
        COMMON_DEC virtual bool IsFunctioning() const;
        COMMON_DEC virtual bool Update(float, unsigned int);
        COMMON_DEC virtual bool GetEquipDesc(EquipDesc&) const;
        COMMON_DEC virtual bool Activate(bool);
        COMMON_DEC virtual void Destroy();
        COMMON_DEC virtual float GetMaxHitPoints() const;
        COMMON_DEC virtual float GetHitPoints() const;
        COMMON_DEC virtual void SetHitPoints(float);
        COMMON_DEC virtual bool Connect(const char*);
        COMMON_DEC virtual void Disconnect();

        COMMON_DEC static CEShield* cast(CEquip*);
        COMMON_DEC static const CEShield* cast(const CEquip*);

        COMMON_DEC CEShield(const CEShield&);
        COMMON_DEC CEShield(CEqObj*, unsigned short, const Archetype::Shield*, bool);
        COMMON_DEC const Archetype::ShieldGenerator* ShieldGenArch() const;
        COMMON_DEC const Archetype::Shield* ShieldArch() const;
        COMMON_DEC void AttachIntruderChecker();
        COMMON_DEC void DestroyIntruderChecker();
        COMMON_DEC float GetOfflineRebuildTime() const;
        COMMON_DEC float GetOfflineThreshold() const;
        COMMON_DEC float GetWeaponModifier(const ID_String&) const;
        COMMON_DEC void ShieldBatteryBoost(float);
        COMMON_DEC bool Activate_Internal(bool);
        COMMON_DEC void AddGen(class CEShieldGenerator*);
        COMMON_DEC bool CanActivate() const;
        COMMON_DEC void RemGen(CEShieldGenerator*);

        bool internalActivationState;
        float currShieldHitPoints;
        uint seeminglyUnused;
        double rebuildTimestamp;
        st6::vector<CEShieldGenerator*> linkedShieldGen;
        Archetype::ShieldGenerator* highestToughnessShieldGenArch;
        float offlineThreshold;
        float rebuildTime;
        float maxShieldHitPoints;
        void* IntruderCheckerPhySys1;
        void* IntruderCheckerPhySys2;
};
