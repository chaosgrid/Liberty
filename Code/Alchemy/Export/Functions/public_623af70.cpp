#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623af70);

PROC_DECLARE(0x623af70, internal_623af70, public_623af70);
extern "C" NAKED register_t __cdecl internal_623af70()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x9C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623af70)
    }
}
