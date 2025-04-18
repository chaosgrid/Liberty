#pragma once

#include "CEqObj.hpp"

struct CSolar : public CEqObj
{
    public:
        struct COMMON_DEC CreateParms
        {
                CreateParms();
                CreateParms& operator=(const CreateParms&);

            public:
                uint hash;
                float dunno[3]; // (~0, 0, -1) in float consistently
                FLHookCore::Vector pos;
                FLHookCore::Matrix orientation;
                int dunno1[3];
                FLHookCore::Vector spin;
                int dunno2;

                uint base;
                uint hash2; // rep group? (otherwise it's the hash)
                Costume costume;
                int voiceId;
                int dunnoLoadout[4];
                // class st6::list<struct CollisionGroupDesc> collision;
                int dunno3[3];
                uint idString;
                uint visit;
                uint parent;
                uint destructible;
                // 1, 2, 3 = related to loadouts
                // 4 = class st6::list<struct CollisionGroupDesc> &
                // 7 = ID_String of solar (same as Hash)
                // 8 = visit (only last byte used)
                // 9 = id of parent
                // 10 = destructible (only last byte used)
                uint destSystem;
                uint destGate;
                uint prevRing;
                uint nextRing;
                uint tradelaneSpaceName;
                float atmosphereRange;
                uint dockWith;

                int dunnoAnim[3];
                // 1, 2 = something to do with animations
        };

        COMMON_DEC virtual ~CSolar();
        COMMON_DEC virtual void __stdcall set_velocity(long, const FLHookCore::Vector&);
        COMMON_DEC virtual void __stdcall set_angular_velocity(long, const FLHookCore::Vector&);
        COMMON_DEC virtual int update(float, unsigned int);
        COMMON_DEC virtual FLHookCore::Vector get_velocity() const;
        COMMON_DEC virtual FLHookCore::Vector get_angular_velocity() const;
        COMMON_DEC virtual float get_mass() const;
        COMMON_DEC virtual void cache_physical_props();
        COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);
        COMMON_DEC virtual ObjActivateResult activate(bool, unsigned int);
        COMMON_DEC virtual bool get_activate_state(st6::vector<bool, st6::allocator<bool>>&);
        COMMON_DEC virtual void flush_animations();
        COMMON_DEC virtual CEquip* alloc_equip(unsigned short, Archetype::Equipment*, bool);

        COMMON_DEC CSolar(const CSolar&);
        COMMON_DEC CSolar(Class);
        COMMON_DEC const Archetype::Solar* solararch() const;
        COMMON_DEC const ID_String& GetParentNickname() const;
        COMMON_DEC unsigned char GetVisitValue() const;
        COMMON_DEC static bool ReadObj(INI_Reader&, Archetype::Solar*&, CreateParms&);
        COMMON_DEC void SetVisitValue(unsigned char);
        COMMON_DEC float get_atmosphere_immersion(const FLHookCore::Vector&) const;
        COMMON_DEC float get_atmosphere_range() const;
        COMMON_DEC const ID_String& get_dest_gate() const;
        COMMON_DEC unsigned int get_dest_system() const;
        COMMON_DEC const ID_String& get_loadout() const;
        COMMON_DEC unsigned int get_next_trade_ring() const;
        COMMON_DEC unsigned int get_prev_trade_ring() const;
        COMMON_DEC unsigned int get_tradelane_space_name() const;
        COMMON_DEC void init(const CreateParms&);
        COMMON_DEC bool is_destructible() const;
        COMMON_DEC bool is_dynamic() const;
        COMMON_DEC bool is_lane_ring() const;
        COMMON_DEC bool is_planetary() const;
        COMMON_DEC bool is_system_gate() const;
        COMMON_DEC bool is_waypoint() const;
        COMMON_DEC void configure_system_gate(const char*);
        COMMON_DEC void init_continual_anim(const char*);
        COMMON_DEC void update_system_gate(float);

        uint duplicatedSpaceID; // 105
        bool isDestructible;    // 106
        bool isDynamic;
        float atmosphereRange;            // 107
        uint solarLoadout_possiblyUnused; // 108
        uint jumpDestSystem;              // 109
        uint jumpDestObj;                 // 110
        bool animationBool;               // 111
        uint animationId;                 // 112
        uint animationStateEnum;          // 113
        float animDuration;               // 114
        CObject::Class CSolarClass;       // 115
        void* dunnoListPtr;     // 116 Pointer to two-directional list, individual size 0xC, so only 1 value being kept aside from the prev and next pointers
        uint dunnoListLength;   // 117 length of 116
        uint prevTradeLaneRing; // 118
        uint nextTradeLaneRing; // 119
        uint tradeLaneSpaceName_unused; // 120
        uint visitValue;                // 121
        uint parentNickname;            // 122
};