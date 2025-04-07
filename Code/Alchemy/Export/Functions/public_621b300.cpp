#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a620);

PROC_DECLARE(0x621b300, internal_621b300, public_621b300);
extern "C" NAKED register_t __cdecl internal_621b300()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a620
        UNREACHABLE_TRAP(0x621b300)
    }
}
