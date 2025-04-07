#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214b80);

PROC_DECLARE(0x6215450, internal_6215450, public_6215450);
extern "C" NAKED register_t __cdecl internal_6215450()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214b80
        UNREACHABLE_TRAP(0x6215450)
    }
}
