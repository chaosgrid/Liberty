#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214b40);

PROC_DECLARE(0x6215420, internal_6215420, public_6215420);
extern "C" NAKED register_t __cdecl internal_6215420()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214b40
        UNREACHABLE_TRAP(0x6215420)
    }
}
