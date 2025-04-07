#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e600);

PROC_DECLARE(0x622e4e0, internal_622e4e0, public_622e4e0);
extern "C" NAKED register_t __cdecl internal_622e4e0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622e600
        UNREACHABLE_TRAP(0x622e4e0)
    }
}
