#pragma once
#include "../../../../FLCoreDefs.hpp"

struct CSimple;
class CEGun : public CELauncher
{
    public:
        COMMON_DEC virtual ~CEGun();
        COMMON_DEC virtual bool Update(float, unsigned int);
        COMMON_DEC virtual bool Activate(bool);
        COMMON_DEC virtual bool Connect(const char*);
        COMMON_DEC virtual void Disconnect();
        COMMON_DEC virtual FireResult Fire(const FLHookCore::Vector&);
        COMMON_DEC virtual void ConsumeFireResources();
        COMMON_DEC virtual void ComputeLaunchInfo_OneBarrel(ProjLaunchInfo&, int, const FLHookCore::Vector&) const;
        COMMON_DEC virtual FireResult CanFire(const FLHookCore::Vector&) const;

        COMMON_DEC static const float TARGET_POINT_VALID_TIME;
        COMMON_DEC static CEGun* cast(CEquip*);
        COMMON_DEC static const CEGun* cast(const CEquip*);
        COMMON_DEC static bool ComputeTimeToTgt(const FLHookCore::Vector&, const FLHookCore::Vector&, float, float&);

        COMMON_DEC CEGun(const CEGun&);
        COMMON_DEC CEGun(CEqObj*, unsigned short, const Archetype::Gun*, bool);
        COMMON_DEC const Archetype::Gun* GunArch() const;
        COMMON_DEC const Archetype::Munition* MunitionArch() const;
        COMMON_DEC bool CanPointAt(const FLHookCore::Vector&, float) const;
        COMMON_DEC bool CanSeeTargetObject(float) const;
        COMMON_DEC bool CanSeeTargetPoint(const FLHookCore::Vector&, float) const;
        COMMON_DEC bool ComputeTgtLeadPosition(Vector&) const;
        COMMON_DEC float GetMunitionRange() const;
        COMMON_DEC float GetSecondsTillLock() const;
        COMMON_DEC void GetTarget(CSimple*&, unsigned short&) const;
        COMMON_DEC FLHookCore::Vector GetTurretOrigin() const;
        COMMON_DEC bool IsJointInMotion() const;
        COMMON_DEC bool SetTarget(CSimple*, unsigned short);
        COMMON_DEC void SetTargetPoint(const FLHookCore::Vector&);
        COMMON_DEC bool is_guided() const;
        COMMON_DEC void ComputeTurretFrame();
        COMMON_DEC void DecomposeJointMotion(const FLHookCore::Vector&, float&, float&) const;
        COMMON_DEC bool IsMovable() const;
        COMMON_DEC void LocateJoints();
        COMMON_DEC void LoseJoints();

    protected:
        bool GetTargetObjectPos(Vector&) const;
};
