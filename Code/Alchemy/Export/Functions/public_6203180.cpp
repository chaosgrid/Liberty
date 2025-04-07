#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202410);

PROC_DECLARE(0x6203180, internal_6203180, public_6203180);
extern "C" NAKED register_t __cdecl internal_6203180()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202410
        UNREACHABLE_TRAP(0x6203180)
    }
}
