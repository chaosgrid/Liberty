#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235cb0);

PROC_DECLARE(0x6235180, internal_6235180, public_6235180);
extern "C" NAKED register_t __cdecl internal_6235180()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235cb0
        UNREACHABLE_TRAP(0x6235180)
    }
}
