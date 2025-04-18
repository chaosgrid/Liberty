#pragma once
#include "../../../FLCoreDefs.hpp"

class CELauncher : public CAttachedEquip
{
    public:

    COMMON_DEC virtual ~CELauncher();
    COMMON_DEC virtual bool IsDisabled() const;
    COMMON_DEC virtual bool Update(float, unsigned int);
    COMMON_DEC virtual void GetStatus(EquipStatus&) const;
    COMMON_DEC virtual bool Connect(const char*);
    COMMON_DEC virtual void Disconnect();
    COMMON_DEC virtual FireResult Fire(const FLHookCore::Vector&);
    COMMON_DEC virtual void ConsumeFireResources();
    COMMON_DEC virtual void ComputeLaunchInfo(st6::vector<struct ProjLaunchInfo>&, const FLHookCore::Vector&) const;
    COMMON_DEC virtual float GetPowerDrawPerFire() const;
    COMMON_DEC virtual int GetAmmoCount() const;
    COMMON_DEC virtual bool AmmoNeedsMet() const;
    COMMON_DEC virtual void ComputeLaunchInfo_OneBarrel(ProjLaunchInfo&, int, const FLHookCore::Vector&) const;
    COMMON_DEC virtual FireResult CanFire(const FLHookCore::Vector&) const;
    COMMON_DEC virtual bool PowerNeedsMet() const;
    COMMON_DEC virtual void DrawPower(int);
    COMMON_DEC virtual void DrawAmmoFromCargo(int);
    COMMON_DEC virtual bool RefireDelayElapsed() const;

    COMMON_DEC CELauncher(const CELauncher&);
    COMMON_DEC CELauncher(unsigned int, CEqObj*, unsigned short, const Archetype::Launcher*, bool);
    COMMON_DEC void ComputeProjectilePosAndVelocity_OneBarrel(Vector&, FLHookCore::Vector&, int, const FLHookCore::Vector&) const;
    COMMON_DEC FLHookCore::Vector GetAvgBarrelDirWS() const;
    COMMON_DEC FLHookCore::Vector GetAvgBarrelPosWS() const;
    COMMON_DEC FLHookCore::Vector GetBarrelDirWS(unsigned int) const;
    COMMON_DEC const struct Barrel* GetBarrelInfo(unsigned int) const;
    COMMON_DEC FLHookCore::Vector GetBarrelPosWS(unsigned int) const;
    COMMON_DEC unsigned int GetProjectilesPerFire() const;
    COMMON_DEC const Archetype::Launcher* LauncherArch() const;
    COMMON_DEC const Archetype::Projectile* ProjectileArch() const;
    COMMON_DEC static CELauncher* cast(CEquip*);
    COMMON_DEC static const CELauncher* cast(const CEquip*);

    int dunno[28];
    float OfflineThreshold;
    float OfflineRebuildTime;
    float MaxCapacity;
};