#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240650);

PROC_DECLARE(0x6240e70, internal_6240e70, public_6240e70);
extern "C" NAKED register_t __cdecl internal_6240e70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240650
        UNREACHABLE_TRAP(0x6240e70)
    }
}
