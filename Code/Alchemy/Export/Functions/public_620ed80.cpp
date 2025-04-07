#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e9e0);

PROC_DECLARE(0x620ed80, internal_620ed80, public_620ed80);
extern "C" NAKED register_t __cdecl internal_620ed80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620e9e0
        UNREACHABLE_TRAP(0x620ed80)
    }
}
