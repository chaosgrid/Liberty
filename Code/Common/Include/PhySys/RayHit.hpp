#pragma once


namespace PhySys
{
    struct RayHit
    {
        CObject* collision_object;
        FLHookCore::Vector collision_position;
        FLHookCore::Vector collision_velocity;
        uint unknown;
    };
}