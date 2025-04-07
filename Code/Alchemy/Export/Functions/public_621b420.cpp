#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a600);

PROC_DECLARE(0x621b420, internal_621b420, public_621b420);
extern "C" NAKED register_t __cdecl internal_621b420()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a600
        UNREACHABLE_TRAP(0x621b420)
    }
}
