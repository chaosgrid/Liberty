#pragma once
#include "../../../FLCoreDefs.hpp"

class CEScanner : public CInternalEquip
{
    public:
        enum class ScanResult
        {
        };

        COMMON_DEC virtual ~CEScanner();
        // virtual bool add_obj(struct IObjRW*);
        COMMON_DEC virtual bool Update(float, unsigned int);

        COMMON_DEC static CEScanner* cast(CEquip*);
        COMMON_DEC static const CEScanner* cast(const CEquip*);

        COMMON_DEC CEScanner(const CEScanner&);
        COMMON_DEC CEScanner(CEqObj*, unsigned short, const Archetype::Scanner*, bool);
        COMMON_DEC float GetCargoScanRange() const;
        COMMON_DEC float GetRadarRange() const;
        COMMON_DEC ScanResult ScanCargo(CEqObj*);
        COMMON_DEC const Archetype::Scanner* ScannerArch() const;
        COMMON_DEC void clear_cache();
        COMMON_DEC void scan_for_types(unsigned int);

        ScanList scanList;
};
