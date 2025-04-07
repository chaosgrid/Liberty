#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed30);

PROC_DECLARE(0x622e2e0, internal_622e2e0, public_622e2e0);
extern "C" NAKED register_t __cdecl internal_622e2e0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ed30
        UNREACHABLE_TRAP(0x622e2e0)
    }
}
