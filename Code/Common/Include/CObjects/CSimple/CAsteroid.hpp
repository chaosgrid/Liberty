#pragma once
#include "../../../FLCoreDefs.hpp"

namespace CmnAsteroid
{
    class CAsteroidField;
}
namespace Archetype
{
    class Asteroid;
}

struct CAsteroid : CSimple
{
    struct COMMON_DEC CreateParms
    {
        CreateParms();
        CreateParms& operator=(const CreateParms&);

        unsigned char data[OBJECT_DATA_SIZE];
    };

    COMMON_DEC virtual ~CAsteroid();
    COMMON_DEC virtual FLHookCore::Vector get_velocity() const;
    COMMON_DEC virtual int update(float, unsigned int);

    COMMON_DEC const Archetype::Asteroid* asteroidarch() const;
    COMMON_DEC unsigned long get_asteroid_id();
    COMMON_DEC const CmnAsteroid::CAsteroidField* get_owner_field();
    COMMON_DEC void init(const CreateParms&);
    COMMON_DEC bool is_instant_kill();
    COMMON_DEC bool is_mine();
    COMMON_DEC void set_system(unsigned int);
    COMMON_DEC CAsteroid(const CAsteroid&);
    COMMON_DEC CAsteroid();

    protected:
    COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);

    public:
    unsigned char data[OBJECT_DATA_SIZE];
};