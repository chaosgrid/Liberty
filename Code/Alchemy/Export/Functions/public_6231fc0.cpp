#include "Alchemy-PCH.h"

PROC_DECLARE(0x6231fc0, internal_6231fc0, public_6231fc0);
extern "C" NAKED register_t __cdecl internal_6231fc0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6231fc0)
    }
}
