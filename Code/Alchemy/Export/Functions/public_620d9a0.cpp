#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc90);

PROC_DECLARE(0x620d9a0, internal_620d9a0, public_620d9a0);
extern "C" NAKED register_t __cdecl internal_620d9a0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dc90
        UNREACHABLE_TRAP(0x620d9a0)
    }
}
