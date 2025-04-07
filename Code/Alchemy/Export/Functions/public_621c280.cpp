#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c280, internal_621c280, public_621c280);
extern "C" NAKED register_t __cdecl internal_621c280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x14], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621c280)
    }
}
