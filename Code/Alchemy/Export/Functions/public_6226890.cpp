#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227240);

PROC_DECLARE(0x6226890, internal_6226890, public_6226890);
extern "C" NAKED register_t __cdecl internal_6226890()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6227240
        UNREACHABLE_TRAP(0x6226890)
    }
}
