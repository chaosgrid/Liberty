#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219540);

PROC_DECLARE(0x6219980, internal_6219980, public_6219980);
extern "C" NAKED register_t __cdecl internal_6219980()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219540
        UNREACHABLE_TRAP(0x6219980)
    }
}
