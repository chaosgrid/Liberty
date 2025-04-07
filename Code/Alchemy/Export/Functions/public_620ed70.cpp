#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e9c0);

PROC_DECLARE(0x620ed70, internal_620ed70, public_620ed70);
extern "C" NAKED register_t __cdecl internal_620ed70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620e9c0
        UNREACHABLE_TRAP(0x620ed70)
    }
}
