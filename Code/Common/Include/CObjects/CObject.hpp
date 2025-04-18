#pragma once

#include "EngineObject.hpp"

struct CBase;
namespace Archetype
{
    struct Root;
}
namespace PhySys
{
    class PhyCollisionStateManager;
    struct CreateParms;
}
struct CObject : public EngineObject
{
    public:
        COMMON_DEC virtual void __stdcall destroy_instance(long);                   // 8
        COMMON_DEC virtual ~CObject();                                              // 56
        COMMON_DEC virtual void open(Archetype::Root*);                             // 76
        COMMON_DEC virtual int update(float, unsigned int);                         // 80
        COMMON_DEC virtual FLHookCore::Vector get_velocity() const;                             // 84
        COMMON_DEC virtual FLHookCore::Vector get_angular_velocity() const;                     // 88
        COMMON_DEC virtual void disable_controllers();                              // 92
        COMMON_DEC virtual void enable_controllers();                               // 96
        COMMON_DEC virtual float get_physical_radius_r(Vector&) const;              // 100
        COMMON_DEC virtual FLHookCore::Vector get_center_of_mass() const;                       // 104
        COMMON_DEC virtual float get_mass() const;                                  // 108
        COMMON_DEC virtual bool get_surface_extents(Vector&, FLHookCore::Vector&) const;        // 112
        COMMON_DEC virtual void unmake_physical();                                  // 116
        COMMON_DEC virtual void remake_physical(const PhySys::CreateParms&, float); // 120
        COMMON_DEC virtual void beam_object(const FLHookCore::Vector&, const FLHookCore::Matrix&, bool);    // 124

        enum Class
        {
            COBJECT_MASK = 0x1,
            CSIMPLE_MASK = 0x2 | COBJECT_MASK,
            CPROJECTILE_MASK = 0x4 | CSIMPLE_MASK,
            CEQOBJ_MASK = 0x100 | CSIMPLE_MASK,

            // CObject children
            CEQUIPMENT_OBJECT = 0x2000 | COBJECT_MASK,
            CDYNAMICASTEROID_OBJECT = 0x4000 | COBJECT_MASK,

            // CSimple children
            CLOOT_OBJECT = 0x800 | CSIMPLE_MASK,
            CASTEROID_OBJECT = 0x1000 | CSIMPLE_MASK,

            // CProjectile children
            CMINE_OBJECT = 0x8 | CPROJECTILE_MASK,
            CCOUNTERMEASURE_OBJECT = 0x10 | CPROJECTILE_MASK,
            CBEAM_OBJECT = 0x60 | CPROJECTILE_MASK,
            CGUIDED_OBJECT = 0xA0 | CPROJECTILE_MASK,

            // CEqObj children
            CSOLAR_OBJECT = 0x200 | CEQOBJ_MASK,
            CSHIP_OBJECT = 0x400 | CEQOBJ_MASK,
        };

        COMMON_DEC static CObject* Alloc(Class);
        COMMON_DEC static CObject* Find(const unsigned int&, Class);
        COMMON_DEC static CObject* Find(long, Class);
        COMMON_DEC static CObject* FindFirst(Class);
        COMMON_DEC static CObject* FindNext();
        COMMON_DEC static int Count(Class);
        COMMON_DEC static void ReleaseAll();
        COMMON_DEC static const unsigned int NoActions;
        COMMON_DEC static const unsigned int NoBehavior;
        COMMON_DEC static const unsigned int NoCountermeasureAi;
        COMMON_DEC static const unsigned int NoDynamics;
        COMMON_DEC static const unsigned int NoScanner;
        COMMON_DEC static const unsigned int UpdateDefault;
        COMMON_DEC static const unsigned int UpdateDumb;

        COMMON_DEC static void* operator new(unsigned int);
        COMMON_DEC static void operator delete(void*);

        COMMON_DEC CObject(const CObject&);
        COMMON_DEC CObject(Class);
        COMMON_DEC unsigned int AddRef();
        COMMON_DEC unsigned int Release();
        COMMON_DEC void add_impulse(const FLHookCore::Vector&, const FLHookCore::Vector&);
        COMMON_DEC void add_impulse(const FLHookCore::Vector&);
        COMMON_DEC void advise(CBase*, bool);
        COMMON_DEC void enable_collisions_r(bool);
        COMMON_DEC bool flag_part_as_shield(unsigned int);
        COMMON_DEC Archetype::Root* get_archetype() const;
        COMMON_DEC FLHookCore::Vector get_moment_of_inertia() const;
        COMMON_DEC float hierarchy_radius(Vector&) const;
        COMMON_DEC float hierarchy_radius() const;
        COMMON_DEC unsigned int inst_to_part(long) const;
        COMMON_DEC bool is_shield_part(unsigned int) const;
        COMMON_DEC long part_to_inst(unsigned int) const;

        Class objectClass; // 19
        uint system;       // 20
        uint dunnoCObject; // 21, relates to all PhySys calls, PhySys calls only occur if this value is nonzero
        struct SurfaceExtents
        {
                uint dunno[2];
                FLHookCore::Vector min, max;
        };
        SurfaceExtents* surf; // 22

        uint dunnoCObject2;                                // 23 Parts related
        uint dunnoCObject3;                                // 24
        bool dunnoCObject4;                                // 25
        uint dunnoCObjectShield1;                          // 26 maybe just Parts related
        uint dunnoCObjectShield2;                          // 27
        uint dunnoCObject5;                                // 28
        uint dunnoCObject6;                                // 29
        bool dunnoCObject7;                                // 30
        void* unkListCObj;                                 // 31 twodirectional list containing a single value
        uint unkListSize;                                  // 32
        PhySys::PhyCollisionStateManager* colStateManager; // 33
        Archetype::Root* archetype;                        // 34
        uint dunnoCObject8;                                // 35
        void* unkListCObj2;                                // 36 used in CObject::advise
        uint unkList2Size;                                 // 37
        uint referenceCounter;                             // 38
};