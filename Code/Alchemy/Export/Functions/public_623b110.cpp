#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b3a0);

PROC_DECLARE(0x623b110, internal_623b110, public_623b110);
extern "C" NAKED register_t __cdecl internal_623b110()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b3a0
        UNREACHABLE_TRAP(0x623b110)
    }
}
