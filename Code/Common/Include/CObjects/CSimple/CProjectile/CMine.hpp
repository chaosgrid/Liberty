#pragma once
#include "FLCore/FLCoreDefs.hpp"

namespace Archetype
{
    struct Mine;
}
struct CMine : CProjectile
{
    struct COMMON_DEC CreateParms
    {
        CreateParms();
        CreateParms& operator=(const CreateParms&);

        unsigned char data[OBJECT_DATA_SIZE];
    };

    COMMON_DEC virtual ~CMine();
    COMMON_DEC virtual int update(float, unsigned int);
    COMMON_DEC virtual unsigned int get_name() const;
    COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);
    COMMON_DEC virtual void init(const CreateParms&);
    COMMON_DEC virtual void expire_safe_time();

    COMMON_DEC CMine(const CMine&);
    COMMON_DEC CMine(Class);
    COMMON_DEC const Archetype::Mine* minearch();
};