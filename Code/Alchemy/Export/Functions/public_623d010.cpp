#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c150);

PROC_DECLARE(0x623d010, internal_623d010, public_623d010);
extern "C" NAKED register_t __cdecl internal_623d010()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c150
        UNREACHABLE_TRAP(0x623d010)
    }
}
