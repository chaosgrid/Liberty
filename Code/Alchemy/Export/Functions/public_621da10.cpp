#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621da10);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x621da10, internal_621da10, public_621da10);
extern "C" NAKED register_t __cdecl internal_621da10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x621da10)
    }
}
