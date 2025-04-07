#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235700);

PROC_DECLARE(0x6235010, internal_6235010, public_6235010);
extern "C" NAKED register_t __cdecl internal_6235010()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235700
        UNREACHABLE_TRAP(0x6235010)
    }
}
