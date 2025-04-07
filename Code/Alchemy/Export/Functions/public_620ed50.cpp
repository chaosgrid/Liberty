#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ea10);

PROC_DECLARE(0x620ed50, internal_620ed50, public_620ed50);
extern "C" NAKED register_t __cdecl internal_620ed50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ea10
        UNREACHABLE_TRAP(0x620ed50)
    }
}
