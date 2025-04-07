#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202680);

PROC_DECLARE(0x6203040, internal_6203040, public_6203040);
extern "C" NAKED register_t __cdecl internal_6203040()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202680
        UNREACHABLE_TRAP(0x6203040)
    }
}
