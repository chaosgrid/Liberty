#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235b70);

PROC_DECLARE(0x6235190, internal_6235190, public_6235190);
extern "C" NAKED register_t __cdecl internal_6235190()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235b70
        UNREACHABLE_TRAP(0x6235190)
    }
}
