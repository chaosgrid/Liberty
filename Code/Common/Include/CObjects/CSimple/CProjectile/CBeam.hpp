#pragma once
#include "FLCore/FLCoreDefs.hpp"

struct CBeam : public CProjectile
{
    public:
    COMMON_DEC virtual ~CBeam();
    COMMON_DEC virtual FLHookCore::Vector get_velocity() const;
    COMMON_DEC virtual float get_mass() const;
    COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);
    COMMON_DEC virtual void expire_safe_time();

    COMMON_DEC CBeam(const CBeam&);
    COMMON_DEC CBeam(Class);
    COMMON_DEC const char* get_collision_group() const;
    COMMON_DEC const FLHookCore::Vector& get_last_pos() const;
    COMMON_DEC void move(float);
    COMMON_DEC const Archetype::Munition* munitionarch() const;
    COMMON_DEC void set_velocity(const FLHookCore::Vector&);
};