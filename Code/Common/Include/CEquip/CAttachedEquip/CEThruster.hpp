#pragma once

#include "../../PhySys/Controller/CPhysControllerEquip.hpp"

class CEThruster : public CAttachedEquip, public CPhysControllerEquip
{
    public:
    COMMON_DEC virtual void do_simulation_controller(IVP_Event_Sim*, IVP_U_Vector<IVP_Core>*);

    COMMON_DEC virtual ~CEThruster();

    COMMON_DEC virtual bool EnableController();
    COMMON_DEC virtual bool DisableController();
    COMMON_DEC virtual bool IsControllerEnabled() const;

    COMMON_DEC virtual bool Activate(bool);

    COMMON_DEC static CEThruster* cast(CEquip*);
    COMMON_DEC static const CEThruster* cast(const CEquip*);

    COMMON_DEC CEThruster(const CEThruster&);
    COMMON_DEC CEThruster(CEqObj*, unsigned short, const Archetype::Thruster*, bool);
    COMMON_DEC const Archetype::Thruster* ThrusterArch() const;
    COMMON_DEC bool CouldThrust() const;
    COMMON_DEC float GetPowerDraw() const;
    COMMON_DEC float GetThrust() const;
};