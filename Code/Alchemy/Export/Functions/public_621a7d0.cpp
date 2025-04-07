#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_62403f0);

PROC_DECLARE(0x621a7d0, internal_621a7d0, public_621a7d0);
extern "C" NAKED register_t __cdecl internal_621a7d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62403f0
        UNREACHABLE_TRAP(0x621a7d0)
    }
}
