#pragma once

#include <FLHookCore.h>
#include "Include/Enums.hpp"
#include "../EqObj.hpp"

namespace Archetype
{
    struct Ship : EqObj
    {
        COMMON_DEC Ship(const Ship&);
        COMMON_DEC Ship(IClObj*);
        COMMON_DEC virtual ~Ship();
        COMMON_DEC Ship& operator=(const Ship&);
        COMMON_DEC static const int MAX_EXHAUST_NOZZLES;
        COMMON_DEC virtual ClassType get_class_type() const;
        COMMON_DEC const st6::vector<CacheString>* get_legal_hps(HpAttachmentType) const;
        COMMON_DEC virtual bool read(struct INI_Reader&);
        COMMON_DEC virtual void redefine(const Root&);

        struct HpType
        {
            HpAttachmentType type;
            st6::vector<CacheString> hp;
        };

        /* 37 */ uint dunno12[18];
        /* 55 */ char* bayDoorAnim;
        /* 56 */ char* hpBaySurface;
        /* 57 */ char* hpBayExternal;
        /* 58 */ char* hpTractorSource;
        /* 59 */ uint idsInfo1;
        /* 60 */ uint idsInfo2;
        /* 61 */ uint idsInfo3;
        /* 62 */ uint shipClass;
        /* 63 */ uint numExhaustNozzles;
        /* 64 */ float holdSize;
        /* 65 */ float linearDrag;
        /* 66 */ FLHookCore::Vector angularDrag;
        /* 69 */ FLHookCore::Vector steeringTorque;
        /* 72 */ float nudgeForce;
        /* 73 */ float strafeForce;
        /* 74 */ float strafePowerUsage;
        /* 75 */ float maxBankAngle;
        st6::vector<HpType> hardpoints;
        /* 80 */ uint maxNanobots;
        /* 81 */ uint maxShieldBats;
    };
}