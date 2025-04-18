#pragma once
#include <FLHookCore.h>
#include "Archetype/CollisionGroup.hpp"
#include "Archetype/DamageObjInfo.hpp"
#include "Damage.hpp"
#include "Strings.hpp"

struct CObject;
namespace Archetype
{
    class FuseIgnitionList;
}
class CArchGroup
{
    public:
        COMMON_DEC CArchGroup(const Archetype::CollisionGroup&, struct CEqObj* const);
        COMMON_DEC ~CArchGroup();
        COMMON_DEC const ID_String& DebrisTypeName() const;
        COMMON_DEC bool DestroysParent() const;
        COMMON_DEC float ExplosionGroupImpulse() const;
        COMMON_DEC float ExplosionParentImpulse() const;
        COMMON_DEC float ExplosionResistance() const;
        COMMON_DEC const ID_String& ExplosionTypeName() const;
        COMMON_DEC const Archetype::FuseIgnitionList& FuseIgnitions() const;
        COMMON_DEC bool GetCenterOMass(FLHookCore::Vector&) const;
        COMMON_DEC void GetCollisionGroupDesc(struct CollisionGroupDesc&) const;
        COMMON_DEC unsigned int GetCollisionGroupType() const;
        COMMON_DEC DamageEntry::SubObjFate GetFate() const;
        COMMON_DEC float GetHitPoints() const;
        COMMON_DEC unsigned short GetID() const;
        COMMON_DEC float GetMaxHitPoints() const;
        COMMON_DEC bool GetRadius(float&) const;
        COMMON_DEC float GetRelativeHealth() const;
        COMMON_DEC long GetRootIndex() const;
        COMMON_DEC bool GetVelocity(FLHookCore::Vector&) const;
        COMMON_DEC const Archetype::DamageObjInfoList& GroupDamageObjs() const;
        COMMON_DEC int InstDepthInGroup(long) const;
        COMMON_DEC bool IsDead() const;
        COMMON_DEC bool IsDestroyed() const;
        COMMON_DEC bool IsInstInGroup(long) const;
        COMMON_DEC bool IsRootHealthProxy() const;
        COMMON_DEC void Kill(DamageEntry::SubObjFate);
        COMMON_DEC float LinkedEquipmentDamage() const;
        COMMON_DEC unsigned int LinkedEquipmentType() const;
        COMMON_DEC const CacheString& Name() const;
        COMMON_DEC const Archetype::DamageObjInfoList& ParentDamageObjs() const;
        COMMON_DEC CObject* RetreiveDestroyedObj();
        COMMON_DEC bool Separable() const;
        COMMON_DEC void SetHitPoints(float);
        COMMON_DEC void SetRelativeHealth(float);

    protected:
        COMMON_DEC void AttachDamageObjs(CObject*, const Archetype::DamageObjInfoList&) const;
        COMMON_DEC void Destroy();
        COMMON_DEC void FreeDamageObjs();
        COMMON_DEC void GetBoundingSphere(float&, FLHookCore::Vector&) const;
        COMMON_DEC void LoadDamageObjs();

    public:
        /* 0  */ CEqObj* owner;
        /* 1  */ Archetype::CollisionGroup* colGrp;
        /* 2  */ int rootIndex;
        /* 3  */ float hitPts;
        /* 4  */ uint dunno;
        /* 5  */ uint state;
        /* 6  */ DamageEntry::SubObjFate fate;
        /* 7  */ CObject* destroyedObj;
        /* 8  */ bool boundingSphereInitialized;
        /* 9  */ float boundingSphereRadius;
        /* 10 */ FLHookCore::Vector boundingSphere;
};

class CArchGroupManager
{
    public:
        COMMON_DEC CArchGroupManager(const CArchGroupManager&);
        COMMON_DEC CArchGroupManager();
        COMMON_DEC ~CArchGroupManager();
        COMMON_DEC CArchGroupManager& operator=(const CArchGroupManager&);
        COMMON_DEC bool AddNewArchGroup(CArchGroup*);
        COMMON_DEC int Clear();
        COMMON_DEC bool DeleteArchGroup(unsigned short);
        COMMON_DEC bool DestroyDeadGroups();
        COMMON_DEC bool DestroyGroups(const DamageList&, bool);
        COMMON_DEC CArchGroup* FindByID(unsigned short);
        COMMON_DEC const CArchGroup* FindByID(unsigned short) const;
        COMMON_DEC CArchGroup* FindByName(const CacheString&);
        COMMON_DEC const CArchGroup* FindByName(const CacheString&) const;
        COMMON_DEC bool Init(CEqObj*);
        COMMON_DEC unsigned short InstToSubObjID(long) const;
        COMMON_DEC bool IsOnMap(unsigned short, bool) const;
        COMMON_DEC int NumLiving() const;
        COMMON_DEC int Size() const;
        COMMON_DEC CArchGroup* Traverse(class CArchGrpTraverser&);
        COMMON_DEC const CArchGroup* Traverse(CArchGrpTraverser&) const;

    protected:
        COMMON_DEC void DestroyDeadGroup(CArchGroup&);
        COMMON_DEC void DestroyLowerGroups(const CArchGroup&);
        COMMON_DEC static const int MAX_GROUP_DEPTH;

    public:
        uint dunno0;  // 0
        bool dunno4;  // 4
        uint dunno8;  // 8
        uint dunno12; // 12
        uint dunno16; // 16
        char size;    // 20
        bool dunno21; // 21
};

class CArchGrpTraverser
{
    public:
        COMMON_DEC CArchGrpTraverser();
        COMMON_DEC CArchGrpTraverser& operator=(const CArchGrpTraverser&);
        COMMON_DEC void Restart();

        unsigned char data[OBJECT_DATA_SIZE];
};

struct CollisionGroupDesc
{
        COMMON_DEC CollisionGroupDesc& operator=(const CollisionGroupDesc&);
        COMMON_DEC bool operator==(const CollisionGroupDesc&) const;
        COMMON_DEC bool operator!=(const CollisionGroupDesc&) const;
        COMMON_DEC bool operator<(const CollisionGroupDesc&) const;
        COMMON_DEC bool operator>(const CollisionGroupDesc&) const;

        unsigned short id;
        float health;
};
