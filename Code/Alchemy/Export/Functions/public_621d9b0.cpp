#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6245bb0);

PROC_DECLARE(0x621d9b0, internal_621d9b0, public_621d9b0);
extern "C" NAKED register_t __cdecl internal_621d9b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6245bb0
        UNREACHABLE_TRAP(0x621d9b0)
    }
}
