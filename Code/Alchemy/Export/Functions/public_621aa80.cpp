#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621aa80);

PROC_DECLARE(0x621aa80, internal_621aa80, public_621aa80);
extern "C" NAKED register_t __cdecl internal_621aa80()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621aa80)
    }
}
