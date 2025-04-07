#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c120);
CLANG_FORWARD_PROC_SYMBOL(public_62401a0);

PROC_DECLARE(0x621c120, internal_621c120, public_621c120);
extern "C" NAKED register_t __cdecl internal_621c120()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add edx, 4
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        jmp public_62401a0
        UNREACHABLE_TRAP(0x621c120)
    }
}
