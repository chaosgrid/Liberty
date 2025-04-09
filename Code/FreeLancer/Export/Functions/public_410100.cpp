#include "FreeLancer-PCH.h"

PROC_DECLARE(0x410100, internal_410100, public_410100);
extern "C" NAKED register_t __cdecl internal_410100()
{
    __asm
    {
        fld dword ptr ds : [public_5c890c]
        fadd dword ptr ds : [public_5c8910]
        fstp dword ptr ds : [public_6164d4]
        ret 
        UNREACHABLE_TRAP(0x410100)
    }
}
