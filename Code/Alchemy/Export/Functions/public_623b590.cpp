#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a900);

PROC_DECLARE(0x623b590, internal_623b590, public_623b590);
extern "C" NAKED register_t __cdecl internal_623b590()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623a900
        UNREACHABLE_TRAP(0x623b590)
    }
}
