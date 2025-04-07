#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a7f0, internal_621a7f0, public_621a7f0);
extern "C" NAKED register_t __cdecl internal_621a7f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x621a7f0)
    }
}
