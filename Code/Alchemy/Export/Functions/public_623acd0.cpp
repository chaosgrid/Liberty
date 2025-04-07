#include "Alchemy-PCH.h"

PROC_DECLARE(0x623acd0, internal_623acd0, public_623acd0);
extern "C" NAKED register_t __cdecl internal_623acd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x623acd0)
    }
}
