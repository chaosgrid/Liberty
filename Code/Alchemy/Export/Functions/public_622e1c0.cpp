#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ea00);

PROC_DECLARE(0x622e1c0, internal_622e1c0, public_622e1c0);
extern "C" NAKED register_t __cdecl internal_622e1c0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ea00
        UNREACHABLE_TRAP(0x622e1c0)
    }
}
