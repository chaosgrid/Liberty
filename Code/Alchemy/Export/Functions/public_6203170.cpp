#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202400);

PROC_DECLARE(0x6203170, internal_6203170, public_6203170);
extern "C" NAKED register_t __cdecl internal_6203170()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202400
        UNREACHABLE_TRAP(0x6203170)
    }
}
