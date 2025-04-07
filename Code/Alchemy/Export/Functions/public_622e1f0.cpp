#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e9d0);

PROC_DECLARE(0x622e1f0, internal_622e1f0, public_622e1f0);
extern "C" NAKED register_t __cdecl internal_622e1f0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622e9d0
        UNREACHABLE_TRAP(0x622e1f0)
    }
}
