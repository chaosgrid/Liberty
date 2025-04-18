#pragma once
#include "../CProjectile.hpp"

namespace Archetype
{
    struct CounterMeasure;
}
struct CCounterMeasure : CProjectile
{
    COMMON_DEC virtual ~CCounterMeasure();
    COMMON_DEC virtual int update(float, unsigned int);
    COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);
    COMMON_DEC virtual void expire_safe_time();

    COMMON_DEC CCounterMeasure(const CCounterMeasure&);
    COMMON_DEC CCounterMeasure(Class);
    COMMON_DEC const Archetype::CounterMeasure* countermeasure_arch();
};