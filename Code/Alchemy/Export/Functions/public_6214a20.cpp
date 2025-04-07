#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214a20, internal_6214a20, public_6214a20);
extern "C" NAKED register_t __cdecl internal_6214a20()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x8C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6214a20)
    }
}
