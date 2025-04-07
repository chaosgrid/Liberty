#include "Alchemy-PCH.h"

PROC_DECLARE(0x621d9d0, internal_621d9d0, public_621d9d0);
extern "C" NAKED register_t __cdecl internal_621d9d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x621d9d0)
    }
}
