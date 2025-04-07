#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf90);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x621bf90, internal_621bf90, public_621bf90);
extern "C" NAKED register_t __cdecl internal_621bf90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x621bf90)
    }
}
