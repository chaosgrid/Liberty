#pragma once


#include "CEquip.hpp"

class CExternalEquip : public CEquip
{
    public:
        COMMON_DEC virtual ~CExternalEquip();
        COMMON_DEC virtual bool IsDestroyed() const;
        COMMON_DEC virtual bool Update(float, unsigned int);
        COMMON_DEC virtual bool GetEquipDesc(EquipDesc&) const;
        COMMON_DEC virtual void Destroy();
        COMMON_DEC virtual bool GetConnectionPosition(Vector*, FLHookCore::Matrix*) const;
        COMMON_DEC virtual bool IsConnected() const;                           // 88
        COMMON_DEC virtual bool Connect(const char*);                          // 92
        COMMON_DEC virtual CacheString GetParentHPName() const;                // 96
        COMMON_DEC virtual long GetParentConnector(bool) const;                // 100
        COMMON_DEC virtual bool GetHardPointInfo(struct HardpointInfo&) const; // 104
        COMMON_DEC virtual bool GetVelocity(Vector&) const;                    // 108
        COMMON_DEC virtual bool GetCenterOMass(Vector&) const;                 // 112
        COMMON_DEC virtual void Disconnect();                                  // 116

        COMMON_DEC static CExternalEquip* cast(CEquip*);
        COMMON_DEC static const CExternalEquip* cast(const CEquip*);

        COMMON_DEC CExternalEquip(const CExternalEquip&);
        COMMON_DEC CExternalEquip(unsigned int, CEqObj*, unsigned short, const Archetype::Equipment*, bool);

        /* 8 */ char* mountedHardpoint;
        /* 9 */ long parentConnector;
};
