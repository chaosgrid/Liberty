#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e9a0);

PROC_DECLARE(0x620ed60, internal_620ed60, public_620ed60);
extern "C" NAKED register_t __cdecl internal_620ed60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620e9a0
        UNREACHABLE_TRAP(0x620ed60)
    }
}
