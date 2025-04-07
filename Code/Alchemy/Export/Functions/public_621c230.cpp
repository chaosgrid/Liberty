#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c230);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x621c230, internal_621c230, public_621c230);
extern "C" NAKED register_t __cdecl internal_621c230()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x621c230)
    }
}
