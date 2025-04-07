#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620de10);

PROC_DECLARE(0x620d6d0, internal_620d6d0, public_620d6d0);
extern "C" NAKED register_t __cdecl internal_620d6d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620de10
        UNREACHABLE_TRAP(0x620d6d0)
    }
}
