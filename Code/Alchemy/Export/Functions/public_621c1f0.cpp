#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c1f0, internal_621c1f0, public_621c1f0);
extern "C" NAKED register_t __cdecl internal_621c1f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x621c1f0)
    }
}
