#pragma once

#include <FLHookCore.h>
#include "Strings.hpp"

struct EquipDescVector;
struct EquipDesc
{
        COMMON_DEC EquipDesc(const EquipDesc&);
        COMMON_DEC EquipDesc();
        COMMON_DEC EquipDesc& operator=(const EquipDesc&);
        COMMON_DEC bool operator==(const EquipDesc&) const;
        COMMON_DEC bool operator!=(const EquipDesc&) const;
        COMMON_DEC bool operator<(const EquipDesc&) const;
        COMMON_DEC bool operator>(const EquipDesc&) const;

        COMMON_DEC static const CacheString CARGO_BAY_HP_NAME;
        COMMON_DEC unsigned int get_arch_id() const;
        COMMON_DEC float get_cargo_space_occupied() const;
        COMMON_DEC int get_count() const;
        COMMON_DEC const CacheString& get_hardpoint() const;
        COMMON_DEC unsigned short get_id() const;
        COMMON_DEC int get_owner() const;
        COMMON_DEC float get_status() const;
        COMMON_DEC bool get_temporary() const;
        COMMON_DEC bool is_equipped() const;
        COMMON_DEC bool is_internal() const;
        COMMON_DEC void make_internal();
        COMMON_DEC void set_arch_id(unsigned int);
        COMMON_DEC void set_count(int);
        COMMON_DEC void set_equipped(bool);
        COMMON_DEC void set_hardpoint(const CacheString&);
        COMMON_DEC void set_id(unsigned short);
        COMMON_DEC void set_owner(int);
        COMMON_DEC void set_status(float);
        COMMON_DEC void set_temporary(bool);

    public:
        /* 0 */ ushort dunno;
        ushort id;
        /* 1 */ uint archId;
        /* 2 */ CacheString hardPoint;
        /* 3 */ bool mounted;
        /* 4 */ float health;
        /* 5 */ ushort count;
        ushort padding;
        /* 6 */ bool mission;
        /* 7 */ uint owner;
};

class EquipDescList
{
    public:
        COMMON_DEC EquipDescList(const EquipDescVector&);
        COMMON_DEC EquipDescList(const EquipDescList&);
        COMMON_DEC EquipDescList();
        COMMON_DEC ~EquipDescList();
        COMMON_DEC EquipDescList& operator=(const EquipDescList&);
        COMMON_DEC int add_equipment_item(const EquipDesc&, bool);
        COMMON_DEC void append(const EquipDescList&);
        COMMON_DEC EquipDesc* find_equipment_item(const CacheString&);
        COMMON_DEC EquipDesc* find_equipment_item(unsigned short);
        COMMON_DEC const EquipDesc* find_equipment_item(const CacheString&) const;
        COMMON_DEC const EquipDesc* find_equipment_item(unsigned short) const;
        COMMON_DEC const EquipDesc* find_matching_cargo(unsigned int, int, float) const;
        COMMON_DEC float get_cargo_space_occupied() const;
        COMMON_DEC int remove_equipment_item(unsigned short, int);
        COMMON_DEC EquipDesc* traverse_equipment_type(unsigned int, const EquipDesc*);
        COMMON_DEC const EquipDesc* traverse_equipment_type(unsigned int, const EquipDesc*) const;

    public:
        st6::list<EquipDesc> equip;
};

struct EquipDescVector
{
        COMMON_DEC EquipDescVector(const EquipDescVector&);
        COMMON_DEC EquipDescVector(const EquipDescList&);
        COMMON_DEC EquipDescVector();
        COMMON_DEC ~EquipDescVector();
        COMMON_DEC EquipDescVector& operator=(const EquipDescVector&);
        COMMON_DEC int add_equipment_item(const EquipDesc&, bool);
        COMMON_DEC void append(const EquipDescVector&);
        COMMON_DEC EquipDesc* traverse_equipment_type(unsigned int, const EquipDesc*);

    public:
        st6::vector<EquipDesc> equip;
};