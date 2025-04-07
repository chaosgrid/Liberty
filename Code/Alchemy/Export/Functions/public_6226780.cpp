#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227170);

PROC_DECLARE(0x6226780, internal_6226780, public_6226780);
extern "C" NAKED register_t __cdecl internal_6226780()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6227170
        UNREACHABLE_TRAP(0x6226780)
    }
}
