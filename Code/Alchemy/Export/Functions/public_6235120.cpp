#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235d60);

PROC_DECLARE(0x6235120, internal_6235120, public_6235120);
extern "C" NAKED register_t __cdecl internal_6235120()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235d60
        UNREACHABLE_TRAP(0x6235120)
    }
}
