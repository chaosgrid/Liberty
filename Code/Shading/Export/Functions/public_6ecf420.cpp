#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf210);

PROC_DECLARE(0x6ecf420, internal_6ecf420, public_6ecf420);
extern "C" NAKED register_t __cdecl internal_6ecf420()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6ecf210
        UNREACHABLE_TRAP(0x6ecf420)
    }
}
