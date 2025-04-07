#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214b60);

PROC_DECLARE(0x6215430, internal_6215430, public_6215430);
extern "C" NAKED register_t __cdecl internal_6215430()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214b60
        UNREACHABLE_TRAP(0x6215430)
    }
}
