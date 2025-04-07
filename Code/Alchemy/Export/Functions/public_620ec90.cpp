#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ec90);

PROC_DECLARE(0x620ec90, internal_620ec90, public_620ec90);
extern "C" NAKED register_t __cdecl internal_620ec90()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620ec90)
    }
}
