#pragma once


class IObjInspect;
namespace Archetype
{
    struct Effect;
    struct Explosion
    {
        COMMON_DEC Explosion(const Explosion&);
        COMMON_DEC Explosion(const struct ID_String&);
        COMMON_DEC ~Explosion();
        COMMON_DEC Explosion& operator=(const Explosion&);
        COMMON_DEC bool read(INI_Reader&);
        COMMON_DEC void reset();

        public:
        /*  0 */ uint id;
        /*  1 */ float radius;
        /*  2 */ float impulse;
        /*  3 */ float hullDamage;
        /*  4 */ float energyDamage;

        /*  5 */ uint processType;
        /*  6 */ float lifetime;
        /*  7 */ float lifetime2;
        /*  8 */ bool hasValidId;
        /*  9 */ Effect* effectPtr;
        /*  10 */ uint* dunno2;
        /*  11 */ float childNumPieces;
        /*  12 */ float debrisImpulse;
        /*  13 */ float innardsDebrisStartTime;
        /*  14 */ float innardsDebrisNum;
        /*  15 */ float innardsDebrisRadius;
        /*  16 */ bool hasValidId2;
        /*  17 */ uint* dunno4;
        /*  18 */ IObjInspect* innardsDebrisObject;
        /*  19 */ uint* dunno5;
        /*  20 */ bool hasValidId3;
        /*  21 */ uint* dunno6;
        /*  22 */ uint* dunno7;
        /*  23 */ uint* dunno8;
    };
}