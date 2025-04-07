#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62321e0);

PROC_DECLARE(0x6231600, internal_6231600, public_6231600);
extern "C" NAKED register_t __cdecl internal_6231600()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_62321e0
        UNREACHABLE_TRAP(0x6231600)
    }
}
