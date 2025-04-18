#pragma once
#include "../Root.hpp"

namespace Archetype
{
    class COMMON_DEC FuseIgnitionList
    {
        public:
        uint dunno[4];
    };

    struct Equipment : Root
    {
        COMMON_DEC Equipment(const Equipment&);
        COMMON_DEC Equipment(IClObj*);
        COMMON_DEC virtual ~Equipment();
        COMMON_DEC Equipment& operator=(const Equipment&);

        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);
        COMMON_DEC virtual bool load();
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC virtual void free_resources();
        COMMON_DEC virtual HpAttachmentType get_hp_type() const;
        COMMON_DEC virtual Equipment* get_loot_appearance();
        COMMON_DEC virtual struct CargoPod* get_pod_appearance();
        COMMON_DEC virtual bool is_attached() const;

        /* 23 */ float volume;
        /* 24 */ uint useCount;
        /* 25 */ uint unitsPerContainer;
        /* 26 */ uint tractoredExplosionId;
        /* 27 */ bool lootable;
    };
}