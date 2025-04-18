#pragma once
#include "../Root.hpp"

namespace Archetype
{
    struct Asteroid : Root
    {
        COMMON_DEC Asteroid(const Asteroid&);
        COMMON_DEC Asteroid(IClObj*);
        COMMON_DEC virtual ~Asteroid();
        COMMON_DEC Asteroid& operator=(const Asteroid&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC float get_detect_radius() const;
        COMMON_DEC float get_offset_dist() const;
        COMMON_DEC float get_recharge_time() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);

        public:
        /* 23 */ float detectRadius;
        /* 24 */ float explosionOffset;
        /* 25 */ float rechargeTime;
    };
}