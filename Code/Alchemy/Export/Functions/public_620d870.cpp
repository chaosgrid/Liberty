#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e2b0);

PROC_DECLARE(0x620d870, internal_620d870, public_620d870);
extern "C" NAKED register_t __cdecl internal_620d870()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e2b0
        UNREACHABLE_TRAP(0x620d870)
    }
}
