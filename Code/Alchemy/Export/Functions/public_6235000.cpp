#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62356e0);

PROC_DECLARE(0x6235000, internal_6235000, public_6235000);
extern "C" NAKED register_t __cdecl internal_6235000()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_62356e0
        UNREACHABLE_TRAP(0x6235000)
    }
}
