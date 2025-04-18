#pragma once

#include <FLHookCore.h>
#include "INI_Reader.hpp"

struct FmtStr;
namespace Reputation
{
    struct Relation
    {
            uint hash;
            float reputation;
    };

    struct RepGroup
    {
            uint nameLength;
            char name[16];
            uint nameIds;
            uint infocardIds;
            uint shortNameIds;
    };

    using RepGroupCB = bool (***)(RepGroup*);
    namespace Vibe
    {
        COMMON_DEC int AdjustAttitude(const int&, const int&, float);
        COMMON_DEC int Alloc(const int&);
        COMMON_DEC int AttitudeTowards(const int&, const int&, float&);
        COMMON_DEC int AttitudeTowardsSymmetrical(const int&, const int&, float&, float&);
        COMMON_DEC unsigned int Count();
        COMMON_DEC int EnsureExists(const int&);
        COMMON_DEC int Free(const int&);
        COMMON_DEC void FreeDynamic();
        // ReSharper disable once CppConstParameterInDeclaration
        COMMON_DEC int Get(const int& repId, unsigned int& affiliation, unsigned int& rank, unsigned char& relationCount, Relation* const relations, FmtStr&, FmtStr&, // NOLINT(*-avoid-const-params-in-decls)
                       const unsigned short*& name);
        COMMON_DEC int GetAffiliation(const int&, unsigned int&, bool);
        COMMON_DEC unsigned int GetClientID(int);
        COMMON_DEC int GetGroupFeelingsTowards(const int&, const unsigned int&, float&);
        COMMON_DEC int GetInfocard(const int&, unsigned int&);
        COMMON_DEC int GetName(const int&, FmtStr&, FmtStr&, const unsigned short*&);
        COMMON_DEC int GetRank(const int&, unsigned int&);
        COMMON_DEC int Set(const int&, unsigned int, unsigned int, unsigned char, const Relation*, const FmtStr&, const FmtStr&, const unsigned short*);
        COMMON_DEC int SetAffiliation(const int&, unsigned int, bool);
        COMMON_DEC int SetAttitudeTowardsPlayer(int, float);
        COMMON_DEC int SetClientID(int, unsigned int);
        COMMON_DEC int SetGroupFeelingsTowards(const int&, const unsigned int&, float);
        COMMON_DEC int SetInfocard(const int&, unsigned int);
        COMMON_DEC int SetName(const int&, const FmtStr&, const FmtStr&, const unsigned short*);
        COMMON_DEC int SetRank(const int&, unsigned int);
        COMMON_DEC bool Verify(int);
    }; // namespace Vibe

    COMMON_DEC void FreeFeelings();
    COMMON_DEC st6::map<unsigned int, unsigned int, st6::less<unsigned int>, st6::allocator<unsigned int>>* GetChangedAffiliationClientMap();
    COMMON_DEC bool IsStoryFaction(unsigned int);
    COMMON_DEC void LoadFeelings(INI_Reader&);
    COMMON_DEC void Save(struct ISave*);
    COMMON_DEC void Shutdown();
    COMMON_DEC bool Startup(const char*);
    COMMON_DEC int affect_relation(const unsigned int&, const unsigned int&, float);
    COMMON_DEC void enumerate(RepGroupCB*);
    COMMON_DEC int get_feelings_towards(unsigned int, unsigned int, float&);
    COMMON_DEC unsigned int get_id(const FLHookCore::TString<16>&);
    COMMON_DEC unsigned int get_info_card(unsigned int);
    COMMON_DEC unsigned int get_name(unsigned int);
    COMMON_DEC int get_nickname(FLHookCore::TString<16>&, const unsigned int&);
    COMMON_DEC unsigned int get_short_name(unsigned int);
    COMMON_DEC unsigned int group_count();
    COMMON_DEC void set(const FLHookCore::TString<16>&, Relation* const, unsigned int);
}