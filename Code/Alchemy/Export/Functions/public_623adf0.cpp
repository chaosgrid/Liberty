#include "Alchemy-PCH.h"

PROC_DECLARE(0x623adf0, internal_623adf0, public_623adf0);
extern "C" NAKED register_t __cdecl internal_623adf0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x90]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623adf0)
    }
}
