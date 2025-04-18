#pragma once
#include "../../../FLCoreDefs.hpp"

namespace Archetype
{
    struct Projectile;
}
struct CProjectile : CSimple
{
    struct COMMON_DEC CreateParms
    {
        // CreateParms();
        CreateParms& operator=(const CreateParms&);

        uint hash;
        Archetype::Projectile* archetype;
        float dunno2;
        float startHealth; // -1 = max health
        FLHookCore::Vector position;
        FLHookCore::Matrix orientation;
        FLHookCore::Vector velocity;
        float dunno3[4]; // always 0
        uint owner;
    };

    COMMON_DEC virtual ~CProjectile();                  // 56
    COMMON_DEC virtual int update(float, unsigned int); // 80
    COMMON_DEC virtual void init(const CreateParms&);   // 160
    COMMON_DEC virtual void set_dead();                 // 164
    COMMON_DEC virtual void expire_safe_time();         // 168

    COMMON_DEC CProjectile(const CProjectile&);
    COMMON_DEC CProjectile(Class);
    COMMON_DEC const unsigned int& get_owner() const;
    COMMON_DEC bool is_alive() const;
    COMMON_DEC bool is_owner_safe() const;
    COMMON_DEC const Archetype::Projectile* projarch() const;

    uint ownerId;                 // 57
    float remainingLifetime;      // 58
    float remainingOwnerSafeTime; // 59
};