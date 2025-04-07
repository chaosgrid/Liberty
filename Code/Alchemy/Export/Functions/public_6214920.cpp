#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214920);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x6214920, internal_6214920, public_6214920);
extern "C" NAKED register_t __cdecl internal_6214920()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x6214920)
    }
}
