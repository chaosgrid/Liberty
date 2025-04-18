#pragma once
#include <FLHookCore.h>

namespace SubObjectID
{
    class COMMON_DEC CollGroupIdMaker
    {
        public:
        CollGroupIdMaker();
        CollGroupIdMaker& operator=(const CollGroupIdMaker&);
        unsigned short CreateGroupID();
        void Reset();

        short currSID;
    };

    class COMMON_DEC EquipIdMaker
    {
        public:
        EquipIdMaker();
        EquipIdMaker& operator=(const EquipIdMaker&);
        unsigned short CreateEquipID();
        void Reset();

        public:
        short currSID;
    };

    class COMMON_DEC ShieldIdMaker
    {
        public:
        ShieldIdMaker();
        ShieldIdMaker& operator=(const ShieldIdMaker&);
        unsigned short CreateShieldID();
        void Reset();

        public:
        short currSID;
    };

    COMMON_DEC bool IsArchGroupID(unsigned short);
    COMMON_DEC bool IsEquipID(unsigned short);
    COMMON_DEC bool IsShieldEquipID(unsigned short);
}