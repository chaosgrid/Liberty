#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214b10);

PROC_DECLARE(0x6215400, internal_6215400, public_6215400);
extern "C" NAKED register_t __cdecl internal_6215400()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214b10
        UNREACHABLE_TRAP(0x6215400)
    }
}
