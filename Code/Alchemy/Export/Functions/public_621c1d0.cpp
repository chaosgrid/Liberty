#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6245bb0);

PROC_DECLARE(0x621c1d0, internal_621c1d0, public_621c1d0);
extern "C" NAKED register_t __cdecl internal_621c1d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6245bb0
        UNREACHABLE_TRAP(0x621c1d0)
    }
}
