#pragma once

#include "../Root.hpp"
#include "../../CArchGroup.hpp"
#include "../../Unknown.hpp"

namespace Archetype
{
    struct EqObj : Root
    {
        COMMON_DEC EqObj(const EqObj&);
        COMMON_DEC EqObj(IClObj*);
        COMMON_DEC virtual ~EqObj();
        COMMON_DEC const EqObj& operator=(const EqObj&);
        COMMON_DEC bool dock_terminal_valid(int) const;
        COMMON_DEC const CollisionGroup* get_group_by_id(unsigned short) const;
        COMMON_DEC const CollisionGroup* get_group_by_name(const CacheString&) const;
        COMMON_DEC bool get_undamaged_collision_group_list(st6::list<CollisionGroupDesc>&) const;
        COMMON_DEC bool traverse_groups(const CollisionGroup*&) const;

        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        public:
        /* 23 */ CollisionGroup* collisionGroup;
        /* 24 */ ushort equipmentIdCounter;
        /* 25 */ uint dunno2;
        /* 26 */ uint dunno3;
        /* 27 */ uint dunno4; // something to do with shield link
        /* 28 */ uint dunno5;
        /* 29 */ uint dunno6;
        /* 30 */ uint dunno7; // fuses?
        /* 31 */ uint dunno9; // fuses?
        /* 32 */ bool isNomad;
        bool dockingCamera;
        /* 33-36 */ st6::vector<DockHardpointInfo> dockInfo;
    };
}
