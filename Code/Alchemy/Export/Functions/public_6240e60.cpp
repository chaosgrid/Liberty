#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240640);

PROC_DECLARE(0x6240e60, internal_6240e60, public_6240e60);
extern "C" NAKED register_t __cdecl internal_6240e60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240640
        UNREACHABLE_TRAP(0x6240e60)
    }
}
