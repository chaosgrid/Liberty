#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622eb30);

PROC_DECLARE(0x622e260, internal_622e260, public_622e260);
extern "C" NAKED register_t __cdecl internal_622e260()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622eb30
        UNREACHABLE_TRAP(0x622e260)
    }
}
