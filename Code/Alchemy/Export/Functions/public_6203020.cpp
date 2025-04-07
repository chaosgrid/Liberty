#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202640);

PROC_DECLARE(0x6203020, internal_6203020, public_6203020);
extern "C" NAKED register_t __cdecl internal_6203020()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202640
        UNREACHABLE_TRAP(0x6203020)
    }
}
