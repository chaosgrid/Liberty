#pragma once
#include "../../../FLCoreDefs.hpp"

struct CShip;
class CETractor : public CInternalEquip
{
    public:
    COMMON_DEC virtual ~CETractor();
    COMMON_DEC virtual bool Update(float, unsigned int);

    COMMON_DEC static CETractor* cast(CEquip*);
    COMMON_DEC static const CETractor* cast(const CEquip*);

    COMMON_DEC CETractor(const CETractor&);
    COMMON_DEC CETractor(CShip*, unsigned short, const Archetype::Tractor*, bool);
    COMMON_DEC const Archetype::Tractor* TractorArch() const;
    COMMON_DEC enum TractorFailureCode AddTarget(struct CLoot*);
    COMMON_DEC int CountActiveArms() const;
    COMMON_DEC float GetRange() const;
    COMMON_DEC FLHookCore::Vector GetSourcePos() const;
    COMMON_DEC const class TractorArm* GetTractorArm(unsigned int) const;
    COMMON_DEC const st6::vector<TractorArm>& GetTractorArms() const;
    COMMON_DEC void RemoveTarget(unsigned int);
    COMMON_DEC TractorFailureCode VerifyTarget(const CLoot*) const;
    COMMON_DEC bool CanSeeTarget(const CLoot*) const;
};