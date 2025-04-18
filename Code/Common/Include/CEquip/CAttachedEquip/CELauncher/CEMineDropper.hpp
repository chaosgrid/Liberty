#pragma once
#include "FLCore/FLCoreDefs.hpp"

class CEMineDropper : public CELauncher
{
    public:
    COMMON_DEC virtual ~CEMineDropper();
    COMMON_DEC virtual FireResult CanFire(const FLHookCore::Vector&) const;

    COMMON_DEC static CEMineDropper* cast(CEquip*);
    COMMON_DEC static const CEMineDropper* cast(const CEquip*);

    COMMON_DEC CEMineDropper(const CEMineDropper&);
    COMMON_DEC CEMineDropper(CEqObj*, unsigned short, const Archetype::MineDropper*, bool);
    COMMON_DEC const Archetype::Mine* MineArch();
    COMMON_DEC const Archetype::MineDropper* MineDropperArch();
};