#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a850, internal_621a850, public_621a850);
extern "C" NAKED register_t __cdecl internal_621a850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x621a850)
    }
}
