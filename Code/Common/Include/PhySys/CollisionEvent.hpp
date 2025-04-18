#pragma once



namespace PhySys
{
    struct CollisionEvent
    {
        CObject* a;
        CObject* b;
        uint dunno1[2];
        FLHookCore::Vector position;
        FLHookCore::Vector normal;
        FLHookCore::Vector velocity;
    };
}