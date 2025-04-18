#pragma once
#include <FLHookCore.h>

namespace BaseGroupMessage
{
    enum Type
    {
    };
}; // namespace BaseGroupMessage

class CPlayerGroup
{
    public:
        SERVER_DEC CPlayerGroup(const CPlayerGroup&);
        SERVER_DEC CPlayerGroup();
        SERVER_DEC virtual ~CPlayerGroup();
        SERVER_DEC CPlayerGroup& operator=(const CPlayerGroup&);
        SERVER_DEC bool AddInvite(unsigned int);
        SERVER_DEC bool AddMember(unsigned int);
        SERVER_DEC bool DelInvite(unsigned int);
        SERVER_DEC bool DelMember(unsigned int);
        SERVER_DEC void DeliverChat(unsigned long, const void*);
        SERVER_DEC static CPlayerGroup* FromGroupID(unsigned int);
        SERVER_DEC unsigned int GetID();
        SERVER_DEC unsigned int GetInviteCount();
        SERVER_DEC unsigned int GetMember(int) const;
        SERVER_DEC unsigned int GetMemberCount();
        SERVER_DEC unsigned int GetMissionID();
        SERVER_DEC unsigned int GetMissionSetBy();
        SERVER_DEC void HandleClientLogout(unsigned int);
        SERVER_DEC bool IsFull();
        SERVER_DEC bool IsInvited(unsigned int);
        SERVER_DEC bool IsMember(unsigned int);
        SERVER_DEC void RewardMembers(int);
        SERVER_DEC void SendChat(int, const unsigned short*, ...);
        SERVER_DEC void SendGroup(BaseGroupMessage::Type, unsigned int);
        SERVER_DEC void SetMissionID(unsigned int, unsigned int);
        SERVER_DEC void SetMissionMessage(struct CSetMissionMessage&);
        SERVER_DEC void SetMissionObjectives(struct CMissionObjectives&);
        SERVER_DEC void StoreMemberList(st6::vector<unsigned int>&);

    protected:
        SERVER_DEC static st6::map<const unsigned int, CPlayerGroup*, st6::less<const unsigned int>, st6::allocator<CPlayerGroup*>> groupIdToGroupPtrMap;
        SERVER_DEC static unsigned int groupId;

    public:
        byte unk[0x14];
        uint memberCount;
};
