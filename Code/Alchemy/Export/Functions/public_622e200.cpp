#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622eaa0);

PROC_DECLARE(0x622e200, internal_622e200, public_622e200);
extern "C" NAKED register_t __cdecl internal_622e200()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622eaa0
        UNREACHABLE_TRAP(0x622e200)
    }
}
