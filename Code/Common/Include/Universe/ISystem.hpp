#pragma once


namespace Universe
{
    struct ISystem
    {
        void* pvtable;
        void* pvftable;           // CommReferrable
        size_t msgIdPrefixLength; // FLHookCore::TString<64>
        char msgIdPrefixStr[64];

        uint id;              // Id_String
        const char* nickname; // CacheString
        st6::vector<ISystem*> connections;
        uchar visit;
        uint idsName;
        uint idsInfo;
        const char* file; // CacheString
        FLHookCore::Vector navMapPos;
        st6::list<struct IZone*> zones; // st6::list
        ISpatialPartition* spatial;
        float navMapScale;
        uint spaceMusicHash;
    };
}