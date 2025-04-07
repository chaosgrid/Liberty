#include "Freelancer-PCH.h"

PROC_DECLARE(0x562730, internal_562730, public_562730);
extern "C" NAKED register_t __cdecl internal_562730()
{
    __asm
    {
        fld dword ptr ds : [public_5e2080]
        fadd dword ptr ds : [public_67a440]
        fadd dword ptr ds : [public_5d011c]
        fstp dword ptr ds : [public_67a43c]
        ret 
        UNREACHABLE_TRAP(0x562730)
    }
}
