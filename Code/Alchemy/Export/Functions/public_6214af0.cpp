#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214af0);

PROC_DECLARE(0x6214af0, internal_6214af0, public_6214af0);
extern "C" NAKED register_t __cdecl internal_6214af0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6214af0)
    }
}
