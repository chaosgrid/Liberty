#pragma once
#include "../../../FLCoreDefs.hpp"

class CPhysAttachment
{
    public:
    COMMON_DEC virtual ~CPhysAttachment();
    COMMON_DEC virtual long GetRootIndex() const;
    COMMON_DEC virtual CObject* GetPhysicsOwner() const;
    COMMON_DEC virtual void EnableCollisions(bool);
    COMMON_DEC virtual bool Connect(CAttachedEquip*);
    COMMON_DEC virtual CObject* Disconnect(CAttachedEquip*, bool);

    COMMON_DEC CPhysAttachment(const CPhysAttachment&);
    COMMON_DEC CPhysAttachment();
    COMMON_DEC CPhysAttachment& operator=(const CPhysAttachment&);

    public:
    unsigned char data[OBJECT_DATA_SIZE];
};

class CNonPhysAttachment
{
    public:
    COMMON_DEC virtual ~CNonPhysAttachment();
    COMMON_DEC virtual long GetRootIndex() const;
    COMMON_DEC virtual CObject* GetPhysicsOwner() const;
    COMMON_DEC virtual void EnableCollisions(bool);
    COMMON_DEC virtual bool Connect(CAttachedEquip*);
    COMMON_DEC virtual CObject* Disconnect(CAttachedEquip*, bool);

    COMMON_DEC CNonPhysAttachment(const CNonPhysAttachment&);
    COMMON_DEC CNonPhysAttachment();
    COMMON_DEC CNonPhysAttachment& operator=(const CNonPhysAttachment&);

    public:
    unsigned char data[OBJECT_DATA_SIZE];
};