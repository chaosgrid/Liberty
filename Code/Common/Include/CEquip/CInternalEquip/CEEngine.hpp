#pragma once

#include <FLCore/Common/PhySys/Controller/CPhysControllerEquip.hpp>
#include "../../../FLCoreDefs.hpp"

struct CShip;
class CEEngine : public CInternalEquip, public CPhysControllerEquip
{
    public:
    COMMON_DEC virtual void do_simulation_controller(IVP_Event_Sim*, IVP_U_Vector<IVP_Core>*);

    COMMON_DEC virtual ~CEEngine();

    COMMON_DEC virtual bool EnableController();
    COMMON_DEC virtual bool DisableController();
    COMMON_DEC virtual bool IsControllerEnabled() const;

    COMMON_DEC virtual bool IsFunctioning() const;
    COMMON_DEC virtual void NotifyArchGroupDestroyed(unsigned short);
    COMMON_DEC virtual bool Update(float, unsigned int);
    COMMON_DEC virtual bool Activate(bool);

    COMMON_DEC static void BuildNozzleHPName(int, CacheString&);
    COMMON_DEC static CEEngine* cast(CEquip*);
    COMMON_DEC static const CEEngine* cast(const CEquip*);

    COMMON_DEC CEEngine(const CEEngine&);
    COMMON_DEC CEEngine(CShip*, unsigned short, const Archetype::Engine*, bool);
    COMMON_DEC bool EngageCruise(bool, bool);
    COMMON_DEC const Archetype::Engine* EngineArch() const;
    COMMON_DEC const st6::vector<struct ExhaustNozzleInfo>& NozzleInfos() const;
    COMMON_DEC float GetCruiseChargeTime() const;
    COMMON_DEC float GetCruiseChargeTimeElapsed() const;
    COMMON_DEC float GetCruiseDrag() const;
    COMMON_DEC float GetCruisePowerDraw() const;
    COMMON_DEC float GetCruiseThrust(float) const;
    COMMON_DEC float GetLinearDrag() const;
    COMMON_DEC float GetPowerDraw(float) const;
    COMMON_DEC float GetThrust(float) const;
    COMMON_DEC bool IsCruiseEngaged() const;

    /* 13 */ uint dunno[6]; // nozzle hardpoints in here, vector/list?
    /* 19 */ float targetSpeed; // unconfirmed
    /* 20 */ float cruiseDisruptionTime;
    /* 21 */ bool cruiseEngaged;
};