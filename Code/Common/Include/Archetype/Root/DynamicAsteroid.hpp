#pragma once
#include "../Root.hpp"

namespace Archetype
{
    struct DynamicAsteroid : Root
    {
        COMMON_DEC DynamicAsteroid(const DynamicAsteroid&);
        COMMON_DEC DynamicAsteroid(IClObj*);
        COMMON_DEC virtual ~DynamicAsteroid();
        COMMON_DEC DynamicAsteroid& operator=(const DynamicAsteroid&);
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);

        public:
        // no fields
    };
}