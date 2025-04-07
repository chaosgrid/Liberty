#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a4f0);

PROC_DECLARE(0x621b410, internal_621b410, public_621b410);
extern "C" NAKED register_t __cdecl internal_621b410()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a4f0
        UNREACHABLE_TRAP(0x621b410)
    }
}
