#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621da30);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x621da30, internal_621da30, public_621da30);
extern "C" NAKED register_t __cdecl internal_621da30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x621da30)
    }
}
