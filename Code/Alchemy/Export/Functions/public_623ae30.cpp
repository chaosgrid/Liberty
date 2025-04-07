#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ae30, internal_623ae30, public_623ae30);
extern "C" NAKED register_t __cdecl internal_623ae30()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623ae30)
    }
}
