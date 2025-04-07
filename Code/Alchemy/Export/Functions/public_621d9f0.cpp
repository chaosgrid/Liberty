#include "Alchemy-PCH.h"

PROC_DECLARE(0x621d9f0, internal_621d9f0, public_621d9f0);
extern "C" NAKED register_t __cdecl internal_621d9f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x621d9f0)
    }
}
