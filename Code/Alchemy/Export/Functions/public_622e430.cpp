#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e770);

PROC_DECLARE(0x622e430, internal_622e430, public_622e430);
extern "C" NAKED register_t __cdecl internal_622e430()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622e770
        UNREACHABLE_TRAP(0x622e430)
    }
}
