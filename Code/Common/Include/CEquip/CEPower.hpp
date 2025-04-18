#pragma once


class CEPower : public CEquip
{
    public:
    COMMON_DEC virtual ~CEPower();
    COMMON_DEC virtual bool Update(float, unsigned int);

    COMMON_DEC static CEPower* cast(CEquip*);
    COMMON_DEC static const CEPower* cast(const CEquip*);

    COMMON_DEC CEPower(const CEPower&);
    COMMON_DEC CEPower(CEqObj*, unsigned short, const Archetype::Power*, bool);

    COMMON_DEC float GetCapacity() const;
    COMMON_DEC float GetChargeRate() const;
    COMMON_DEC float GetThrustCapacity() const;
    COMMON_DEC float GetThrustChargeRate() const;
};