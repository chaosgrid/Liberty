#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Projectile.hpp"

namespace Archetype
{
    struct Munition : Projectile
    {
        COMMON_DEC Munition(const Munition&);
        COMMON_DEC Munition(IClObj*);
        COMMON_DEC virtual ~Munition();
        COMMON_DEC Munition& operator=(const Munition&);
        COMMON_DEC static void FreeBeamArchIdx();
        COMMON_DEC static void LoadBeamArchIdx();
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC bool is_guided() const;
        COMMON_DEC virtual bool load();
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);
        ClassType get_class_type() const override { return ClassType::Munition; }

        protected:
        static long beamArchIndex;
        COMMON_DEC virtual void free_resources();

        public:
        /* 32 */ float hullDamage;
        /* 33 */ float energyDamage;
        /* 34 */ uint weaponTypeId;
        /* 35 */ uint motorId;
        /* 36 */ uint seeker; // 2 = lock, dumb = 1, ? = 0
        /* 37 */ float timeToLock;
        /* 38 */ float seekerRange;
        /* 39 */ float seekerFovDeg;
        /* 40 */ float maxAngularVelocity;
        /* 41 */ float detonationDist;
        /* 42 */ uint hpType;
        /* 43 */ bool cruiseDisruptor;
    };
}