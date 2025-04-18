#pragma once

#include "CollisionEvent.hpp"

namespace PhySys
{
    struct RayHit;
    struct CreateParms;

    enum IVP_BOOL
    {
    };

    COMMON_DEC float ANOM_LIMITS_MAX_ANGULAR_VELOCITY_PER_PSI;
    COMMON_DEC float ANOM_LIMITS_MAX_VELOCITY;
    COMMON_DEC void AddImpulseAtPoint(CObject*, const FLHookCore::Vector&, const FLHookCore::Vector&);
    COMMON_DEC void AddToAngularVelocityOS(CObject*, const FLHookCore::Vector&);
    COMMON_DEC void AddToVelocity(CObject*, const FLHookCore::Vector&);
    COMMON_DEC void AngularImpulse(CObject*, const FLHookCore::Vector&, float);
    COMMON_DEC void AngularImpulseOS(CObject*, const FLHookCore::Vector&, float);
    COMMON_DEC bool AnyActive();
    COMMON_DEC void Attach(CObject*, CObject*);
    COMMON_DEC int AttachPhantom(CObject*, void*);
    COMMON_DEC float BULLET_LENGTH_FUDGE;
    COMMON_DEC void BeamR(CObject*, const FLHookCore::Vector&, const FLHookCore::Matrix&, bool);
    COMMON_DEC void BuildIVP_Real(CObject*, const CreateParms&);
    COMMON_DEC void BuildIVP_Sphere(CObject*, float, const CreateParms&);
    COMMON_DEC int CreatePhantom(const struct PhantomParms&, const PhyArch::Part&, void*&);
    COMMON_DEC int CreatePhantom(const PhantomParms&, const FLHookCore::Vector&, void*&);
    COMMON_DEC int CreatePhantom(const PhantomParms&, float, void*&);
    COMMON_DEC FLHookCore::Vector DEFAULT_ANGULAR_DAMPING;
    COMMON_DEC float DEFAULT_LINEAR_DAMPING;
    COMMON_DEC void DeactivatePhysics(CObject*);
    COMMON_DEC void DeactivatePhysicsR(CObject*);
    COMMON_DEC void DestroyPhantom(void*);
    COMMON_DEC void Detach(CObject*, const struct DetachParms&);
    COMMON_DEC int DetachPhantom(void*);
    COMMON_DEC int FindRayCollisions(unsigned int system, const FLHookCore::Vector& origin, const FLHookCore::Vector& end, RayHit* rh, int rh_count);
    COMMON_DEC int FindRayIntersect(CObject*, const FLHookCore::Vector&, const FLHookCore::Vector&, RayHit*, int);
    COMMON_DEC int FindSphereCollisions(unsigned int, const FLHookCore::Vector&, float, CObject**, int);
    COMMON_DEC float GOLEM_ANGULAR_DAMP_FACTOR;
    COMMON_DEC FLHookCore::Vector GOLEM_CHILD_ANGULAR_DAMP;
    COMMON_DEC float GOLEM_CHILD_LINEAR_DAMP;
    COMMON_DEC float GOLEM_CHILD_MASS;
    COMMON_DEC float GOLEM_DAMP_FACTOR;
    COMMON_DEC float GOLEM_DELTA_ORIENTATION;
    COMMON_DEC float GOLEM_FORCE_FACTOR;
    COMMON_DEC float GOLEM_MAX_DELTA_POSITION;
    COMMON_DEC float GOLEM_MAX_TORQUE;
    COMMON_DEC FLHookCore::Vector GOLEM_MAX_TRANSLATION_FORCE;
    COMMON_DEC float GOLEM_TORQUE_FACTOR;
    COMMON_DEC void GenerateCollisions(struct CBeam*);
    COMMON_DEC FLHookCore::Vector GetAngularVelocityOS(const CObject*);
    COMMON_DEC FLHookCore::Vector GetCenterOMass(const CObject*);
    COMMON_DEC bool GetClosestPhantomIntruderPos(void*, unsigned int, unsigned int, struct CSimple*&, FLHookCore::Vector&);
    COMMON_DEC const char* GetCollisionGroup(const CObject*);
    COMMON_DEC bool GetCollisionState(const CObject*);
    COMMON_DEC bool GetCollisionStatePhantom(void* const);
    COMMON_DEC void GetCollisions(unsigned int, const CollisionEvent*&, const CollisionEvent*&);
    COMMON_DEC class IVP_Time GetCurrentTime(unsigned int);
    COMMON_DEC void GetDamping(const CObject*, float&, FLHookCore::Vector&);
    COMMON_DEC float GetMass(const CObject*);
    COMMON_DEC FLHookCore::Vector GetMomentOInertia(const CObject*);
    COMMON_DEC float GetRadiusR(const CObject*, bool, FLHookCore::Vector&);
    COMMON_DEC FLHookCore::Vector GetVelocity(const CObject*);
    COMMON_DEC void LinearImpulse(CObject*, const FLHookCore::Vector&, float);
    COMMON_DEC double MATERIAL_ELASTICITY;
    COMMON_DEC double MATERIAL_FRICTION;
    COMMON_DEC int MAX_SPAWNED_MINDIST_COUNT;
    COMMON_DEC double MIN_TIME_BETWEEN_COLLISIONS;
    COMMON_DEC unsigned int MovingObjectCount(unsigned int);
    COMMON_DEC float PHYSICAL_SIM_RATE;
    COMMON_DEC void RCBegin(CSimple*, const FLHookCore::Vector&, const FLHookCore::Vector&, const FLHookCore::Quaternion&, const FLHookCore::Vector&);
    COMMON_DEC void RCEnd(CSimple*);
    COMMON_DEC void RCSet(CSimple*, const FLHookCore::Vector&, const FLHookCore::Quaternion&, double);
    COMMON_DEC float RC_MAX_DELTA_ORIENTATION;
    COMMON_DEC float RC_MAX_DELTA_POSITION;
    COMMON_DEC float RMGR_LOOK_AHEAD_MAX_DISTANCE_INTRA;
    COMMON_DEC float RMGR_LOOK_AHEAD_MAX_DISTANCE_WORLD;
    COMMON_DEC float RMGR_LOOK_AHEAD_MAX_RADIUS_INTRA;
    COMMON_DEC float RMGR_LOOK_AHEAD_MAX_RADIUS_WORLD;
    COMMON_DEC float RMGR_LOOK_AHEAD_MIN_DISTANCE_INTRA;
    COMMON_DEC float RMGR_LOOK_AHEAD_MIN_DISTANCE_WORLD;
    COMMON_DEC float RMGR_LOOK_AHEAD_MIN_SECONDS_INTRA;
    COMMON_DEC float RMGR_LOOK_AHEAD_MIN_SECONDS_WORLD;
    COMMON_DEC float RMGR_LOOK_AHEAD_TIME_INTRA;
    COMMON_DEC float RMGR_LOOK_AHEAD_TIME_WORLD;
    COMMON_DEC void ReMakePhysicalR(CObject*, const CreateParms&, float);
    COMMON_DEC void SetCollisionGroup(CObject*, const char* const);
    COMMON_DEC void SetCollisionState(CObject*, bool);
    COMMON_DEC void SetCollisionStatePhantom(void*, bool);
    COMMON_DEC void SetDamping(CObject*, float, const FLHookCore::Vector&);
    COMMON_DEC void SetMass(CObject*, float);
    COMMON_DEC void SetMomentOInertia(CObject*, const FLHookCore::Vector&);
    COMMON_DEC void Shutdown(unsigned int);
    COMMON_DEC void Startup(unsigned int);
    COMMON_DEC void UnMakePhysicalR(CObject*);
    COMMON_DEC void Update(unsigned int, float);
    COMMON_DEC void Wakeup(CObject*);
    COMMON_DEC IVP_BOOL (*m_pCollisionFilter)(class IVP_Real_Object*, class IVP_Real_Object*);
} // namespace PhySys
