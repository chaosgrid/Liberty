#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214b20);

PROC_DECLARE(0x6215410, internal_6215410, public_6215410);
extern "C" NAKED register_t __cdecl internal_6215410()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214b20
        UNREACHABLE_TRAP(0x6215410)
    }
}
