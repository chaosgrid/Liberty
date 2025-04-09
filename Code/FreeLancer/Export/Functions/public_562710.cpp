#include "FreeLancer-PCH.h"

PROC_DECLARE(0x562710, internal_562710, public_562710);
extern "C" NAKED register_t __cdecl internal_562710()
{
    __asm
    {
        fld dword ptr ds : [public_5e2098]
        fadd dword ptr ds : [public_5d011c]
        fstp dword ptr ds : [public_67a440]
        ret 
        UNREACHABLE_TRAP(0x562710)
    }
}
