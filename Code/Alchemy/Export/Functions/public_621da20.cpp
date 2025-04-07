#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621da20);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x621da20, internal_621da20, public_621da20);
extern "C" NAKED register_t __cdecl internal_621da20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x621da20)
    }
}
