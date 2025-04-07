#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622eac0);

PROC_DECLARE(0x622e220, internal_622e220, public_622e220);
extern "C" NAKED register_t __cdecl internal_622e220()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622eac0
        UNREACHABLE_TRAP(0x622e220)
    }
}
