#pragma once


namespace Archetype
{
    struct Effect
    {
        Effect* prevEffect;
        Effect* nextEffect;
        unsigned int archId;
        float lifetime; // -1.0 if skipped in config
    };
}