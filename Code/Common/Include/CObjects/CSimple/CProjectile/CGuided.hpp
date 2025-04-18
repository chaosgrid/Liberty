#pragma once

#include "../CProjectile.hpp"
#include "../../../Archetype/MotorData.hpp"
#include "../../../Watchable.hpp"

struct CGuided : public CProjectile
{
    public:
    struct COMMON_DEC CreateParms
    {
        CreateParms();
        CreateParms& operator=(const CreateParms&);

        public:
        unsigned char data[OBJECT_DATA_SIZE];
    };

    COMMON_DEC virtual ~CGuided();
    COMMON_DEC virtual int update(float, unsigned int);
    COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);
    COMMON_DEC virtual void expire_safe_time();

    COMMON_DEC static bool seeker_can_see(const FLHookCore::Vector&, const FLHookCore::Vector&, const FLHookCore::Vector&, const Archetype::Munition*);

    COMMON_DEC CGuided(const CGuided&);
    COMMON_DEC CGuided(Class);
    COMMON_DEC const Archetype::MotorData* get_motor_arch() const;
    COMMON_DEC unsigned short get_sub_target() const;
    COMMON_DEC IObjRW* get_target() const;
    COMMON_DEC void init(const CreateParms&);
    COMMON_DEC bool motor_on() const;
    COMMON_DEC bool seeker_can_see(const FLHookCore::Vector&) const;
    COMMON_DEC void set_sub_target(unsigned short);
    COMMON_DEC void set_target(IObjRW*);

    BaseWatcher targetBaseWatcher;   // 60
    ushort targetSId;                // 62
    Archetype::MotorData* mototData; // 63
    float lifetime;                  // 64
};