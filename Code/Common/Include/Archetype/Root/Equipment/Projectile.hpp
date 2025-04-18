#pragma once
#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../Equipment.hpp"

namespace Archetype
{
    struct Projectile : Equipment
    {
        COMMON_DEC Projectile(const Projectile&);
        COMMON_DEC Projectile(IClObj*);
        COMMON_DEC virtual ~Projectile();
        COMMON_DEC Projectile& operator=(const Projectile&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual Equipment* get_loot_appearance();
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 28 */ float lifeTime;
        /* 29 */ float ownerSafeTime;
        /* 30 */ bool requiresAmmo;
        bool forceGunOri;
        /* 31 */ uint lootAppearanceId;
    };
}