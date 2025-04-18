#pragma once
#include "../../../../FLCoreDefs.hpp"

class CECounterMeasureDropper : public CELauncher
{
    public:
    COMMON_DEC virtual ~CECounterMeasureDropper();
    COMMON_DEC virtual bool Update(float, unsigned int);

    COMMON_DEC static CECounterMeasureDropper* cast(CEquip*);
    COMMON_DEC static const CECounterMeasureDropper* cast(const CEquip*);

    COMMON_DEC CECounterMeasureDropper(const CECounterMeasureDropper&);
    COMMON_DEC CECounterMeasureDropper(CEqObj*, unsigned short, const Archetype::CounterMeasureDropper*, bool);
    COMMON_DEC const Archetype::CounterMeasure* CounterMeasureArch();
    COMMON_DEC const Archetype::CounterMeasureDropper* CounterMeasureDropperArch();
};