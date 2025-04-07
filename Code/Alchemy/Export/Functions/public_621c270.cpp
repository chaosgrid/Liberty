#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c270, internal_621c270, public_621c270);
extern "C" NAKED register_t __cdecl internal_621c270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621c270)
    }
}
