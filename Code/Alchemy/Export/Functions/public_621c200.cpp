#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c200, internal_621c200, public_621c200);
extern "C" NAKED register_t __cdecl internal_621c200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x621c200)
    }
}
