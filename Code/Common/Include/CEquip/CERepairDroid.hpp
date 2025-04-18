#pragma once


class CERepairDroid : public CEquip
{
    public:
    COMMON_DEC virtual ~CERepairDroid();
    COMMON_DEC virtual float GetHitPoints() const;
    COMMON_DEC virtual void SetHitPoints(float);

    COMMON_DEC static CERepairDroid* cast(CEquip*);
    COMMON_DEC static const CERepairDroid* cast(const CEquip*);

    COMMON_DEC CERepairDroid(const CERepairDroid&);
    COMMON_DEC CERepairDroid(CEqObj*, unsigned short, const Archetype::RepairDroid*, bool);
    COMMON_DEC const Archetype::RepairDroid* RepairDroidArch() const;

    public:
    Archetype::RepairDroid* archetype;
};