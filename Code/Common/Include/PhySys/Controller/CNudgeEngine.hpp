#pragma once
#include "../../../FLCoreDefs.hpp"

class CNudgeEngine : public CPhysControllerEquip
{
    public:
    COMMON_DEC virtual ~CNudgeEngine();
    COMMON_DEC virtual void do_simulation_controller(IVP_Event_Sim*, IVP_U_Vector<IVP_Core>*);
    COMMON_DEC virtual bool EnableController();

    COMMON_DEC CNudgeEngine(const CNudgeEngine&);
    COMMON_DEC CNudgeEngine();
    COMMON_DEC CNudgeEngine& operator=(const CNudgeEngine&);
    COMMON_DEC bool Activate(bool);
    COMMON_DEC FLHookCore::Vector GetNudgeVec() const;
    COMMON_DEC bool IsActive() const;
    COMMON_DEC void SetNudgeVec(const FLHookCore::Vector&);
    COMMON_DEC void SetOwner(CShip*);

    protected:
    COMMON_DEC static const float NUDGE_CHANGE_THRESHOLD;
    //@@@

    public:
    unsigned char data[OBJECT_DATA_SIZE];
};