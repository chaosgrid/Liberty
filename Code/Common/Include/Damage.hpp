#pragma once

#include "Enums.hpp"
#include <FLHookCore.h>

namespace Archetype
{
    struct Explosion;
}

struct DamageEntry
{
    enum class SubObjFate
    {
        Alive = 0,
        Destroyed = 1,
        Debris = 2,
        Disappear = 3,
        Loot = 4
    };

    COMMON_DEC DamageEntry();
    COMMON_DEC DamageEntry& operator=(const DamageEntry&);
    COMMON_DEC bool operator==(const DamageEntry&) const;
    COMMON_DEC bool operator!=(const DamageEntry&) const;
    COMMON_DEC bool operator<(const DamageEntry&) const;
    COMMON_DEC bool operator>(const DamageEntry&) const;
    COMMON_DEC static const char* FateToString(SubObjFate);

    public:
    ushort subObj;
    float health;
    SubObjFate fate;
};

struct ExplosionDamageEvent
{
    uint victimId;
    uint attackerId;
    DamageCause dmgCause;
    FLHookCore::Vector explosionPosition;
    Archetype::Explosion* explosionArchetype;
};

struct DamageList
{
    COMMON_DEC DamageList(const DamageList&);
    COMMON_DEC DamageList();
    COMMON_DEC ~DamageList();
    COMMON_DEC DamageList& operator=(const DamageList&);
    COMMON_DEC static const char* DmgCauseToString(DamageCause);
    COMMON_DEC void add_damage_entry(unsigned short, float, DamageEntry::SubObjFate);
    COMMON_DEC DamageCause get_cause() const;
    COMMON_DEC float get_hit_pts_left(unsigned short) const;
    COMMON_DEC unsigned int get_inflictor_id() const;
    COMMON_DEC unsigned int get_inflictor_owner_player() const;
    COMMON_DEC bool is_destroyed() const;
    COMMON_DEC bool is_inflictor_a_player() const;
    COMMON_DEC void set_cause(DamageCause);
    COMMON_DEC void set_destroyed(bool);
    COMMON_DEC void set_inflictor_id(unsigned int);
    COMMON_DEC void set_inflictor_owner_player(unsigned int);

    public:
    st6::list<DamageEntry> damageEntries;
    bool isDestroyed;
    DamageCause damageCause;
    uint inflictorId;
    uint inflictorPlayerId;
    bool dunno;
};