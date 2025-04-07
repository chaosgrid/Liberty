#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232100);

PROC_DECLARE(0x6231590, internal_6231590, public_6231590);
extern "C" NAKED register_t __cdecl internal_6231590()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232100
        UNREACHABLE_TRAP(0x6231590)
    }
}
