#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219cb0);
CLANG_FORWARD_PROC_SYMBOL(public_621a6f0);

PROC_DECLARE(0x621a6f0, internal_621a6f0, public_621a6f0);
extern "C" NAKED register_t __cdecl internal_621a6f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6219cb0
        UNREACHABLE_TRAP(0x621a6f0)
    }
}
