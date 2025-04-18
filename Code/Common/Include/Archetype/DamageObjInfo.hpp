#pragma once


namespace Archetype
{
    struct COMMON_DEC DamageObjInfo
    {
        DamageObjInfo(const DamageObjInfo&);
        DamageObjInfo();
        DamageObjInfo& operator=(const DamageObjInfo&);
        bool operator==(const DamageObjInfo&) const;
        bool operator!=(const DamageObjInfo&) const;
        bool operator<(const DamageObjInfo&) const;
        bool operator>(const DamageObjInfo&) const;

        public:
        unsigned char data[OBJECT_DATA_SIZE];
    };

    class DamageObjInfoList
    {
        public:
        COMMON_DEC DamageObjInfoList(const DamageObjInfoList&);
        COMMON_DEC DamageObjInfoList();
        COMMON_DEC ~DamageObjInfoList();
        COMMON_DEC DamageObjInfoList& operator=(const DamageObjInfoList&);
        COMMON_DEC bool IsValid();

        public:
        bool dunno1;
        void* dunnoPtr; // 16 byte size
        uint dunno2;
    };
}