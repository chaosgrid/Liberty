#pragma once
#include <FLHookCore.h>
#include "EquipDesc.hpp"

#include "GoodType.hpp"

class INI_Reader;
struct GoodDesc
{
        COMMON_DEC GoodDesc();
        COMMON_DEC GoodDesc& operator=(const GoodDesc&);

        COMMON_DEC static void* operator new(unsigned int);
        COMMON_DEC static void operator delete(void*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct GoodDescList
{
        COMMON_DEC GoodDescList(const GoodDescList&);
        COMMON_DEC GoodDescList();
        COMMON_DEC virtual ~GoodDescList();
        COMMON_DEC const GoodDescList& operator=(const GoodDescList&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct GoodInfo
{
        uint i1;
        uint len;
        uint dunno1[16];
        /* 72 */ uint goodId;
        /* 76 */ GoodType type; // 0=commodity, 2=hull, 3=ship
        /* 80 */ uint equipmentId;
        /* 84 */ uint shipGoodId; // if type = GOODINFO_TYPE_HULL
        /* 88 */ float price;
        /* 92 */ float goodSellPrice;
        /* 96 */ float badBuyPrice;
        /* 100 */ float badSellPrice;
        /* 104 */ float goodBuyPrice;
        /* 108 */ uint jumpDist;
        /* 112 */ bool multiCount;
        /* 116 */ char* shopArchetype;
        /* 120 */ char* itemIcon;
        /* 124 */ char* materialLibrary;
        /* 128 */ char* hardpointChild;
        /* 132 */ char* attachmentArchetype;
        /* 136 */ uint idsName;
        /* 140 */ uint idsInfo;
        /* 144 */ uint hullGoodId; // if type = GOODINFO_TYPE_SHIP
        /* 148 */ EquipDescList edlLow;
        /* 160 */ EquipDescList edlMid;
        /* 172 */ EquipDescList edlHigh;
        /* 184 */ uint freeAmmoArchId;
        /* 188 */ uint freeAmmoCount;
};

class GoodInfoList
{
    public:
        COMMON_DEC GoodInfoList(const GoodInfoList&);
        COMMON_DEC GoodInfoList();
        COMMON_DEC ~GoodInfoList();
        COMMON_DEC GoodInfoList& operator=(const GoodInfoList&);
        COMMON_DEC void destroy();
        COMMON_DEC const GoodInfo* find_by_archetype(unsigned int) const;
        COMMON_DEC const GoodInfo* find_by_id(unsigned int) const;
        COMMON_DEC const GoodInfo* find_by_name(const char*) const;
        COMMON_DEC const GoodInfo* find_by_ship_arch(unsigned int) const;
        COMMON_DEC const st6::list<GoodInfo*, st6::allocator<GoodInfo*>>* get_list() const;
        COMMON_DEC void load(const char*);

    private:
        COMMON_DEC void read_Good_block(INI_Reader*, GoodInfo*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace GoodList
{
    COMMON_DEC const GoodInfo* find_by_archetype(unsigned int);
    COMMON_DEC const GoodInfo* find_by_id(unsigned int);
    COMMON_DEC const GoodInfo* find_by_nickname(const char*);
}; // namespace GoodList
