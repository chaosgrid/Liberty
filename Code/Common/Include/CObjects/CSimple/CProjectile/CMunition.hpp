#pragma once
#include "FLCore/FLCoreDefs.hpp"

struct CMunition : public CProjectile
{
    public:
    COMMON_DEC virtual ~CMunition();

    COMMON_DEC CMunition(const CMunition&);
    COMMON_DEC CMunition(Class);
    COMMON_DEC const Archetype::Munition* munitionarch() const;
};