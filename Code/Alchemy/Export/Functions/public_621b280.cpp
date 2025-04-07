#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621aa80);

PROC_DECLARE(0x621b280, internal_621b280, public_621b280);
extern "C" NAKED register_t __cdecl internal_621b280()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621aa80
        UNREACHABLE_TRAP(0x621b280)
    }
}
