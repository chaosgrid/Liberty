#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c340, internal_621c340, public_621c340);
extern "C" NAKED register_t __cdecl internal_621c340()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x8C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621c340)
    }
}
