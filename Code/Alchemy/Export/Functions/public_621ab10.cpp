#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a0e0);
CLANG_FORWARD_PROC_SYMBOL(public_621ab10);

PROC_DECLARE(0x621ab10, internal_621ab10, public_621ab10);
extern "C" NAKED register_t __cdecl internal_621ab10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_621a0e0
        UNREACHABLE_TRAP(0x621ab10)
    }
}
