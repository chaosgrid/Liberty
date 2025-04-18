#pragma once

#include "CExternalEquip.hpp"

namespace Archetype
{
    struct Equipment;
    struct AttachedEquipment;
} // namespace Archetype

class CAttachedEquip : public CExternalEquip
{
    public:
        COMMON_DEC virtual ~CAttachedEquip();
        COMMON_DEC virtual bool Update(float, unsigned int);
        COMMON_DEC virtual float GetHitPoints() const;
        COMMON_DEC virtual void SetHitPoints(float);
        COMMON_DEC virtual bool IsConnected() const;
        COMMON_DEC virtual bool Connect(const char*);
        COMMON_DEC virtual bool GetVelocity(Vector&) const;
        COMMON_DEC virtual bool GetCenterOMass(Vector&) const;
        COMMON_DEC virtual void Disconnect();
        COMMON_DEC virtual int GetToughness() const;                          // 120
        COMMON_DEC virtual bool GetRadius(float&) const;                      // 124
        COMMON_DEC virtual bool IsInstOnEquip(long) const;                    // 128
        COMMON_DEC virtual long GetRootIndex() const;                         // 132
        COMMON_DEC virtual void SetFate(DamageEntry::SubObjFate);             // 136
        COMMON_DEC virtual void ComputeBoundingSphere(float&, FLHookCore::Vector&) const; // 140

        COMMON_DEC static CAttachedEquip* cast(CEquip*);
        COMMON_DEC static const CAttachedEquip* cast(const CEquip*);

        COMMON_DEC CAttachedEquip(const CAttachedEquip&);
        COMMON_DEC CAttachedEquip(unsigned int, CEqObj*, unsigned short, const Archetype::Equipment*, bool);
        COMMON_DEC const Archetype::AttachedEquipment* AttachedEquipArch() const;
        COMMON_DEC CObject* GetPhysicsOwner() const;
        COMMON_DEC CObject* RetrieveDebrisObject();

    public:
        /* 10 */ void* physicsPtr; // either CPhysAttachment::`vftable' or CNonPhysAttachment::`vftable'
        /* 11 */ uint debrisObject;
        /* 12 */ float hitPts;
        /* 13 */ DamageEntry::SubObjFate fate;
        /* 14 */ bool isBoundingSphereInitialized;
        /* 15 */ float boundingSphereRadius;
        /* 16-19 */ FLHookCore::Vector boundingSphere;
};
