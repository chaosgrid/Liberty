#pragma once
#include "../../../FLCoreDefs.hpp"

class CSteering : public PhySys::Controller
{
    public:
    COMMON_DEC CSteering(const CSteering&);
    COMMON_DEC CSteering();
    COMMON_DEC virtual ~CSteering();
    COMMON_DEC CSteering& operator=(const CSteering&);
    COMMON_DEC bool Activate(bool);
    COMMON_DEC virtual bool EnableController();
    COMMON_DEC float GetAxisSteeringTorque(unsigned int, float) const;
    COMMON_DEC const FLHookCore::Vector& GetAxisThrottle() const;
    COMMON_DEC bool IsActive() const;
    COMMON_DEC void SetAxisThrottle(const FLHookCore::Vector&);
    COMMON_DEC void SetOwner(struct CShip*);

    protected:
    COMMON_DEC static const float AXIS_CHANGE_THRESHOLD;
    COMMON_DEC virtual void do_simulation_controller(IVP_Event_Sim*, IVP_U_Vector<IVP_Core>*);

    public:
    unsigned char data[OBJECT_DATA_SIZE];
};
