#include "Common-PCH.h"

PROC_DECLARE(0x62c2e40, internal_62c2e40, public_62c2e40);
extern "C" NAKED register_t __cdecl internal_62c2e40()
{
    __asm
    {
        fld dword ptr ds : [public_639f48c]
        fmul dword ptr ds : [public_639f48c]
        fstp dword ptr ds : [public_63fc518]
        ret 
        UNREACHABLE_TRAP(0x62c2e40)
    }
}
