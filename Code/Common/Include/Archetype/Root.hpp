#pragma once

#include "ArchetypeMethods.hpp"

struct IEngineInstance;
namespace PhyArch
{
    struct Part;
}

namespace Archetype
{
    struct Root
    {
        COMMON_DEC Root(const Root&);
        COMMON_DEC Root(struct IClObj*);
        COMMON_DEC virtual ~Root();
        COMMON_DEC const Root& operator=(const Root&);
        COMMON_DEC void AddRef();
        COMMON_DEC int GetRef() const;
        COMMON_DEC int Release();
        COMMON_DEC long create_instance(IEngineInstance*) const;
        COMMON_DEC long get_engine_index() const;
        COMMON_DEC unsigned int get_id() const;
        COMMON_DEC const PhyArch::Part* get_phy_part(unsigned int) const;
        COMMON_DEC int get_script_index() const;
        COMMON_DEC bool is_loaded() const;

        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);
        COMMON_DEC virtual bool load();
        COMMON_DEC virtual ClassType get_class_type() const;

        protected:
        void free_physical_representation();
        COMMON_DEC virtual void free_resources();
        bool init_physical_representation();

        public:
        /*  1 */ uint unknown;
        /*  2 */ uint archId;
        /*  3 */ char* name;
        /*  4 */ uint archType;
        /*  5 */ uint idsName;
        /*  6 */ uint idsInfo;
        /*  7 */ float hitPoints;
        /*  8 */ float mass;
        /*  9 */ uint explosionArchId;
        /* 10 */ float explosionResistance;
        /* 11x4 */ FLHookCore::Vector rotationInertia;
        /* 14 */ bool hasRotationInertia;
        bool phantomPhysics;
        /* 15 */ uint dunno1;
        /* 16 */ uint dunno2;
        /* 17 */ void* anim;
        /* 18 */ uint array[5]; // not sure about this.
    };
}