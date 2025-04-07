#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214ce0);

PROC_DECLARE(0x6215440, internal_6215440, public_6215440);
extern "C" NAKED register_t __cdecl internal_6215440()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214ce0
        UNREACHABLE_TRAP(0x6215440)
    }
}
