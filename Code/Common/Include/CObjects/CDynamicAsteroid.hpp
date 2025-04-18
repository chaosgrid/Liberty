#pragma once

#include "CObject.hpp"

namespace Archetype
{
    class DynamicAsteroid;
}

struct CDynamicAsteroid : CObject
{
        COMMON_DEC virtual ~CDynamicAsteroid();
        COMMON_DEC virtual int update(float, unsigned int);
        COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&, unsigned int);

        struct COMMON_DEC CreateParms
        {
                CreateParms();
                CreateParms& operator=(const CreateParms&);

                unsigned char data[OBJECT_DATA_SIZE];
        };

        COMMON_DEC CDynamicAsteroid(const CDynamicAsteroid&);
        COMMON_DEC CDynamicAsteroid();
        COMMON_DEC const Archetype::DynamicAsteroid* dynamicAsteroidArch() const;
        COMMON_DEC void init(const CreateParms&);
};
