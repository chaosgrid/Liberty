#pragma once
#include <FLHookCore.h>
#include "Strings.hpp"

class INI_Reader;
class Fuse
{
    public:
        COMMON_DEC Fuse(const ID_String&, float);
        COMMON_DEC Fuse(const Fuse&);
        COMMON_DEC virtual ~Fuse();
        COMMON_DEC Fuse& operator=(const Fuse&);
        COMMON_DEC int ActionCount() const;
        COMMON_DEC void Burn(float);
        COMMON_DEC virtual void FreeActions();
        COMMON_DEC bool IgniteAt(unsigned int, unsigned short, float);
        COMMON_DEC bool IsBurning() const;
        COMMON_DEC bool IsDeathFuse() const;
        COMMON_DEC bool IsSpent() const;
        COMMON_DEC bool IsSpentAt(float) const;
        COMMON_DEC float Lifetime() const;
        COMMON_DEC void Load() const;
        COMMON_DEC const ID_String& Name() const;
        COMMON_DEC bool OverrideLifetime(float);
        COMMON_DEC void RandomizeActions();
        COMMON_DEC bool UnBurn(unsigned short, float);
        COMMON_DEC void UnLoad() const;

    protected:
        COMMON_DEC bool ReadFuseValues(INI_Reader&);

    public:
        /* 1  */ uint archId;
        /* 2  */ float defaultLifetime;
        /* 3  */ bool deathFuse;
        bool align[3];
        /* 4  */ bool dunno2;
        bool dunno3;
        /* 5  */ void* dunno4; // 0x18 size struct
        /* 6  */ void* dunno5; // 0x18 size struct
        /* 7  */ uint dunno6;
        /* 8  */ uint actionCount;
        /* 9  */ bool dunno8;
        bool align2[3];
        /* 10 */ bool dunno9;
        /* 11 */ void* dunno10; // 0x1C size struct, used in isSpentAt
        /* 12 */ uint dunno11;  // isBurning

        unsigned char data[OBJECT_DATA_SIZE];
};

class FuseAction
{
    public:
        COMMON_DEC FuseAction(const FuseAction&);
        COMMON_DEC FuseAction();
        COMMON_DEC virtual ~FuseAction();
        COMMON_DEC FuseAction& operator=(const FuseAction&);
        COMMON_DEC float GetTriggerTime() const;
        COMMON_DEC virtual bool IsTriggered(unsigned short) const;
        COMMON_DEC virtual bool IsTriggered() const;
        COMMON_DEC virtual int Load();
        COMMON_DEC virtual float Randomize();
        COMMON_DEC virtual bool ShouldRandomize() const;
        COMMON_DEC virtual void Trigger(unsigned int, unsigned short);
        COMMON_DEC virtual int UnLoad();
        COMMON_DEC virtual void UnTrigger(unsigned short);

    protected:
        COMMON_DEC virtual void CopyArchProperties(const FuseAction&);
        COMMON_DEC bool ReadFuseActionValue(INI_Reader&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class FuseDB
{
    public:
        COMMON_DEC FuseDB& operator=(const FuseDB&);
        COMMON_DEC static void AddFuseINIFile(const char*);
        COMMON_DEC static void Shutdown();

    protected:
        typedef FLHookCore::TString<260> FLHookCore::TString260;
        COMMON_DEC static st6::list<TString260> m_FuseINIFiles;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};