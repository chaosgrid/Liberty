#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235d10);

PROC_DECLARE(0x6235110, internal_6235110, public_6235110);
extern "C" NAKED register_t __cdecl internal_6235110()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235d10
        UNREACHABLE_TRAP(0x6235110)
    }
}
