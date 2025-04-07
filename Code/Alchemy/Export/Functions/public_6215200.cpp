#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214610);

PROC_DECLARE(0x6215200, internal_6215200, public_6215200);
extern "C" NAKED register_t __cdecl internal_6215200()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214610
        UNREACHABLE_TRAP(0x6215200)
    }
}
