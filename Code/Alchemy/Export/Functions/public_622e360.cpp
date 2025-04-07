#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee50);

PROC_DECLARE(0x622e360, internal_622e360, public_622e360);
extern "C" NAKED register_t __cdecl internal_622e360()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ee50
        UNREACHABLE_TRAP(0x622e360)
    }
}
