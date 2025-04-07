#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623de60);

PROC_DECLARE(0x623e620, internal_623e620, public_623e620);
extern "C" NAKED register_t __cdecl internal_623e620()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623de60
        UNREACHABLE_TRAP(0x623e620)
    }
}
