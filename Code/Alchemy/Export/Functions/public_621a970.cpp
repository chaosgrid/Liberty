#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a970, internal_621a970, public_621a970);
extern "C" NAKED register_t __cdecl internal_621a970()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x88]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621a970)
    }
}
