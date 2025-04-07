#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211fb0);

PROC_DECLARE(0x6211a00, internal_6211a00, public_6211a00);
extern "C" NAKED register_t __cdecl internal_6211a00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6211fb0
        UNREACHABLE_TRAP(0x6211a00)
    }
}
