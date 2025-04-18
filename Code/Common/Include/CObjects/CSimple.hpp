#pragma once

#include "CObject.hpp"
#include "FLCore/Common/Enums.hpp"

class IObjDB;

struct CSimple : CObject
{
        struct COMMON_DEC CreateParms
        {
                CreateParms();
                CreateParms& operator=(const CreateParms&);

                uint id;
                struct StarSystem* starSystem;
                uint ownerPlayer;
                float hitpts;
                uint dunno[20];
        };

        COMMON_DEC virtual ~CSimple();                                           // 56
        COMMON_DEC virtual void open(Archetype::Root*);                          // 76
        COMMON_DEC virtual float get_physical_radius_r(Vector&) const;           // 100
        COMMON_DEC virtual void unmake_physical();                               // 116
        COMMON_DEC virtual void beam_object(const FLHookCore::Vector&, const FLHookCore::Matrix&, bool); // 124
        COMMON_DEC virtual void init(const CreateParms&);                        // 128
        COMMON_DEC virtual void cache_physical_props();                          // 132
        COMMON_DEC virtual unsigned int get_name() const;                        // 136
        COMMON_DEC virtual bool is_targetable() const;                           // 140
        COMMON_DEC virtual void connect(IObjDB*);                                // 144
        COMMON_DEC virtual void disconnect(IObjDB*);                             // 148
        COMMON_DEC virtual void set_hit_pts(float);                              // 152
        COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);      // 156

        COMMON_DEC CSimple(const CSimple&);
        COMMON_DEC CSimple(Class);
        COMMON_DEC unsigned int GetOwnerPlayer() const;
        COMMON_DEC void SetOwnerPlayer(unsigned int);
        COMMON_DEC float get_hit_pts() const;
        COMMON_DEC const unsigned int& get_id() const;
        COMMON_DEC float get_max_hit_pts() const;
        COMMON_DEC IObjDB* get_object_database() const;
        COMMON_DEC float get_relative_health() const;
        COMMON_DEC float get_scanner_interference() const;
        COMMON_DEC unsigned int get_type() const;
        COMMON_DEC void update_zones(float, unsigned int);

        uint dunnoCSimple;       // 39
        uint dunnoTargetable;    // 40
        uint dunnoScanner;       // 41
        uint dunnoCSimple3;      // 42
        IObjDB* objDB;           // 43
        uint id;                 // 44
        uint ownerPlayer;        // 45
        float hitPoints;         // 46
        uint dunnoCSimple4[0x5]; // 47
        FLHookCore::Vector radiusCenter;     // 52
        float radiusCentered;    // 55
        ObjectType type;         // 56
};
