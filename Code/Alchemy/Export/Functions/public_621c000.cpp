#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c000);

PROC_DECLARE(0x621c000, internal_621c000, public_621c000);
extern "C" NAKED register_t __cdecl internal_621c000()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x621c000)
    }
}
