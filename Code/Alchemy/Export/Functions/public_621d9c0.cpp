#include "Alchemy-PCH.h"

PROC_DECLARE(0x621d9c0, internal_621d9c0, public_621d9c0);
extern "C" NAKED register_t __cdecl internal_621d9c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x621d9c0)
    }
}
