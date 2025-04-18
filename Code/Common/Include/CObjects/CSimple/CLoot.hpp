#pragma once

#include "../../../FLCoreDefs.hpp"

struct CLoot : public CSimple
{
    public:
        struct COMMON_DEC CreateParms
        {
                CreateParms();
                CreateParms& operator=(const CreateParms&);

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        COMMON_DEC virtual ~CLoot();
        COMMON_DEC virtual int update(float, unsigned int);
        COMMON_DEC virtual unsigned int get_name() const;
        COMMON_DEC virtual void set_hit_pts(float);
        COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);
        COMMON_DEC virtual void init(const CreateParms&);

        COMMON_DEC Archetype::Equipment* container_arch() const;
        COMMON_DEC Archetype::Equipment* contents_arch() const;

        COMMON_DEC CLoot(const CLoot&);
        COMMON_DEC CLoot(Class);
        COMMON_DEC bool can_ai_tractor() const;
        COMMON_DEC float get_contents_hit_pts() const;
        COMMON_DEC unsigned int get_owner() const;
        COMMON_DEC unsigned int get_units() const;
        COMMON_DEC float get_volume() const;
        COMMON_DEC bool is_loot_temporary() const;
        COMMON_DEC void set_contents_hit_pts(float);
        COMMON_DEC void set_units(unsigned int);

        uint ownerId;                       // 57
        uint name;                          // 58 infocard number
        Archetype::Equipment* contentsArch; // 59
        uint unitCount;                     // 60
        float contentsHitPts;               // 61
        float lootOwnerSafeTime;            // 62
        bool canAITractor;                  // 63
        bool isTemporary;
        uint dunnoCLoot; // 64 doesn't seem to be actually used
};
