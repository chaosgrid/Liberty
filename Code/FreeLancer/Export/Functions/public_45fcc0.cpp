#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45fcc0, internal_45fcc0, public_45fcc0);
extern "C" NAKED register_t __cdecl internal_45fcc0()
{
    __asm
    {
        fld dword ptr ds : [public_5ceefc]
        fadd dword ptr ds : [public_5cef00]
        fsub dword ptr ds : [public_5cef14]
        fstp dword ptr ds : [public_66d4c4]
        ret 
        UNREACHABLE_TRAP(0x45fcc0)
    }
}
