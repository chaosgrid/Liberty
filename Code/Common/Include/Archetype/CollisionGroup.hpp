#pragma once


#include "DamageObjInfo.hpp"
#include "Root/Equipment.hpp"

namespace Archetype
{
    struct CollisionGroup
    {
        COMMON_DEC CollisionGroup(const CollisionGroup&);
        COMMON_DEC CollisionGroup();
        COMMON_DEC ~CollisionGroup();
        COMMON_DEC CollisionGroup& operator=(const CollisionGroup&);

        CollisionGroup* next;
        ushort id;
        CacheString name;
        uint type;
        uint hitPts;
        bool separable;
        bool destroyParent;
        bool rootHealthProxy;
        float parentImpulse;
        float mass;
        bool hasRotationInertia;
        FLHookCore::Vector rotationInertia;
        uint separationExplosionArch;
        uint debrisTypeArch;
        float explosionResistance;
        DamageObjInfoList parentDmgObjInfoList;
        DamageObjInfoList groupDmgObjsInfoList;
        FuseIgnitionList FuseIgnitionList;
        EquipmentClass linkedEquipType;
        float linkedEquipDamage;
    };
}