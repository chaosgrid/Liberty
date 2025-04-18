#pragma once
#include "../../../FLCoreDefs.hpp"

class CStrafeEngine : public PhySys::Controller
{
    public:
    COMMON_DEC CStrafeEngine(const CStrafeEngine&);
    COMMON_DEC CStrafeEngine();
    COMMON_DEC virtual ~CStrafeEngine();
    COMMON_DEC CStrafeEngine& operator=(const CStrafeEngine&);
    COMMON_DEC virtual bool EnableController();
    COMMON_DEC StrafeDir GetStrafe() const;
    COMMON_DEC void SetOwner(CShip*);
    COMMON_DEC void SetStrafe(StrafeDir);

    protected:
    //@@@ virtual void do_simulation_controller(class IVP_Event_Sim *,class IVP_U_Vector<class IVP_Core> *);

    public:
    unsigned char data[OBJECT_DATA_SIZE];
};