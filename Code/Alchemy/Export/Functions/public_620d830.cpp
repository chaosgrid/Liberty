#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e430);

PROC_DECLARE(0x620d830, internal_620d830, public_620d830);
extern "C" NAKED register_t __cdecl internal_620d830()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e430
        UNREACHABLE_TRAP(0x620d830)
    }
}
