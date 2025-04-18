#pragma once


#include "../Unknown.hpp"

class CEquip
{
    public:
        COMMON_DEC virtual ~CEquip();                                          // 0
        COMMON_DEC virtual bool IsActive() const;                              // 4
        COMMON_DEC virtual bool IsDestroyed() const;                           // 8
        COMMON_DEC virtual bool IsFunctioning() const;                         // 12
        COMMON_DEC virtual bool IsDisabled() const;                            // 16
        COMMON_DEC virtual bool IsTemporary() const;                           // 20
        COMMON_DEC virtual bool CanDelete() const;                             // 24
        COMMON_DEC virtual void NotifyArchGroupDestroyed(unsigned short);      // 28
        COMMON_DEC virtual bool IsLootable() const;                            // 32
        COMMON_DEC virtual bool Update(float, unsigned int);                   // 36
        COMMON_DEC virtual bool GetEquipDesc(struct EquipDesc&) const;         // 40
        COMMON_DEC virtual void GetStatus(struct EquipStatus&) const;          // 44
        COMMON_DEC virtual bool Activate(bool);                                // 48
        COMMON_DEC virtual void Destroy();                                     // 52
        COMMON_DEC virtual float GetMaxHitPoints() const;                      // 56
        COMMON_DEC virtual float GetHitPoints() const;                         // 60
        COMMON_DEC virtual void SetHitPoints(float);                           // 64
        COMMON_DEC virtual float GetRelativeHealth() const;                    // 68
        COMMON_DEC virtual bool GetConnectionPosition(Vector*, FLHookCore::Matrix*) const; // 72
        COMMON_DEC virtual bool IsControllerEnabled();                         // 76
        COMMON_DEC virtual bool EnableController();                            // 80
        COMMON_DEC virtual bool DisableController();                           // 84

        COMMON_DEC static void* operator new(unsigned int);
        COMMON_DEC static void operator delete(void*);

        COMMON_DEC CEquip();
        COMMON_DEC CEquip(const CEquip&);
        COMMON_DEC CEquip(unsigned int, CEqObj*, unsigned short, const Archetype::Equipment*, bool);

        COMMON_DEC void ConnectClientEquip(INotify*);
        COMMON_DEC void ConnectServerEquip(INotify*);
        COMMON_DEC const Archetype::Equipment* EquipArch() const;
        COMMON_DEC unsigned short GetID() const;
        COMMON_DEC CEqObj* GetOwner() const;
        COMMON_DEC unsigned int GetType() const;
        COMMON_DEC const char* IdentifyEquipment() const;
        COMMON_DEC void Notify(INotify::Event, void*);
        COMMON_DEC void NotifyDisconnecting(INotify*);

        /* 1 */ CEqObj* owner;
        /* 2 */ ushort SubObjId;
        /* 3 */ Archetype::Equipment* archetype;
        /* 4 */ bool isActive;
        bool isDestroyed;
        bool isTemporary;
        /* 5 */ EquipmentClass CEquipType;
        /* 6 */ void* customWrapperClass2;
        /* 7 */ char* dunno;
};
